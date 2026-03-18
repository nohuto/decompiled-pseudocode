/*
 * XREFs of MiReleaseNonPagedResources @ 0x1400E18C8
 * Callers:
 *     MiDeleteProcessShadow @ 0x1400686D0 (MiDeleteProcessShadow.c)
 *     MiDeleteUltraMapContext @ 0x1400E1824 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013CB2C (MiCreateUltraThreadContextHelper.c)
 *     MiPfnRangeIsZero @ 0x140184634 (MiPfnRangeIsZero.c)
 *     MiUnlinkBadPages @ 0x1402A6F88 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7310 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x1402C6B14 (MiIdealClusterPage.c)
 *     MiActOnPartitionNodePages @ 0x1402D0018 (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x1402D25F8 (MiTransferPartitionPageRun.c)
 *     MiAllocateProcessShadow @ 0x1406D1B0C (MiAllocateProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14085FE84 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x140860364 (MiFreePartitionPageRun.c)
 *     MiHotRemovePartitionPageRun @ 0x140860630 (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 */

void __fastcall MiReleaseNonPagedResources(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), a2);
}
