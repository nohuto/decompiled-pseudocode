/*
 * XREFs of MmAllocateContiguousMemorySpecifyCacheNode @ 0x1401936A0
 * Callers:
 *     MmAllocateContiguousMemorySpecifyCache @ 0x140193670 (MmAllocateContiguousMemorySpecifyCache.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1400E6500 (MmAllocateContiguousNodeMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemorySpecifyCacheNode(
        SIZE_T NumberOfBytes,
        PHYSICAL_ADDRESS LowestAcceptableAddress,
        PHYSICAL_ADDRESS HighestAcceptableAddress,
        PHYSICAL_ADDRESS BoundaryAddressMultiple,
        MEMORY_CACHING_TYPE CacheType,
        NODE_REQUIREMENT PreferredNode)
{
  unsigned int v6; // r10d

  if ( CacheType == MmCached )
  {
    v6 = 64;
  }
  else
  {
    v6 = 516;
    if ( CacheType == MmWriteCombined )
      v6 = 1028;
  }
  return (PVOID)MmAllocateContiguousNodeMemory(
                  NumberOfBytes,
                  LowestAcceptableAddress.QuadPart,
                  HighestAcceptableAddress.QuadPart,
                  BoundaryAddressMultiple.QuadPart,
                  v6,
                  PreferredNode);
}
