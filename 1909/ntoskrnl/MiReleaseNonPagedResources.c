/*
 * XREFs of MiReleaseNonPagedResources @ 0x14008EDAC
 * Callers:
 *     MiDeleteProcessShadow @ 0x14008EB30 (MiDeleteProcessShadow.c)
 *     MiCreateUltraThreadContextHelper @ 0x1400F8DA8 (MiCreateUltraThreadContextHelper.c)
 *     MiDeleteUltraMapContext @ 0x1400F9324 (MiDeleteUltraMapContext.c)
 *     MiPfnRangeIsZero @ 0x14018673C (MiPfnRangeIsZero.c)
 *     MiUnlinkBadPages @ 0x1402BE5B4 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEB40 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiActOnPartitionNodePages @ 0x1402E8CAC (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x1402EB260 (MiTransferPartitionPageRun.c)
 *     MiAllocateProcessShadow @ 0x14064495C (MiAllocateProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089B9D0 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x14089BFA4 (MiFreePartitionPageRun.c)
 *     MiHotRemovePartitionPageRun @ 0x14089C358 (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 */

ULONG_PTR *__fastcall MiReleaseNonPagedResources(__int64 a1, unsigned __int64 a2)
{
  ULONG_PTR *result; // rax

  MiReturnCommit(a1, a2);
  result = &MiSystemPartition;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    return (ULONG_PTR *)MiReturnResidentAvailable(a2);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), a2);
  return result;
}
