/*
 * XREFs of IoQueueWorkItemEx @ 0x140080170
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x140080200 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x140080604 (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  ULONG_PTR v4; // rax

  v4 = IopQueueWorkItemProlog(IoWorkItem, WorkerRoutine, Context);
  ExQueueWorkItemFromIo(v4);
}
