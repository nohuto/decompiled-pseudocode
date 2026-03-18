/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x140097BE8
 * Callers:
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140648DF4 (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140898350 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
}
