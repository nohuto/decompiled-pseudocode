/*
 * XREFs of ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18020DF4C
 * Callers:
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1801F9838 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?OnComponentsChanged@CSceneNode@@QEAAXXZ @ 0x1801F9AF0 (-OnComponentsChanged@CSceneNode@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVIDeviceResource@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVIDeviceResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18017BAA4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVIDeviceResource@@@2@V-$tuple@$$V@.c)
 *     ??$_Lbound@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x1801F7018 (--$_Lbound@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18020DEB8 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 */

__int64 __fastcall CSceneComponent::HydrateSpectreResources(CSceneComponent *this, struct CSceneNode *a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rax
  struct CSceneNode *v5; // r9
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, struct CSceneNode **); // rbx
  __int64 v8; // rax
  signed int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *v12; // rax
  __int64 v13; // r9
  signed int v14; // eax
  __int64 v15; // rcx
  struct CSceneNode *v17; // [rsp+60h] [rbp+30h] BYREF
  struct CSceneNode *v18; // [rsp+68h] [rbp+38h] BYREF
  struct CSceneNode **v19; // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+78h] [rbp+48h] BYREF

  v18 = a2;
  v2 = (__int64 *)((char *)this + 56);
  v17 = a2;
  v4 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
         (__int64 *)this + 7,
         &v17);
  if ( v4 == (__int64 *)*v2 || (unsigned __int64)v5 < v4[4] )
    v4 = (__int64 *)*v2;
  if ( v4 != (__int64 *)*v2 )
    goto LABEL_12;
  v6 = *((_QWORD *)v5 + 16);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, struct CSceneNode **))(*(_QWORD *)v6 + 48LL);
  v8 = (*(__int64 (__fastcall **)(CSceneComponent *))(*(_QWORD *)this + 192LL))(this);
  v9 = v7(v6, v8, &v17);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x28u, 0LL);
    goto LABEL_17;
  }
  v12 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
          v2,
          &v18);
  if ( v12 == (__int64 *)*v2 || (unsigned __int64)v18 < v12[4] )
  {
    v19 = &v18;
    v12 = (__int64 *)*std::_Tree<std::_Tmap_traits<IDeviceResource *,ISpectreRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<IDeviceResource * const &>,std::tuple<>>(
                        v2,
                        &v20,
                        v12,
                        v13,
                        &v19);
  }
  v12[5] = (__int64)v17;
  v14 = (*(__int64 (__fastcall **)(CSceneComponent *, struct CSceneNode *))(*(_QWORD *)this + 200LL))(this, v17);
  v11 = v14;
  if ( v14 >= 0 )
  {
    v5 = v18;
LABEL_12:
    v11 = 0;
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2Bu, 0LL);
LABEL_17:
  v5 = v18;
LABEL_13:
  if ( v11 < 0 )
    CSceneComponent::DehydrateSpectreResources(this, v5);
  return (unsigned int)v11;
}
