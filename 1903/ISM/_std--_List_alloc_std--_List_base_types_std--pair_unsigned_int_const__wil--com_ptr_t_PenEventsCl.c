/*
 * XREFs of _std::_List_alloc_std::_List_base_types_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____std::allocator_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_________::_Buynode0_::_1_::catch$6 @ 0x180033BDE
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@_K@Z @ 0x18003487C (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomProxy@@Uer.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____std::allocator_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_________::_Buynode0_::_1_::catch_6(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>,void *>>::deallocate(
    a1,
    *(_QWORD *)(a2 + 64));
  throw;
}
