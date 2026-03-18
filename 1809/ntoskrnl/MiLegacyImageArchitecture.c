/*
 * XREFs of MiLegacyImageArchitecture @ 0x1400DA40C
 * Callers:
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x14064FEE4 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
