/*
 * XREFs of _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::_Insert_unsigned_int_const_&_std::_Not_a_node_tag__::_1_::catch$17 @ 0x180030C8B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?_Make_iter@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEBA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180034388 (-_Make_iter@-$_Hash@V-$_Umap_traits@IV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_po.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@2@V32@@Z @ 0x180034960 (-erase@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 */

void __fastcall __noreturn std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::_Insert_unsigned_int_const___std::_Not_a_node_tag__::_1_::catch_17(
        __int64 a1,
        __int64 a2)
{
  _QWORD *iter; // rax

  iter = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::_Make_iter(
                     a1,
                     a2 + 32,
                     *(_QWORD *)(a2 + 32));
  std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::erase(
    *(_QWORD *)(a2 + 96),
    a2 + 48,
    *iter);
  throw;
}
