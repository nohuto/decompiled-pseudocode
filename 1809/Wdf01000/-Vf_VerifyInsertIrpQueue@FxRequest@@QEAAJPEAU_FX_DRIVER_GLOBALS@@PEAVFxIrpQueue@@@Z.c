/*
 * XREFs of ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C22CC
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007F40 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0009B60 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C0013B58 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C001465C (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C00161C0 (imp_WdfRequestMarkCancelableEx.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2990 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyInsertIrpQueue(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIrpQueue *IrpQueue)
{
  unsigned int v4; // ebx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v6; // rcx

  if ( this->m_IrpQueue )
  {
    v4 = -1073741595;
    m_ObjectSize = this->m_ObjectSize;
    v6 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v6 = 0LL;
    WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0x10u, 0x28u, WPP_FxRequest_cpp_Traceguids, IrpQueue, v6, -1073741595);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else if ( FxDriverGlobals->FxVerifierOn )
  {
    return (unsigned int)FxRequest::Vf_VerifyRequestIsNotCompleted(this, FxDriverGlobals);
  }
  else
  {
    return 0;
  }
  return v4;
}
