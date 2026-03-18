/*
 * XREFs of ??0CCursorVisual@@QEAA@PEAVCComposition@@@Z @ 0x180212984
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800786A0 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CCursorVisual *__fastcall CCursorVisual::CCursorVisual(CCursorVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *((_QWORD *)this + 73) = 0LL;
  *((_BYTE *)this + 94) |= 1u;
  *(_QWORD *)this = &CCursorVisual::`vftable';
  return this;
}
