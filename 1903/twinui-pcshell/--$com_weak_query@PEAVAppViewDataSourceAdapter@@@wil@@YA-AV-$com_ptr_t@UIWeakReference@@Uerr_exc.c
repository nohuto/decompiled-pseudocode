/*
 * XREFs of ??$com_weak_query@PEAVAppViewDataSourceAdapter@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVAppViewDataSourceAdapter@@@Z @ 0x1803019DC
 * Callers:
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_4f02fd2cc1c1e9b5768550b824f350bd___ @ 0x180300978 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Internal--Composable.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__lambda_7be9b31505ec13bab2864f0aa84a83a3___ @ 0x180300A1C (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_180300A1C.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_695800337203f165c386051dd76ff0a7___ @ 0x180300AC0 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_180300AC0.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@VAppViewDataSourceAdapter@@@details@wil@@YAJPEAVAppViewDataSourceAdapter@@PEAPEAUIWeakReference@@@Z @ 0x18030055C (--$GetWeakReference@VAppViewDataSourceAdapter@@@details@wil@@YAJPEAVAppViewDataSourceAdapter@@PE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_weak_query<AppViewDataSourceAdapter *>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  int Weak; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(a1);
  Weak = wil::details::GetWeakReference<AppViewDataSourceAdapter>(v3, a1);
  if ( Weak < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1749LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)Weak);
    __debugbreak();
  }
  return a1;
}
