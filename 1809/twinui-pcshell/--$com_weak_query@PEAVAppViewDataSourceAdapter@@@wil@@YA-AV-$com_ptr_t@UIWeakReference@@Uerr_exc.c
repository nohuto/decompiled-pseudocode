/*
 * XREFs of ??$com_weak_query@PEAVAppViewDataSourceAdapter@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVAppViewDataSourceAdapter@@@Z @ 0x1802A9474
 * Callers:
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_0935a17dcf8c46657c105b82d8cca1f2___ @ 0x1802A8310 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Internal--Composable.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__lambda_1ec4de1928236930de40fe3536856c48___ @ 0x1802A83B4 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_1802A83B4.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_8e29ff95208472147f8d85b39b7eadad___ @ 0x1802A8458 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_1802A8458.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@VAppViewDataSourceAdapter@@@details@wil@@YAJPEAVAppViewDataSourceAdapter@@PEAPEAUIWeakReference@@@Z @ 0x1802A7EF4 (--$GetWeakReference@VAppViewDataSourceAdapter@@@details@wil@@YAJPEAVAppViewDataSourceAdapter@@PE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_weak_query<AppViewDataSourceAdapter *>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  int Weak; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(a1);
  Weak = wil::details::GetWeakReference<AppViewDataSourceAdapter>(v3, a1);
  if ( Weak < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1755LL,
      (__int64)"internal\\sdk\\inc\\wil/com.h",
      (const char *)(unsigned int)Weak);
    __debugbreak();
  }
  return a1;
}
