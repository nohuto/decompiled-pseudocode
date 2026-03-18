/*
 * XREFs of ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000CE60 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x18001C69C (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180046E80 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180049318 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x180049690 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x18004B620 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180053E00 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z @ 0x1800549E8 (-Push@-$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x180054AC8 (-Push@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Push@?$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z @ 0x180054BA8 (-Push@-$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054C84 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180057AD0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180059670 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18005CBF0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D110 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180061D00 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180064700 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180069E10 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E288 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18006E36C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x180071F90 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18007DC60 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180080284 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x180086D08 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180086DD0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800873F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A2200 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BD3E8 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect_ea_1800BD3E8.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800C104C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800C8290 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800C8ED0 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x18017026C (-Push@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CCompos.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801703B4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x180222A20 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x180222B2C (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x180222CD0 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x180223938 (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x180224A60 (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ @ 0x1802536E0 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVectorShape@@@@@Z @ 0x180253AFC (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$C.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x180254BD8 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x180254D0C (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HrMalloc(unsigned __int64 a1, unsigned __int64 a2, void **a3)
{
  unsigned int v3; // ebx
  SIZE_T v5; // rdi
  HANDLE ProcessHeap; // rax
  void *v7; // rax

  v3 = 0;
  if ( a3 && a2 && a1 && a1 < 0xFFFFFFFFFFFFFFFFuLL / a2 )
  {
    v5 = a2 * a1;
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 0, v5);
    *a3 = v7;
    if ( !v7 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
