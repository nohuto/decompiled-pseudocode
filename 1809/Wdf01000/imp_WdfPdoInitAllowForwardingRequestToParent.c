/*
 * XREFs of imp_WdfPdoInitAllowForwardingRequestToParent @ 0x1C0047FA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfPdoInitAllowForwardingRequestToParent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *v3; // rdi
  int _a1; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v3 = DeviceInit->DriverGlobals;
  _a1 = FxVerifierCheckIrqlLevel(DeviceInit->DriverGlobals, 0);
  if ( _a1 >= 0 )
  {
    if ( DeviceInit->InitType == FxDeviceInitTypePdo )
    {
      DeviceInit->Pdo.ForwardRequestToParent = 1;
    }
    else
    {
      WPP_IFR_SF_d(v3, 2u, 0x12u, 0x47u, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(v3);
    }
  }
}
