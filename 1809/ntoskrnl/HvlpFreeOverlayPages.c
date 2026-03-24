/*
 * XREFs of HvlpFreeOverlayPages @ 0x14013FC00
 * Callers:
 *     HvlInitializeProcessor @ 0x140729DB8 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14081782C (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140122FC0 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
