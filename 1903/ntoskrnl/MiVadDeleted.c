/*
 * XREFs of MiVadDeleted @ 0x140053930
 * Callers:
 *     MiPopulateCfgBitMap @ 0x1405EC81C (MiPopulateCfgBitMap.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MiReturnPageTablePageCommitment @ 0x1406058B0 (MiReturnPageTablePageCommitment.c)
 *     MiMarkSharedImageCfgBits @ 0x140607108 (MiMarkSharedImageCfgBits.c)
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x14060AA70 (MiCleanVad.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14060E890 (MiAllocateFromSubAllocatedRegion.c)
 *     MiPrepareVadDelete @ 0x140670574 (MiPrepareVadDelete.c)
 *     MiLockVadRange @ 0x140694EA0 (MiLockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BE140 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x14072B6B0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x14088E7A4 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x14088EAC0 (MiHotPatchProcess.c)
 *     MiPerformImageHotPatch @ 0x1408905D8 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x140891BE0 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x140892958 (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408992E0 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
