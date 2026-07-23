/*
 * XREFs of PsDereferencePartition @ 0x140090C00
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140010F40 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiRebuildLargeZeroPage @ 0x140090410 (MiRebuildLargeZeroPage.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D110 (MiQueueLargeFreeZeroRebuild.c)
 *     MmQueryMemoryListInformation @ 0x1400A8910 (MmQueryMemoryListInformation.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     PsGetNextPartition @ 0x140120058 (PsGetNextPartition.c)
 *     MiUnlinkBadPages @ 0x1402A7278 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7600 (MmMarkPhysicalMemoryAsBad.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402AA4FC (MmAllocateNonChargedSecurePages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402AA6A8 (MmFreeNonChargedSecurePages.c)
 *     MiObtainFreePages @ 0x1402B3484 (MiObtainFreePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8C60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiRebalanceZeroFreeLists @ 0x1402C1060 (MiRebalanceZeroFreeLists.c)
 *     MmAllocateSecureKernelPages @ 0x1402C303C (MmAllocateSecureKernelPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402CB8D0 (MiContractWsSwapPageFileWorker.c)
 *     MiRebuildLargePages @ 0x1402CE840 (MiRebuildLargePages.c)
 *     PsQuitNextPartition @ 0x1402EBF9C (PsQuitNextPartition.c)
 *     MiCreateSection @ 0x1405DEAC0 (MiCreateSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1405DEDB0 (MiInitializeCreateSectionPacket.c)
 *     NtAllocateVirtualMemory @ 0x1405EDE60 (NtAllocateVirtualMemory.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14060851C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     NtManagePartition @ 0x140609170 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x140676EB0 (MiAllocateVirtualMemoryCommon.c)
 *     MmGetPageFileInformation @ 0x1406CC444 (MmGetPageFileInformation.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x1406DC044 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x14075C870 (MmGetPhysicalMemoryRangesEx.c)
 *     PspAllocatePartition @ 0x14075DC38 (PspAllocatePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081E180 (IopSetFileMemoryPartitionInformation.c)
 *     MiScanPagefileSpace @ 0x140854690 (MiScanPagefileSpace.c)
 *     PspSetJobMemoryPartition @ 0x14088B5E0 (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14088E360 (NtCreatePartition.c)
 *     PspClosePartitionHandle @ 0x14088E510 (PspClosePartitionHandle.c)
 *     PspTeardownPartition @ 0x14088E690 (PspTeardownPartition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
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
