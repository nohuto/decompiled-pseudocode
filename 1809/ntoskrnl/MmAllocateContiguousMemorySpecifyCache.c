/*
 * XREFs of MmAllocateContiguousMemorySpecifyCache @ 0x140193670
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x1401936A0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 */

PVOID __stdcall MmAllocateContiguousMemorySpecifyCache(
        SIZE_T NumberOfBytes,
        PHYSICAL_ADDRESS LowestAcceptableAddress,
        PHYSICAL_ADDRESS HighestAcceptableAddress,
        PHYSICAL_ADDRESS BoundaryAddressMultiple,
        MEMORY_CACHING_TYPE CacheType)
{
  return MmAllocateContiguousMemorySpecifyCacheNode(
           NumberOfBytes,
           LowestAcceptableAddress,
           HighestAcceptableAddress,
           BoundaryAddressMultiple,
           CacheType,
           0x80000000);
}
