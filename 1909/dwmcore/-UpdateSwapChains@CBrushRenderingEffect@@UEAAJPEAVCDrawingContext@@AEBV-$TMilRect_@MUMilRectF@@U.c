/*
 * XREFs of ?UpdateSwapChains@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180258F40
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015080 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBrushRenderingEffect::UpdateSwapChains(__int64 a1, CDrawingContext *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  unsigned int v6; // esi
  signed int updated; // eax
  __int64 v8; // rcx

  v2 = 0;
  v3 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 84LL);
  if ( v6 )
  {
    while ( 1 )
    {
      updated = CDrawListBitmap::UpdateSwapChainRealization((__int64 *)(a1 + 24 * (v3 + 1LL)), a2);
      v2 = updated;
      if ( updated < 0 )
        break;
      if ( ++v3 >= v6 )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, updated, 0xE3u, 0LL);
  }
  return v2;
}
