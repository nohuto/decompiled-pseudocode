/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800B63F4
 * Callers:
 *     _UwpAppPackageInfo::GetActiveViews_::_1_::dtor$0 @ 0x1800B68D5 (_UwpAppPackageInfo--GetActiveViews_--_1_--dtor$0.c)
 *     _UwpAppStateManager::TerminateApp_::_1_::dtor$0 @ 0x1800B775D (_UwpAppStateManager--TerminateApp_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>()
{
  return std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy();
}
