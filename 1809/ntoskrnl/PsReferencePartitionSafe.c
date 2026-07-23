/*
 * XREFs of PsReferencePartitionSafe @ 0x140090C28
 * Callers:
 *     MiPartitionObjectToPartition @ 0x140011CE4 (MiPartitionObjectToPartition.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D110 (MiQueueLargeFreeZeroRebuild.c)
 *     MmQueryMemoryListInformation @ 0x1400A8910 (MmQueryMemoryListInformation.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x1400F0544 (MiScanPagefiles.c)
 *     MiCheckZeroFreeRebalance @ 0x14010C5C0 (MiCheckZeroFreeRebalance.c)
 *     PsGetNextPartition @ 0x140120058 (PsGetNextPartition.c)
 *     MiObtainFreePages @ 0x1402B3484 (MiObtainFreePages.c)
 *     MiReferencePagePartition @ 0x1402B4844 (MiReferencePagePartition.c)
 *     MiWakeLargePageRebuild @ 0x1402CEB90 (MiWakeLargePageRebuild.c)
 *     MiCreateImageOrDataSection @ 0x1405DF390 (MiCreateImageOrDataSection.c)
 *     PsReferencePartitionByHandle @ 0x1406093B4 (PsReferencePartitionByHandle.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     MiContractWsSwapPageFile @ 0x14066C944 (MiContractWsSwapPageFile.c)
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
