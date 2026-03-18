/*
 * XREFs of ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x180175FE4
 * Callers:
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x18023F840 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x180240B54 (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180244270 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802444CC (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180244960 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180077CD8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4Report.c)
 */

struct IStereoscopicContentManager *__fastcall CComposition::GetStereoscopicContentManager(
        CComposition *this,
        __int64 a2,
        __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsageToService((__int64)this, a2, a3);
  return (struct IStereoscopicContentManager *)*((_QWORD *)this + 15);
}
