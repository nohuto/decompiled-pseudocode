/*
 * XREFs of GreDeleteObject @ 0x1C001CBF0
 * Callers:
 *     UserSetDCVisRgn @ 0x1C00298B0 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x1C003A790 (UserValidateCopyRgn.c)
 *     CleanupGDI @ 0x1C00423AC (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0042700 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0042728 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64 (-UpdateUserScreen@@YAJXZ.c)
 *     DestroyCacheDC @ 0x1C0045330 (DestroyCacheDC.c)
 *     DeleteMaybeSpecialRgn @ 0x1C0045460 (DeleteMaybeSpecialRgn.c)
 *     DestroyMonitor @ 0x1C0063C60 (DestroyMonitor.c)
 *     bInitBRUSHOBJ @ 0x1C021AC18 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteRegion @ 0x1C001CC90 (bDeleteRegion.c)
 *     bDeleteSurface @ 0x1C0044990 (bDeleteSurface.c)
 *     bDeletePalette @ 0x1C00713D0 (bDeletePalette.c)
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 */

__int64 __fastcall GreDeleteObject(HRGN a1)
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
    return bDeleteRegion(a1);
  v4 = v3 - 1;
  if ( !v4 )
    return bDeleteSurface(a1);
  v5 = v4 - 3;
  if ( !v5 )
    return bDeletePalette(a1, 0LL, 0LL);
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
