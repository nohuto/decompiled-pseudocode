/*
 * XREFs of EngCreateBitmap @ 0x1C008DCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C008DD14 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

HBITMAP __stdcall EngCreateBitmap(SIZEL sizl, LONG lWidth, ULONG iFormat, FLONG fl, PVOID pvBits)
{
  return hbmCreateDriverSurface(0, 0LL, sizl, lWidth, iFormat, fl, pvBits);
}
