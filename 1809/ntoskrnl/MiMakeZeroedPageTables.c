/*
 * XREFs of MiMakeZeroedPageTables @ 0x140026644
 * Callers:
 *     MiSplitBitmapPages @ 0x1400265A8 (MiSplitBitmapPages.c)
 *     MiGetPageTablesForLargeMap @ 0x140183724 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSpecialPool @ 0x1402AC45C (MiExpandSpecialPool.c)
 *     MiMapSystemImage @ 0x1406820E4 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x1406838AC (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x140715008 (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x140715720 (MiInitializeDynamicBitmap.c)
 *     MiMapNewPfns @ 0x14084D3A0 (MiMapNewPfns.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x14085BC14 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x140860168 (MiExpandPartitionIds.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 */

__int64 MiMakeZeroedPageTables()
{
  return MiMakeZeroedPageTablesEx();
}
