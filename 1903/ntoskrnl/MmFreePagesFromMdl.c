/*
 * XREFs of MmFreePagesFromMdl @ 0x1400EFC40
 * Callers:
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     sub_1401B85F0 @ 0x1401B85F0 (sub_1401B85F0.c)
 *     PopFreeHiberContext @ 0x1407272AC (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x140889610 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1408897F0 (MmFreeNonCachedMemory.c)
 *     VmpCreateFaultLargePage @ 0x1408EDB04 (VmpCreateFaultLargePage.c)
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1400F0784 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
