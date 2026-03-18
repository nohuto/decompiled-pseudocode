/*
 * XREFs of PsReferencePartitionSafe @ 0x1400A0358
 * Callers:
 *     MmQueryMemoryListInformation @ 0x140005F90 (MmQueryMemoryListInformation.c)
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009FE80 (MiQueueLargeFreeZeroRebuild.c)
 *     MiPartitionObjectToPartition @ 0x1400EFBB4 (MiPartitionObjectToPartition.c)
 *     MiWorkingSetManager @ 0x1400F1CC8 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x1400F23A0 (MiScanPagefiles.c)
 *     PsGetNextPartition @ 0x1400F9644 (PsGetNextPartition.c)
 *     MiCheckZeroFreeRebalance @ 0x140109FB0 (MiCheckZeroFreeRebalance.c)
 *     MiWakeLargePageRebuild @ 0x140169DAC (MiWakeLargePageRebuild.c)
 *     MiObtainFreePages @ 0x1402C86F4 (MiObtainFreePages.c)
 *     MiReferencePagePartition @ 0x1402C9D44 (MiReferencePagePartition.c)
 *     MiCreateImageOrDataSection @ 0x1405D6AD0 (MiCreateImageOrDataSection.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     PsReferencePartitionByHandle @ 0x14066CC84 (PsReferencePartitionByHandle.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     MiContractWsSwapPageFile @ 0x1406A4FE0 (MiContractWsSwapPageFile.c)
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
