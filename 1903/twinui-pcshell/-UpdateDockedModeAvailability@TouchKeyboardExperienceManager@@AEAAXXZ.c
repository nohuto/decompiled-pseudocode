/*
 * XREFs of ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180319AA4
 * Callers:
 *     wistd::__function::__func__lambda_5e7eca425d355dd4f47aee6d08ea065a__void___cdecl(void)_::operator() @ 0x18030DA30 (wistd--__function--__func__lambda_5e7eca425d355dd4f47aee6d08ea065a__void___cdecl(void)_--operato.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803129F0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x18030FE30 (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180324F2C (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
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
      (void *)0x3F0,
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
    v3 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v18, v16);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F5,
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
    v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v16, v18);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F6,
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
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v16, v18);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F7,
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
    v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v16, v18);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F8,
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
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v16, v18);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F9,
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
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v16, v18);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3FD,
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
    v9 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v16, v18);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3FE,
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
    v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v16, v18);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3FF,
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
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v16, v18);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x400,
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
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v16, v18);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x401,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
  }
}
