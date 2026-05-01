/*
 * XREFs of ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802BCDC8
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B8EB0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_c2ab84185f0f22aae4f946284935bdbd__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1802BE880 (wistd--_Func_impl_wistd--_Callable_obj__lambda_c2ab84185f0f22aae4f946284935bdbd__0__ea_1802BE880.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x1802B6B80 (-GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1802B70E8 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1802C6A38 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x1803B2710 (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateDictationAvailability(KeyboardHosting::TabTipAdapter **this)
{
  int MDMPolicyValue; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7; // [rsp+28h] [rbp-58h]
  HSTRING_HEADER v8; // [rsp+30h] [rbp-50h] BYREF
  HSTRING v9; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v11; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v7 = -2LL;
  v6 = 0;
  MDMPolicyValue = TouchKeyboardExperienceManager::GetMDMPolicyValue(
                     (TouchKeyboardExperienceManager *)this,
                     L"TouchKeyboardDictationButtonAvailability",
                     (enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *)&v6);
  if ( MDMPolicyValue < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      811LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)MDMPolicyValue);
  if ( v6 == 2
    || !v6
    && ((unsigned int)IsUserAssignedAccessSingleApp(-4LL)
     || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v3)) )
  {
    v9 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v8, L"1", 2u, 1u);
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Dictation_Disabled", 0x13u, 0x12u);
    v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v11, v9);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        818LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
    v9 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v8, L"Dictation_Disabled", 0x13u, 0x12u);
    v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v9, v11);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        822LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    v9 = 0LL;
    v11 = 0LL;
  }
}
