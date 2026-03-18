/*
 * XREFs of ?UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015010
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015080 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCommonRenderingEffect::UpdateSwapChains(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int updated; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi

  v6 = 0LL;
  while ( 1 )
  {
    updated = CDrawListBitmap::UpdateSwapChainRealization(a1 + 8 * (v6 + 2 * (v6 + 1)), a2, a3);
    v9 = updated;
    if ( updated < 0 )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 2 )
      return v9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, updated, 0x52u, 0LL);
  return v9;
}
