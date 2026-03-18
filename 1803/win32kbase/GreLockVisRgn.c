/*
 * XREFs of GreLockVisRgn @ 0x1C00333D0
 * Callers:
 *     NtUserGetDC @ 0x1C0030850 (NtUserGetDC.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0031AA0 (GreLockVisRgnSharedOrExclusive.c)
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
 *     McTemplateK0pqz @ 0x1C00DA608 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

__int64 __fastcall GreLockVisRgn(__int64 a1, int a2, int a3)
{
  int v3; // ecx
  __int64 result; // rax
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx

  v3 = (int)ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    result = ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = McTemplateK0pz(
                 v3,
                 (unsigned int)&LockAcquireShared,
                 a3,
                 (_DWORD)ghsemDynamicModeChange,
                 (__int64)L"ghsemDynamicModeChange");
  }
  v5 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion();
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = McTemplateK0pqz(v3, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  }
  v6 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion();
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz(v3, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  }
  return result;
}
