/*
 * XREFs of ?UpdateSwapChains@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BB470
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801BB240 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800167B0 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::UpdateSwapChains(__int64 a1, CDrawingContext *a2)
{
  signed int updated; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx

  updated = CDrawListBitmap::UpdateSwapChainRealization((__int64 *)(a1 + 56), a2);
  v6 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, updated, 0x17Du, 0LL);
  }
  else
  {
    v7 = CDrawListBitmap::UpdateSwapChainRealization((__int64 *)(a1 + 136), a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x17Eu, 0LL);
  }
  return v6;
}
