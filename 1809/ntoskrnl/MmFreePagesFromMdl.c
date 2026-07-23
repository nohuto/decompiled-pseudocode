/*
 * XREFs of MmFreePagesFromMdl @ 0x1401374D0
 * Callers:
 *     sub_1401AD8B0 @ 0x1401AD8B0 (sub_1401AD8B0.c)
 *     PopFreeHiberContext @ 0x1406E1240 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x14084EEA0 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x14084F080 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x14094F218 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList, 0);
}
