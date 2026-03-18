/*
 * XREFs of ??0CLayerVisual@@QEAA@PEAVCComposition@@@Z @ 0x1800CF5E0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18008A7C0 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CLayerVisual *__fastcall CLayerVisual::CLayerVisual(CLayerVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CLayerVisual::`vftable';
  return this;
}
