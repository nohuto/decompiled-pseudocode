/*
 * XREFs of ?deallocate@?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800B83A0
 * Callers:
 *     _std::vector_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__const_&__::_1_::catch$32 @ 0x1800B5ACA (_std--vector_wil--com_ptr_t_IWinRTApplicationView_wil--err_exception_policy__std--allocator_wil-.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(8 * a3));
}
