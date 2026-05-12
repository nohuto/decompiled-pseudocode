/*
 * XREFs of RaSqmTimerDpc @ 0x1C003C880
 * Callers:
 *     <none>
 * Callees:
 *     RaSqmLogStatistics @ 0x1C003C7C0 (RaSqmLogStatistics.c)
 */

void __fastcall RaSqmTimerDpc(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  RaSqmLogStatistics();
}
