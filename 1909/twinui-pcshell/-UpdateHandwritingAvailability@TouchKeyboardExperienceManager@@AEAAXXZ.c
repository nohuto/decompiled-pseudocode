/*
 * XREFs of ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180339DFC
 * Callers:
 *     wistd::__function::__func__lambda_0160c1676dac5054a5ed0e512f7ab1af__void___cdecl(void)_::operator() @ 0x18032CEB0 (wistd--__function--__func__lambda_0160c1676dac5054a5ed0e512f7ab1af__void___cdecl(void)_--operato.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180331F00 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x18032F2F0 (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CommitModelHandwritingPanel@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1803336A4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CommitModelHandwritingPanel@@@wil@@C.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180344700 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall TouchKeyboardExperienceManager::UpdateHandwritingAvailability(
        KeyboardHosting::TabTipAdapter **this,
        __int64 a2,
        __int64 a3)
{
  TouchKeyboardExperienceManager *v4; // rcx
  int MDMPolicyValue; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-50h] BYREF
  HSTRING v13; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER v14; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v15; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v11 = -2LL;
  wil::Feature<__WilFeatureTraits_Feature_CommitModelHandwritingPanel>::ReportUsageToService((__int64)this, a2, a3);
  v10 = 0;
  MDMPolicyValue = TouchKeyboardExperienceManager::GetMDMPolicyValue(
                     v4,
                     L"TouchKeyboardHandwritingModeAvailability",
                     (enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *)&v10);
  if ( MDMPolicyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3C6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)MDMPolicyValue);
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v14,
    L"KeyboardModeEnabled_handwritinglinenarrow",
    0x2Au,
    0x29u);
  v6 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v15, v13);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3C9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  v15 = 0LL;
  if ( v10 == 2 )
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v14, L"0", 2u, 1u);
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_handwritingline",
      0x24u,
      0x23u);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v13, v15);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3CE,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v14, L"1", 2u, 1u);
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"KeyboardModeEnabled_handwritingline",
      0x24u,
      0x23u);
    v8 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v13, v15);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D2,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v14, L"handwritingline", 0x10u, 0xFu);
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"DefaultPenKeyboardMode", 0x17u, 0x16u);
    v9 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v13, v15);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D3,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
  }
}
