/*
 * XREFs of MiVadDeleted @ 0x140075550
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DE340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPrepareVadDelete @ 0x1405E02B8 (MiPrepareVadDelete.c)
 *     MiReturnPageTablePageCommitment @ 0x1405ED380 (MiReturnPageTablePageCommitment.c)
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     MiMarkSharedImageCfgBits @ 0x1405F11D0 (MiMarkSharedImageCfgBits.c)
 *     MmCleanProcessAddressSpace @ 0x1405F2BC8 (MmCleanProcessAddressSpace.c)
 *     MiPopulateCfgBitMap @ 0x1405F7560 (MiPopulateCfgBitMap.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405F9BBC (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x140605B60 (MiLockVadRange.c)
 *     MiCleanVad @ 0x140618088 (MiCleanVad.c)
 *     NtAreMappedFilesTheSame @ 0x140705F40 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x140856590 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x140856864 (MiHotPatchProcess.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x140859224 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x140859F20 (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14085D9CC (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 29) & 1;
}
