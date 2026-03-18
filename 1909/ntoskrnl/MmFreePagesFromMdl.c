/*
 * XREFs of MmFreePagesFromMdl @ 0x1400DD350
 * Callers:
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 *     sub_1401B8D10 @ 0x1401B8D10 (sub_1401B8D10.c)
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x140888E30 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x140889010 (MmFreeNonCachedMemory.c)
 *     VmpCreateFaultLargePage @ 0x1408ED414 (VmpCreateFaultLargePage.c)
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
