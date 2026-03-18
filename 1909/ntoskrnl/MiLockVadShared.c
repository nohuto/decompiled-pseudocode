/*
 * XREFs of MiLockVadShared @ 0x1400539E0
 * Callers:
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BDBF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x14072D550 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x14088DFC4 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x14088E2E0 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x140891400 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x140892178 (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140898B00 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockVadShared(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1769) |= 0x40u;
  return result;
}
