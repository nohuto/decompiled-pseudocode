/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18020FA34
 * Callers:
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x180210368 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18020F0F0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUStereoscopicSlateData@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@@Z @ 0x18020F47C (--$_Insert_hint@AEAU-$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUSte.c)
 */

__int64 __fastcall std::map<unsigned int,StereoscopicSlateData>::_Try_emplace<unsigned int const &,>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  _DWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = *a1;
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( *(_DWORD *)(v7 + 28) >= *a3 )
    {
      v6 = v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  if ( v6 == v5 || *a3 < *(_DWORD *)(v6 + 28) )
  {
    v10 = a3;
    v8 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
           a1,
           v5,
           &v10);
    std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Insert_hint<std::pair<unsigned int const,StereoscopicSlateData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *> *>(
      a1,
      &v10,
      v6,
      (unsigned int *)(v8 + 28),
      (_QWORD *)v8);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
