/*
 * XREFs of ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C00683E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0067A30 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::_RequestCancelled(
        FxIrpQueue *Queue,
        _IRP *Irp,
        _IRP *CsqContext,
        unsigned __int8 CallerIrql)
{
  FxIoTarget *p_m_RequestCount; // rbp
  _IO_CSQ_IRP_CONTEXT *p_Overlay; // rsi
  _IO_CSQ_IRP_CONTEXT *_a1; // rcx
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  p_m_RequestCount = (FxIoTarget *)&Queue[-7].m_RequestCount;
  FxNonPagedObject::Unlock((FxNonPagedObject *)&Queue[-7].m_RequestCount, CallerIrql, (unsigned __int8)CsqContext);
  p_Overlay = (_IO_CSQ_IRP_CONTEXT *)&CsqContext[-1].Overlay;
  _a1 = (_IO_CSQ_IRP_CONTEXT *)((unsigned __int64)&CsqContext[-1].Overlay ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*((_WORD *)&CsqContext[-1].Overlay.AllocationSize + 5) )
    _a1 = 0LL;
  if ( !_a1 )
    _a1 = (_IO_CSQ_IRP_CONTEXT *)&CsqContext[-1].Overlay;
  WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)p_Overlay->Csq, 4u, 0xEu, 0x37u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  CsqContext->MdlAddress = (_MDL *)CsqContext;
  *(_QWORD *)&CsqContext->Type = CsqContext;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  FxNonPagedObject::Lock(p_m_RequestCount, &irql, v9);
  v10 = irql;
  BYTE4(p_Overlay[8].Csq) &= ~2u;
  FxNonPagedObject::Unlock(p_m_RequestCount, v10, v11);
  p_Overlay[6].Irp->IoStatus.Status = -1073741536;
  p_Overlay[6].Irp->IoStatus.Information = 0LL;
  FxIoTarget::RequestCompletionRoutine(p_m_RequestCount, (FxRequestBase *)&CsqContext[-1].Overlay, v12);
}
