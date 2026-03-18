/*
 * XREFs of GreDeleteObject @ 0x1C0018180
 * Callers:
 *     DestroyCacheDC @ 0x1C000FFD0 (DestroyCacheDC.c)
 *     DeleteMaybeSpecialRgn @ 0x1C0016E80 (DeleteMaybeSpecialRgn.c)
 *     UserSetDCVisRgn @ 0x1C0049B60 (UserSetDCVisRgn.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0050C44 (-UpdateUserScreen@@YAJXZ.c)
 *     UserValidateCopyRgn @ 0x1C00872B0 (UserValidateCopyRgn.c)
 *     CleanupGDI @ 0x1C00B4220 (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C00B4570 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00B4598 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     DestroyMonitor @ 0x1C00B4610 (DestroyMonitor.c)
 *     bInitBRUSHOBJ @ 0x1C0263128 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteBrush @ 0x1C000DDC0 (bDeleteBrush.c)
 *     bDeleteSurface @ 0x1C0015C30 (bDeleteSurface.c)
 *     bDeleteRegion @ 0x1C00185B0 (bDeleteRegion.c)
 *     bDeletePalette @ 0x1C00699E0 (bDeletePalette.c)
 */

__int64 __fastcall GreDeleteObject(struct HOBJ__ *a1, __int64 a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  int v9; // eax
  unsigned int v10; // ecx

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v3 = (((unsigned int)a1 >> 16) & 0x1F) - 1;
  if ( !v3 )
    return 0LL;
  v4 = v3 - 3;
  if ( !v4 )
    return bDeleteRegion((HRGN)a1);
  v5 = v4 - 1;
  if ( !v5 )
    return bDeleteSurface((__int64)a1, a2);
  v6 = v5 - 3;
  if ( !v6 )
    return bDeletePalette((HPALETTE)a1);
  v7 = v6 - 2;
  if ( v7 )
  {
    if ( v7 != 6 )
      return 0LL;
    return bDeleteBrush(a1, 0);
  }
  else
  {
    v9 = IsbDeleteFontSupported();
    v10 = 0;
    if ( v9 >= 0 )
      return (unsigned int)bDeleteFont(a1, 0LL);
    return v10;
  }
}
