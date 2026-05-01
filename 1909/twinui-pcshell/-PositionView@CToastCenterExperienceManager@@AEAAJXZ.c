/*
 * XREFs of ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A7690
 * Callers:
 *     ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801A4C30 (-DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MO.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A4F94 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801A6250 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x1801A6874 (-OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1800419D0 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180043D38 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004632C (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180046470 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180046630 (-StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180046F74 (--1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180049014 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::PositionView(IUnknown **this)
{
  int v2; // eax
  unsigned int LastError; // ebx
  __int64 v4; // rdx
  int v5; // eax
  HMONITOR v7; // rsi
  const char *v8; // r9
  __int64 v9; // rdx
  HMONITOR v10; // rdx
  HWND WindowW; // rax
  HRESULT Service; // eax
  int PerMonitorDpi; // eax
  int v14; // ebx
  double v15; // xmm0_8
  int v16; // eax
  int v17; // eax
  LONG bottom; // ecx
  int v19; // eax
  int v20; // ebx
  LANGID ThreadUILanguage; // ax
  int v22; // eax
  POINT pt; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C8h]
  struct tagRECT rcMonitor; // [rsp+48h] [rbp-C0h] BYREF
  __int64 rc_8; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h]
  struct tagMONITORINFO mi_4; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v29[40]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v24 = -2LL;
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v29,
    (__int64)"EM_PositionViewActivity");
  v29[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::StartActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v29);
  if ( this[16] )
  {
    if ( !this[84] || *((_DWORD *)this + 170) != 1 )
    {
      pt = 0LL;
      v7 = MonitorFromPoint(0LL, 1u);
      if ( v7 == (HMONITOR)-1LL )
      {
        v9 = 1170LL;
      }
      else
      {
        mi_4.cbSize = 40;
        memset_0(&mi_4.rcMonitor, 0, 0x24uLL);
        if ( GetMonitorInfoW(v7, &mi_4) )
        {
          rcMonitor = mi_4.rcMonitor;
          if ( *((_BYTE *)this + 400) )
          {
            rcMonitor = mi_4.rcWork;
            WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
            if ( WindowW )
            {
              if ( GetPropW(WindowW, L"IsAutoHideEnabled") )
              {
                pt = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pt);
                Service = IUnknown_QueryService(
                            this[78],
                            (const GUID *const)&SID_EdgeUi,
                            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
                            (void **)&pt);
                if ( Service >= 0 )
                {
                  v22 = (*(__int64 (__fastcall **)(POINT, struct tagRECT *))(**(_QWORD **)&pt + 152LL))(pt, &rcMonitor);
                  LastError = v22;
                  if ( v22 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x4A8,
                      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                      (const char *)(unsigned int)v22);
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pt);
                    goto LABEL_9;
                  }
                }
                else
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x4A6,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                    (const char *)(unsigned int)Service);
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pt);
              }
            }
          }
          PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v7, v10);
          v14 = PerMonitorDpi;
          v15 = *((double *)this + 51);
          if ( v15 > 0.0 )
          {
            v16 = MulDiv((int)v15, PerMonitorDpi, 96);
            rcMonitor.bottom -= v16;
          }
          rc_8 = 0LL;
          v27 = 0LL;
          v17 = ((__int64 (__fastcall *)(IUnknown *, __int64 *, POINT *))this[55]->lpVtbl[1].Release)(
                  this[55],
                  &rc_8,
                  &pt);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4B8,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
              (const char *)(unsigned int)v17);
          if ( !IsRectEmpty((const RECT *)&rc_8) )
          {
            bottom = rcMonitor.bottom;
            if ( rcMonitor.bottom > SHIDWORD(rc_8) )
            {
              if ( ((pt.x - 1) & 0xFFFFFFFD) == 0 )
                bottom = HIDWORD(rc_8);
              rcMonitor.bottom = bottom;
            }
          }
          v19 = MulDiv((int)*((float *)this + 38), v14, 96);
          rcMonitor.top = rcMonitor.bottom - v19;
          v20 = MulDiv((int)*((float *)this + 37), v14, 96);
          ThreadUILanguage = GetThreadUILanguage();
          if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
            rcMonitor.right = v20 + rcMonitor.left;
          else
            rcMonitor.left = rcMonitor.right - v20;
          v2 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(this + 13), &rcMonitor);
          LastError = v2;
          if ( v2 < 0 )
          {
            v4 = 1230LL;
            goto LABEL_37;
          }
          goto LABEL_8;
        }
        v9 = 1173LL;
      }
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v9,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                    v8);
      goto LABEL_9;
    }
    rcMonitor.left = 0;
    rcMonitor.top = 0;
    rcMonitor.right = MulDiv((int)*((float *)this + 37), 150, 100);
    rcMonitor.bottom = MulDiv((int)*((float *)this + 38), 150, 100);
    v2 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(this + 13), &rcMonitor);
    LastError = v2;
    if ( v2 < 0 )
    {
      v4 = 1158LL;
LABEL_37:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      goto LABEL_9;
    }
    rc_8 = 0LL;
    *(float *)&v27 = (float)(rcMonitor.right - rcMonitor.left);
    *((float *)&v27 + 1) = (float)(rcMonitor.bottom - rcMonitor.top);
    v5 = ((__int64 (__fastcall *)(IUnknown *, IUnknown *, IUnknown *, __int64 *))this[84]->lpVtbl[2].Release)(
           this[84],
           this[15],
           this[16],
           &rc_8);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x48A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
LABEL_8:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v29, 0);
  LastError = 0;
LABEL_9:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *)v29);
  return LastError;
}
