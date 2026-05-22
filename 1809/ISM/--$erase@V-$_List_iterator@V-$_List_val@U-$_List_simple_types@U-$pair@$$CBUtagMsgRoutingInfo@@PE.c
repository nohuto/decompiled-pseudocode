/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@1@V21@@Z @ 0x18008D1F0
 * Callers:
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18008AA44 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_IInputTarget_____ptr64_std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__IInputTarget_____ptr64____0___::_Insert_std::pair_tagMsgRoutingInfo_const__IInputTarget_____ptr64__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__IInputTarget_____ptr64__________::_1_::catch$0 @ 0x180132588 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_IInputTarget_____ptr64_std--_Uhash__ea_180132588.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>>,void>(
        _QWORD *a1,
        _QWORD *a2,
        _DWORD *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx
  int v16; // [rsp+30h] [rbp+8h]

  v4 = 0LL;
  v16 = a3[4];
  v5 = 0xCBF29CE484222325uLL;
  v7 = 0LL;
  v8 = 0xCBF29CE484222325uLL;
  do
  {
    v9 = *((unsigned __int8 *)&v16 + v7++);
    v8 = 0x100000001B3LL * (v9 ^ v8);
  }
  while ( v7 < 4 );
  v16 = a3[5];
  do
  {
    v10 = *((unsigned __int8 *)&v16 + v4++);
    v5 = 0x100000001B3LL * (v10 ^ v5);
  }
  while ( v4 < 4 );
  v11 = a1[3];
  v12 = 2 * (a1[6] & (v8 ^ v5));
  if ( *(_DWORD **)(v11 + 8 * v12 + 8) == a3 )
  {
    if ( *(_DWORD **)(v11 + 8 * v12) == a3 )
    {
      *(_QWORD *)(v11 + 8 * v12) = a1[1];
      v11 = a1[3];
      v13 = a1[1];
    }
    else
    {
      v13 = *((_QWORD *)a3 + 1);
    }
    *(_QWORD *)(v11 + 8 * v12 + 8) = v13;
  }
  else if ( *(_DWORD **)(v11 + 8 * v12) == a3 )
  {
    *(_QWORD *)(v11 + 8 * v12) = *(_QWORD *)a3;
  }
  v14 = *(_QWORD *)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --a1[2];
  operator delete(a3, (const struct std::nothrow_t *)0x40);
  *a2 = v14;
  return a2;
}
