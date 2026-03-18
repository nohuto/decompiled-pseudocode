/*
 * XREFs of GreUnlockVisRgn @ 0x1C0033460
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     NtUserGetDC @ 0x1C0030850 (NtUserGetDC.c)
 *     DelayedDestroyCacheDC @ 0x1C0033300 (DelayedDestroyCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C00340E0 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C0034AD8 (DestroyCacheDCEntries.c)
 *     UserGetMonitorDC @ 0x1C0045330 (UserGetMonitorDC.c)
 *     GreSuspendDirectDraw @ 0x1C004E0C0 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C004E198 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C004E708 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     xxxEnumDisplayMonitors @ 0x1C0057430 (xxxEnumDisplayMonitors.c)
 *     DestroyMonitorDCs @ 0x1C005CDA0 (DestroyMonitorDCs.c)
 *     DestroyCacheDC @ 0x1C0062BA0 (DestroyCacheDC.c)
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 *     InitUserScreen @ 0x1C00A67B0 (InitUserScreen.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

__int64 __fastcall GreUnlockVisRgn(int a1, __int64 a2, int a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = McTemplateK0pz(a1, (unsigned int)&LockRelease, a3, (_DWORD)ghsemDCVisRgn, (__int64)L"ghsemDCVisRgn");
  }
  v3 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    result = PsLeavePriorityRegion();
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = McTemplateK0pz(v3, (unsigned int)&LockRelease, a3, (_DWORD)ghsemGreLock, (__int64)L"ghsemGreLock");
  }
  v5 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    result = PsLeavePriorityRegion();
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = McTemplateK0pz(
                 v5,
                 (unsigned int)&LockRelease,
                 a3,
                 (_DWORD)ghsemDynamicModeChange,
                 (__int64)L"ghsemDynamicModeChange");
  }
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion();
  }
  return result;
}
