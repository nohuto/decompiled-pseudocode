/*
 * XREFs of ?OnTabPropertyChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180305FF4
 * Callers:
 *     _lambda_7be9b31505ec13bab2864f0aa84a83a3_::operator() @ 0x180302BD0 (_lambda_7be9b31505ec13bab2864f0aa84a83a3_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18003F9F4 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?FindItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180303F70 (-FindItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compo.c)
 *     ?RemoveItemForTab@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180307104 (-RemoveItemForTab@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Win.c)
 *     ?UpdateTabActivationTimestamp@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180308114 (-UpdateTabActivationTimestamp@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@.c)
 *     ?UpdateTabDisplayName@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180308248 (-UpdateTabDisplayName@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal.c)
 *     ?UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x180308308 (-UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapter::OnTabPropertyChanged(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        Microsoft::WRL::Wrappers::Details **a3)
{
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v6; // rsi
  HSTRING v7; // r8
  AppViewDataSourceAdapter *v8; // rcx
  HSTRING v9; // r8
  HSTRING v10; // r8
  HSTRING v11; // r8
  HSTRING v12; // r8
  AppViewDataSourceAdapter *v13; // rcx
  HSTRING v14; // r8
  int v15; // eax
  _BYTE v16[8]; // [rsp+20h] [rbp-59h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *v17[3]; // [rsp+28h] [rbp-51h] BYREF
  HSTRING_HEADER v18; // [rsp+40h] [rbp-39h] BYREF
  HSTRING v19; // [rsp+58h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-19h] BYREF
  HSTRING v21; // [rsp+78h] [rbp-1h]
  HSTRING_HEADER v22; // [rsp+80h] [rbp+7h] BYREF
  HSTRING v23; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v17[1] = (struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *)-2LL;
  v6 = (struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *)&this[22];
  AcquireSRWLockExclusive(this + 22);
  v17[2] = v6;
  AppViewDataSourceAdapter::FindItemForTab((__int64)this, (__int64 *)v17, (__int64)a2);
  if ( v17[0] )
  {
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DisplayName", 0xCu, 0xBu);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v21, v7) )
    {
      v21 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"UnselectedIcon", 0xFu, 0xEu);
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v21, v9)
        && (v23 = 0LL,
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v22, L"SelectedIcon", 0xDu, 0xCu),
            (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v23, v10))
        && (v19 = 0LL,
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"DefaultIcon", 0xCu, 0xBu),
            (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v19, v11)) )
      {
        v19 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"LastSelectedTime", 0x11u, 0x10u);
        if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v19, v12) )
        {
          v19 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v18, L"IsDestroyed", 0xCu, 0xBu);
          if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*a3, v19, v14) )
          {
            v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, _BYTE *))(*(_QWORD *)a2 + 184LL))(
                    a2,
                    v16);
            if ( v15 < 0 )
            {
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                409LL,
                (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                (const char *)(unsigned int)v15);
              __debugbreak();
            }
            if ( v16[0] )
              AppViewDataSourceAdapter::RemoveItemForTab((AppViewDataSourceAdapter *)this, a2);
          }
        }
        else
        {
          AppViewDataSourceAdapter::UpdateTabActivationTimestamp(v13, a2, v17[0]);
        }
      }
      else
      {
        AppViewDataSourceAdapter::UpdateTabIcon((AppViewDataSourceAdapter *)this, a2, v17[0]);
      }
    }
    else
    {
      AppViewDataSourceAdapter::UpdateTabDisplayName(v8, a2, v17[0]);
    }
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v17);
  if ( v6 )
    ReleaseSRWLockExclusive((PSRWLOCK)v6);
}
