/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1400EF2A0
 * Callers:
 *     PopGenerateMdl @ 0x14015FA20 (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x14015FAF0 (PopGenerateScratchMdl.c)
 *     BgpFwAllocateMemory @ 0x140178CE0 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x14019CA48 (PpmHeteroInitializeHgsSupport.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140320438 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ResFwGetContext @ 0x14098E080 (ResFwGetContext.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400EF300 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

PMDL __stdcall MmAllocatePagesForMdlEx(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  return (PMDL)MmAllocatePartitionNodePagesForMdlEx(
                 LowAddress.LowPart,
                 HighAddress.LowPart,
                 SkipBytes.LowPart,
                 TotalBytes,
                 CacheType,
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL),
                 Flags,
                 0LL);
}
