/*
 * XREFs of MmFreePagesFromMdl @ 0x1401373D0
 * Callers:
 *     sub_1401AD770 @ 0x1401AD770 (sub_1401AD770.c)
 *     PopFreeHiberContext @ 0x1406DFFA0 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x14084DC40 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x14084DE20 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x14094E218 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList, 0);
}
