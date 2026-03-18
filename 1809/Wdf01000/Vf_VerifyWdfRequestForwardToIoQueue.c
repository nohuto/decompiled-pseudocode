/*
 * XREFs of Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00C1E8C
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C0009FD0 (imp_WdfRequestForwardToIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C24BC (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestForwardToIoQueue(_FX_DRIVER_GLOBALS *FxDriverGlobals, FxRequest *request)
{
  FxRequest *v2; // r10
  const void *v3; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r10

  v2 = request;
  v3 = 0LL;
  LOBYTE(request) = 2;
  if ( v2->m_IrpAllocation == 2
    && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)request, 0xBu) )
  {
    if ( FxDriverGlobals->FxVerifierOn != (_BYTE)v3 )
      LODWORD(v3) = FxRequest::Vf_VerifyRequestCanBeCompleted(v2, FxDriverGlobals);
    return (unsigned int)v3;
  }
  else
  {
    m_ObjectSize = v2->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = v3;
    WPP_IFR_SF_qL(
      FxDriverGlobals,
      (unsigned __int8)request,
      0x10u,
      0x47u,
      WPP_FxRequestApi_cpp_Traceguids,
      _a1,
      0xC0000010);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return 3221225488LL;
  }
}
