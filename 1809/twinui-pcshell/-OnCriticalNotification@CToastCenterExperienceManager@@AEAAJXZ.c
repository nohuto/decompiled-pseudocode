/*
 * XREFs of ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015AC3C
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18015B8C0 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013C94 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180015858 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800E7154 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180158E10 (--1EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QE.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180159F3C (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015DAA4 (-StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ?TurnedScreenOn@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180160C88 (-TurnedScreenOn@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::OnCriticalNotification(PTP_TIMER *pv)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  _QWORD v6[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v6,
    (__int64)"EM_CriticalNotificationActivity");
  v6[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *)v6);
  v2 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
  if ( v2 >= 0 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::TurnedScreenOn((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *)v6);
    v4 = CToastCenterExperienceManager::Launch(pv);
    v3 = v4;
    if ( v4 >= 0 )
    {
      wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6, 0);
      v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  else
  {
    v3 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x237,
           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
           (const char *)(unsigned int)v2);
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::~EM_CriticalNotificationActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *)v6);
  return v3;
}
