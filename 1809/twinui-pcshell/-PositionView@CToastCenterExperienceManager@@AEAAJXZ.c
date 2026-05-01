/*
 * XREFs of ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015C1A0
 * Callers:
 *     ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801599A0 (-DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MO.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180159C24 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18015ADB0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x18015B3E4 (-OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ?StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180010D50 (-StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180011118 (--1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180013C64 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013C94 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800153F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180015858 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CToastCenterExperienceManager::PositionView(CToastCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int LastError; // ebx
  __int64 v4; // rdx
  int v5; // eax
  HMONITOR v7; // rsi
  const char *v8; // r9
  __int64 v9; // rdx
  HMONITOR v10; // r8
  HWND WindowW; // rax
  __int64 v12; // rcx
  HRESULT v13; // eax
  LPVOID v14; // rbx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  double v19; // xmm0_8
  int v20; // eax
  int v21; // eax
  HMONITOR v22; // r8
  LONG bottom; // ecx
  int v24; // eax
  HMONITOR v25; // r8
  int v26; // ebx
  LANGID ThreadUILanguage; // ax
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h]
  struct tagRECT rcMonitor; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID pt_8; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h]
  struct tagMONITORINFO mi_4; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v34[40]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v29 = -2LL;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v34,
    (__int64)"EM_PositionViewActivity");
  v34[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v34);
  if ( *((_QWORD *)this + 16) )
  {
    if ( *((_QWORD *)this + 83) && *((_DWORD *)this + 168) == 1 )
    {
      rcMonitor.left = 0;
      rcMonitor.top = 0;
      rcMonitor.right = MulDiv((int)*((float *)this + 37), 150, 100);
      rcMonitor.bottom = MulDiv((int)*((float *)this + 38), 150, 100);
      v2 = CSingleViewShellExperience::SetPosition((CToastCenterExperienceManager *)((char *)this + 104), &rcMonitor);
      LastError = v2;
      if ( v2 < 0 )
      {
        v4 = 1146LL;
LABEL_44:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v4,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v2);
        goto LABEL_9;
      }
      pt_8 = 0LL;
      *(float *)&v32 = (float)(rcMonitor.right - rcMonitor.left);
      *((float *)&v32 + 1) = (float)(rcMonitor.bottom - rcMonitor.top);
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, LPVOID *))(**((_QWORD **)this + 83) + 64LL))(
             *((_QWORD *)this + 83),
             *((_QWORD *)this + 15),
             *((_QWORD *)this + 16),
             &pt_8);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1150LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
      goto LABEL_8;
    }
    pt_8 = 0LL;
    v7 = MonitorFromPoint(0LL, 1u);
    if ( v7 == (HMONITOR)-1LL )
    {
      v9 = 1158LL;
LABEL_14:
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v9,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                    v8);
      goto LABEL_9;
    }
    mi_4.cbSize = 40;
    memset_0(&mi_4.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v7, &mi_4) )
    {
      v9 = 1161LL;
      goto LABEL_14;
    }
    rcMonitor = mi_4.rcMonitor;
    if ( !*((_BYTE *)this + 400) )
      goto LABEL_30;
    rcMonitor = mi_4.rcWork;
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( !WindowW || !GetPropW(WindowW, L"IsAutoHideEnabled") )
      goto LABEL_30;
    v12 = *((_QWORD *)this + 79);
    if ( v12 )
      goto LABEL_28;
    pt_8 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pt_8);
    v13 = CoCreateInstance(
            &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
            0LL,
            0x404u,
            &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
            &pt_8);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1178LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_27;
    }
    v28 = 0LL;
    v14 = pt_8;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    v15 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)v14 + 24LL))(
            v14,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v28);
    v16 = retaddr;
    if ( v15 >= 0 )
    {
      v18 = v28;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 79);
      v15 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, char *))(*(_QWORD *)v18 + 72LL))(
              v18,
              v7,
              &SID_EdgeUi,
              &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
              (char *)this + 632);
      v16 = retaddr;
      if ( v15 >= 0 )
      {
LABEL_26:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
LABEL_27:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pt_8);
        v12 = *((_QWORD *)this + 79);
        if ( !v12 )
        {
LABEL_30:
          v19 = *((double *)this + 51);
          if ( v19 > 0.0 )
          {
            v20 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                    (ExperienceManagerUtils *)(unsigned int)(int)v19,
                    (__int64)v7,
                    v10);
            rcMonitor.bottom -= v20;
          }
          pt_8 = 0LL;
          v32 = 0LL;
          v21 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *, __int64 *))(**((_QWORD **)this + 55) + 40LL))(
                  *((_QWORD *)this + 55),
                  &pt_8,
                  &v28);
          if ( v21 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              1207LL,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
              (const char *)(unsigned int)v21);
          if ( !IsRectEmpty((const RECT *)&pt_8) )
          {
            bottom = rcMonitor.bottom;
            if ( rcMonitor.bottom > SHIDWORD(pt_8) )
            {
              if ( (((_DWORD)v28 - 1) & 0xFFFFFFFD) == 0 )
                bottom = HIDWORD(pt_8);
              rcMonitor.bottom = bottom;
            }
          }
          v24 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                  (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 38),
                  (__int64)v7,
                  v22);
          rcMonitor.top = rcMonitor.bottom - v24;
          v26 = (int)(float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                              (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 37),
                              (__int64)v7,
                              v25);
          ThreadUILanguage = GetThreadUILanguage();
          if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
            rcMonitor.right = v26 + rcMonitor.left;
          else
            rcMonitor.left = rcMonitor.right - v26;
          v2 = CSingleViewShellExperience::SetPosition(
                 (CToastCenterExperienceManager *)((char *)this + 104),
                 &rcMonitor);
          LastError = v2;
          if ( v2 < 0 )
          {
            v4 = 1229LL;
            goto LABEL_44;
          }
          goto LABEL_8;
        }
LABEL_28:
        v2 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v12 + 152LL))(v12, &rcMonitor);
        LastError = v2;
        if ( v2 < 0 )
        {
          v4 = 1192LL;
          goto LABEL_44;
        }
        goto LABEL_30;
      }
      v17 = 1184LL;
    }
    else
    {
      v17 = 1182LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v16,
      v17,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_26;
  }
LABEL_8:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v34, 0);
  LastError = 0;
LABEL_9:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v34);
  return LastError;
}
