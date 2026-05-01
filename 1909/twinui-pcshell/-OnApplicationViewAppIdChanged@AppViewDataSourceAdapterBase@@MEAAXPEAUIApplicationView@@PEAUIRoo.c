/*
 * XREFs of ?OnApplicationViewAppIdChanged@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180324CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1803227D0 (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x1803266A0 (-RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z.c)
 */

void __fastcall AppViewDataSourceAdapterBase::OnApplicationViewAppIdChanged(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(AppViewDataSourceAdapterBase *))(*(_QWORD *)this + 80LL))(this) )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(AppViewDataSourceAdapterBase *, struct IApplicationView *, struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(*(_QWORD *)this + 104LL))(
        this,
        a2,
        a3);
    }
    else
    {
      AppViewDataSourceAdapterBase::AddItemForView(this, &v6, a2);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v6);
    }
  }
  else if ( a3 )
  {
    AppViewDataSourceAdapterBase::RemoveItemForView(this, a2);
  }
}
