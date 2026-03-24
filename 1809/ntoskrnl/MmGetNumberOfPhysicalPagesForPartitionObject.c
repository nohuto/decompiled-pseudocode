/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1406D0C2C
 * Callers:
 *     CcInitializePartition @ 0x14018A5B0 (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x1409B06D8 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14043A748 + 8LL * **a1) + 7120LL);
}
