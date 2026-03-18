/*
 * XREFs of ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016E9E0
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180012D38 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18005B6F4 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800C7050 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18016C44C (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017BAE4 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017D6A0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180191538 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FE124 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180050F9C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 */

void __fastcall CDrawingContext::PopRenderOptionsInternal(CDrawingContext *this, char a2)
{
  CDrawingContext *v2; // r8
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]

  v2 = this;
  if ( a2 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 112, &v9);
  v3 = *((_DWORD *)v2 + 244);
  if ( v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    v5 = 28 * v4;
    *((_DWORD *)v2 + 244) = v4;
    v6 = *((_QWORD *)v2 + 124);
    v7 = *(_OWORD *)(v5 + v6);
    v8 = *(_QWORD *)(v5 + v6 + 16);
    LODWORD(v6) = *(_DWORD *)(v5 + v6 + 24);
    v9 = v7;
    v11 = v6;
    v10 = v8;
  }
  *((_BYTE *)v2 + 268) = v11;
  *((_QWORD *)v2 + 31) = v9;
  *((_DWORD *)v2 + 69) = DWORD2(v9);
  *((_DWORD *)v2 + 64) = HIDWORD(v9);
  *(_QWORD *)((char *)v2 + 260) = v10;
}
