/*
 * XREFs of MiMakeZeroedPageTables @ 0x1400E8594
 * Callers:
 *     MiSplitBitmapPages @ 0x1400E8500 (MiSplitBitmapPages.c)
 *     MiMapSystemImage @ 0x140711384 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x140712F54 (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x140741918 (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140897FC4 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x14089BDC8 (MiExpandPartitionIds.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1400CA488 (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
