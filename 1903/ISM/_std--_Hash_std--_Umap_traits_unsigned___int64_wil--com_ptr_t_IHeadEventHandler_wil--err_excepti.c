/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned___int64_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy______0___::_Insert_std::pair_unsigned___int64_const__wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy____________::_1_::catch$56 @ 0x1800975CC
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180098438 (-erase@-$list@U-$pair@$$CB_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@s.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned___int64_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy______0___::_Insert_std::pair_unsigned___int64_const__wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy______std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy____________::_1_::catch_56(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>::erase(
    *(_QWORD *)(a2 + 80) + 8LL,
    a2 + 80,
    *(_QWORD *)(a2 + 104));
  throw;
}
