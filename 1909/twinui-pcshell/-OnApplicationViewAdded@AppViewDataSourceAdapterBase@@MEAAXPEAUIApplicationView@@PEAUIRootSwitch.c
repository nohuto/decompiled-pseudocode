/*
 * XREFs of ?OnApplicationViewAdded@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180324C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1803227D0 (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 */

void __fastcall AppViewDataSourceAdapterBase::OnApplicationViewAdded(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(AppViewDataSourceAdapterBase *))(*(_QWORD *)this + 80LL))(this) )
  {
    if ( !a3 )
    {
      AppViewDataSourceAdapterBase::AddItemForView(this, &v6, a2);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v6);
    }
  }
}
