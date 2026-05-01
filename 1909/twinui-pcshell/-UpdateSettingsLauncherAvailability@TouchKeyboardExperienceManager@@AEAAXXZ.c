/*
 * XREFs of ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18033A440
 * Callers:
 *     ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x180331EC0 (-OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180331F00 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?IsAnyOOBE@@YA_NXZ @ 0x18032F860 (-IsAnyOOBE@@YA_NXZ.c)
 *     ?IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x18032FAC4 (-IsKeyboardFilterServiceRunning@TouchKeyboardExperienceManager@@AEBA_NXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180344700 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x180433F4C (IsUserAssignedAccessSingleApp.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability(
        KeyboardHosting::TabTipAdapter **this)
{
  TouchKeyboardExperienceManager *v2; // rcx
  int v3; // eax
  int v4; // eax
  HSTRING_HEADER v5; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v6; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v8; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( (unsigned int)IsUserAssignedAccessSingleApp(-4LL)
    || TouchKeyboardExperienceManager::IsKeyboardFilterServiceRunning(v2)
    || IsAnyOOBE() )
  {
    v6 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v5, L"0", 2u, 1u);
    v8 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"IsSettingsLauncherAvailable",
      0x1Cu,
      0x1Bu);
    v4 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v8, v6);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x481,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
  }
  else
  {
    v8 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v6 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v5, L"IsSettingsLauncherAvailable", 0x1Cu, 0x1Bu);
    v3 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v6, v8);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x485,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    v6 = 0LL;
    v8 = 0LL;
  }
}
