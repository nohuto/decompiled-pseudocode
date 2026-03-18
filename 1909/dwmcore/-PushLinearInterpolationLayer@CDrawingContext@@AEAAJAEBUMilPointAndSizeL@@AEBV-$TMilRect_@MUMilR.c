/*
 * XREFs of ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016F2BC
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180038EDC (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x18016ABB0 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18017D328 (-Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@AEBV-$TMilRect_@M.c)
 */

__int64 __fastcall CDrawingContext::PushLinearInterpolationLayer(CDrawingContext *this, __int64 a2, __int64 a3)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  CLinearInterpolationLayer *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v4 = CLinearInterpolationLayer::Create(*((_QWORD *)this + 44), a2, a3, &v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x147Du, 0LL);
  }
  else
  {
    v7 = CDrawingContext::PushLayer(this, 0LL, v10, 1, 0);
    v6 = v7;
    if ( v7 >= 0 )
      return v6;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1485u, 0LL);
  }
  if ( v10 )
    CLinearInterpolationLayer::`scalar deleting destructor'(v10, 1);
  return v6;
}
