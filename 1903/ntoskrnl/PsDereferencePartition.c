/*
 * XREFs of PsDereferencePartition @ 0x1400A0388
 * Callers:
 *     MmQueryMemoryListInformation @ 0x140005F90 (MmQueryMemoryListInformation.c)
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiRebuildLargeZeroPage @ 0x14009B500 (MiRebuildLargeZeroPage.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009FE80 (MiQueueLargeFreeZeroRebuild.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400EF300 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     PsGetNextPartition @ 0x1400F9644 (PsGetNextPartition.c)
 *     MiRebuildLargePages @ 0x140169CC0 (MiRebuildLargePages.c)
 *     MiUnlinkBadPages @ 0x1402BE854 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEDE0 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402C2D4C (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402C2EF8 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x1402C86F4 (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEE10 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmGetNodeFastLargePageCounts @ 0x1402D1F30 (MmGetNodeFastLargePageCounts.c)
 *     MiRebalanceZeroFreeLists @ 0x1402DA7C0 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x1402DD0C0 (MmAllocateSecureKernelPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402E5C40 (MiContractWsSwapPageFileWorker.c)
 *     PsQuitNextPartition @ 0x14030992C (PsQuitNextPartition.c)
 *     MiCreateSection @ 0x1405D6FB0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1405D71D0 (MiInitializeCreateSectionPacket.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     NtManagePartition @ 0x14066CA40 (NtManagePartition.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     MiAllocateVirtualMemoryCommon @ 0x140677740 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x1406778F0 (NtAllocateVirtualMemory.c)
 *     MmGetPageFileInformation @ 0x1406A4A08 (MmGetPageFileInformation.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406E5C84 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1407443B4 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1407828E0 (MmGetPhysicalMemoryRangesEx.c)
 *     PspAllocatePartition @ 0x1407830A0 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140857028 (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x14088D120 (MiScanPagefileSpace.c)
 *     PspSetJobMemoryPartition @ 0x1408C82D0 (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x1408CB690 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x1408CB840 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x1408CB9C0 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void __fastcall PsDereferencePartition(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = (struct _WORK_QUEUE_ITEM *)(a1 + 64);
    v5->Parameter = (void *)a1;
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (void (__fastcall *)(void *))PspTeardownPartition;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
