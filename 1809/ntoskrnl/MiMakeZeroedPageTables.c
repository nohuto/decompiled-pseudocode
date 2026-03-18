/*
 * XREFs of MiMakeZeroedPageTables @ 0x140026644
 * Callers:
 *     MiSplitBitmapPages @ 0x1400265A8 (MiSplitBitmapPages.c)
 *     MiGetPageTablesForLargeMap @ 0x140183704 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSpecialPool @ 0x1402AC35C (MiExpandSpecialPool.c)
 *     MiMapSystemImage @ 0x140682104 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x1406838CC (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x140715028 (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x140715740 (MiInitializeDynamicBitmap.c)
 *     MiMapNewPfns @ 0x14084D3C0 (MiMapNewPfns.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x14085BC34 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x140860188 (MiExpandPartitionIds.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 */

__int64 MiMakeZeroedPageTables()
{
  return MiMakeZeroedPageTablesEx();
}
