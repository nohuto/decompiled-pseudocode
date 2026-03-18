/*
 * XREFs of ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C01F732C
 * Callers:
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F7668 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 */

HSURF __fastcall CreateScreenBitmap(__int64 a1, __int64 a2, int a3)
{
  if ( a3 == 1 )
    return (HSURF)GreCreateBitmap(a1, a2, 1LL, 1LL, 0LL);
  else
    return GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), a1, a2, 0, 0LL, 0LL);
}
