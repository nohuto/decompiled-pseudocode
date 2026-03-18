/*
 * XREFs of PopAwayModeUserPresenceDpc @ 0x14013E420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopAwayModeUserPresenceDpc(
        struct _KDPC *Dpc,
        volatile __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _InterlockedExchange(DeferredContext, 0);
}
