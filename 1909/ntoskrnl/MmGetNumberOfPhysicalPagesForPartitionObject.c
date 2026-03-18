/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1406F1D4C
 * Callers:
 *     CcInitializePartition @ 0x1401909A4 (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x140A040E4 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * **a1) + 7888LL);
}
