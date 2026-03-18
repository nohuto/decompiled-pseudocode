/*
 * XREFs of ??0CHueRotationEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019BA40
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B7C4 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CHueRotationEffect *__fastcall CHueRotationEffect::CHueRotationEffect(
        CHueRotationEffect *this,
        struct CComposition *a2)
{
  CHueRotationEffect *v2; // rcx

  CFilterEffect::CFilterEffect(this, a2);
  *((_DWORD *)v2 + 44) = 0;
  *(_QWORD *)v2 = &CHueRotationEffect::`vftable';
  return v2;
}
