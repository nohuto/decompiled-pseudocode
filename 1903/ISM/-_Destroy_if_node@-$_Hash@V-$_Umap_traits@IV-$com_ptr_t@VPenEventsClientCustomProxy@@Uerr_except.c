/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180033E74
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy______1___::_Insert_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____________::_1_::catch$47 @ 0x180030B0D (_std--_Hash_std--_Umap_traits_unsigned_int_wil--com_ptr_t_PenEventsClientCustomProxy_wil--err_ex.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180034AD4 (-erase@-$list@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>::erase(
           a1 + 8,
           &v3,
           a2);
}
