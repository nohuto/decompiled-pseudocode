/*
 * XREFs of GreDeleteObject @ 0x1C0016C60
 * Callers:
 *     DeleteMaybeSpecialRgn @ 0x1C00150E0 (DeleteMaybeSpecialRgn.c)
 *     DestroyCacheDC @ 0x1C0064E90 (DestroyCacheDC.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0065220 (-UpdateUserScreen@@YAJXZ.c)
 *     UserSetDCVisRgn @ 0x1C007B360 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x1C008B690 (UserValidateCopyRgn.c)
 *     CleanupGDI @ 0x1C00B6D00 (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00B7050 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00B7078 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     DestroyMonitor @ 0x1C00B70F0 (DestroyMonitor.c)
 *     bInitBRUSHOBJ @ 0x1C0268CF8 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteRegion @ 0x1C0016D00 (bDeleteRegion.c)
 *     bDeleteBrush @ 0x1C0052910 (bDeleteBrush.c)
 *     bDeleteSurface @ 0x1C0054290 (bDeleteSurface.c)
 *     bDeletePalette @ 0x1C0058600 (bDeletePalette.c)
 */

__int64 __fastcall GreDeleteObject(HPALETTE a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  int v8; // eax
  unsigned int v9; // ecx

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (((unsigned int)a1 >> 16) & 0x1F) - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 3;
  if ( !v3 )
    return bDeleteRegion((HRGN)a1);
  v4 = v3 - 1;
  if ( !v4 )
    return bDeleteSurface(a1);
  v5 = v4 - 3;
  if ( !v5 )
    return bDeletePalette(a1);
  v6 = v5 - 2;
  if ( v6 )
  {
    if ( v6 != 6 )
      return 0LL;
    return bDeleteBrush((HBRUSH)a1);
  }
  else
  {
    v8 = IsbDeleteFontSupported();
    v9 = 0;
    if ( v8 >= 0 )
      return (unsigned int)bDeleteFont(a1, 0LL);
    return v9;
  }
}
