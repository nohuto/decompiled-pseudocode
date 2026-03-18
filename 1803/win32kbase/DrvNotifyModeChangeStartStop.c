/*
 * XREFs of DrvNotifyModeChangeStartStop @ 0x1C004E4C8
 * Callers:
 *     ApplyPathsModality @ 0x1C004E238 (ApplyPathsModality.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0031CD0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0031ED0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     hdevEnumerate @ 0x1C004E820 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C004E9C0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C004EA00 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C005BCF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall DrvNotifyModeChangeStartStop(char a1)
{
  __int64 i; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  for ( i = 0LL; ; i = v4 )
  {
    v3 = hdevEnumerate(i);
    v4 = v3;
    if ( !v3 )
      break;
    v7 = v3;
    v5 = *(_DWORD *)(v3 + 40);
    if ( (v5 & 1) != 0 && (v5 & 0x400) == 0 && (v5 & 0x20000) == 0 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v7) )
      {
        GreLockDisplayDevice(v4);
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v7,
          (struct _SURFOBJ *)((*(_QWORD *)(v4 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v4 + 2544) != 0LL)),
          0LL,
          a1 != 0 ? 30 : 18);
        GreUnlockDisplayDevice(v4);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion();
  }
  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion();
  }
  return result;
}
