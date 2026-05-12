/*
 * XREFs of RaidDeferredQueueDpcRoutine @ 0x1C0011790
 * Callers:
 *     <none>
 * Callees:
 *     RaidProcessDeferredItemsWorker @ 0x1C00116D8 (RaidProcessDeferredItemsWorker.c)
 */

void __fastcall RaidDeferredQueueDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  RaidProcessDeferredItemsWorker(SystemArgument1, DeferredContext, 0);
}
