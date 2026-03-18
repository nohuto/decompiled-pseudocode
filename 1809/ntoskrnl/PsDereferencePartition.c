/*
 * XREFs of PsDereferencePartition @ 0x140090CC0
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140010F40 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiRebuildLargeZeroPage @ 0x1400904D0 (MiRebuildLargeZeroPage.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D1D0 (MiQueueLargeFreeZeroRebuild.c)
 *     MmQueryMemoryListInformation @ 0x1400A89B0 (MmQueryMemoryListInformation.c)
 *     CcInitializeCacheMapEx @ 0x1400AC030 (CcInitializeCacheMapEx.c)
 *     PsGetNextPartition @ 0x14011FFC8 (PsGetNextPartition.c)
 *     MiUnlinkBadPages @ 0x1402A6F88 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7310 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402AA20C (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402AA3B8 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x1402B3194 (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8970 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRebalanceZeroFreeLists @ 0x1402C0D70 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x1402C2D4C (MmAllocateSecureKernelPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402CB5E0 (MiContractWsSwapPageFileWorker.c)
 *     MiRebuildLargePages @ 0x1402CE550 (MiRebuildLargePages.c)
 *     PsQuitNextPartition @ 0x1402EBCAC (PsQuitNextPartition.c)
 *     MiCreateSection @ 0x1405DDAC0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1405DDDB0 (MiInitializeCreateSectionPacket.c)
 *     NtAllocateVirtualMemory @ 0x1405ECE60 (NtAllocateVirtualMemory.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14060751C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     NtManagePartition @ 0x140608170 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x140675D10 (MiAllocateVirtualMemoryCommon.c)
 *     MmGetPageFileInformation @ 0x1406CB1C4 (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1406DADC4 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x14075B6A0 (MmGetPhysicalMemoryRangesEx.c)
 *     PspAllocatePartition @ 0x14075CA68 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081CFA0 (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x140853450 (MiScanPagefileSpace.c)
 *     PspSetJobMemoryPartition @ 0x14088A3A0 (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14088D120 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x14088D2D0 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14088D450 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
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
