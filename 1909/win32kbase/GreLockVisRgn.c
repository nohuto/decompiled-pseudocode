/*
 * XREFs of GreLockVisRgn @ 0x1C002BA20
 * Callers:
 *     DestroyCacheDC @ 0x1C000FFD0 (DestroyCacheDC.c)
 *     NtUserGetDC @ 0x1C002A0F0 (NtUserGetDC.c)
 *     DelayedDestroyCacheDC @ 0x1C002B920 (DelayedDestroyCacheDC.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C002C1B0 (GreLockVisRgnSharedOrExclusive.c)
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
 *     McTemplateK0pqz @ 0x1C012FEB8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C012FF70 (McTemplateK0pz.c)
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
