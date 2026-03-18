/*
 * XREFs of EngCreateDeviceSurface @ 0x1C0086B00
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00869E0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00FC080 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0086BD4 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

HSURF __stdcall EngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (iFormatCompat & 0xFFFF7FFF) == 0 || (iFormatCompat & 0xFFFF7FFF) > 6 )
    iFormatCompat = iFormatCompat & 0x8000 | 1;
  return (HSURF)hbmCreateDriverSurface(1u, dhsurf, sizl, 0, iFormatCompat, 0, (void *)0xDEADBEEFLL);
}
