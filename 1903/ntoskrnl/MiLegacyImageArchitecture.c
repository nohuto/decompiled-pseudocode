/*
 * XREFs of MiLegacyImageArchitecture @ 0x1400E2E08
 * Callers:
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 *     MiVerifyImageHeader @ 0x14068C9A4 (MiVerifyImageHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
