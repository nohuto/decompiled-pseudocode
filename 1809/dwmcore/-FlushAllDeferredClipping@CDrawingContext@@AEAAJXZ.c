/*
 * XREFs of ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18002F658
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002ED2C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRec.c)
 * Callees:
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18002F69C (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushAllDeferredClipping(CDrawingContext *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edi

  v2 = CDrawingContext::FlushDeferredD2DLayers(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x16F2u);
  }
  else if ( *((_BYTE *)this + 6346) )
  {
    *(_WORD *)((char *)this + 6345) = 1;
  }
  return v4;
}
