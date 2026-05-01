/*
 * XREFs of _lambda_617d626f0bf366f050e3b18ed68b910c_::operator() @ 0x1802AA5F4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64___::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_617d626f0bf366f050e3b18ed68b910c___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64_::Invoke @ 0x1802AD190 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802AD190.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@1@XZ @ 0x180091A00 (--$query@UIInspectable@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-AV-$.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?OnTabHostedAppChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802AD9E0 (-OnTabHostedAppChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Interna.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_617d626f0bf366f050e3b18ed68b910c_::operator()(
        __int64 a1,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        __int64 a3)
{
  int v5; // eax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  try
  {
    wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<IInspectable>((_QWORD *)a1, &v9);
    v10 = 0LL;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v10);
    v5 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)a3 + 48LL))(
           a3,
           &v10);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        335LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v5);
    AppViewDataSourceAdapter::OnTabHostedAppChanged(*(AppViewDataSourceAdapter **)(a1 + 8), v10);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v10);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x61,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      v6);
  }
  return 0LL;
}
