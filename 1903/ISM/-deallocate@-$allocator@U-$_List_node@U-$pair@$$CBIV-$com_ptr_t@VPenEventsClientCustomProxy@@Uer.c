/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@_K@Z @ 0x18003487C
 * Callers:
 *     _std::_List_buy_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____std::allocator_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_______::_Buynode_unsigned_int_&_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__&__::_1_::catch$2 @ 0x18003075D (_std--_List_buy_std--pair_unsigned_int_const__wil--com_ptr_t_PenEventsClientCustomProxy_wil--err.c)
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy____std::allocator_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_________::_Buynode0_::_1_::catch$6 @ 0x180033BDE (_std--_List_alloc_std--_List_base_types_std--pair_unsigned_int_const__wil--com_ptr_t_PenEventsCl.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x20);
}
