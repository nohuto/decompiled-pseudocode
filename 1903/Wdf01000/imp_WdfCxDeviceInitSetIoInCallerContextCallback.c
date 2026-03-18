/*
 * XREFs of imp_WdfCxDeviceInitSetIoInCallerContextCallback @ 0x1C004CAC0
 * Callers:
 *     <none>
 * Callees:
 *     FxValiateCx @ 0x1C004C5D8 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCxDeviceInitSetIoInCallerContextCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        void (__fastcall *EvtIoInCallerContext)(WDFDEVICE__ *, WDFREQUEST__ *))
{
  _FX_DRIVER_GLOBALS *DriverName; // rcx
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rsi
  void *retaddr; // [rsp+28h] [rbp+0h]

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(DriverName, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( (int)FxValiateCx(ClientDriverGlobals, DriverName) >= 0 )
  {
    if ( !EvtIoInCallerContext )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    CxDeviceInit->IoInCallerContextCallback = EvtIoInCallerContext;
  }
}
