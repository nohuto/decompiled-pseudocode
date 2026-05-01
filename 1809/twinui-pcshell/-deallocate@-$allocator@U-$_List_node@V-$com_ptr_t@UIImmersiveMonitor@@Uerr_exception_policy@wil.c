/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@2@_K@Z @ 0x18009A830
 * Callers:
 *     _std::_List_buy_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy_____::_Buynode_Microsoft::WRL::ComPtr_IImmersiveMonitor__const_&___ptr64__::_1_::catch$1 @ 0x1800965CB (_std--_List_buy_wil--com_ptr_t_IImmersiveMonitor_wil--err_exception_policy__std--allocator_wil--.c)
 *     _std::_List_alloc_std::_List_base_types_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy_______::_Buynode0_::_1_::catch$4 @ 0x18009A3E2 (_std--_List_alloc_std--_List_base_types_wil--com_ptr_t_IImmersiveMonitor_wil--err_exception_poli.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x18);
}
