/*
 * XREFs of ??1CSceneComponent@@MEAA@XZ @ 0x18020C708
 * Callers:
 *     ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x1801F5AAC (--1CSceneMeshRendererComponent@@MEAA@XZ.c)
 *     ??_GCSceneComponent@@MEAAPEAXI@Z @ 0x18020C780 (--_GCSceneComponent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@Z @ 0x1800CEEC8 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

void __fastcall CSceneComponent::~CSceneComponent(CSceneComponent *this)
{
  void **v1; // rdi
  __int64 v3; // rbx

  v1 = (void **)((char *)this + 56);
  *(_QWORD *)this = &CSceneComponent::`vftable';
  v3 = *((_QWORD *)this + 7);
  std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Erase(
    (__int64)v1,
    *((void **)*v1 + 1));
  *((_QWORD *)*v1 + 1) = v3;
  *(_QWORD *)*v1 = v3;
  *((_QWORD *)*v1 + 2) = v3;
  v1[1] = 0LL;
  std::_Deallocate<16,0>(*v1, 0x30uLL);
  CResource::~CResource(this);
}
