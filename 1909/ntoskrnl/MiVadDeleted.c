/*
 * XREFs of MiVadDeleted @ 0x1400539D0
 * Callers:
 *     MiPopulateCfgBitMap @ 0x1405ECFEC (MiPopulateCfgBitMap.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MiReturnPageTablePageCommitment @ 0x1406073C0 (MiReturnPageTablePageCommitment.c)
 *     MiMarkSharedImageCfgBits @ 0x140608C18 (MiMarkSharedImageCfgBits.c)
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x14060C580 (MiCleanVad.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406103A0 (MiAllocateFromSubAllocatedRegion.c)
 *     MiPrepareVadDelete @ 0x14067F340 (MiPrepareVadDelete.c)
 *     MiLockVadRange @ 0x140688410 (MiLockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BDBF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x14072D550 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x14088DFC4 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x14088E2E0 (MiHotPatchProcess.c)
 *     MiPerformImageHotPatch @ 0x14088FDF8 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x140891400 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x140892178 (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140893FA8 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140898B00 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
