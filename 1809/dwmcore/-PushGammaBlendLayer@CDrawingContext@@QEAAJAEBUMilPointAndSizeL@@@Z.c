/*
 * XREFs of ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x1801662DC
 * Callers:
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x180177BFC (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18002EC08 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x180161920 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MPEAPEAV1@@Z @ 0x18017D6BC (-Create@CGammaBlendLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushGammaBlendLayer(CDrawingContext *this, const struct MilPointAndSizeL *a2)
{
  float v2; // xmm2_4
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  CColorSpaceLayer *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((float *)this + 110);
  v10 = 0LL;
  v4 = CGammaBlendLayer::Create(*((struct IRenderTarget **)this + 44), a2, v2, &v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x154Cu);
  }
  else
  {
    v7 = CDrawingContext::PushLayer(this, 0LL, v10, 1, 0);
    v6 = v7;
    if ( v7 >= 0 )
      return v6;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1554u);
  }
  if ( v10 )
    CColorSpaceLayer::`vector deleting destructor'(v10, 1);
  return v6;
}
