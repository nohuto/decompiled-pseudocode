/*
 * XREFs of imp_WdfDeviceInitSetPowerPolicyEventCallbacks @ 0x1C0046D30
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetPowerPolicyEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_POWER_POLICY_EVENT_CALLBACKS *PowerPolicyEventCallbacks)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  unsigned int _a1; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( !PowerPolicyEventCallbacks )
    FxVerifierNullBugCheck(v3, retaddr);
  _a1 = PowerPolicyEventCallbacks->Size;
  if ( ((PowerPolicyEventCallbacks->Size - 56) & 0xFFFFFFF7) != 0 )
  {
    WPP_IFR_SF_dd(v3, 2u, 0x12u, 0x13u, WPP_FxDeviceInitApi_cpp_Traceguids, _a1, 64);
LABEL_7:
    FxVerifierDbgBreakPoint(v3);
    return;
  }
  if ( _a1 > 0x38
    && PowerPolicyEventCallbacks->EvtDeviceArmWakeFromSx
    && PowerPolicyEventCallbacks->EvtDeviceArmWakeFromSxWithReason )
  {
    WPP_IFR_SF_(v3, 2u, 0x12u, 0x14u, WPP_FxDeviceInitApi_cpp_Traceguids);
    goto LABEL_7;
  }
  memmove(&DeviceInit->PnpPower.PolicyEventCallbacks, PowerPolicyEventCallbacks, PowerPolicyEventCallbacks->Size);
}
