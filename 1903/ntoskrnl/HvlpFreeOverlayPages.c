/*
 * XREFs of HvlpFreeOverlayPages @ 0x140144500
 * Callers:
 *     HvlInitializeProcessor @ 0x14074DCE0 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14085124C (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140116D70 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
