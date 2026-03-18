/*
 * XREFs of ??1CSceneMaterial@@MEAA@XZ @ 0x1801F6AA0
 * Callers:
 *     ??1?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ @ 0x18019C748 (--1-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAA@XZ.c)
 *     ??_GCSceneMaterial@@MEAAPEAXI@Z @ 0x1801F6B20 (--_GCSceneMaterial@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017ADD0 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x1801F6F80 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@@.c)
 */

void __fastcall CSceneMaterial::~CSceneMaterial(CSceneMaterial *this)
{
  struct ISceneNotificationListener *v1; // rdx
  __int64 v3; // rcx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CSceneMaterial *)((char *)this + 56);
  *(_QWORD *)this = &CSceneMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)v1 = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  CSceneResourceManager::UnregisterSceneListener(*(CSceneResourceManager **)(v3 + 128), v1);
  std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::erase(
    (char *)this + 64,
    &v4,
    **((_QWORD **)this + 8),
    *((_QWORD *)this + 8));
  std::_Deallocate<16,0>(*((void **)this + 8), 0x30uLL);
  CResource::~CResource(this);
}
