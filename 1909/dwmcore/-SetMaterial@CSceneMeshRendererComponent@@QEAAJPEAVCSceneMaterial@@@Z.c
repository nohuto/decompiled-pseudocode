/*
 * XREFs of ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z @ 0x1801F5F8C
 * Callers:
 *     ?ProcessSetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMATERIAL@@@Z @ 0x1801F5DCC (-ProcessSetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMES.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Lbound@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x1801F5928 (--$_Lbound@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@.c)
 *     ?ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x1801F5C18 (-ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCSceneMeshRendererComponent@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCSceneMeshRendererComponent@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801F6A20 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCSceneMeshRendererComponent@@@2@V.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCSceneMeshRendererComponent@@@Z @ 0x1801F70A0 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpec_ea_1801F70A0.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::SetMaterial(
        CSceneMeshRendererComponent *this,
        struct CSceneMaterial *a2)
{
  struct CSceneMaterial *v4; // rcx
  int v5; // eax
  unsigned int v6; // esi
  __int64 *v8; // rax
  __int64 **v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CSceneMeshRendererComponent *v11; // [rsp+50h] [rbp+8h] BYREF
  CSceneMeshRendererComponent **v12; // [rsp+58h] [rbp+10h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = (struct CSceneMaterial *)*((_QWORD *)this + 9);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      v11 = this;
      std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::erase(
        (char *)v4 + 64,
        &v11);
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
      *((_QWORD *)this + 9) = 0LL;
    }
    if ( a2 )
    {
      v5 = CResource::RegisterNotifier(this, a2);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
      v11 = this;
      v8 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
             (__int64 *)a2 + 8,
             &v11);
      if ( v8 == *v9 || (unsigned __int64)this < v8[4] )
      {
        v12 = &v11;
        v8 = *(__int64 **)std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CSceneMeshRendererComponent * const &>,std::tuple<>>(
                            (_DWORD)v9,
                            (unsigned int)&v13,
                            (_DWORD)v8,
                            (_DWORD)v9,
                            (__int64)&v12);
      }
      wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(v8 + 5);
      *((_QWORD *)this + 9) = a2;
    }
    CSceneMeshRendererComponent::ApplyMaterialToSpectreResources(this);
  }
  return 0LL;
}
