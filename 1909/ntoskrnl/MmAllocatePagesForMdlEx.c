/*
 * XREFs of MmAllocatePagesForMdlEx @ 0x1400DC9B0
 * Callers:
 *     PopGenerateMdl @ 0x1401600C0 (PopGenerateMdl.c)
 *     PopGenerateScratchMdl @ 0x140160190 (PopGenerateScratchMdl.c)
 *     BgpFwAllocateMemory @ 0x1401793D0 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x14019D1C8 (PpmHeteroInitializeHgsSupport.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14031FE88 (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ResFwGetContext @ 0x14098E080 (ResFwGetContext.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1400DCA10 (MmAllocatePartitionNodePagesForMdlEx.c)
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
