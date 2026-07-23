/*
 * XREFs of RtlClearAllBitsEx @ 0x1400A9490
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1405A89AC (IopLiveDumpEstimateMemoryPages.c)
 *     MiCopyToCfgBitMap @ 0x1405EC930 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14066E880 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCreateVadEventBitmap @ 0x14066FCC8 (MiCreateVadEventBitmap.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140859728 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14085A994 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     MiCreateAweInfoBitMap @ 0x140896244 (MiCreateAweInfoBitMap.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __cdecl RtlClearAllBitsEx(PRTL_BITMAP_EX BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
