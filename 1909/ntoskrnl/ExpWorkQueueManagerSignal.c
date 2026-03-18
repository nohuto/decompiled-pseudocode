/*
 * XREFs of ExpWorkQueueManagerSignal @ 0x14033BFA8
 * Callers:
 *     ExpPartitionCreatePool @ 0x1407730EC (ExpPartitionCreatePool.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall ExpWorkQueueManagerSignal(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
}
