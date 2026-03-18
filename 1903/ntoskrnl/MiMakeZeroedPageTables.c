/*
 * XREFs of MiMakeZeroedPageTables @ 0x1400AD084
 * Callers:
 *     MiSplitBitmapPages @ 0x1400ACFF0 (MiSplitBitmapPages.c)
 *     MiMapSystemImage @ 0x14070F5A4 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x140711174 (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x14073FA18 (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x1407401E8 (MiInitializeDynamicBitmap.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x1408987A4 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x14089C5A8 (MiExpandPartitionIds.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
