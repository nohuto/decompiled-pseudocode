/*
 * XREFs of ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800CEB70
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801F1688 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@.c)
 * Callees:
 *     <none>
 */

CNineGridBrush *__fastcall CNineGridBrush::CNineGridBrush(CNineGridBrush *this, struct CComposition *a2)
{
  CNineGridBrush *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CNineGridBrush::`vftable'{for `CContent'};
  *(_OWORD *)((char *)this + 120) = _xmm;
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_DWORD *)this + 23) = 1065353216;
  *((_DWORD *)this + 25) = 1065353216;
  *((_DWORD *)this + 27) = 1065353216;
  *((_DWORD *)this + 29) = 1065353216;
  result = this;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 17) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  return result;
}
