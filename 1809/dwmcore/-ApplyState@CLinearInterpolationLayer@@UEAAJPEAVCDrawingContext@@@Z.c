/*
 * XREFs of ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800145A0 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180055A60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::ApplyState(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _DWORD v9[14]; // [rsp+30h] [rbp-38h] BYREF

  v3 = CExternalLayer::ApplyState(this, a2);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x6Bu);
  }
  else
  {
    v9[0] = 3;
    v9[1] = -16777215;
    v9[4] = 1;
    v6 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v9, 0);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x78u);
  }
  return v5;
}
