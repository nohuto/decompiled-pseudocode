/*
 * XREFs of MmFreePagesFromMdl @ 0x1401373B0
 * Callers:
 *     sub_1401AD750 @ 0x1401AD750 (sub_1401AD750.c)
 *     PopFreeHiberContext @ 0x1406DFFC0 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x14084DC60 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x14084DE40 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x14094E218 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList, 0);
}
