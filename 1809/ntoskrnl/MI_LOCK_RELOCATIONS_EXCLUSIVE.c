/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1400D955C
 * Callers:
 *     MiRelocateImageAgain @ 0x140650760 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x14085D37C (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
}
