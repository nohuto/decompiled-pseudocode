/*
 * XREFs of Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00C5F44
 * Callers:
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x1C004B640 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C64F0 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestForwardToParentDeviceIoQueue(
        _FX_DRIVER_GLOBALS *fxDriverGlobals,
        FxRequest *request)
{
  int CanBeCompleted; // esi
  FxIrp *_a1; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 _a2; // rbx
  const void *v8; // rbx

  if ( request->m_IrpAllocation != 2
    || !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(fxDriverGlobals, (unsigned int)request, 0xBu) )
  {
    CanBeCompleted = -1073741808;
    v8 = (const void *)((unsigned __int64)request ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !request->m_ObjectSize )
      v8 = 0LL;
    WPP_IFR_SF_qL(fxDriverGlobals, 2u, 0x10u, 0x48u, WPP_FxRequestApi_cpp_Traceguids, v8, 0xC0000010);
    goto LABEL_14;
  }
  if ( fxDriverGlobals->FxVerifierOn )
    CanBeCompleted = FxRequest::Vf_VerifyRequestCanBeCompleted(request, fxDriverGlobals);
  else
    CanBeCompleted = 0;
  if ( CanBeCompleted >= 0 )
  {
    _a1 = &request->m_Irp;
    if ( request->m_Irp.m_Irp->CurrentLocation <= 1 )
    {
      CanBeCompleted = -1073741808;
      m_ObjectSize = request->m_ObjectSize;
      _a2 = (unsigned __int64)request ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qid(fxDriverGlobals, 2u, 0x10u, 0x49u, WPP_FxRequestApi_cpp_Traceguids, _a1, _a2, -1073741808);
LABEL_14:
      FxVerifierDbgBreakPoint(fxDriverGlobals);
    }
  }
  return (unsigned int)CanBeCompleted;
}
