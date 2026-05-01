/*
 * XREFs of _std::_List_alloc_std::_List_base_types_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy_______::_Buynode0_::_1_::catch$4 @ 0x18009A3E2
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@U?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@2@_K@Z @ 0x18009A830 (-deallocate@-$allocator@U-$_List_node@V-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IImmersiveMonitor_wil::err_exception_policy_______::_Buynode0_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>,void *>>::deallocate(
    a1,
    *(_QWORD *)(a2 + 64));
  throw;
}
