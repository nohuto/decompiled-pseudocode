/*
 * XREFs of ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800C6D48
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801F1688 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801F17DC (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@.c)
 * Callees:
 *     <none>
 */

CSurfaceBrush *__fastcall CSurfaceBrush::CSurfaceBrush(CSurfaceBrush *this, struct CComposition *a2)
{
  CSurfaceBrush *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CSurfaceBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 20) = 1056964608;
  *((_DWORD *)this + 21) = 1056964608;
  result = this;
  *((_DWORD *)this + 22) = 2;
  *((_DWORD *)this + 23) = 1;
  *((_QWORD *)this + 14) = 1065353216LL;
  *((_DWORD *)this + 30) = 0;
  *(_QWORD *)((char *)this + 124) = 1065353216LL;
  *((_DWORD *)this + 33) = 0;
  return result;
}
