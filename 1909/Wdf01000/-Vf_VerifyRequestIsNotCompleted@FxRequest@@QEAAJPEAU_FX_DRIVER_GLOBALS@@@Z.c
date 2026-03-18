/*
 * XREFs of ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C69C4
 * Callers:
 *     imp_WdfRequestGetParameters @ 0x1C0001BC0 (imp_WdfRequestGetParameters.c)
 *     ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0002270 (-GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C00024C0 (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     imp_WdfRequestSetInformation @ 0x1C0003040 (imp_WdfRequestSetInformation.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0006010 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0006B40 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00092E0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A2F0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     imp_WdfRequestGetFileObject @ 0x1C000A920 (imp_WdfRequestGetFileObject.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0012BA4 (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C00196F4 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     imp_WdfRequestGetRequestorMode @ 0x1C004B870 (imp_WdfRequestGetRequestorMode.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C004F0BC (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C004F3F8 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C00501C0 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?GetInformation@FxRequest@@QEAA_KXZ @ 0x1C005036C (-GetInformation@FxRequest@@QEAA_KXZ.c)
 *     ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00C6154 (-Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C6300 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsNotCompleted(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v3; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx

  if ( this->m_Completed )
  {
    v3 = -1073741595;
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x10u, 0x39u, WPP_FxRequest_cpp_Traceguids, _a1, 0xC00000E5);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else
  {
    return 0;
  }
  return v3;
}
