/*
 * XREFs of ??0CSceneMetallicRoughnessMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18019DAD0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CScenePbrMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18019DB54 (--0CScenePbrMaterial@@QEAA@PEAVCComposition@@@Z.c)
 */

CSceneMetallicRoughnessMaterial *__fastcall CSceneMetallicRoughnessMaterial::CSceneMetallicRoughnessMaterial(
        CSceneMetallicRoughnessMaterial *this,
        struct CComposition *a2)
{
  CScenePbrMaterial::CScenePbrMaterial(this, a2);
  *((_DWORD *)this + 34) = 1065353216;
  *((_DWORD *)this + 35) = 1065353216;
  *((_DWORD *)this + 36) = 1065353216;
  *((_DWORD *)this + 37) = 1065353216;
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 39) = 1065353216;
  *(_QWORD *)this = &CSceneMetallicRoughnessMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *((_QWORD *)this + 7) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  return this;
}
