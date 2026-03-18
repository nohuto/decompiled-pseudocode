/*
 * XREFs of MiReleaseNonPagedResources @ 0x1400AD49C
 * Callers:
 *     MiDeleteProcessShadow @ 0x1400AD220 (MiDeleteProcessShadow.c)
 *     MiDeleteUltraMapContext @ 0x1400F5884 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x140123794 (MiCreateUltraThreadContextHelper.c)
 *     MiPfnRangeIsZero @ 0x14018618C (MiPfnRangeIsZero.c)
 *     MiUnlinkBadPages @ 0x1402BE854 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEDE0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x1402EB500 (MiTransferPartitionPageRun.c)
 *     MiAllocateProcessShadow @ 0x14068D5F8 (MiAllocateProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089C1B0 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x14089C784 (MiFreePartitionPageRun.c)
 *     MiHotRemovePartitionPageRun @ 0x14089CB38 (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReleaseNonPagedResources(__int64 a1, unsigned __int64 a2)
{
  MiReturnCommit(a1, a2);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), a2);
}
