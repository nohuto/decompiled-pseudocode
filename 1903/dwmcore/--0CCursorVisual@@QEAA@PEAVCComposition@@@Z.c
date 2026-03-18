/*
 * XREFs of ??0CCursorVisual@@QEAA@PEAVCComposition@@@Z @ 0x180214094
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18008A7C0 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CCursorVisual *__fastcall CCursorVisual::CCursorVisual(CCursorVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *((_BYTE *)this + 94) |= 1u;
  *(_QWORD *)this = &CCursorVisual::`vftable';
  return this;
}
