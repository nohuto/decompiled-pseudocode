/*
 * XREFs of ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802BCF9C
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B8EB0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_5e7eca425d355dd4f47aee6d08ea065a__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1802BE7B0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_5e7eca425d355dd4f47aee6d08ea065a__0__ea_1802BE7B0.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x1802B6B80 (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1802C6A38 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=20
void __fastcall TouchKeyboardExperienceManager::UpdateDockedModeAvailability(KeyboardHosting::TabTipAdapter **this)
{
  int MDMPolicyValue; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+28h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-50h] BYREF
  HSTRING v16; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER v17; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v18; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v14 = -2LL;
  v13 = 0;
  MDMPolicyValue = TouchKeyboardExperienceManager::GetMDMPolicyValue(
                     (TouchKeyboardExperienceManager *)this,
                     L"ForceTouchKeyboardDockedState",
                     (enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *)&v13);
  if ( MDMPolicyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      787LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)MDMPolicyValue);
  if ( v13 == 2 )
  {
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v17,
      L"KeyboardLayoutPositionEnabled_split_floating",
      0x2Du,
      0x2Cu);
    v3 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v18, v16);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        792LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v17, L"0", 2u, 1u);
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_handwriting_floating",
      0x33u,
      0x32u);
    v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v16, v18);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        793LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v17, L"0", 2u, 1u);
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_narrow_floating",
      0x2Eu,
      0x2Du);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v16, v18);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        794LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v17, L"0", 2u, 1u);
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_wide_floating",
      0x2Cu,
      0x2Bu);
    v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v16, v18);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        795LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v17, L"0", 2u, 1u);
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_full_floating",
      0x2Cu,
      0x2Bu);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v16, v18);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        796LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v17, L"1", 2u, 1u);
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_split_floating",
      0x2Du,
      0x2Cu);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v16, v18);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        800LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v17, L"1", 2u, 1u);
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_handwriting_floating",
      0x33u,
      0x32u);
    v9 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v16, v18);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        801LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v17, L"1", 2u, 1u);
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_narrow_floating",
      0x2Eu,
      0x2Du);
    v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v16, v18);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        802LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v17, L"1", 2u, 1u);
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_wide_floating",
      0x2Cu,
      0x2Bu);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v16, v18);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        803LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v17, L"1", 2u, 1u);
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardLayoutPositionEnabled_full_floating",
      0x2Cu,
      0x2Bu);
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v16, v18);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        804LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
  }
}
