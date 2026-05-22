/*
 * XREFs of _std::vector_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__std::allocator_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__const_&__::_1_::catch$32 @ 0x180030612
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x180033B40 (-_Destroy@-$vector@V-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V-.c)
 *     ?deallocate@?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@U_Iterator_base0@2@@std@@@std@@QEAAXQEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x180034570 (-deallocate@-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@I@s.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__std::allocator_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__const____::_1_::catch_32(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  std::vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>::_Destroy(a1, a2[14], a2[17]);
  std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned int>>,std::_Iterator_base0>>::deallocate(
    v3,
    a2[4],
    a2[15]);
  throw;
}
