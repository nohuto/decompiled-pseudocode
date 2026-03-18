/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180048780
 * Callers:
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18004867C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMi.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180018088 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18003A6C8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEquivalentTo(_DWORD *a1, _DWORD *a2)
{
  char v2; // dl
  _DWORD *v4; // r8
  _DWORD *v5; // r9
  char IsInfinite; // al
  _DWORD *v7; // r8
  char IsEmpty; // al
  char v9; // dl
  char v10; // al

  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] )
    return 1;
  if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a1) )
  {
    IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v4);
    if ( IsEmpty != v9 )
      return 1;
  }
  IsInfinite = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(v5);
  if ( IsInfinite != v2 )
  {
    v10 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(v7);
    if ( v10 != v2 )
      return 1;
  }
  return v2;
}
