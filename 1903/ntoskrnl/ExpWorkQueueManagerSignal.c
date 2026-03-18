/*
 * XREFs of ExpWorkQueueManagerSignal @ 0x14033C548
 * Callers:
 *     ExpPartitionCreatePool @ 0x14077A904 (ExpPartitionCreatePool.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall ExpWorkQueueManagerSignal(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
}
