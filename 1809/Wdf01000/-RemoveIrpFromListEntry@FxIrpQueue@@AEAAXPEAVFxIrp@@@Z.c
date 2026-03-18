/*
 * XREFs of ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0018F44
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007A90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007F40 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0009B60 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C00161C0 (imp_WdfRequestMarkCancelableEx.c)
 *     ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0018020 (-RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ?InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z @ 0x1C0018720 (-InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0018ED4 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIrpQueue::RemoveIrpFromListEntry(FxIrpQueue *this, FxIrp *Irp)
{
  _LIST_ENTRY *p_ListEntry; // rax
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx

  p_ListEntry = &Irp->m_Irp->Tail.Overlay.ListEntry;
  Flink = p_ListEntry->Flink;
  if ( p_ListEntry->Flink->Blink != p_ListEntry
    || (Blink = Irp->m_Irp->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_ListEntry->Blink = p_ListEntry;
  p_ListEntry->Flink = p_ListEntry;
  --this->m_RequestCount;
}
