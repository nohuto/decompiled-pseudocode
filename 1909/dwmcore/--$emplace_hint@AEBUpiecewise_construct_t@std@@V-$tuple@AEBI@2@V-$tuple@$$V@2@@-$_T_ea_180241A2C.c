/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180241A2C
 * Callers:
 *     ?CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA?BVCMILMatrix@@PEBVCVisualTree@@IIHH@Z @ 0x180241B70 (-CalculateViewTransformForVisualTree@CStereoscopicContentManager@@QEAA-BVCMILMatrix@@PEBVCVisual.c)
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802422D0 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUStereoscopicViewData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUStereoscopicViewData@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@1@@Z @ 0x1802415BC (--$_Insert_hint@AEAU-$pair@$$CBIUStereoscopicViewData@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUSter.c)
 *     ??0StereoscopicViewData@@QEAA@XZ @ 0x180241AD4 (--0StereoscopicViewData@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        _DWORD **a5)
{
  __int64 v8; // r14

  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0xE0uLL);
  *(_QWORD *)v8 = *a1;
  *(_QWORD *)(v8 + 8) = *a1;
  *(_QWORD *)(v8 + 16) = *a1;
  *(_WORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 28) = **a5;
  memset_0((void *)(v8 + 32), 0, 0xC0uLL);
  StereoscopicViewData::StereoscopicViewData((StereoscopicViewData *)(v8 + 32));
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::_Insert_hint<std::pair<unsigned int const,StereoscopicViewData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicViewData>,void *> *>(
    a1,
    a2,
    a3,
    (unsigned int *)(v8 + 28),
    (_QWORD *)v8);
  return a2;
}
