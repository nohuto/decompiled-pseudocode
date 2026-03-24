/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1400D94DC
 * Callers:
 *     MiRelocateImageAgain @ 0x14064F5A0 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14064FEC4 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x14085C11C (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
}
