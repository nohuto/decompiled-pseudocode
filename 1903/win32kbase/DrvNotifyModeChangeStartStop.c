/*
 * XREFs of DrvNotifyModeChangeStartStop @ 0x1C0043C20
 * Callers:
 *     ApplyPathsModality @ 0x1C0044F44 (ApplyPathsModality.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003DF84 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerate @ 0x1C0041E00 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C00420B0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00420F0 (GreUnlockDisplayDevice.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0045230 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C007A110 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall DrvNotifyModeChangeStartStop(char a1)
{
  int v2; // edx
  __int64 v3; // r8
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *i; // rcx
  struct PDEV *v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // eax
  struct PDEV *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  for ( i = 0LL; ; i = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v6 )
  {
    v5 = hdevEnumerate(i, v2, v3);
    v6 = (__int64)v5;
    if ( !v5 )
      break;
    v9 = v5;
    v8 = *((_DWORD *)v5 + 10);
    if ( (v8 & 1) != 0 && (v8 & 0x400) == 0 && (v8 & 0x20000) == 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v9) )
    {
      GreLockDisplayDevice(v6);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v9,
        (struct _SURFOBJ *)((*(_QWORD *)(v6 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v6 + 2552) != 0LL)),
        0LL,
        a1 != 0 ? 30 : 18);
      GreUnlockDisplayDevice(v6);
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
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
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
