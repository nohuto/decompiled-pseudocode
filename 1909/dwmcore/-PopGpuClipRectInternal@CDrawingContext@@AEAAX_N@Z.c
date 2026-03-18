/*
 * XREFs of ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18016E9A4
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18003FA3C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800C7050 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18017C3E4 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017CF98 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A7C04 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18003FBC4 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180050F9C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 */

void __fastcall CDrawingContext::PopGpuClipRectInternal(CDrawingContext *this, char a2)
{
  CDrawingContext *v2; // r8
  __int64 v3; // r8
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = this;
  if ( a2 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 112, &v4);
  CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)v2 + 1008));
  *(_BYTE *)(v3 + 6345) = 1;
}
