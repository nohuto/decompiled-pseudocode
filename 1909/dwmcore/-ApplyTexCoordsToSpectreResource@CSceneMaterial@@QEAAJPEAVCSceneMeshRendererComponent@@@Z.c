/*
 * XREFs of ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z @ 0x1801F6B68
 * Callers:
 *     ?OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801F6D30 (-OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$_Lbound@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x1801F5928 (--$_Lbound@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@@2@0@Z @ 0x1801F63C8 (-erase@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@SceneMaterialInput.c)
 *     ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x1801F64A0 (--$_Copy@U_Copy_tag@-$_Tree@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@Scene.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEAU?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@1@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801F6728 (--$_Insert_hint@AEAU-$pair@QEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@@Uerr.c)
 */

__int64 __fastcall CSceneMaterial::ApplyTexCoordsToSpectreResource(
        CSceneMaterial *this,
        struct CSceneMeshRendererComponent *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v6; // esi
  __int64 *v7; // r14
  __int64 *v8; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rax
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  struct CSceneMeshRendererComponent *v18; // [rsp+78h] [rbp+38h] BYREF
  __int64 *v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 *v20; // [rsp+88h] [rbp+48h] BYREF

  v18 = a2;
  v3 = (_QWORD *)((char *)a2 + 88);
  v17 = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)&v17 = v4;
  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Copy<std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Copy_tag>(
    (__int64 *)&v17,
    v3,
    (char)v18,
    v5);
  v6 = 0;
  v7 = (__int64 *)((char *)this + 64);
  do
  {
    v8 = (__int64 *)v17;
    v9 = *(__int64 **)(v17 + 8);
    if ( *((_BYTE *)v9 + 25) )
      goto LABEL_9;
    do
    {
      if ( *((_DWORD *)v9 + 7) >= (signed int)v6 )
      {
        v8 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
    if ( v8 == (__int64 *)v17 || (signed int)v6 < *((_DWORD *)v8 + 7) )
LABEL_9:
      v8 = (__int64 *)v17;
    if ( v8 == (__int64 *)v17 )
    {
      v14 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
              v7,
              &v18);
      v11 = v14;
      if ( v14 == (__int64 *)*v7 || (unsigned __int64)v18 < v14[4] )
      {
        v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
        *(_QWORD *)v15 = *v7;
        *(_QWORD *)(v15 + 8) = *v7;
        *(_QWORD *)(v15 + 16) = *v7;
        *(_WORD *)(v15 + 24) = 0;
        *(_QWORD *)(v15 + 32) = v18;
        *(_QWORD *)(v15 + 40) = 0LL;
        std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::_Insert_hint<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>> &,std::_Tree_node<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>,void *> *>(
          v7,
          (__int64 *)&v20,
          v11,
          (unsigned __int64 *)(v15 + 32),
          v15);
        v11 = v20;
      }
      v13 = 0LL;
    }
    else
    {
      v10 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
              v7,
              &v18);
      v11 = v10;
      if ( v10 == (__int64 *)*v7 || (unsigned __int64)v18 < v10[4] )
      {
        v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
        *(_QWORD *)v12 = *v7;
        *(_QWORD *)(v12 + 8) = *v7;
        *(_QWORD *)(v12 + 16) = *v7;
        *(_WORD *)(v12 + 24) = 0;
        *(_QWORD *)(v12 + 32) = v18;
        *(_QWORD *)(v12 + 40) = 0LL;
        std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::_Insert_hint<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>> &,std::_Tree_node<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>,void *> *>(
          v7,
          (__int64 *)&v19,
          v11,
          (unsigned __int64 *)(v12 + 32),
          v12);
        v11 = v19;
      }
      v13 = *((unsigned int *)v8 + 8);
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v11[5] + 88LL))(v11[5], v6++, v13);
  }
  while ( v6 < 5 );
  std::_Tree<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::erase(
    (__int64 ***)&v17,
    &v19,
    *(__int64 **)v17,
    (__int64 *)v17);
  std::_Deallocate<16,0>((void *)v17, 0x28uLL);
  return 0LL;
}
