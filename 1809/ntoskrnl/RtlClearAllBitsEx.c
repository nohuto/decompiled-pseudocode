/*
 * XREFs of RtlClearAllBitsEx @ 0x1401102F0
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x140578B0C (IopLiveDumpEstimateMemoryPages.c)
 *     MiCreateVadEventBitmap @ 0x1406961A8 (MiCreateVadEventBitmap.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14081F720 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x140820918 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     MiCreateAweInfoBitMap @ 0x14084F8E4 (MiCreateAweInfoBitMap.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
