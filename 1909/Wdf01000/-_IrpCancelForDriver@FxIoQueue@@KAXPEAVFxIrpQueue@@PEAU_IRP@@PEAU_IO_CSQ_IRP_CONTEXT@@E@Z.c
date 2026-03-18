/*
 * XREFs of ?_IrpCancelForDriver@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C00134A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0013544 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxIoQueue::_IrpCancelForDriver(
        FxIrpQueue *IrpQueue,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *CsqContext,
        unsigned __int8 Irql)
{
  FxRequest *v4; // rsi
  FxIoQueue *p_Blink; // rbx
  signed __int32 RefCount; // r8d
  _LIST_ENTRY *Flink; // rcx

  v4 = (FxRequest *)&CsqContext[-5];
  HIBYTE(CsqContext[3].Csq) = 1;
  p_Blink = (FxIoQueue *)&IrpQueue[-6].m_Queue.Blink;
  RefCount = _InterlockedIncrement((volatile signed __int32 *)&IrpQueue[-6].m_LockObject + 1);
  if ( SLOBYTE(IrpQueue[-6].m_RequestCount) < 0 )
    Flink = IrpQueue[-7].m_Queue.Flink;
  else
    Flink = 0LL;
  if ( Flink )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)Flink,
      Irp,
      4677,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
      TagAddRef,
      RefCount);
  FxNonPagedObject::Unlock(p_Blink, Irql, RefCount);
  FxIoQueue::CancelForDriver(p_Blink, v4);
  p_Blink->Release(p_Blink, Irp, 4688, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
}
