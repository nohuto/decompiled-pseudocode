/*
 * XREFs of MiLockVadShared @ 0x140053940
 * Callers:
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BE140 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x14072B6B0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x14088E7A4 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x14088EAC0 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x140891BE0 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x140892958 (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408992E0 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockVadShared(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1769) |= 0x40u;
  return result;
}
