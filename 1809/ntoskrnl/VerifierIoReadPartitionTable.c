/*
 * XREFs of VerifierIoReadPartitionTable @ 0x140932E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReadPartitionTable()
{
  return ((__int64 (*)(void))pXdvIoReadPartitionTable)();
}
