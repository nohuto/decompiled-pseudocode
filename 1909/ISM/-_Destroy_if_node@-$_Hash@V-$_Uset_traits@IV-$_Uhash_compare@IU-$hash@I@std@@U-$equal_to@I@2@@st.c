/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180033B74
 * Callers:
 *     _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::_Insert_unsigned_int_const_&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_unsigned_int____std::_Iterator_base0____::_1_::catch$64 @ 0x180030AA8 (_std--_Hash_std--_Uset_traits_unsigned_int_std--_Uhash_compare_unsigned_int_std--ha_ea_180030AA8.c)
 * Callees:
 *     ?erase@?$list@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@@Z @ 0x180034768 (-erase@-$list@PEAUISystemContextObserver@@V-$allocator@PEAUISystemContextObserver@@@std@@@std@@Q.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<ISystemContextObserver *>::erase(a1 + 8, &v3, a2);
}
