/*
 * XREFs of _std::_Hash_std::_Umap_traits_enum_TestCommandMessageType_std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)__std::_Uhash_compare_enum_TestCommandMessageType_std::hash_enum_TestCommandMessageType__std::equal_to_enum_TestCommandMessageType____std::allocator_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)______0___::_Insert_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool_(__cdecl_)(void___TestCommandMessageDataHeader__)____________::_1_::catch$91 @ 0x18003AF26
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@2@@Z @ 0x1800A2664 (-erase@-$list@U-$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@V-$allocator@U-$pair@$.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_enum_TestCommandMessageType_std::pair_void___bool____cdecl___void___TestCommandMessageDataHeader_____std::_Uhash_compare_enum_TestCommandMessageType_std::hash_enum_TestCommandMessageType__std::equal_to_enum_TestCommandMessageType____std::allocator_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool____cdecl___void___TestCommandMessageDataHeader_________0___::_Insert_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool____cdecl___void___TestCommandMessageDataHeader_________std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_TestCommandMessageType_const__std::pair_void___bool____cdecl___void___TestCommandMessageDataHeader_______________::_1_::catch_91(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<unsigned long const,MobileButtonDeviceCollection::UsageList>>::erase(
    *(_QWORD *)(a2 + 112) + 8LL,
    a2 + 112,
    *(_QWORD *)(a2 + 136));
  throw;
}
