/*
 * XREFs of MiLockVadShared @ 0x140075560
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DE340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140705F40 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x140856590 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x140856864 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x140859224 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x140859F20 (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14085D9CC (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockVadShared(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1753) |= 0x20u;
  return result;
}
