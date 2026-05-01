/*
 * XREFs of ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A8D54
 * Callers:
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1801A4530 (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 *     ?Show@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x1801A8C18 (-Show@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180049014 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A38E0 (--0-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1801A4124 (--1EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A9ACC (-StartActivity@EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801A9D9C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::ShowInHolographic(CToastCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int128 v6; // [rsp+30h] [rbp-D8h] BYREF
  float v7; // [rsp+40h] [rbp-C8h]
  float v8; // [rsp+44h] [rbp-C4h]
  __int64 v9; // [rsp+48h] [rbp-C0h]
  struct tagRECT v10; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v11[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v9 = -2LL;
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"EM_ShowInHolographic");
  v11[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic *)v11);
  if ( !*((_QWORD *)this + 86) || !*((_QWORD *)this + 84) )
    goto LABEL_8;
  v10.left = 0;
  v10.top = 0;
  v10.right = MulDiv((int)*((float *)this + 37), 150, 100);
  v10.bottom = MulDiv((int)*((float *)this + 38), 150, 100);
  v2 = CSingleViewShellExperience::SetPosition((CToastCenterExperienceManager *)((char *)this + 104), &v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *((_QWORD *)&v6 + 1) = 0LL;
    v7 = (float)(v10.right - v10.left);
    v8 = (float)(v10.bottom - v10.top);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 84) + 48LL))(
           *((_QWORD *)this + 84),
           *((_QWORD *)this + 15),
           *((_QWORD *)this + 16),
           (char *)&v6 + 8);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 1411LL;
      goto LABEL_7;
    }
LABEL_8:
    wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
    v3 = 0;
    goto LABEL_9;
  }
  v4 = 1407LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_9:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic::~EM_ShowInHolographic((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ShowInHolographic *)v11);
  return v3;
}
