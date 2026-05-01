/*
 * XREFs of ?OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z @ 0x1802AD760
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802ABB0C (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     ?FindViewForWindow@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1802ABBBC (-FindViewForWindow@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exce.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppViewDataSourceAdapterBase::OnShellHookMessage(RTL_SRWLOCK *this, __int64 a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rbx
  const char *v7; // r9
  RTL_SRWLOCK *v8; // rdi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v13; // [rsp+68h] [rbp+20h]

  v6 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  try
  {
    v13 = v6;
    if ( a2 == 6 )
    {
      v8 = this - 1;
      AppViewDataSourceAdapterBase::FindViewForWindow((__int64)v8, &v11, a3);
      if ( v11 )
      {
        AppViewDataSourceAdapterBase::FindItemForView((__int64)v8, &v12, v11);
        if ( v12 )
          (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v8->Ptr + 12))(v8, v11);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
    }
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5C,
                           (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
                           v7);
  }
  return result;
}
