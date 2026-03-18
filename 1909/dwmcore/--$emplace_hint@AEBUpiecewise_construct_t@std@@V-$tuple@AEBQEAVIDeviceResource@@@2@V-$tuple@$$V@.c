/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVIDeviceResource@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVIDeviceResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18017A3A4
 * Callers:
 *     ?GetSpectreRenderTargetNoRef@CSceneResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUISpectreRenderTarget@@@Z @ 0x18017A9E0 (-GetSpectreRenderTargetNoRef@CSceneResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUISpectreRenderT.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18020C85C (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAVCSceneNode@@PEAX@std@@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@AEAU?$pair@QEAVCSceneNode@@PEAX@1@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@@Z @ 0x18017A0F8 (--$_Insert_hint@AEAU-$pair@QEAVCSceneNode@@PEAX@std@@PEAU-$_Tree_node@U-$pair@QEAVCSceneNode@@PE.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<IDeviceResource *,ISpectreRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<IDeviceResource * const &>,std::tuple<>>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        _QWORD **a5)
{
  __int64 v8; // rax

  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v8 = *a1;
  *(_QWORD *)(v8 + 8) = *a1;
  *(_QWORD *)(v8 + 16) = *a1;
  *(_WORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = **a5;
  *(_QWORD *)(v8 + 40) = 0LL;
  std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Insert_hint<std::pair<CSceneNode * const,void *> &,std::_Tree_node<std::pair<CSceneNode * const,void *>,void *> *>(
    a1,
    a2,
    a3,
    (unsigned __int64 *)(v8 + 32),
    (_QWORD *)v8);
  return a2;
}
