/*
 * XREFs of ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0014584
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007060 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0011ED0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00795C4 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C00145F4 (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C001465C (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C004B660 (-Complete@FxRequest@@QEAAJJ@Z.c)
 */

__int64 __fastcall FxIoQueue::InsertNewRequestLocked(FxIoQueue *this, FxRequest **Request, unsigned int *PreviousIrql)
{
  unsigned __int8 v5; // bp
  int inserted; // esi
  unsigned __int8 v7; // r8
  FxRequest *v9; // rcx
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = (unsigned __int8)PreviousIrql;
  v5 = (unsigned __int8)PreviousIrql;
  inserted = FxRequest::InsertTailIrpQueue(*Request, &this->m_Queue, PreviousIrql);
  if ( inserted < 0 )
  {
    FxNonPagedObject::Unlock(this, v5, v7);
    v9 = *Request;
    (*Request)->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxRequest::Complete(v9, inserted);
    (*Request)->Release(
      *Request,
      (void *)1886220099,
      2636,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &v11, v10);
  }
  else
  {
    (*Request)->m_IoQueue = this;
    FxIoQueue::CheckTransitionFromEmpty(this);
  }
  *Request = 0LL;
  return (unsigned int)inserted;
}
