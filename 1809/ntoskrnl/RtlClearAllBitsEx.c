/*
 * XREFs of RtlClearAllBitsEx @ 0x140110310
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x140578B0C (IopLiveDumpEstimateMemoryPages.c)
 *     MiCreateVadEventBitmap @ 0x140696188 (MiCreateVadEventBitmap.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14081F700 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1408208F8 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     MiCreateAweInfoBitMap @ 0x14084F8C4 (MiCreateAweInfoBitMap.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
