/*
 * XREFs of ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x180015038
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180011DF8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180014828 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ?GetMaxTextureSize@CDrawingContext@@QEBA?AUtagSIZE@@XZ @ 0x180015074 (-GetMaxTextureSize@CDrawingContext@@QEBA-AUtagSIZE@@XZ.c)
 */

bool __fastcall CDrawingContext::IsSurfaceSizeValid(CDrawingContext *this, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // [rsp+48h] [rbp+20h]
  unsigned int v7; // [rsp+4Ch] [rbp+24h]

  CDrawingContext::GetMaxTextureSize(this);
  return a2 <= v6 && a3 <= v7;
}
