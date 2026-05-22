/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@@Z @ 0x1800A2430
 * Callers:
 *     _std::_Hash_std::_Umap_traits_enum_TestCommandMessageType_std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)__std::_Uhash_compare_enum_TestCommandMessageType_std::hash_enum_TestCommandMessageType__std::equal_to_enum_TestCommandMessageType____std::allocator_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)______0___::_Insert_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)____________::_1_::catch$90 @ 0x18003AF55 (_std--_Hash_std--_Umap_traits_enum_TestCommandMessageType_std--pair_void___bool_(___ea_18003AF55.c)
 *     _std::_Hash_std::_Umap_traits_CursorId_DWMCursor___std::_Uhash_compare_CursorId_CursorIdHash_std::equal_to_CursorId____std::allocator_std::pair_CursorId_const__DWMCursor______0___::_Insert_std::pair_CursorId_const__DWMCursor____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_CursorId_const__DWMCursor____________::_1_::catch$90 @ 0x18003B0A9 (_std--_Hash_std--_Umap_traits_CursorId_DWMCursor___std--_Uhash_compare_CursorId_Cur_ea_18003B0A9.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ConsumerControlDeviceCollection::UsageList_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ConsumerControlDeviceCollection::UsageList____0___::_Insert_std::pair_unsigned_long_const__ConsumerControlDeviceCollection::UsageList__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__ConsumerControlDeviceCollection::UsageList__________::_1_::catch$55 @ 0x1800A0957 (_std--_Hash_std--_Umap_traits_unsigned_long_ConsumerControlDeviceCollection--UsageL_ea_1800A0957.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800A1830 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x1800A2D60 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4TestCommandMessageType@@@Z @ 0x1800D374C (-erase@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@2@@Z @ 0x1800A2664 (-erase@-$list@U-$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@V-$allocator@U-$pair@$.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax

  v5 = 0xCBF29CE484222325uLL;
  v6 = (unsigned __int8 *)(a3 + 2);
  if ( a3 + 2 <= (_QWORD *)((char *)a3 + 20) )
  {
    do
    {
      v7 = *v6++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( v6 - (unsigned __int8 *)(a3 + 2) != ((_QWORD *)((char *)a3 + 20) >= a3 + 2 ? 4 : 0) );
  }
  v8 = a1[3];
  v9 = 2 * (v5 & a1[6]);
  if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6])) == a3 )
    {
      *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = a1[1];
      v8 = a1[3];
      v10 = a1[1];
    }
    else
    {
      v10 = a3[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6])) == a3 )
  {
    *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = *a3;
  }
  std::list<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>>::erase(a1 + 1, a2, a3);
  return a2;
}
