/*
 * XREFs of ??0CCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019CFD8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019D084 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CCompositeEffect *__fastcall CCompositeEffect::CCompositeEffect(CCompositeEffect *this, struct CComposition *a2)
{
  CCompositeEffect *v2; // rcx

  CFilterEffect::CFilterEffect(this, a2);
  *((_DWORD *)v2 + 44) = 0;
  *(_QWORD *)v2 = &CCompositeEffect::`vftable';
  return v2;
}
