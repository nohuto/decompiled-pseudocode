/*
 * XREFs of ?UpdateTabAppId@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180327698
 * Callers:
 *     ?AddItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180322518 (-AddItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compos.c)
 *     ?OnTabHostedAppChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180325430 (-OnTabHostedAppChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Interna.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180326F80 (-UpdateAppId@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multit.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AppViewDataSourceAdapter::UpdateTabAppId(
        AppViewDataSourceAdapter *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  __int64 v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v6 = *((_QWORD *)this + 11);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v9);
  v7 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct IApplicationView **))(*(_QWORD *)v6 + 24LL))(
         v6,
         a2,
         &v9);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      485LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  AppViewDataSourceAdapterBase::UpdateAppId((AppViewDataSourceAdapter *)((char *)this + 8), v9, a3);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v9);
}
