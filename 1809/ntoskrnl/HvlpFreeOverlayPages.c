/*
 * XREFs of HvlpFreeOverlayPages @ 0x14013FD00
 * Callers:
 *     HvlInitializeProcessor @ 0x14072AFA8 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140818A2C (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140123090 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
