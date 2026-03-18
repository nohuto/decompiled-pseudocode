/*
 * XREFs of ??0CSceneMeshRendererComponent@@QEAA@PEAVCComposition@@@Z @ 0x1801F7104
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

CSceneMeshRendererComponent *__fastcall CSceneMeshRendererComponent::CSceneMeshRendererComponent(
        CSceneMeshRendererComponent *this,
        struct CComposition *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSceneComponent::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *((_QWORD *)this + 7) = v3;
  *(_QWORD *)this = &CSceneMeshRendererComponent::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *((_QWORD *)this + 11) = v4;
  return this;
}
