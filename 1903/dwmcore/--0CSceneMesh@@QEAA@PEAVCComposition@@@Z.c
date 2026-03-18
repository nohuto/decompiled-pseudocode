/*
 * XREFs of ??0CSceneMesh@@QEAA@PEAVCComposition@@@Z @ 0x1801F65C4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017C308 (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

CSceneMesh *__fastcall CSceneMesh::CSceneMesh(CSceneMesh *this, struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSceneMesh::`vftable'{for `CSceneMeshGeneratedT<CSceneMesh,CSceneObject>'};
  *((_QWORD *)this + 18) = &CSceneMesh::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 19) = 0LL;
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 128LL),
    (CSceneMesh *)((char *)this + 144));
  return this;
}
