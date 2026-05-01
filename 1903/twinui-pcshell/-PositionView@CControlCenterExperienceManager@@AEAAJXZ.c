/*
 * XREFs of ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x18017AD48
 * Callers:
 *     ?DisplaySettingsChange@CControlCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180179C70 (-DisplaySettingsChange@CControlCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180179FC0 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 *     ?Show@CControlCenterExperienceManager@@AEAAJXZ @ 0x18017B6B4 (-Show@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180040A08 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800415B0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18004C5F8 (--1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18004C8F8 (-StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004CBEC (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004CD30 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18004CDD4 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::PositionView(CControlCenterExperienceManager *this)
{
  HMONITOR v2; // rdi
  const char *v3; // r9
  __int64 v4; // rdx
  HMONITOR v5; // r8
  unsigned int LastError; // ebx
  double v7; // xmm0_8
  float v8; // xmm6_4
  LANGID ThreadUILanguage; // ax
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  struct tagRECT pt_8; // [rsp+30h] [rbp-D8h] BYREF
  struct tagMONITORINFO mi_4; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v16[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v16,
    (__int64)"EM_PositionViewActivity");
  v16[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v16);
  if ( !*((_QWORD *)this + 16) )
    goto LABEL_18;
  *(_QWORD *)&pt_8.left = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( v2 != (HMONITOR)-1LL )
  {
    mi_4.cbSize = 40;
    memset_0(&mi_4.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v2, &mi_4) )
    {
      v4 = 668LL;
      goto LABEL_6;
    }
    pt_8 = mi_4.rcMonitor;
    if ( *((_BYTE *)this + 392) )
      pt_8 = mi_4.rcWork;
    v7 = *((double *)this + 58);
    if ( v7 > 0.0 )
      pt_8.bottom -= ExperienceManagerUtils::ScaleByPerMonitorDPI(
                       (ExperienceManagerUtils *)(unsigned int)(int)v7,
                       (ExperienceManagerUtils *)v2,
                       v5);
    if ( *((_BYTE *)this + 393) )
      pt_8.top = pt_8.bottom
               - ExperienceManagerUtils::ScaleByPerMonitorDPI(
                   (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 38),
                   (ExperienceManagerUtils *)v2,
                   v5);
    v8 = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                  (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 37),
                  (ExperienceManagerUtils *)v2,
                  v5);
    ThreadUILanguage = GetThreadUILanguage();
    v10 = (unsigned int)IsBiDiLocale(ThreadUILanguage) == 0;
    v11 = (int)v8;
    if ( v10 )
      pt_8.left = pt_8.right - v11;
    else
      pt_8.right = pt_8.left + v11;
    v12 = CSingleViewShellExperience::SetPosition((CControlCenterExperienceManager *)((char *)this + 104), &pt_8);
    LastError = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C0,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_19;
    }
LABEL_18:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v16, 0);
    LastError = 0;
    goto LABEL_19;
  }
  v4 = 665LL;
LABEL_6:
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v4,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                v3);
LABEL_19:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v16);
  return LastError;
}
