/*
 * XREFs of PsDereferencePartition @ 0x140090CC0
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140010F40 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiRebuildLargeZeroPage @ 0x1400904D0 (MiRebuildLargeZeroPage.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D1D0 (MiQueueLargeFreeZeroRebuild.c)
 *     MmQueryMemoryListInformation @ 0x1400A89D0 (MmQueryMemoryListInformation.c)
 *     CcInitializeCacheMapEx @ 0x1400AC050 (CcInitializeCacheMapEx.c)
 *     PsGetNextPartition @ 0x14011FFE8 (PsGetNextPartition.c)
 *     MiUnlinkBadPages @ 0x1402A7088 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7410 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402AA30C (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402AA4B8 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x1402B3294 (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8A70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRebalanceZeroFreeLists @ 0x1402C0E70 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x1402C2E4C (MmAllocateSecureKernelPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402CB6E0 (MiContractWsSwapPageFileWorker.c)
 *     MiRebuildLargePages @ 0x1402CE650 (MiRebuildLargePages.c)
 *     PsQuitNextPartition @ 0x1402EBDAC (PsQuitNextPartition.c)
 *     MiCreateSection @ 0x1405DDAC0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1405DDDB0 (MiInitializeCreateSectionPacket.c)
 *     NtAllocateVirtualMemory @ 0x1405ECE60 (NtAllocateVirtualMemory.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14060751C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     NtManagePartition @ 0x140608170 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x140675CF0 (MiAllocateVirtualMemoryCommon.c)
 *     MmGetPageFileInformation @ 0x1406CB1A4 (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1406DADA4 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x14075B680 (MmGetPhysicalMemoryRangesEx.c)
 *     PspAllocatePartition @ 0x14075CA48 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081CF80 (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x140853430 (MiScanPagefileSpace.c)
 *     PspSetJobMemoryPartition @ 0x14088A380 (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14088D100 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x14088D2B0 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14088D430 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
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
