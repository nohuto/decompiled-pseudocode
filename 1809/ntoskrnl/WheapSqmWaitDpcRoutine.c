/*
 * XREFs of WheapSqmWaitDpcRoutine @ 0x140321C70
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 */

void __fastcall WheapSqmWaitDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem(&WheapSqmWaitWorkQueueItem, DelayedWorkQueue);
}
