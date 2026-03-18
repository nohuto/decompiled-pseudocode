/*
 * XREFs of DpiFdoStopMiracastSession @ 0x1C01585A0
 * Callers:
 *     DpiFdoHandleSystemPower @ 0x1C0158078 (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleDevicePower @ 0x1C01586C0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A1110 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C004C270 (DpiMiracastAddRefMiracastDeviceContext.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF90 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1E0 (DpiMiracastStopMiracastSessionSync.c)
 */

void __fastcall DpiFdoStopMiracastSession(__int64 a1, char a2, union _LARGE_INTEGER *a3, unsigned int a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 )
  {
    if ( *(_DWORD *)(v4 + 20) == 3 )
    {
      v10 = *(_QWORD *)(v4 + 2728);
      if ( !v10 )
        return;
      v4 = *(_QWORD *)(v10 + 64);
    }
    else if ( *(_DWORD *)(v4 + 20) != 2 )
    {
      return;
    }
    AcquireMiniportListMutex();
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 484) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
    v9 = *(_QWORD *)(v4 + 3232);
    if ( v9 && *(_DWORD *)(v4 + 3992) != 1 && *(_DWORD *)(v4 + 284) == 1 )
    {
      DpiMiracastAddRefMiracastDeviceContext(v9, (unsigned int)DpiFdoStopMiracastSession);
      v5 = *(char **)(v4 + 3232);
    }
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
    _InterlockedExchange64(&qword_1C00A2788, 0LL);
    KeReleaseMutex(Mutex, 0);
    if ( v5 )
    {
      DpiMiracastStopMiracastSessionSync(v5, a2, a3, 0LL, a4, 0);
      DpiMiracastReleaseMiracastDeviceContext((int *)v5, (__int64)DpiFdoStopMiracastSession, v11);
    }
  }
}
