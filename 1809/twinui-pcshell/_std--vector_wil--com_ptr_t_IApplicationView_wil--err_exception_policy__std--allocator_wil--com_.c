/*
 * XREFs of _std::vector_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IApplicationView_wil::err_exception_policy_____::_Emplace_reallocate_IApplicationView_____ptr64_&___ptr64__::_1_::catch$38 @ 0x180096767
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18009A600 (-_Destroy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ?deallocate@?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x18009A844 (-deallocate@-$allocator@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@Q.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IApplicationView_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IApplicationView_wil::err_exception_policy_____::_Emplace_reallocate_IApplicationView_____ptr64_____ptr64__::_1_::catch_38(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Destroy(a1, a2[14], a2[17]);
  std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::deallocate(v3, a2[4], a2[15]);
  throw;
}
