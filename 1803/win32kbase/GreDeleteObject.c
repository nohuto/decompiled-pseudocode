/*
 * XREFs of GreDeleteObject @ 0x1C001E0C0
 * Callers:
 *     DeleteMaybeSpecialRgn @ 0x1C001CC80 (DeleteMaybeSpecialRgn.c)
 *     UserSetDCVisRgn @ 0x1C00317C0 (UserSetDCVisRgn.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0053D74 (-UpdateUserScreen@@YAJXZ.c)
 *     DestroyCacheDC @ 0x1C0062BA0 (DestroyCacheDC.c)
 *     UserValidateCopyRgn @ 0x1C0064270 (UserValidateCopyRgn.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00A8D54 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00A8EC0 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 *     DestroyMonitor @ 0x1C00BBE90 (DestroyMonitor.c)
 *     bInitBRUSHOBJ @ 0x1C01F35BC (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteRegion @ 0x1C001E150 (bDeleteRegion.c)
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
 *     bDeletePalette @ 0x1C0040B60 (bDeletePalette.c)
 *     bDeleteSurface @ 0x1C0063570 (bDeleteSurface.c)
 */

__int64 __fastcall GreDeleteObject(HBRUSH a1)
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
    return bDeletePalette((HPALETTE)a1);
  v6 = v5 - 2;
  if ( v6 )
  {
    if ( v6 != 6 )
      return 0LL;
    return bDeleteBrush(a1);
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
