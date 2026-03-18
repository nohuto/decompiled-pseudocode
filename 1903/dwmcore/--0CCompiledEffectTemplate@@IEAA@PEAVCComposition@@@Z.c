/*
 * XREFs of ??0CCompiledEffectTemplate@@IEAA@PEAVCComposition@@@Z @ 0x1800CB5E4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CCompiledEffectTemplate *__fastcall CCompiledEffectTemplate::CCompiledEffectTemplate(
        CCompiledEffectTemplate *this,
        struct CComposition *a2)
{
  CCompiledEffectTemplate *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CCompiledEffectTemplate::`vftable';
  result = this;
  *((_QWORD *)this + 9) = 0LL;
  return result;
}
