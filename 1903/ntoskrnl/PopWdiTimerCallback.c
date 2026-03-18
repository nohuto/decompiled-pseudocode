/*
 * XREFs of PopWdiTimerCallback @ 0x1402FFB10
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void __fastcall PopWdiTimerCallback(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem(&PopWdiTimerWorker, DelayedWorkQueue);
}
