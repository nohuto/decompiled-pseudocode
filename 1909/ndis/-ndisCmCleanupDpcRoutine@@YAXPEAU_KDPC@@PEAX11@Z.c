/*
 * XREFs of ?ndisCmCleanupDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00ABBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisCmCleanupDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange(&ndisCmWorkItemQueued, 1, 0) )
    ExQueueWorkItem(&ndisCmCleanupWorkItem, CustomPriorityWorkQueue|BackgroundWorkQueue|0x8);
}
