/*
 * XREFs of ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x180012C5C
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x180018790 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUtagMsgRoutingInfo@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUtagMsgRoutingInfo@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180012D18 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUtagMsgRoutingInfo@@@2@V-$tuple@$$V@2@@-$.c)
 *     ??$_Insert@AEAU?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@1@@Z @ 0x180012EE0 (--$_Insert@AEAU-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V-$_List_unchecked_iterato.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x180026BF4 (-lower_bound@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@Uta.c)
 */

__int64 __fastcall std::unordered_map<tagMsgRoutingInfo,IInputTarget *,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>::_Try_emplace<tagMsgRoutingInfo const &,>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  int v6; // r9d
  __int64 *v7; // rcx
  __int64 v8; // rsi
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::lower_bound(
    a1,
    &v13);
  v7 = *(__int64 **)(a1 + 8);
  if ( v13 == v7 )
  {
    v13 = a3;
    v8 = *v7;
    v9 = *(__int64 **)(*v7 + 8);
    v10 = std::_List_buy<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::_Buynode<std::piecewise_construct_t const &,std::tuple<tagMsgRoutingInfo const &>,std::tuple<>>(
            (_DWORD)v7,
            *v7,
            (_DWORD)v9,
            v6,
            (__int64)&v13);
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 == 0x3FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    *(_QWORD *)(a1 + 16) = v11 + 1;
    *(_QWORD *)(v8 + 8) = v10;
    *v9 = v10;
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Insert<std::pair<tagMsgRoutingInfo const,IInputTarget *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>>>(
      a1,
      a2,
      **(_QWORD **)(a1 + 8) + 16LL);
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
