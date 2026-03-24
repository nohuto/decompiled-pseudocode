/*
 * XREFs of ExAllocatePrivateWorkerPool @ 0x140754920
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3E88 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     ExpPartitionCreatePool @ 0x140754944 (ExpPartitionCreatePool.c)
 */

__int64 __fastcall ExAllocatePrivateWorkerPool(__int64 a1, __int64 a2, __int64 a3)
{
  return ExpPartitionCreatePool(*((_QWORD *)PspSystemPartition + 2), a2, a3, a1);
}
