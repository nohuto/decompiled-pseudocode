/*
 * XREFs of ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C66BC
 * Callers:
 *     imp_WdfRequestGetParameters @ 0x1C0001BC0 (imp_WdfRequestGetParameters.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C00196F4 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C64F0 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestIsCurrentStackValid(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _IRP *m_Irp; // r8
  unsigned int v4; // ebx
  unsigned __int16 v5; // ax
  const void *_a1; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 _a2; // rcx

  m_Irp = this->m_Irp.m_Irp;
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation <= m_Irp->StackCount )
      return 0;
    v4 = -1073741808;
    m_ObjectSize = this->m_ObjectSize;
    _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0x10u, 0x3Du, WPP_FxRequest_cpp_Traceguids, m_Irp, _a2, -1073741808);
  }
  else
  {
    v4 = -1073741808;
    v5 = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v5 )
      _a1 = 0LL;
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x10u, 0x3Cu, WPP_FxRequest_cpp_Traceguids, _a1, 0xC0000010);
  }
  FxVerifierDbgBreakPoint(FxDriverGlobals);
  return v4;
}
