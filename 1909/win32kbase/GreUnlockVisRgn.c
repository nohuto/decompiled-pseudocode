/*
 * XREFs of GreUnlockVisRgn @ 0x1C002A8A0
 * Callers:
 *     DestroyCacheDC @ 0x1C000FFD0 (DestroyCacheDC.c)
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C00200C0 (ReleaseCacheDC.c)
 *     NtUserGetDC @ 0x1C002A0F0 (NtUserGetDC.c)
 *     DelayedDestroyCacheDC @ 0x1C002B920 (DelayedDestroyCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C002CAF0 (xxxUserProcessCallout.c)
 *     UserGetMonitorDC @ 0x1C003A380 (UserGetMonitorDC.c)
 *     GreSuspendDirectDraw @ 0x1C003E4F0 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C003FF58 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0040444 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     xxxEnumDisplayMonitors @ 0x1C004C7E0 (xxxEnumDisplayMonitors.c)
 *     InitUserScreen @ 0x1C00625FC (InitUserScreen.c)
 *     DestroyMonitorDCs @ 0x1C0063360 (DestroyMonitorDCs.c)
 *     DestroyCacheDCEntries @ 0x1C007E6B4 (DestroyCacheDCEntries.c)
 *     GreRestoreDCInternal @ 0x1C00BCED0 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C012FF70 (McTemplateK0pz.c)
 */

__int64 __fastcall GreUnlockVisRgn(__int64 a1, __int64 a2, __int64 a3)
{
  PERESOURCE v3; // rcx
  __int64 result; // rax
  PERESOURCE v5; // rcx

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
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
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
