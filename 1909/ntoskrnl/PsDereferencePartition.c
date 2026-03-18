/*
 * XREFs of PsDereferencePartition @ 0x1400C5468
 * Callers:
 *     MmQueryMemoryListInformation @ 0x140006020 (MmQueryMemoryListInformation.c)
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1400C4F60 (MiQueueLargeFreeZeroRebuild.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400DCA10 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiRebuildLargeZeroPage @ 0x1400F7840 (MiRebuildLargeZeroPage.c)
 *     PsGetNextPartition @ 0x1401231DC (PsGetNextPartition.c)
 *     MiRebuildLargePages @ 0x140169760 (MiRebuildLargePages.c)
 *     MiUnlinkBadPages @ 0x1402BE5B4 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEB40 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402C2AAC (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402C2C58 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x1402C8454 (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEB70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmGetNodeFastLargePageCounts @ 0x1402D1C90 (MmGetNodeFastLargePageCounts.c)
 *     MiRebalanceZeroFreeLists @ 0x1402DA520 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x1402DCE20 (MmAllocateSecureKernelPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402E59A0 (MiContractWsSwapPageFileWorker.c)
 *     PsQuitNextPartition @ 0x1403093DC (PsQuitNextPartition.c)
 *     MiCreateSection @ 0x1405D7770 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1405D7990 (MiInitializeCreateSectionPacket.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1406443CC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     NtManagePartition @ 0x140651090 (NtManagePartition.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     MmGetPageFileInformation @ 0x140673FCC (MmGetPageFileInformation.c)
 *     MiAllocateVirtualMemoryCommon @ 0x14067CE50 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x14067D000 (NtAllocateVirtualMemory.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1407462B4 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140784BB0 (MmGetPhysicalMemoryRangesEx.c)
 *     PspAllocatePartition @ 0x140785400 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140856728 (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x14088C940 (MiScanPagefileSpace.c)
 *     PspSetJobMemoryPartition @ 0x1408C7BB0 (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x1408CAF70 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x1408CB120 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x1408CB2A0 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
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
