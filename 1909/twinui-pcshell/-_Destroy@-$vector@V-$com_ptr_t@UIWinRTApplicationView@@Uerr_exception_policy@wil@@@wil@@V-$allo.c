/*
 * XREFs of ?_Destroy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x1800B7E5C
 * Callers:
 *     _std::vector_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__const_&__::_1_::catch$32 @ 0x1800B5ACA (_std--vector_wil--com_ptr_t_IWinRTApplicationView_wil--err_exception_policy__std--allocator_wil-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  return std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(a2, a3);
}
