/*
 * XREFs of ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x1801F5AAC
 * Callers:
 *     ??_ECSceneMeshRendererComponent@@MEAAPEAXI@Z @ 0x1801F5B70 (--_ECSceneMeshRendererComponent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@2@0@Z @ 0x1801F63C8 (-erase@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@SceneMaterialInput.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCSceneMeshRendererComponent@@@Z @ 0x1801F70A0 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpec_ea_1801F70A0.c)
 */

void __fastcall CSceneMeshRendererComponent::~CSceneMeshRendererComponent(CSceneMeshRendererComponent *this)
{
  __int64 v2; // rcx
  CSceneMeshRendererComponent *v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSceneMeshRendererComponent::`vftable';
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v3 = this;
    std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::erase(
      v2 + 64,
      &v3);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::erase(
    (char *)this + 88,
    &v3,
    **((_QWORD **)this + 11),
    *((_QWORD *)this + 11));
  std::_Deallocate<16,0>(*((void **)this + 11), 0x28uLL);
  CSceneComponent::~CSceneComponent(this);
}
