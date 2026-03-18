/*
 * XREFs of FxAllocateDriverGlobals @ 0x1C0058F7C
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C0043B7C (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     memset @ 0x1C001C1C0 (memset.c)
 *     ?SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z @ 0x1C0058E50 (-SetVerifierState@_FX_DRIVER_GLOBALS@@QEAAXE@Z.c)
 *     AllocAndInitializeTelemetryContext @ 0x1C0061D88 (AllocAndInitializeTelemetryContext.c)
 */

_WDF_DRIVER_GLOBALS *__fastcall FxAllocateDriverGlobals()
{
  _WDF_DRIVER_GLOBALS *result; // rax
  _WDF_DRIVER_GLOBALS *v1; // rdi
  KIRQL v2; // al
  _FX_DRIVER_GLOBALS *v3; // rcx
  int v4; // edx

  result = (_WDF_DRIVER_GLOBALS *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x1F0uLL, 0x72447846u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x1F0uLL);
    *(_DWORD *)v1->DriverName = 1;
    KeInitializeEvent((PRKEVENT)&v1->DriverName[8], NotificationEvent, 0);
    v1->DisplaceDriverUnload = 1;
    v2 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v3 = FxDriverGlobals;
    if ( (_FX_DRIVER_GLOBALS **)FxDriverGlobals->Linkage.Blink != &FxDriverGlobals )
      __fastfail(3u);
    v1->Driver = (WDFDRIVER__ *)FxDriverGlobals;
    *(_QWORD *)&v1->DriverFlags = &FxDriverGlobals;
    v3->Linkage.Blink = (_LIST_ENTRY *)v1;
    FxDriverGlobals = (_FX_DRIVER_GLOBALS *)v1;
    KeReleaseSpinLock(&SpinLock, v2);
    v1[1].DriverFlags = -1;
    *(_QWORD *)&v1[1].DriverName[16] = &WPP_GLOBAL_WDF_Control.DeviceExtension;
    v1[1].Driver = (WDFDRIVER__ *)-8LL;
    *(_QWORD *)v1[1].DriverName = 0LL;
    *(_QWORD *)&v1[1].DriverName[8] = 0LL;
    *(_QWORD *)&v1[1].DriverName[24] = 0LL;
    _FX_DRIVER_GLOBALS::SetVerifierState((_FX_DRIVER_GLOBALS *)v1, 0);
    v1[5].DriverName[21] = 0;
    *(_DWORD *)v1[7].DriverName = v4 + 60;
    *(_DWORD *)&v1[7].DriverName[4] = v4 + 60;
    *(_QWORD *)&v1[7].DriverName[8] = 0LL;
    v1[5].DriverName[28] = 0;
    *(_DWORD *)((char *)&v1[6].Driver + 1) = 16777217;
    v1[7].DriverTag = 0;
    BYTE5(v1[6].Driver) = 0;
    v1[6].DriverTag = 0;
    *(_QWORD *)&v1[5].DisplaceDriverUnload = 0LL;
    LOBYTE(v1[6].Driver) = 0;
    if ( Tlgg_TelemetryProviderProv.LevelPlus1 )
      AllocAndInitializeTelemetryContext((_FX_TELEMETRY_CONTEXT **)&v1[7].DriverName[8]);
    return (_WDF_DRIVER_GLOBALS *)((char *)v1 + 432);
  }
  return result;
}
