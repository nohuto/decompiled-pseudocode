/*
 * XREFs of ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802BDD48
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B8EB0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_1c1d9d604a06d58e211af7dfd46b8574__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1802BE780 (wistd--_Func_impl_wistd--_Callable_obj__lambda_1c1d9d604a06d58e211af7dfd46b8574__0__ea_1802BE780.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x1802B6B80 (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1802C6A38 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall TouchKeyboardExperienceManager::UpdateNarrowLayoutAvailability(KeyboardHosting::TabTipAdapter **this)
{
  int MDMPolicyValue; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+28h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-50h] BYREF
  HSTRING v12; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER v13; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v14; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v10 = -2LL;
  v9 = 0;
  MDMPolicyValue = TouchKeyboardExperienceManager::GetMDMPolicyValue(
                     (TouchKeyboardExperienceManager *)this,
                     L"TouchKeyboardNarrowModeAvailability",
                     (enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *)&v9);
  if ( MDMPolicyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      711LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)MDMPolicyValue);
  if ( v9 == 2 )
  {
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v13, L"KeyboardModeEnabled_narrow", 0x1Bu, 0x1Au);
    v3 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v14, v12);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        716LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v13, L"0", 2u, 1u);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_narrow12key",
      0x20u,
      0x1Fu);
    v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v12, v14);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        717LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v13, L"0", 2u, 1u);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_stroke",
      0x1Bu,
      0x1Au);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v12, v14);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        718LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v13, L"1", 2u, 1u);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_narrow",
      0x1Bu,
      0x1Au);
    v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v12, v14);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        722LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v13, L"1", 2u, 1u);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_narrow12key",
      0x20u,
      0x1Fu);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v12, v14);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        723LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    v14 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v13, L"1", 2u, 1u);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_stroke",
      0x1Bu,
      0x1Au);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v12, v14);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        724LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
}
