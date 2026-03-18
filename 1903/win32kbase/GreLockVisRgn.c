/*
 * XREFs of GreLockVisRgn @ 0x1C0017A40
 * Callers:
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0015210 (GreLockVisRgnSharedOrExclusive.c)
 *     DelayedDestroyCacheDC @ 0x1C001788C (DelayedDestroyCacheDC.c)
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
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
 *     McTemplateK0pqz @ 0x1C0132558 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
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
  v5 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion();
    result = ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = (PVOID)McTemplateK0pqz((_DWORD)v3, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v6 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion();
    result = ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw )
  {
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return (PVOID)McTemplateK0pqz((_DWORD)v3, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  }
  return result;
}
