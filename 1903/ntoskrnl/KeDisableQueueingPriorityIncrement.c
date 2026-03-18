/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x1400E4064
 * Callers:
 *     NtCreateWorkerFactory @ 0x14068D8D0 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
