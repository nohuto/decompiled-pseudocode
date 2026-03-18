/*
 * XREFs of CmpFreezeThawDpcRoutine @ 0x14027FCD0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 */

void __fastcall CmpFreezeThawDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange(&CmpFreezeThawPending, 1, 0) )
    ExQueueWorkItem(&CmpFreezeThawWorkItem, DelayedWorkQueue);
}
