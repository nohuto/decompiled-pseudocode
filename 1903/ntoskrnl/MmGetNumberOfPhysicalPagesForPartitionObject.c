/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1406F02AC
 * Callers:
 *     CcInitializePartition @ 0x140190334 (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x140A03BC8 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140466188 + 8LL * **a1) + 7888LL);
}
