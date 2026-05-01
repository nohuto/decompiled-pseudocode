/*
 * XREFs of _lambda_8e29ff95208472147f8d85b39b7eadad_::operator() @ 0x1802AA778
 * Callers:
 *     _lambda_6e44f5f72665425d0cc60b8992d9e369_::operator() @ 0x1802AA6E4 (_lambda_6e44f5f72665425d0cc60b8992d9e369_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802AABC8 (-AddItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compos.c)
 *     ?FindItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802ABA8C (-FindItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compo.c)
 *     ?RemoveItemForTab@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802AEB2C (-RemoveItemForTab@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_8e29ff95208472147f8d85b39b7eadad_::operator()(
        AppViewDataSourceAdapter **a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // eax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v6; // rsi
  AppViewDataSourceAdapter *v7; // rdi
  RTL_SRWLOCK *v8; // rbx
  int v9; // eax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v10; // rsi
  AppViewDataSourceAdapter *v11; // rdi
  RTL_SRWLOCK *v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v15; // [rsp+68h] [rbp+38h] BYREF
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF
  RTL_SRWLOCK *v17; // [rsp+78h] [rbp+48h] BYREF

  v15 = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v15);
  v5 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)a3 + 64LL))(
         a3,
         &v15);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      311LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = v15;
  v7 = *a1;
  v8 = (RTL_SRWLOCK *)((char *)*a1 + 176);
  AcquireSRWLockExclusive(v8);
  v17 = v8;
  AppViewDataSourceAdapter::FindItemForTab(v7, &v16, v6);
  if ( v16 )
    AppViewDataSourceAdapter::RemoveItemForTab(v7, v6);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v15);
  v9 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)a3 + 72LL))(
         a3,
         &v15);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      313LL,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = v15;
  v11 = *a1;
  v12 = (RTL_SRWLOCK *)((char *)*a1 + 176);
  AcquireSRWLockExclusive(v12);
  AppViewDataSourceAdapter::FindItemForTab(v11, &v16, v10);
  if ( !v16 )
  {
    AppViewDataSourceAdapter::AddItemForTab(v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v17);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
  if ( v12 )
    ReleaseSRWLockExclusive(v12);
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v15);
}
