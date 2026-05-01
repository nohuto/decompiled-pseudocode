/*
 * XREFs of ?OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B7D50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1802B6240 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@wi.c)
 *     ?SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z @ 0x1802C6AF8 (-SetTrackPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N0@Z.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1803B3254 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnAccessibilityKeyboardRequestShow(
        TouchKeyboardExperienceManager *this)
{
  KeyboardHosting::TabTipAdapter *v1; // rbx
  bool v2; // r8
  bool v3; // dl
  int v4; // eax
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int16 v8; // [rsp+44h] [rbp+Ch]
  int v9; // [rsp+48h] [rbp+10h] BYREF
  __int16 v10; // [rsp+4Ch] [rbp+14h]

  v1 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 69);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::GetCachedFeatureEnabledState((__int64)this);
  LOBYTE(v8) = 0;
  v9 = 0;
  v10 = v8;
  wil::details::ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::GetFeaturePropertyCache'::`2'::data,
    13050423LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v9,
    0,
    3);
  (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v1 + 1) + 40LL))((_QWORD *)v1 + 1);
  IhmNotification::SendKeyboardSetVisible(0LL, 0, v2);
  *(_BYTE *)(*((_QWORD *)v1 + 12) + 494LL) = 1;
  v4 = KeyboardHosting::TabTipAdapter::SetTrackPosition(v1, v3, 1);
  v5 = v4;
  if ( v4 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x505,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E1,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
