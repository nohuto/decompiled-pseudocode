/*
 * XREFs of ?OnTabHostedAppChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180305F50
 * Callers:
 *     _lambda_f9e3bc53e319d6941e1b16373eb1ffba_::operator() @ 0x180302D64 (_lambda_f9e3bc53e319d6941e1b16373eb1ffba_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?FindItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180303F70 (-FindItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compo.c)
 *     ?UpdateTabAppId@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180308198 (-UpdateTabAppId@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windo.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapter::OnTabHostedAppChanged(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  RTL_SRWLOCK *v4; // rbx
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v5; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v6; // [rsp+50h] [rbp+18h]

  v4 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  v6 = v4;
  AppViewDataSourceAdapter::FindItemForTab((__int64)this, (__int64 *)&v5, (__int64)a2);
  if ( v5 )
    AppViewDataSourceAdapter::UpdateTabAppId((AppViewDataSourceAdapter *)this, a2, v5);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v5);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
