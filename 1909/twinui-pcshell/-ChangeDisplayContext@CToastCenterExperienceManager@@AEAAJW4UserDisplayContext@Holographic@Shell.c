/*
 * XREFs of ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1801A4530
 * Callers:
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A61E0 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ @ 0x1801AC7E0 (-UnregisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004632C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180046470 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXAEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1801A34F8 (--$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_Disp.c)
 *     ??1EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801A3FF0 (--1EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?DisplayContextChangedToHeadMountedDisplay@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A4A3C (-DisplayContextChangedToHeadMountedDisplay@EM_DisplayContextChanged@NotificationCenterTelemetry@.c)
 *     ?DisplayContextChangedToMonitor@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A4B34 (-DisplayContextChangedToMonitor@EM_DisplayContextChanged@NotificationCenterTelemetry@Notificatio.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A4F94 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A55E8 (-MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A5674 (-MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A8D54 (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A9144 (-StartActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::ChangeDisplayContext(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-168h] BYREF
  __int64 v9; // [rsp+28h] [rbp-160h]
  _QWORD v10[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v9 = -2LL;
  v8 = a2;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v10,
    (__int64)"EM_DisplayContextChanged");
  v10[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v10);
  if ( !*(_QWORD *)(a1 + 128) || !*(_QWORD *)(a1 + 688) || !*(_QWORD *)(a1 + 672) || *(_DWORD *)(a1 + 680) == a2 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::NoChangeToDisplayContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext &>(
      (__int64)v10,
      &v8);
    goto LABEL_17;
  }
  *(_DWORD *)(a1 + 680) = a2;
  if ( a2 != 1 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::DisplayContextChangedToMonitor((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v10);
    v4 = CToastCenterExperienceManager::MoveToastCenterViewToDesktop((CToastCenterExperienceManager *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1461LL;
      goto LABEL_15;
    }
    v4 = CToastCenterExperienceManager::HideInHolographic((CToastCenterExperienceManager *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1463LL;
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::DisplayContextChangedToHeadMountedDisplay((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v10);
  v4 = CToastCenterExperienceManager::MoveToastCenterViewToHolographic((CToastCenterExperienceManager *)a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 144) == 2 )
    {
      v4 = CToastCenterExperienceManager::ShowInHolographic((CToastCenterExperienceManager *)a1);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 1454LL;
        goto LABEL_15;
      }
    }
LABEL_17:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v10, 0);
    v5 = 0;
    goto LABEL_18;
  }
  v6 = 1449LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_18:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::~EM_DisplayContextChanged((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged *)v10);
  return v5;
}
