/*
 * XREFs of GreUnlockVisRgn @ 0x1C0029B20
 * Callers:
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0027A50 (ReleaseCacheDC.c)
 *     NtUserGetDC @ 0x1C00281A0 (NtUserGetDC.c)
 *     xxxUserProcessCallout @ 0x1C002AEF0 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C002D480 (DestroyCacheDCEntries.c)
 *     xxxEnumDisplayMonitors @ 0x1C0039060 (xxxEnumDisplayMonitors.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C003EA08 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C003EDC0 (GreSuspendDirectDraw.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C003F198 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     UserGetMonitorDC @ 0x1C00451E8 (UserGetMonitorDC.c)
 *     DestroyCacheDC @ 0x1C0045330 (DestroyCacheDC.c)
 *     DestroyMonitorDCs @ 0x1C00489F0 (DestroyMonitorDCs.c)
 *     DelayedDestroyCacheDC @ 0x1C008CA40 (DelayedDestroyCacheDC.c)
 *     InitUserScreen @ 0x1C0098FE4 (InitUserScreen.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C0108360 (McTemplateK0pz.c)
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
