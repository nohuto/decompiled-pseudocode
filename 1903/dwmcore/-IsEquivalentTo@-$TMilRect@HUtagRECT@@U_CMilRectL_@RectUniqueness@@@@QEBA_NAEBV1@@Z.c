/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180044490
 * Callers:
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18004438C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMi.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800197B8 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180079B34 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEquivalentTo(_DWORD *a1, _DWORD *a2)
{
  char v2; // dl
  char IsEmpty; // al
  __int64 v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // rdx
  char IsInfinite; // al
  _DWORD *v9; // r8
  char v10; // al
  char v11; // dl
  char v12; // al

  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] )
    return 1;
  IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a1, a2, a2, a1);
  LOBYTE(v7) = 0;
  if ( IsEmpty )
  {
    v10 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v5, v7, v5, v6);
    if ( v10 != v11 )
      return 1;
  }
  IsInfinite = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(v6);
  if ( IsInfinite != v2 )
  {
    v12 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(v9);
    if ( v12 != v2 )
      return 1;
  }
  return v2;
}
