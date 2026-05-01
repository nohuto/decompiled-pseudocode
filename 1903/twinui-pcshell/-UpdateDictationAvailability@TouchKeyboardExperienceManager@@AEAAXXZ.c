/*
 * XREFs of ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18031983C
 * Callers:
 *     wistd::__function::__func__lambda_c2ab84185f0f22aae4f946284935bdbd__void___cdecl(void)_::operator() @ 0x18030DB50 (wistd--__function--__func__lambda_c2ab84185f0f22aae4f946284935bdbd__void___cdecl(void)_--operato.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803129F0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_DictationLangExpansion@@@wil@@SA_NXZ @ 0x18009E5FC (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_DictationLangExpansion@@@wil@@SA_NXZ.c)
 *     ??$?0$0BL@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BL@$$CBG@Z @ 0x18012C62C (--$-0$0BL@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BL@$$CBG@Z.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x18030FE30 (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x180310600 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_VoiceTypingOverlayUX@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180314174 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_VoiceTypingOverlayUX@@@wil@@CAX_NW4R.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180324F2C (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1804148AC (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall TouchKeyboardExperienceManager::UpdateDictationAvailability(KeyboardHosting::TabTipAdapter **this)
{
  int MDMPolicyValue; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rcx
  HSTRING_HEADER *v9; // rbx
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+28h] [rbp-58h]
  HSTRING_HEADER v15; // [rsp+30h] [rbp-50h] BYREF
  HSTRING v16; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v18; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v14 = -2LL;
  v13 = 0;
  MDMPolicyValue = TouchKeyboardExperienceManager::GetMDMPolicyValue(
                     (TouchKeyboardExperienceManager *)this,
                     L"TouchKeyboardDictationButtonAvailability",
                     (enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *)&v13);
  if ( MDMPolicyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x408,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)MDMPolicyValue);
  if ( v13 == 2
    || !v13
    && ((unsigned int)IsUserAssignedAccessSingleApp(-4LL)
     || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v3)) )
  {
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v15, L"1", 2u, 1u);
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Dictation_Disabled", 0x13u, 0x12u);
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v18, v16);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x40F,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
  }
  else
  {
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v15, L"Dictation_Disabled", 0x13u, 0x12u);
    v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v16, v18);
    v7 = retaddr;
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x413,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    v16 = 0LL;
    v18 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_VoiceTypingOverlayUX>::ReportUsageToService((__int64)v7, v5, v6);
    if ( !wil::Feature<__WilFeatureTraits_Feature_DictationLangExpansion>::__private_IsEnabled(v8) )
    {
      v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, (const WCHAR **)off_180431550);
      v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, L"DisabledDictationLanguages");
      v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(
              this[91],
              (HSTRING)v10[1].Reserved.Reserved1,
              (HSTRING)v9[1].Reserved.Reserved1);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x41D,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
      v18 = 0LL;
    }
  }
}
