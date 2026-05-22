/*
 * XREFs of _std::vector_wil::com_ptr_t_AsyncPVPrincipal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_AsyncPVPrincipal_wil::err_exception_policy_____::_Emplace_reallocate_AsyncPVPrincipal_____ptr64__::_1_::catch$0 @ 0x180134778
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@QEAAXQEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x180008B78 (-deallocate@-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@W4_.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x1800E15D8 (-_Destroy@-$vector@V-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_AsyncPVPrincipal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_AsyncPVPrincipal_wil::err_exception_policy_____::_Emplace_reallocate_AsyncPVPrincipal_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>>::_Destroy(
    a1,
    *(_QWORD **)(a2 + 136),
    *(_QWORD **)(a2 + 40));
  std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>::deallocate(
    v3,
    *(_QWORD **)(a2 + 128),
    *(_QWORD *)(a2 + 152));
  throw;
}
