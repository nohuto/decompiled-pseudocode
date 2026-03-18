/*
 * XREFs of ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180068158
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@45@@Z @ 0x1801CA030 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCImageSourceRes.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@45@@Z @ 0x1801CA17C (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCImageSourceReso.c)
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
  *((_DWORD *)this + 18) = 1056964608;
  *((_DWORD *)this + 19) = 1056964608;
  result = this;
  *((_DWORD *)this + 20) = 2;
  *((_DWORD *)this + 21) = 1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 1065353216LL;
  *((_DWORD *)this + 30) = 0;
  *(_QWORD *)((char *)this + 124) = 1065353216LL;
  *((_DWORD *)this + 33) = 0;
  return result;
}
