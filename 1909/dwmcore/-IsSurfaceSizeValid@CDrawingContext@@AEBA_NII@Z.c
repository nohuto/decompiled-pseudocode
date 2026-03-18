/*
 * XREFs of ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800139E8
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000CE08 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800131D8 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ?GetMaxTextureSize@CDrawingContext@@QEBA?AUtagSIZE@@XZ @ 0x180013A24 (-GetMaxTextureSize@CDrawingContext@@QEBA-AUtagSIZE@@XZ.c)
 */

bool __fastcall CDrawingContext::IsSurfaceSizeValid(CDrawingContext *this, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // [rsp+48h] [rbp+20h]
  unsigned int v7; // [rsp+4Ch] [rbp+24h]

  CDrawingContext::GetMaxTextureSize(this);
  return a2 <= v6 && a3 <= v7;
}
