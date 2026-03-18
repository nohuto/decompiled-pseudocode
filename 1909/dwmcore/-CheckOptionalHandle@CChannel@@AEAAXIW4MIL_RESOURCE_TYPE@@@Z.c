/*
 * XREFs of ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180055C9C
 * Callers:
 *     ?VisualSetEffect@CChannel@@UEAAJII@Z @ 0x180052F90 (-VisualSetEffect@CChannel@@UEAAJII@Z.c)
 *     ?EffectGroupUpdate@CChannel@@UEAAJINII@Z @ 0x180053030 (-EffectGroupUpdate@CChannel@@UEAAJINII@Z.c)
 *     ?VisualSetContent@CChannel@@UEAAJII@Z @ 0x1800546C0 (-VisualSetContent@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetTransform@CChannel@@UEAAJII@Z @ 0x180055170 (-VisualSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetClip@CChannel@@UEAAJII@Z @ 0x180055210 (-VisualSetClip@CChannel@@UEAAJII@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x1800CC4B0 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z @ 0x1800D05B0 (-SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z.c)
 *     ?ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@I@Z @ 0x1800D12D0 (-ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43.c)
 *     ?WindowNodeSetSpriteImage@CChannel@@UEAAJII@Z @ 0x1800D1720 (-WindowNodeSetSpriteImage@CChannel@@UEAAJII@Z.c)
 *     ?CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMode@@@Z @ 0x1800D3580 (-CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMo.c)
 *     ?VisualSetInteraction@CChannel@@UEAAJII@Z @ 0x1800D47D0 (-VisualSetInteraction@CChannel@@UEAAJII@Z.c)
 *     ?HwndBitmapUpdateVisual@CChannel@@UEAAJII@Z @ 0x1800D6A00 (-HwndBitmapUpdateVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z @ 0x180156090 (-CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetTransform@CChannel@@UEAAJII@Z @ 0x1801561E0 (-CaptureControllerSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetVisualTree@CChannel@@UEAAJII_N@Z @ 0x180156280 (-CaptureControllerSetVisualTree@CChannel@@UEAAJII_N@Z.c)
 *     ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x1801563E0 (-CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z.c)
 *     ?HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z @ 0x1801569E0 (-HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180156B90 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z @ 0x180156E60 (-MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z.c)
 *     ?MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z @ 0x180157030 (-MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?OverlayRenderTargetSetRoot@CChannel@@UEAAJII@Z @ 0x1801575F0 (-OverlayRenderTargetSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?RenderTargetSetRoot@CChannel@@UEAAJII@Z @ 0x180157960 (-RenderTargetSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?RenderTargetSetFilterList@CChannel@@UEAAJII@Z @ 0x180157A00 (-RenderTargetSetFilterList@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetColorTransform@CChannel@@UEAAJII@Z @ 0x180158250 (-VisualSetColorTransform@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180056EC4 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CChannel::CheckOptionalHandle(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a2 )
  {
    v3 = CHandleTable::VerifyHandleTableEntry(a1 + 16, a2, a3);
    if ( v3 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v3, retaddr, v4);
  }
}
