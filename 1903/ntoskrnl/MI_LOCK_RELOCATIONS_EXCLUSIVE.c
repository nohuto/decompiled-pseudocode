/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1400A9390
 * Callers:
 *     MiRelocateImageAgain @ 0x14066F490 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140898B30 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  *(_QWORD *)(a2 + 8) = a1;
}
