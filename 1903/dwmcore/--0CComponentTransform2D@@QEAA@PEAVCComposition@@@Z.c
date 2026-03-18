/*
 * XREFs of ??0CComponentTransform2D@@QEAA@PEAVCComposition@@@Z @ 0x1800CB13C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CViewBox@@QEAA@PEAVCComposition@@@Z @ 0x18019DDEC (--0CViewBox@@QEAA@PEAVCComposition@@@Z.c)
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801EFC28 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCNineGridBrush@@@.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801EFE68 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCSurfaceBrush@@@WR.c)
 * Callees:
 *     <none>
 */

CComponentTransform2D *__fastcall CComponentTransform2D::CComponentTransform2D(
        CComponentTransform2D *this,
        struct CComposition *a2)
{
  CComponentTransform2D *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CComponentTransform2D::`vftable';
  result = this;
  *((_DWORD *)this + 44) = (_DWORD)FLOAT_1_0;
  *((_DWORD *)this + 45) = (_DWORD)FLOAT_1_0;
  *((_BYTE *)this + 148) = 0;
  *(_OWORD *)((char *)this + 188) = CComponentTransform2D::sc_defaultTransformMatrix;
  *(_QWORD *)((char *)this + 204) = qword_18033BCC0;
  return result;
}
