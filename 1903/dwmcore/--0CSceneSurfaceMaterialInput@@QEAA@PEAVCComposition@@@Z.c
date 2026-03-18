/*
 * XREFs of ??0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z @ 0x1801F9DD4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017C308 (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

CSceneSurfaceMaterialInput *__fastcall CSceneSurfaceMaterialInput::CSceneSurfaceMaterialInput(
        CSceneSurfaceMaterialInput *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSceneSurfaceMaterialInput::`vftable'{for `CSceneMaterialInput'};
  *((_QWORD *)this + 7) = &CSceneSurfaceMaterialInput::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 128LL),
    (CSceneSurfaceMaterialInput *)((char *)this + 56));
  return this;
}
