/*
 * XREFs of VerifierIoReadPartitionTableEx @ 0x140932E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReadPartitionTableEx()
{
  return ((__int64 (*)(void))pXdvIoReadPartitionTableEx)();
}
