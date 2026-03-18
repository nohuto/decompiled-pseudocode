/*
 * XREFs of ??0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B3E4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019B7C4 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CAffineTransform2DEffect *__fastcall CAffineTransform2DEffect::CAffineTransform2DEffect(
        CAffineTransform2DEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CAffineTransform2DEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *(_QWORD *)v2 = &CAffineTransform2DEffect::`vftable';
  *(_QWORD *)(v2 + 184) = 1065353216LL;
  *(_QWORD *)(v2 + 196) = 1065353216LL;
  *(_DWORD *)(v2 + 208) = 1065353216;
  result = (CAffineTransform2DEffect *)v2;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_DWORD *)(v2 + 192) = 0;
  *(_DWORD *)(v2 + 204) = 0;
  return result;
}
