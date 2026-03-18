/*
 * XREFs of ??0CSpriteVisual@@QEAA@PEAVCComposition@@@Z @ 0x18007A164
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800786A0 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::CSpriteVisual(CSpriteVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CSpriteVisual::`vftable';
  return this;
}
