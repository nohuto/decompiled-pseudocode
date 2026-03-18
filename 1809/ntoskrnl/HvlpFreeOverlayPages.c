/*
 * XREFs of HvlpFreeOverlayPages @ 0x14013FBE0
 * Callers:
 *     HvlInitializeProcessor @ 0x140729DD8 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14081784C (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140122FA0 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
