/*
 * XREFs of _std::_List_buy_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____std::allocator_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_______::_Buynode_unsigned_int_&_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__&__::_1_::catch$2 @ 0x18003043D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@_K@Z @ 0x18003455C (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomProxy@@Uer.c)
 */

void __fastcall __noreturn std::_List_buy_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____std::allocator_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_______::_Buynode_unsigned_int___wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>,void *>>::deallocate(
    a1,
    *(_QWORD *)(a2 + 64));
  throw;
}
