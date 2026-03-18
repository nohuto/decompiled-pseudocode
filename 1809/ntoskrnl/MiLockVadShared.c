/*
 * XREFs of MiLockVadShared @ 0x140075570
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DD340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140704CC0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x140855350 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x140855624 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x140857FE4 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x140858CE0 (MmIsFileMapped.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14085C78C (MiFinishPlaceholderVadReplacement.c)
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
