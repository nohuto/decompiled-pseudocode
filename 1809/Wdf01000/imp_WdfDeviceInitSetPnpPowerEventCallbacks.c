/*
 * XREFs of imp_WdfDeviceInitSetPnpPowerEventCallbacks @ 0x1C0046BC0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PNPPOWER_EVENT_CALLBACKS *PnpPowerEventCallbacks)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  unsigned int _a1; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( !PnpPowerEventCallbacks )
    FxVerifierNullBugCheck(v3, retaddr);
  _a1 = PnpPowerEventCallbacks->Size;
  if ( ((PnpPowerEventCallbacks->Size - 136) & 0xFFFFFFF7) != 0 )
  {
    WPP_IFR_SF_dd(v3, 2u, 0x12u, 0x11u, WPP_FxDeviceInitApi_cpp_Traceguids, _a1, 144);
LABEL_7:
    FxVerifierDbgBreakPoint(v3);
    return;
  }
  if ( _a1 > 0x88
    && PnpPowerEventCallbacks->EvtDeviceUsageNotification
    && PnpPowerEventCallbacks->EvtDeviceUsageNotificationEx )
  {
    WPP_IFR_SF_(v3, 2u, 0x12u, 0x12u, WPP_FxDeviceInitApi_cpp_Traceguids);
    goto LABEL_7;
  }
  memmove(&DeviceInit->PnpPower, PnpPowerEventCallbacks, PnpPowerEventCallbacks->Size);
}
