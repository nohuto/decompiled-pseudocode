/*
 * XREFs of MiReleaseNonPagedResources @ 0x1400E1968
 * Callers:
 *     MiDeleteProcessShadow @ 0x1400686C0 (MiDeleteProcessShadow.c)
 *     MiDeleteUltraMapContext @ 0x1400E18C4 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013CC4C (MiCreateUltraThreadContextHelper.c)
 *     MiPfnRangeIsZero @ 0x140184794 (MiPfnRangeIsZero.c)
 *     MiUnlinkBadPages @ 0x1402A7278 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7600 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 *     MiActOnPartitionNodePages @ 0x1402D0308 (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x1402D28E8 (MiTransferPartitionPageRun.c)
 *     MiAllocateProcessShadow @ 0x1406D2D8C (MiAllocateProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408610C4 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x1408615A4 (MiFreePartitionPageRun.c)
 *     MiHotRemovePartitionPageRun @ 0x140861870 (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 */

void __fastcall MiReleaseNonPagedResources(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), a2);
}
