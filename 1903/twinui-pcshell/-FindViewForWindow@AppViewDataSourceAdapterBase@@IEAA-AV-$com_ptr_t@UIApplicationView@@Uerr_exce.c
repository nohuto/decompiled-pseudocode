/*
 * XREFs of ?FindViewForWindow@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1803040A0
 * Callers:
 *     ?OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z @ 0x180305C30 (-OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall AppViewDataSourceAdapterBase::FindViewForWindow(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rbx

  *a2 = 0LL;
  v5 = *(_QWORD *)(a1 + 32);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(a2);
  (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, a3, a2);
  return a2;
}
