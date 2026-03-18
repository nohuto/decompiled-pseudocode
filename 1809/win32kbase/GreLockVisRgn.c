/*
 * XREFs of GreLockVisRgn @ 0x1C0029D60
 * Callers:
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     NtUserGetDC @ 0x1C00281A0 (NtUserGetDC.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C002A080 (GreLockVisRgnSharedOrExclusive.c)
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
 *     McTemplateK0pqz @ 0x1C01082A8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C0108360 (McTemplateK0pz.c)
 */

PVOID __fastcall GreLockVisRgn(__int64 a1, int a2, __int64 a3)
{
  PERESOURCE v3; // rcx
  PVOID result; // rax
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx

  v3 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    result = (PVOID)ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = (PVOID)McTemplateK0pz(v3, &LockAcquireShared, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  v5 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v3);
    result = ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = (PVOID)McTemplateK0pqz((_DWORD)v3, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v6 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v3);
    result = ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw )
  {
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return (PVOID)McTemplateK0pqz((_DWORD)v3, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  }
  return result;
}
