/*
 * XREFs of AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_4f02fd2cc1c1e9b5768550b824f350bd___ @ 0x18031FE08
 * Callers:
 *     ?RegisterTabWatcher@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180326378 (-RegisterTabWatcher@AppViewDataSourceAdapter@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____lambda_f9e3bc53e319d6941e1b16373eb1ffba___ @ 0x18031FB58 (wil--MakeAgileCallback_Windows--Foundation--ITypedEventHandler_Windows--Internal--ComposableShel.c)
 *     ??$com_weak_query@PEAVAppViewDataSourceAdapter@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVAppViewDataSourceAdapter@@@Z @ 0x180320E9C (--$com_weak_query@PEAVAppViewDataSourceAdapter@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_exc.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_4f02fd2cc1c1e9b5768550b824f350bd___(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  wil::com_weak_query<AppViewDataSourceAdapter *>(&v8, &v7);
  v6[0] = (__int64)v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64 *))(*v8 + 8))(v8);
  v6[1] = *a3;
  wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____lambda_f9e3bc53e319d6941e1b16373eb1ffba___(
    a2,
    (__int64)v6);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v6);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v8);
  return a2;
}
