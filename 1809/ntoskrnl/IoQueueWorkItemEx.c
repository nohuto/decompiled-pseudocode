/*
 * XREFs of IoQueueWorkItemEx @ 0x1400D1AC0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x1400D16A4 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x1400D1AE8 (IopQueueWorkItemProlog.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  __int64 *v5; // rax

  v5 = (__int64 *)IopQueueWorkItemProlog(IoWorkItem, WorkerRoutine, Context);
  ExQueueWorkItemFromIo(v5, QueueType);
}
