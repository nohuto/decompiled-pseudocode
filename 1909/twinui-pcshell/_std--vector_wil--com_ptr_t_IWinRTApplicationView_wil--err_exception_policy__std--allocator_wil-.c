/*
 * XREFs of _std::vector_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__const_&__::_1_::catch$32 @ 0x1800B5ACA
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x1800B7E5C (-_Destroy@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 *     ?deallocate@?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800B83A0 (-deallocate@-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@s.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__const____::_1_::catch_32(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Destroy(a1, a2[14], a2[17]);
  std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::deallocate(v3, a2[4], a2[15]);
  throw;
}
