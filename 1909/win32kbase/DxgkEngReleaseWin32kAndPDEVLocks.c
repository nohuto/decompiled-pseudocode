/*
 * XREFs of DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C00404F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     hdevEnumerate @ 0x1C0040070 (hdevEnumerate.c)
 *     GreUnlockDisplayDevice @ 0x1C0040360 (GreUnlockDisplayDevice.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0041AF0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxgkEngReleaseWin32kAndPDEVLocks(__int64 a1, unsigned int a2, __int64 a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *i; // rcx
  struct PDEV *v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  PERESOURCE v11; // rcx
  struct PDEV *v12; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v7 )
  {
    v6 = hdevEnumerate(i, a2, a3);
    v7 = (__int64)v6;
    if ( !v6 )
      break;
    v12 = v6;
    v8 = *((_DWORD *)v6 + 10);
    if ( (v8 & 0x400) == 0 && (v8 & 0x20000) == 0 )
    {
      v9 = *(_QWORD *)(v7 + 2576);
      if ( *(_QWORD *)(v9 + 240) == a1 && *(_DWORD *)(v9 + 256) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v12,
          (struct _SURFOBJ *)((*(_QWORD *)(v7 + 2552) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v7 + 2552) >> 64)),
          0LL,
          2u);
        GreUnlockDisplayDevice(v7);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion();
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
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v11 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  UserSessionSwitchLeaveCrit((__int64)v11, v10);
}
