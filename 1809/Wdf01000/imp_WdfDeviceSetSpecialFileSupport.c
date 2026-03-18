/*
 * XREFs of imp_WdfDeviceSetSpecialFileSupport @ 0x1C004B060
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z @ 0x1C0085930 (-SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z.c)
 */

void __fastcall imp_WdfDeviceSetSpecialFileSupport(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int32 FileType,
        unsigned __int8 Supported)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( FileType - 1 > 3 )
  {
    WPP_IFR_SF_qL(m_Globals, 2u, 0x12u, 0x10u, WPP_FxDeviceApiKm_cpp_Traceguids, Device, FileType);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
    FxPkgPnp::SetSpecialFileSupport(pDevice->m_PkgPnp, (_WDF_SPECIAL_FILE_TYPE)FileType, Supported);
  }
}
