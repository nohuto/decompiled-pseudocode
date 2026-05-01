/*
 * XREFs of ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x1801779E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180050B50 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x180050BE8 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801745D0 (--0-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180174E44 (--1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180174E9C (--1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x180177544 (-StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QE.c)
 *     ?StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4InvokeMethod@3@W4InputType@3@@Z @ 0x180177838 (-StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEA.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180177B50 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActionCenterExperienceManager::StartSwipe(
        CActionCenterExperienceManager *this,
        __int64 a2,
        struct tagPOINT a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  _QWORD v8[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  if ( *((_DWORD *)this + 28) == 2 )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v8,
      (__int64)"DismissActionCenter");
    v8[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
    NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::StartActivity((__int64)v8, 5, 2);
    v4 = CActionCenterExperienceManager::Hide((CActionCenterExperienceManager *)((char *)this - 48));
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x198,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *)v8);
      return v5;
    }
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8);
    NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *)v8);
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v8,
      (__int64)"LaunchActionCenter");
    v8[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::`vftable';
    NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity((__int64)v8, 3, 2);
    v7 = CActionCenterExperienceManager::Show((CActionCenterExperienceManager *)((char *)this - 48));
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::~LaunchActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter *)v8);
      return v5;
    }
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v8);
    NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::~LaunchActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter *)v8);
  }
  return 0LL;
}
