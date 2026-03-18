/*
 * XREFs of MiLegacyImageArchitecture @ 0x14008FEFC
 * Callers:
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiVerifyImageHeader @ 0x1406453D4 (MiVerifyImageHeader.c)
 *     MiCreateImageFileMap @ 0x140645C84 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
