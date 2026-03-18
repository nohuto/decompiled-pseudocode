/*
 * XREFs of ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x18008F850
 * Callers:
 *     ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008D420 (-DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008FAE0 (-GetBounds@CHwndBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureVisualTree(CHwndBitmap *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int VisualTree; // eax
  unsigned int v6; // ecx

  v3 = 0;
  if ( !*((_QWORD *)this + 14) )
  {
    VisualTree = CVisual::GetVisualTree(*((struct CComposition ***)this + 13), (struct CVisualTree **)this + 14, a3, 0);
    v3 = VisualTree;
    if ( VisualTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, VisualTree, 0x179u);
  }
  return v3;
}
