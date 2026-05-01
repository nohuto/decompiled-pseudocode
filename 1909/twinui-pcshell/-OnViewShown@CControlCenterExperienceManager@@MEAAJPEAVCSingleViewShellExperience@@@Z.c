/*
 * XREFs of ?OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180199B30
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180045F20 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004632C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180046470 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18004E2F0 (--1EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18004E31C (-StartActivity@EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004E9EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlShowHideAnimations@@@wil@@CAX_NW.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1800505F8 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x180199DD0 (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::OnViewShown(
        struct _TP_TIMER **this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  _QWORD v8[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v8,
    (__int64)"EM_ViewShownActivity");
  v8[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity *)v8);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 46,
    0LL);
  wil::Feature<__WilFeatureTraits_Feature_XamlShowHideAnimations>::ReportUsageToService(v4, v3, v5);
  v6 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(this + 28));
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x311,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  CControlCenterExperienceManager::OnVisibilityChanged((CControlCenterExperienceManager *)(this - 11));
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v8, 0);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity::~EM_ViewShownActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity *)v8);
  return 0LL;
}
