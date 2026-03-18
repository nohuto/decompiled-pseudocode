/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x1400FD9E0
 * Callers:
 *     NtCreateWorkerFactory @ 0x14068A210 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
