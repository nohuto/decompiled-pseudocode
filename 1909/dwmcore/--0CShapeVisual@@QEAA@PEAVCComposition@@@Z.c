/*
 * XREFs of ??0CShapeVisual@@QEAA@PEAVCComposition@@@Z @ 0x18019C39C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800786A0 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CShapeVisual *__fastcall CShapeVisual::CShapeVisual(CShapeVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CShapeVisual::`vftable';
  return this;
}
