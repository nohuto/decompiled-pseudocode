/*
 * XREFs of MiMakeZeroedPageTables @ 0x140026644
 * Callers:
 *     MiSplitBitmapPages @ 0x1400265A8 (MiSplitBitmapPages.c)
 *     MiGetPageTablesForLargeMap @ 0x140183864 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSpecialPool @ 0x1402AC64C (MiExpandSpecialPool.c)
 *     MiMapSystemImage @ 0x1406832A4 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x140684A6C (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x1407162A8 (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 *     MiMapNewPfns @ 0x14084E600 (MiMapNewPfns.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x14085CE74 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x1408613C8 (MiExpandPartitionIds.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 */

__int64 MiMakeZeroedPageTables()
{
  return MiMakeZeroedPageTablesEx();
}
