/*
 * XREFs of EngCreateDeviceBitmap @ 0x1C0131210
 * Callers:
 *     <none>
 * Callees:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C008DD14 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

HBITMAP __stdcall EngCreateDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  return (HBITMAP)hbmCreateDriverSurface(3, dhsurf, sizl, 0, iFormatCompat, 0, (void *)0xDEADBEEFLL);
}
