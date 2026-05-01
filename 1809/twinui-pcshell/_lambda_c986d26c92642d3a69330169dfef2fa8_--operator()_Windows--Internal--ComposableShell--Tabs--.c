/*
 * XREFs of _lambda_c986d26c92642d3a69330169dfef2fa8_::operator()_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____ptr64_ @ 0x1802A7904
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____ptr64___::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_c986d26c92642d3a69330169dfef2fa8___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____ptr64_::Invoke @ 0x1802AD1C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802AD1C0.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800186D8 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180025DAC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?OnTabSelectionChanged@AppViewDataSourceAdapterBase@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802ADCD8 (-OnTabSelectionChanged@AppViewDataSourceAdapterBase@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Int.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_c986d26c92642d3a69330169dfef2fa8_::operator()_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____ptr64_(
        AppViewDataSourceAdapterBase **a1,
        __int64 a2,
        _QWORD *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  HSTRING v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v12; // [rsp+20h] [rbp-50h] BYREF
  HSTRING string; // [rsp+28h] [rbp-48h] BYREF
  struct IInspectable *v14[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v16; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v14[1] = (struct IInspectable *)-2LL;
  v14[0] = 0LL;
  v5 = Microsoft::WRL::WeakRef::InternalResolve(
         (Microsoft::WRL::WeakRef *)(a1 + 1),
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( v14[0] )
    {
      WindowsDeleteString(0LL);
      string = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(*(_QWORD *)*a3 + 56LL))(*a3, &string);
      v6 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x142,
          (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
          (const char *)(unsigned int)v7);
LABEL_12:
        WindowsDeleteString(string);
        goto LABEL_16;
      }
      v16 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsSelected", 0xBu, 0xAu);
      if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                            (Microsoft::WRL::Wrappers::Details *)string,
                            v16,
                            v8) )
      {
        v12 = 0LL;
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v12);
        v9 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)*a3 + 48LL))(
               *a3,
               &v12);
        v6 = v9;
        if ( v9 < 0 )
        {
          v10 = 326LL;
LABEL_11:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
            (const char *)(unsigned int)v9);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
          goto LABEL_12;
        }
        v9 = AppViewDataSourceAdapterBase::OnTabSelectionChanged(*a1, v12);
        v6 = v9;
        if ( v9 < 0 )
        {
          v10 = 327LL;
          goto LABEL_11;
        }
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v12);
      }
      WindowsDeleteString(string);
    }
    v6 = 0;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13D,
    (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
    (const char *)(unsigned int)v5);
LABEL_16:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v14);
  return v6;
}
