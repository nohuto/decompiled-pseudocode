/*
 * XREFs of ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCBaseImageProxy@@@Z @ 0x180030BD4
 * Callers:
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x1800304D8 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z @ 0x180030614 (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z.c)
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x180030888 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCResource@@2PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x180030A78 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x1800332F8 (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x18007D9E0 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x18008B85C (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18008FC44 (-CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAVCImageLegacyMilBrushPr.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCResource@@AEBUtagRECT@@@Z @ 0x1800AEE40 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImageLegacyMilBrushProxy::Update(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        int a13,
        __int64 a14)
{
  int v14; // r11d

  if ( a14 )
    v14 = *(_DWORD *)(*(_QWORD *)(a14 + 16) + 24LL);
  else
    v14 = 0;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, unsigned int, _DWORD, _DWORD, int, int, int, int, int, _DWORD, int, int, int))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL) + 1112LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
           *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL),
           a5,
           a3,
           a4,
           a5,
           0,
           0,
           a6,
           a7,
           a8,
           a9,
           a10,
           0,
           a12,
           a13,
           v14);
}
