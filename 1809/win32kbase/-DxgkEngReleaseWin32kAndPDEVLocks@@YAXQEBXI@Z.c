/*
 * XREFs of ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C003E880
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     hdevEnumerate @ 0x1C003F2B0 (hdevEnumerate.c)
 *     GreUnlockDisplayDevice @ 0x1C003F520 (GreUnlockDisplayDevice.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C003F5E0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxgkEngReleaseWin32kAndPDEVLocks(const void *a1, unsigned int a2)
{
  __int64 i; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v6 )
  {
    v5 = hdevEnumerate(i);
    v6 = v5;
    if ( !v5 )
      break;
    v9 = v5;
    v7 = *(_DWORD *)(v5 + 40);
    if ( (v7 & 0x400) == 0 && (v7 & 0x20000) == 0 )
    {
      v8 = *(_QWORD *)(v6 + 2576);
      if ( *(const void **)(v8 + 240) == a1 && *(_DWORD *)(v8 + 256) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v9,
          (struct _SURFOBJ *)((*(_QWORD *)(v6 + 2552) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v6 + 2552) >> 64)),
          0LL,
          2u);
        GreUnlockDisplayDevice(v6);
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
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  UserSessionSwitchLeaveCrit();
}
