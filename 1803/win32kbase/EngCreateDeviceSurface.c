/*
 * XREFs of EngCreateDeviceSurface @ 0x1C0069B90
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00C7DE0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00DBA10 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C0069C68 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

HSURF __stdcall EngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (iFormatCompat & 0xFFFF7FFF) == 0 || (iFormatCompat & 0xFFFF7FFF) > 6 )
    iFormatCompat = iFormatCompat & 0x8000 | 1;
  return (HSURF)hbmCreateDriverSurface(1u, dhsurf, sizl, 0, iFormatCompat, 0, (void *)0xDEADBEEFLL);
}
