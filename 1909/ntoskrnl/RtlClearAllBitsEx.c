/*
 * XREFs of RtlClearAllBitsEx @ 0x1400E85B0
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1405A898C (IopLiveDumpEstimateMemoryPages.c)
 *     MiCopyToCfgBitMap @ 0x1405ED100 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406482E0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCreateVadEventBitmap @ 0x14067F6E4 (MiCreateVadEventBitmap.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140858E28 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14085A094 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     MiCreateAweInfoBitMap @ 0x140895A64 (MiCreateAweInfoBitMap.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __cdecl RtlClearAllBitsEx(PRTL_BITMAP_EX BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
