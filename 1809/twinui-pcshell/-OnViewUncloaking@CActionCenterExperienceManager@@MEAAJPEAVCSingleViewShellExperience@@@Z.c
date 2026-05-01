/*
 * XREFs of ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000CA00
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800232B0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x18000C9B4 (-IsHighContrast@@YAHXZ.c)
 *     ??1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18000CC50 (--1EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18000CC7C (-StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18000CD64 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CAX_NW.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x18000CF40 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_18000CF40.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x18000D07C (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18000FB08 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013C94 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180014580 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180015858 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18008D08C (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800F9A44 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?load@_Atomic_bool@std@@QEBA_NW4memory_order@2@@Z @ 0x18014C168 (-load@_Atomic_bool@std@@QEBA_NW4memory_order@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnViewUncloaking(
        CActionCenterExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  __int64 v4; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  HWND v6; // rbx
  HSTRING v7; // rcx
  const WCHAR *StringRawBuffer; // rax
  const char *v9; // r9
  bool v10; // bl
  _BOOL8 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  int ViewPosition; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  int v20; // ebx
  struct tagRECT *p_rc_8; // [rsp+28h] [rbp-E0h]
  struct tagRECT rc_8; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v24; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v25[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  if ( !(unsigned __int8)std::_Atomic_bool::load((char *)this + 440) )
  {
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      v25,
      "EM_ViewUncloakingActivity");
    v25[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::`vftable';
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)v25);
    v6 = ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v5);
    v7 = (HSTRING)*((_QWORD *)this + 37);
    if ( v7 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(v7, 0LL);
      if ( !SetWindowTextW(v6, StringRawBuffer) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x406,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          v9);
    }
    v10 = (unsigned int)Mirror_IsThreadRTL() != 0;
    v11 = (unsigned int)IsHighContrast() != 0;
    v12 = v10 ? 4 : 1;
    v13 = v12 | 2;
    if ( !*((_BYTE *)this + 305) )
      v13 = v12;
    LODWORD(p_rc_8) = 0;
    v14 = CSingleViewShellExperience::ShowBorder((char *)this + 16, v13, v11, 0LL);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x416,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v14,
        0);
    v15 = CActionCenterExperienceManager::RegisterWithLightDismiss((CActionCenterExperienceManager *)((char *)this - 104));
    v16 = retaddr;
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x417,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v15,
        (int)p_rc_8);
    wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::ReportUsageToService(v16);
    ViewPosition = CActionCenterExperienceManager::GetViewPosition(
                     (CActionCenterExperienceManager *)((char *)this - 104),
                     (struct tagRECT *)&v24);
    v18 = retaddr;
    if ( ViewPosition >= 0 )
    {
      rc_8 = (struct tagRECT)v24;
      v20 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 8)) - _mm_cvtsi128_si32(v24);
      if ( (unsigned int)Mirror_IsThreadRTL() )
        v20 = -v20;
      OffsetRect(&rc_8, v20, 0);
      p_rc_8 = &rc_8;
      ViewPosition = CExperienceManagerAnimationHelper::Begin((char *)this + 224, a2[3], 27263018LL, &rc_8);
      v18 = retaddr;
      if ( ViewPosition >= 0 )
        goto LABEL_19;
      v19 = 1069LL;
    }
    else
    {
      v19 = 1052LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v18,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ViewPosition,
      (int)p_rc_8);
LABEL_19:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v25, 0LL);
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity::~EM_ViewUncloakingActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewUncloakingActivity *)v25);
    return 0LL;
  }
  *((_QWORD *)this + 54) = v4;
  return 0LL;
}
