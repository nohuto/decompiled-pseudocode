/*
 * XREFs of MiVadDeleted @ 0x140075560
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DD340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPrepareVadDelete @ 0x1405DF2B8 (MiPrepareVadDelete.c)
 *     MiReturnPageTablePageCommitment @ 0x1405EC380 (MiReturnPageTablePageCommitment.c)
 *     MiAllocateVirtualMemory @ 0x1405ED650 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MiMarkSharedImageCfgBits @ 0x1405F01D0 (MiMarkSharedImageCfgBits.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 *     MiPopulateCfgBitMap @ 0x1405F6560 (MiPopulateCfgBitMap.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405F8BBC (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x140604B60 (MiLockVadRange.c)
 *     MiCleanVad @ 0x140617088 (MiCleanVad.c)
 *     NtAreMappedFilesTheSame @ 0x140704CC0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x140855350 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x140855624 (MiHotPatchProcess.c)
 *     MiPerformImageHotPatch @ 0x140856CA0 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x140857FE4 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x140858CE0 (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14085C78C (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 29) & 1;
}
