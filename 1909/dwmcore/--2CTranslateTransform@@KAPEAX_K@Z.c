/*
 * XREFs of ??2CTranslateTransform@@KAPEAX_K@Z @ 0x1800D0764
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1801C6830 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801EFF00 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801F0054 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CTranslateTransform::operator new()
{
  LPVOID result; // rax
  __int64 v1; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0xA0uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v1);
  return result;
}
