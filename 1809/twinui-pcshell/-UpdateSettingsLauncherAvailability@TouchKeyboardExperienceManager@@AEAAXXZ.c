/*
 * XREFs of ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180093B70
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_b3f750a11065c5dcf19e2d2a348f0727__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180093D30 (wistd--_Func_impl_wistd--_Callable_obj__lambda_b3f750a11065c5dcf19e2d2a348f0727__0__ea_180093D30.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B8EB0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x1802B70E8 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1802C6A38 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     IsCurrentUserAssignedAccess @ 0x1803B26FC (IsCurrentUserAssignedAccess.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability(
        KeyboardHosting::TabTipAdapter **this)
{
  TouchKeyboardExperienceManager *v2; // rcx
  int v3; // eax
  int v4; // eax
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-31h] BYREF
  HSTRING v6; // [rsp+48h] [rbp-19h]
  HSTRING_HEADER v7; // [rsp+50h] [rbp-11h] BYREF
  HSTRING v8; // [rsp+68h] [rbp+7h]
  HSTRING_HEADER v9; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING v10; // [rsp+88h] [rbp+27h]
  HSTRING_HEADER v11; // [rsp+90h] [rbp+2Fh] BYREF
  HSTRING v12; // [rsp+A8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( *((_BYTE *)this + 724)
    || (unsigned int)IsCurrentUserAssignedAccess(this)
    || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v2) )
  {
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v9, L"0", 2u, 1u);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"IsSettingsLauncherAvailable", 0x1Cu, 0x1Bu);
    v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v12, v10);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        896LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
  }
  else
  {
    v6 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v8 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v7, L"IsSettingsLauncherAvailable", 0x1Cu, 0x1Bu);
    v3 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[87], v8, v6);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        900LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
}
