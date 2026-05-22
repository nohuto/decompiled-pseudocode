/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@Z @ 0x1800C5AF4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_IInputTarget___std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__IInputTarget______0___::_Insert_std::pair_tagMsgRoutingInfo_const__IInputTarget____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__IInputTarget____________::_1_::catch$90 @ 0x18003B2D8 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_IInputTarget___std--_Uhash_compare__ea_18003B2D8.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x1800C4FA0 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@Z @ 0x1800A4430 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V-$allocator@U-$pair@$$CBU.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 *v8; // rdx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  int v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0xCBF29CE484222325uLL;
  v4 = 4LL;
  v17 = *(_DWORD *)(a3 + 16);
  v6 = 0xCBF29CE484222325uLL;
  v7 = 4LL;
  v8 = (unsigned __int8 *)&v17;
  do
  {
    v10 = *v8++;
    v6 = 0x100000001B3LL * (v10 ^ v6);
    --v7;
  }
  while ( v7 );
  v11 = (unsigned __int8 *)&v17;
  v17 = *(_DWORD *)(a3 + 20);
  do
  {
    v12 = *v11++;
    v3 = 0x100000001B3LL * (v12 ^ v3);
    --v4;
  }
  while ( v4 );
  v13 = a1[3];
  v14 = 2 * (a1[6] & (v6 ^ v3));
  if ( *(_QWORD *)(v13 + 8 * v14 + 8) == a3 )
  {
    if ( *(_QWORD *)(v13 + 8 * v14) == a3 )
    {
      *(_QWORD *)(v13 + 8 * v14) = a1[1];
      v13 = a1[3];
      v15 = a1[1];
    }
    else
    {
      v15 = *(_QWORD *)(a3 + 8);
    }
    *(_QWORD *)(v13 + 8 * v14 + 8) = v15;
  }
  else if ( *(_QWORD *)(v13 + 8 * v14) == a3 )
  {
    *(_QWORD *)(v13 + 8 * v14) = *(_QWORD *)a3;
  }
  std::list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::erase((__int64)(a1 + 1), a2, (__int64 *)a3);
  return a2;
}
