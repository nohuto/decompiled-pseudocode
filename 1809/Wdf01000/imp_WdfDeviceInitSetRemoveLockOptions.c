/*
 * XREFs of imp_WdfDeviceInitSetRemoveLockOptions @ 0x1C0046EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C00314B0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetRemoveLockOptions(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_REMOVE_LOCK_OPTIONS *RemoveLockOptions)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  unsigned int Flags; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  if ( !RemoveLockOptions )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  if ( RemoveLockOptions->Size != 8 )
  {
    WPP_IFR_SF_qdd(
      (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
      2u,
      6u,
      0x22u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      RemoveLockOptions,
      8,
      RemoveLockOptions->Size);
LABEL_7:
    FxVerifierDbgBreakPoint(DriverName);
    return;
  }
  Flags = RemoveLockOptions->Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    WPP_IFR_SF_qDd(
      (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
      (unsigned __int8)DeviceInit,
      6u,
      0x23u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      RemoveLockOptions,
      Flags,
      1u);
    goto LABEL_7;
  }
  if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
  {
    WPP_IFR_SF_((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, 2u, 6u, 0x24u, WPP_FxDeviceInitApi_cpp_Traceguids);
    goto LABEL_7;
  }
  DeviceInit->RemoveLockOptionFlags = Flags;
}
