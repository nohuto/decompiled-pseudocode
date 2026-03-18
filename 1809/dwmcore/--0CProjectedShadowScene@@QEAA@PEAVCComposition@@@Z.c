/*
 * XREFs of ??0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z @ 0x1801AF8EC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CProjectedShadowScene *__fastcall CProjectedShadowScene::CProjectedShadowScene(
        CProjectedShadowScene *this,
        struct CComposition *a2)
{
  CProjectedShadowScene *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 1065353216;
  *(_QWORD *)((char *)this + 100) = 1065353216LL;
  result = this;
  *((_DWORD *)this + 24) = 2139095039;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 1120403456;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}
