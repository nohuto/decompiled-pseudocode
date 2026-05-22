/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x18005BD50
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy______0___::_Insert_std::pair_unsigned___int64_const__wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__wil::com_ptr_t_IHeadEventHandler_wil::err_exception_policy____________::_1_::catch$2 @ 0x180130ED3 (_std--_Hash_std--_Umap_traits_unsigned___int64_wil--com_ptr_t_IHeadEventHandler_wil--err_excepti.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx

  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  v3 = a2[3];
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  operator delete(a2, (const struct std::nothrow_t *)0x20);
}
