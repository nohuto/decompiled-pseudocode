/*
 * XREFs of ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B4B50
 * Callers:
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180215F00 (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800B4C0C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x1800B53A4 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800B53DC (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800B5780 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 */

__int64 __fastcall CHwndBitmap::DrawAsDrawList(
        __int64 a1,
        _DWORD *a2,
        FLOAT *a3,
        __int64 a4,
        __int64 a5,
        CDrawListCache *a6)
{
  unsigned int v6; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  signed int v16; // eax
  __int64 v17; // rcx

  v6 = 0;
  if ( !a2[63] || a2[64] || a2[65] || CDrawingContext::IsIn3DMode((CDrawingContext *)(a2 + 2)) )
  {
    v16 = CContent::DrawAsDrawList((CComposition **)a1, (__int64)a2, a3, a4, a5, a6);
    v6 = v16;
    if ( v16 >= 0 )
      return v6;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x110u, 0LL);
  }
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)(a1 - 16)) )
  {
    v11 = CHwndBitmap::EnsureVisualTree((CHwndBitmap *)(a1 - 16));
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x11Bu, 0LL);
    }
    else
    {
      v13 = CDrawingContext::DrawVisual((CDrawingContext *)a2, *(struct CVisual **)(a1 + 88), *(_BYTE *)(a1 + 104));
      v6 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x120u, 0LL);
    }
  }
  return v6;
}
