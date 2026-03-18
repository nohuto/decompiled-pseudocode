/*
 * XREFs of ??0CImageLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x18002835C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CImageLegacyMilBrush *__fastcall CImageLegacyMilBrush::CImageLegacyMilBrush(
        CImageLegacyMilBrush *this,
        struct CComposition *a2)
{
  CImageLegacyMilBrush *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CImageLegacyMilBrush::`vftable';
  *((_DWORD *)this + 14) = 1065353216;
  *((_DWORD *)this + 15) = 1065353216;
  *((_DWORD *)this + 16) = 1065353216;
  *(_QWORD *)((char *)this + 68) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_BYTE *)this + 88) = 0;
  return result;
}
