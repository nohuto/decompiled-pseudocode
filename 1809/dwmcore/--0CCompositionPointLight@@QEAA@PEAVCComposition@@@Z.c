/*
 * XREFs of ??0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z @ 0x180190010
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x1800668E0 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionPointLight *__fastcall CCompositionPointLight::CCompositionPointLight(
        CCompositionPointLight *this,
        struct CComposition *a2)
{
  CCompositionPointLight *v2; // rcx
  CCompositionPointLight *result; // rax

  CCompositionLight::CCompositionLight(this, a2, 0);
  *((_DWORD *)v2 + 51) = 1120403456;
  *((_DWORD *)v2 + 46) = 1065353216;
  *((_DWORD *)v2 + 45) = 1065353216;
  *((_DWORD *)v2 + 44) = 1065353216;
  *((_DWORD *)v2 + 43) = 1065353216;
  *((_DWORD *)v2 + 42) = 1065353216;
  *((_DWORD *)v2 + 54) = 1065353216;
  result = v2;
  *(_QWORD *)v2 = &CCompositionPointLight::`vftable';
  return result;
}
