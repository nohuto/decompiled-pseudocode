/*
 * XREFs of _std::_Hash_std::_Uset_traits_ISystemContextObserver___std::_Uhash_compare_ISystemContextObserver___std::hash_ISystemContextObserver____std::equal_to_ISystemContextObserver______std::allocator_ISystemContextObserver____0___::_Insert_ISystemContextObserver___const_&_std::_Not_a_node_tag__::_1_::catch$76 @ 0x18003B002
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V32@@Z @ 0x18007B91C (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 */

void __fastcall __noreturn std::_Hash_std::_Uset_traits_ISystemContextObserver___std::_Uhash_compare_ISystemContextObserver___std::hash_ISystemContextObserver____std::equal_to_ISystemContextObserver______std::allocator_ISystemContextObserver____0___::_Insert_ISystemContextObserver___const___std::_Not_a_node_tag__::_1_::catch_76(
        __int64 a1,
        __int64 a2)
{
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
    *(_QWORD *)(a2 + 96),
    a2 + 112,
    *(_QWORD *)(a2 + 112));
  throw;
}
