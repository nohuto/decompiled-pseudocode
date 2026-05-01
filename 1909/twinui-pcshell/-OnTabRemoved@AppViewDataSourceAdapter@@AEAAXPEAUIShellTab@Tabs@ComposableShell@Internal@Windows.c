/*
 * XREFs of ?OnTabRemoved@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180325728
 * Callers:
 *     _lambda_695800337203f165c386051dd76ff0a7_::operator() @ 0x180321FA8 (_lambda_695800337203f165c386051dd76ff0a7_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?FindItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180323440 (-FindItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compo.c)
 *     ?RemoveItemForTab@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803265FC (-RemoveItemForTab@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapter::OnTabRemoved(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v6; // [rsp+50h] [rbp+18h]

  v4 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  v6 = v4;
  AppViewDataSourceAdapter::FindItemForTab((__int64)this, &v5, (__int64)a2);
  if ( v5 )
    AppViewDataSourceAdapter::RemoveItemForTab((AppViewDataSourceAdapter *)this, a2);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v5);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
