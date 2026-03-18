/*
 * XREFs of IopPassiveInterruptDpc @ 0x14029E600
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueue @ 0x1400FD170 (KeInsertQueue.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeInsertQueue(&PassiveInterruptRealtimeWorkQueue, (PLIST_ENTRY)(DeferredContext + 72));
}
