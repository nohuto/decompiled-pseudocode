/*
 * XREFs of HvlpFreeOverlayPages @ 0x140144A40
 * Callers:
 *     HvlInitializeProcessor @ 0x14074E770 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14085094C (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1400F4E90 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
