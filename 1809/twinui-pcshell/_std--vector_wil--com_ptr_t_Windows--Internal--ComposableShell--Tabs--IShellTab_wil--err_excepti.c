/*
 * XREFs of _std::vector_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy__std::allocator_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy__const_&___ptr64__::_1_::catch$38 @ 0x1801D1B67
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18009A600 (-_Destroy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy__std::allocator_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_Windows::Internal::ComposableShell::Tabs::IShellTab_wil::err_exception_policy__const_____ptr64__::_1_::catch_38(
        __int64 a1,
        __int64 a2)
{
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Destroy(
    a1,
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
