/*
 * XREFs of ??0CEffectGroup@@IEAA@PEAVCComposition@@@Z @ 0x1800CAB0C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CEffectGroup *__fastcall CEffectGroup::CEffectGroup(CEffectGroup *this, struct CComposition *a2)
{
  CEffectGroup *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CEffectGroup::`vftable';
  result = this;
  *((_DWORD *)this + 18) = 1065353216;
  return result;
}
