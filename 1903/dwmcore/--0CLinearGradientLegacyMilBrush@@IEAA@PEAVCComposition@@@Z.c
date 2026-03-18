/*
 * XREFs of ??0CLinearGradientLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x18019D510
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CLinearGradientLegacyMilBrush *__fastcall CLinearGradientLegacyMilBrush::CLinearGradientLegacyMilBrush(
        CLinearGradientLegacyMilBrush *this,
        struct CComposition *a2)
{
  CLinearGradientLegacyMilBrush *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CLinearGradientLegacyMilBrush::`vftable';
  result = this;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  return result;
}
