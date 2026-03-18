/*
 * XREFs of GreUnlockVisRgn @ 0x1C0017990
 * Callers:
 *     DelayedDestroyCacheDC @ 0x1C001788C (DelayedDestroyCacheDC.c)
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C001ED70 (ReleaseCacheDC.c)
 *     NtUserGetDC @ 0x1C0029560 (NtUserGetDC.c)
 *     xxxUserProcessCallout @ 0x1C002DC40 (xxxUserProcessCallout.c)
 *     UserGetMonitorDC @ 0x1C003C430 (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C003E730 (xxxEnumDisplayMonitors.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0041CE8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0043E44 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0043EF0 (GreSuspendDirectDraw.c)
 *     DestroyMonitorDCs @ 0x1C0063900 (DestroyMonitorDCs.c)
 *     DestroyCacheDCEntries @ 0x1C0064DA8 (DestroyCacheDCEntries.c)
 *     DestroyCacheDC @ 0x1C0064E90 (DestroyCacheDC.c)
 *     InitUserScreen @ 0x1C00761B4 (InitUserScreen.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
 */

__int64 __fastcall GreUnlockVisRgn(__int64 a1, __int64 a2, __int64 a3)
{
  PERESOURCE v3; // rcx
  __int64 result; // rax
  HSEMAPHORE v5; // rcx

  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz(a1, &LockRelease, a3, ghsemDCVisRgn, L"ghsemDCVisRgn");
  v3 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    result = PsLeavePriorityRegion();
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz(v3, &LockRelease, a3, ghsemGreLock, L"ghsemGreLock");
  v5 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    result = PsLeavePriorityRegion();
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz(v5, &LockRelease, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion();
  }
  return result;
}
