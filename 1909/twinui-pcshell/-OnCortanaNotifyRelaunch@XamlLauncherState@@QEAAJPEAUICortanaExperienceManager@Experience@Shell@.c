/*
 * XREFs of ?OnCortanaNotifyRelaunch@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800A8C50
 * Callers:
 *     <none>
 * Callees:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x18005FF50 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_TaskbarAutoHideServicingBugFix@@@wil@@SA_NXZ @ 0x1800A8DBC (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_TaskbarAutoHideServicingBugFix@@@wil@.c)
 */

__int64 __fastcall XamlLauncherState::OnCortanaNotifyRelaunch(__int64 *a1, __int64 a2, float *a3)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  LONG v7; // eax
  float v8; // xmm1_4
  RECT rc; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_TaskbarAutoHideServicingBugFix>::__private_IsEnabled() )
  {
    v5 = a3[1];
    v6 = *a3 + a3[2];
    rc.left = (int)*a3;
    v7 = (int)v5;
    v8 = v5 + a3[3];
    rc.top = v7;
    rc.right = (int)v6;
    rc.bottom = (int)v8;
    a1[123] = (__int64)MonitorFromRect(&rc, 0);
  }
  XamlLauncherState::PostCortanaOrSearchVisibility((XamlLauncherState *)a1, 1u, a1[123]);
  return 0LL;
}
