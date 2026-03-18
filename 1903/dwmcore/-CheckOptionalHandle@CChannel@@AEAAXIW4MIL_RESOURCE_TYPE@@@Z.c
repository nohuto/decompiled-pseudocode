/*
 * XREFs of ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180040B8C
 * Callers:
 *     ?VisualSetEffect@CChannel@@UEAAJII@Z @ 0x18003E6C0 (-VisualSetEffect@CChannel@@UEAAJII@Z.c)
 *     ?EffectGroupUpdate@CChannel@@UEAAJINII@Z @ 0x18003E760 (-EffectGroupUpdate@CChannel@@UEAAJINII@Z.c)
 *     ?VisualSetContent@CChannel@@UEAAJII@Z @ 0x18003F6E0 (-VisualSetContent@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetTransform@CChannel@@UEAAJII@Z @ 0x180040030 (-VisualSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetClip@CChannel@@UEAAJII@Z @ 0x1800400D0 (-VisualSetClip@CChannel@@UEAAJII@Z.c)
 *     ?SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z @ 0x180043E00 (-SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x180044960 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@I@Z @ 0x1800D0F80 (-ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43.c)
 *     ?WindowNodeSetSpriteImage@CChannel@@UEAAJII@Z @ 0x1800D1280 (-WindowNodeSetSpriteImage@CChannel@@UEAAJII@Z.c)
 *     ?CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMode@@@Z @ 0x1800D31A0 (-CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMo.c)
 *     ?VisualSetInteraction@CChannel@@UEAAJII@Z @ 0x1800D47A0 (-VisualSetInteraction@CChannel@@UEAAJII@Z.c)
 *     ?HwndBitmapUpdateVisual@CChannel@@UEAAJII@Z @ 0x1800D6750 (-HwndBitmapUpdateVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z @ 0x180157770 (-CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetTransform@CChannel@@UEAAJII@Z @ 0x1801578C0 (-CaptureControllerSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetVisualTree@CChannel@@UEAAJII_N@Z @ 0x180157960 (-CaptureControllerSetVisualTree@CChannel@@UEAAJII_N@Z.c)
 *     ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x180157AC0 (-CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z.c)
 *     ?HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z @ 0x1801580C0 (-HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180158270 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z @ 0x180158540 (-MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z.c)
 *     ?MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z @ 0x180158710 (-MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?OverlayRenderTargetSetRoot@CChannel@@UEAAJII@Z @ 0x180158CD0 (-OverlayRenderTargetSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?RenderTargetSetRoot@CChannel@@UEAAJII@Z @ 0x180159040 (-RenderTargetSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?RenderTargetSetFilterList@CChannel@@UEAAJII@Z @ 0x1801590E0 (-RenderTargetSetFilterList@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetColorTransform@CChannel@@UEAAJII@Z @ 0x180159930 (-VisualSetColorTransform@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180041DB4 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
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
