/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180038224
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_unsigned_short_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_short____0___::_Insert_std::pair_unsigned_long_const__unsigned_short__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__unsigned_short__________::_1_::catch$1 @ 0x18012F45F (_std--_Hash_std--_Umap_traits_unsigned_long_unsigned_short_std--_Uhash_compare_unsigned_long_std.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_short_ControllerProcessor::ActiveKeyProperties_std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__ControllerProcessor::ActiveKeyProperties____0___::_Insert_std::pair_unsigned_short_const__ControllerProcessor::ActiveKeyProperties__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_short_const__ControllerProcessor::ActiveKeyProperties__________::_1_::catch$1 @ 0x18012F4BD (_std--_Hash_std--_Umap_traits_unsigned_short_ControllerProcessor--ActiveKeyProperties_std--_Uhas.c)
 *     _std::_Hash_std::_Uset_traits_ISystemContextObserver_____ptr64_std::_Uhash_compare_ISystemContextObserver_____ptr64_std::hash_ISystemContextObserver_____ptr64__std::equal_to_ISystemContextObserver_____ptr64____std::allocator_ISystemContextObserver_____ptr64__0___::_Insert_ISystemContextObserver_____ptr64_const_&___ptr64_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_ISystemContextObserver_____ptr64____std::_Iterator_base0____::_1_::catch$11 @ 0x18012F5E4 (_std--_Hash_std--_Uset_traits_ISystemContextObserver_____ptr64_std--_Uhash_compare__ea_18012F5E4.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_unsigned_long_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_long____0___::_Insert_std::pair_unsigned_long_const__unsigned_long__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__unsigned_long__________::_1_::catch$1 @ 0x180130913 (_std--_Hash_std--_Umap_traits_unsigned_long_unsigned_long_std--_Uhash_compare_unsigned_long_std-.c)
 *     _std::_Hash_std::_Uset_traits_enum__Button_std::_Uhash_compare_enum__Button_std::hash_enum__Button__std::equal_to_enum__Button____std::allocator_enum__Button__0___::_Insert_enum__Button_const_&___ptr64_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_enum__Button____std::_Iterator_base0____::_1_::catch$11 @ 0x1801314DB (_std--_Hash_std--_Uset_traits_enum__Button_std--_Uhash_compare_enum__Button_std--ha_ea_1801314DB.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD **a2)
{
  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  operator delete(a2, (const struct std::nothrow_t *)0x18);
}
