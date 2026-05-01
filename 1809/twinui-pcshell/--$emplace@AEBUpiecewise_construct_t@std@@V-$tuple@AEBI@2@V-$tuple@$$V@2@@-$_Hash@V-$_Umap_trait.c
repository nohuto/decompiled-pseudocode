/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802BF7B8
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$unordered_map@I_NU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBI_N@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1802BF710 (--$_Try_emplace@AEBI$$V@-$unordered_map@I_NU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@U-$pair@$.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBI_N@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBI_N@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802BF140 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_List_buy@U-$pair@$.c)
 *     ??$_Insert@AEAU?$pair@$$CBI_N@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBI_N@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@1@@Z @ 0x1802BF1A0 (--$_Insert@AEAU-$pair@$$CBI_N@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_type.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD **a4)
{
  __int64 *v4; // rax
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax

  v4 = *(__int64 **)(a1 + 8);
  v7 = *v4;
  v8 = *(__int64 **)(*v4 + 8);
  v9 = std::_List_buy<std::pair<unsigned int const,bool>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
         a1,
         *v4,
         (__int64)v8,
         (__int64)a4,
         a4);
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 == 0xAAAAAAAAAAAAAA9LL )
    std::_Xlength_error("list<T> too long");
  *(_QWORD *)(a1 + 16) = v10 + 1;
  *(_QWORD *)(v7 + 8) = v9;
  *v8 = v9;
  std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::_Insert<std::pair<unsigned int const,bool> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,bool>>>>>(
    a1,
    a2,
    (const unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
    **(__int64 ***)(a1 + 8));
  return a2;
}
