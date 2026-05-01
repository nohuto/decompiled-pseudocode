/*
 * XREFs of ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801599A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013C94 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180013D64 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180013E10 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180015858 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015C1A0 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?RepositioningView@EM_DisplaySettingsChangeActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015CC4C (-RepositioningView@EM_DisplaySettingsChangeActivity@NotificationCenterTelemetry@NotificationCent.c)
 *     ?StartActivity@EM_DisplaySettingsChangeActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015DD1C (-StartActivity@EM_DisplaySettingsChangeActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  int v10; // [rsp+20h] [rbp-178h] BYREF
  __int64 v11; // [rsp+28h] [rbp-170h]
  _QWORD v12[40]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v11 = -2LL;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v12,
    (__int64)"EM_DisplaySettingsChangeActivity");
  v12[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplaySettingsChangeActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplaySettingsChangeActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplaySettingsChangeActivity *)v12);
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v10);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v8 = 608LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      v7,
      v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_8;
  }
  if ( v10 )
  {
    if ( (a3 & 0x3F) != 0 )
    {
      NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplaySettingsChangeActivity::RepositioningView((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplaySettingsChangeActivity *)v12);
      v6 = CToastCenterExperienceManager::PositionView((CToastCenterExperienceManager *)(a1 - 40));
      v7 = retaddr;
      if ( v6 < 0 )
      {
        v8 = 619LL;
        goto LABEL_7;
      }
    }
  }
LABEL_8:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12, 0);
  v12[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplaySettingsChangeActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
  return 0LL;
}
