/*
 * XREFs of IopPassiveInterruptDpc @ 0x1402886B0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueue @ 0x1400DCFE0 (KeInsertQueue.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeInsertQueue(&PassiveInterruptRealtimeWorkQueue, (PLIST_ENTRY)(DeferredContext + 72));
}
