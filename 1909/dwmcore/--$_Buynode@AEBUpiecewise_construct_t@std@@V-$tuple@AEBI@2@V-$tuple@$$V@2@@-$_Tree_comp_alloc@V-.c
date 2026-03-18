/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180241060
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180241984 (--$_Try_emplace@AEBI$$V@-$map@IUStereoscopicSlateData@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD **a3)
{
  __int64 v5; // rsi
  __int64 result; // rax

  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  *(_QWORD *)v5 = *a1;
  *(_QWORD *)(v5 + 8) = *a1;
  *(_QWORD *)(v5 + 16) = *a1;
  *(_WORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 28) = **a3;
  memset_0((void *)(v5 + 32), 0, 0x44uLL);
  *(_QWORD *)(v5 + 32) = 1065353216LL;
  *(_QWORD *)(v5 + 52) = 1065353216LL;
  *(_QWORD *)(v5 + 72) = 1065353216LL;
  *(_DWORD *)(v5 + 92) = 1065353216;
  result = v5;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_DWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 60) = 0LL;
  *(_DWORD *)(v5 + 68) = 0;
  *(_QWORD *)(v5 + 80) = 0LL;
  *(_DWORD *)(v5 + 88) = 0;
  *(_BYTE *)(v5 + 96) = 0;
  return result;
}
