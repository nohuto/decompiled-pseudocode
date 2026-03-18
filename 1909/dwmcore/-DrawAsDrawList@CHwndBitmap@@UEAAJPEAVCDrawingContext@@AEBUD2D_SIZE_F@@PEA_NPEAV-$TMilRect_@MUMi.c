/*
 * XREFs of ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180023FC0
 * Callers:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180214810 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18002407C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x180025764 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x18002579C (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180042990 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180096170 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 */

__int64 __fastcall CHwndBitmap::DrawAsDrawList(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int v14; // eax
  unsigned int v15; // ecx

  v4 = 0;
  if ( !a2[63] || a2[64] || a2[65] || CDrawingContext::IsIn3DMode((CDrawingContext *)(a2 + 2)) )
  {
    v14 = CContent::DrawAsDrawList(a1, a2, a3, a4);
    v4 = v14;
    if ( v14 >= 0 )
      return v4;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x110u, 0LL);
  }
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)(a1 - 16)) )
  {
    v9 = CHwndBitmap::EnsureVisualTree((CHwndBitmap *)(a1 - 16));
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x11Bu, 0LL);
    }
    else
    {
      v11 = CDrawingContext::DrawVisual((CDrawingContext *)a2, *(struct CVisual **)(a1 + 88), *(_BYTE *)(a1 + 104));
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x120u, 0LL);
    }
  }
  return v4;
}
