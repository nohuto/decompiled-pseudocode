/*
 * XREFs of PsReferencePartitionSafe @ 0x1400C5438
 * Callers:
 *     MmQueryMemoryListInformation @ 0x140006020 (MmQueryMemoryListInformation.c)
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1400C4F60 (MiQueueLargeFreeZeroRebuild.c)
 *     MiWorkingSetManager @ 0x1400DA208 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x1400DA8E0 (MiScanPagefiles.c)
 *     MiPartitionObjectToPartition @ 0x1400DD2C4 (MiPartitionObjectToPartition.c)
 *     MiCheckZeroFreeRebalance @ 0x140109140 (MiCheckZeroFreeRebalance.c)
 *     PsGetNextPartition @ 0x1401231DC (PsGetNextPartition.c)
 *     MiWakeLargePageRebuild @ 0x14016984C (MiWakeLargePageRebuild.c)
 *     MiObtainFreePages @ 0x1402C8454 (MiObtainFreePages.c)
 *     MiReferencePagePartition @ 0x1402C9AA4 (MiReferencePagePartition.c)
 *     MiCreateImageOrDataSection @ 0x1405D7290 (MiCreateImageOrDataSection.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x1406512D4 (PsReferencePartitionByHandle.c)
 *     MiContractWsSwapPageFile @ 0x140673854 (MiContractWsSwapPageFile.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsReferencePartitionSafe(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned __int64 i; // rdx
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 24));
  v1 = *(_QWORD *)(a1 + 24);
  for ( i = v1 + 1; i > 1; i = v1 + 1 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), i, v1);
    if ( v3 == v1 )
      return 1;
  }
  if ( i != 1 )
    __fastfail(0xEu);
  return 0;
}
