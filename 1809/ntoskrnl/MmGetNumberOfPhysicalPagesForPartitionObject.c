/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1406D1ECC
 * Callers:
 *     CcInitializePartition @ 0x14018A6F0 (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x1409B16D8 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * **a1) + 7120LL);
}
