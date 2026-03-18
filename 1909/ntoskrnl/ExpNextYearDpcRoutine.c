/*
 * XREFs of ExpNextYearDpcRoutine @ 0x1403380B0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 */

void __fastcall ExpNextYearDpcRoutine(
        struct _KDPC *Dpc,
        volatile signed __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedIncrement(DeferredContext) == 1 )
    ExQueueWorkItem(&ExpNextYearWorkItem, DelayedWorkQueue);
}
