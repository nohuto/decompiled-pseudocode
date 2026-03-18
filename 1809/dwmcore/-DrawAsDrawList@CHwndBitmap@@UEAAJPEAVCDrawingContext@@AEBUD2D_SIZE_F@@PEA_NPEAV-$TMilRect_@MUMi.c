/*
 * XREFs of ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008D420
 * Callers:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019A470 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18008DBB0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x18008F850 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x18008F888 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B3200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndBitmap::DrawAsDrawList(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  int v16; // eax
  unsigned int v17; // ecx

  v6 = 0;
  if ( !a2[63] || a2[64] || a2[65] || CDrawingContext::IsIn3DMode((CDrawingContext *)(a2 + 2)) )
  {
    v16 = CContent::DrawAsDrawList(a1, a2, a3, a4, a5, a6);
    v6 = v16;
    if ( v16 >= 0 )
      return v6;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x111u);
  }
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)(a1 - 16)) )
  {
    v11 = CHwndBitmap::EnsureVisualTree((CHwndBitmap *)(a1 - 16));
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x11Cu);
    }
    else
    {
      v13 = CDrawingContext::DrawVisual((CDrawingContext *)a2, *(struct CVisual **)(a1 + 88), *(_BYTE *)(a1 + 104));
      v6 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x121u);
    }
  }
  return v6;
}
