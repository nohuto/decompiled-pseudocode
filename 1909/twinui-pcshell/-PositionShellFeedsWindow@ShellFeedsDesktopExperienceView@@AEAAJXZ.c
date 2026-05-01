/*
 * XREFs of ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009EE24
 * Callers:
 *     ?InputHostHiding@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x18009D520 (-InputHostHiding@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x18009D590 (-InputHostShowing@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_M.c)
 *     ?OnViewPropertiesChanging@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E770 (-OnViewPropertiesChanging@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009EA9C (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800412D8 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ??$ShellFeedsDesktopExperienceView_PositionShellFeedsWindow@AEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShellFeedsTelemetry@@SAXAEAJ0000000@Z @ 0x18009B6FC (--$ShellFeedsDesktopExperienceView_PositionShellFeedsWindow@AEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@She.c)
 *     ?ComputeShellFeedsWindowRect@ShellFeedsDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHAEBU2@1111H@Z @ 0x18009C1B8 (-ComputeShellFeedsWindowRect@ShellFeedsDesktopExperienceView@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCK.c)
 *     ?EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009C6A8 (-EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?GetMonitorInformation@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18009CF5C (-GetMonitorInformation@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW.c)
 *     ?GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18009D360 (-GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 *     ?ShowBorder@ShellFeedsDesktopExperienceView@@AEAAJUtagRECT@@0@Z @ 0x18009FB98 (-ShowBorder@ShellFeedsDesktopExperienceView@@AEAAJUtagRECT@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::PositionShellFeedsWindow(ShellFeedsDesktopExperienceView *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  HMONITOR v4; // rsi
  unsigned int v5; // ebx
  int *v6; // r14
  int MonitorInformation; // edi
  __int64 v8; // rdx
  int v10; // eax
  HMONITOR v11; // r8
  int v12; // edi
  HMONITOR v13; // r8
  int v14; // r15d
  HMONITOR v15; // r8
  int v16; // eax
  struct tagRECT v17; // xmm1
  struct tagRECT v18; // xmm0
  __int64 *v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  bool v22[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v23; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v24[16]; // [rsp+78h] [rbp-90h] BYREF
  struct tagRECT v25; // [rsp+88h] [rbp-80h] BYREF
  __int128 v26; // [rsp+98h] [rbp-70h] BYREF
  __int128 v27; // [rsp+A8h] [rbp-60h]
  __int128 v28; // [rsp+B8h] [rbp-50h]
  __int128 v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D8h] [rbp-30h]
  _OWORD v31[4]; // [rsp+E8h] [rbp-20h] BYREF
  struct tagRECT v32; // [rsp+128h] [rbp+20h] BYREF
  RECT rc; // [rsp+138h] [rbp+30h] BYREF
  struct tagRECT v34; // [rsp+148h] [rbp+40h] BYREF
  struct tagRECT v35; // [rsp+158h] [rbp+50h] BYREF
  RECT v36; // [rsp+168h] [rbp+60h] BYREF
  struct tagRECT v37; // [rsp+178h] [rbp+70h] BYREF
  RECT v38; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v30 = -2LL;
  v2 = *((float *)this + 34);
  rc.left = (int)v2;
  v3 = *((float *)this + 35);
  rc.top = (int)v3;
  rc.right = (int)(float)(v2 + *((float *)this + 36));
  rc.bottom = (int)(float)(v3 + *((float *)this + 37));
  v4 = MonitorFromRect(&rc, 0);
  if ( v4 )
  {
    v6 = (int *)((char *)this + 152);
    MonitorInformation = ShellFeedsDesktopExperienceView::GetMonitorInformation(
                           this,
                           v4,
                           &v34,
                           &v35,
                           &v25,
                           (ShellFeedsDesktopExperienceView *)((char *)this + 152),
                           v22);
    if ( MonitorInformation < 0 )
    {
      v8 = 1244LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)MonitorInformation);
      return (unsigned int)MonitorInformation;
    }
    v36 = 0LL;
    MonitorInformation = ShellFeedsDesktopExperienceView::EnsureInputHostManager(this);
    if ( MonitorInformation < 0 )
    {
      v8 = 1248LL;
      goto LABEL_5;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _BYTE *))(**((_QWORD **)this + 12) + 40LL))(
            *((_QWORD *)this + 12),
            &v36,
            v24);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4E1,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v10);
    v38 = v36;
    v12 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)0x28,
            (ExperienceManagerUtils *)v4,
            v11);
    v14 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 32),
            (ExperienceManagerUtils *)v4,
            v13);
    v16 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
            (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 33),
            (ExperienceManagerUtils *)v4,
            v15);
    v17 = v35;
    v18 = v35;
    v32 = v35;
    if ( *v6 != -1 )
    {
      v18 = *(struct tagRECT *)ShellFeedsDesktopExperienceView::ComputeShellFeedsWindowRect(
                                 (__int64)&v34,
                                 (__int64)&v37,
                                 *v6,
                                 v14,
                                 v16,
                                 (__int64)&v34,
                                 &v35,
                                 &v25,
                                 &rc,
                                 &v38,
                                 v12);
      v32 = v18;
      v17 = v35;
    }
    v25 = v17;
    v37 = v18;
    ShellFeedsDesktopExperienceView::ShowBorder(this, &v37, &v25);
    ShellFeedsDesktopExperienceView::GetViewWrapper((__int64)this, (__int64 *)&v23);
    v19 = v23;
    if ( v23 )
    {
      memset_0(&v26, 0, 0x40uLL);
      LODWORD(v26) = v32.right - v32.left;
      DWORD1(v26) = v32.bottom - v32.top;
      *(_QWORD *)&v27 = *(_QWORD *)&v32.left;
      LODWORD(v28) = 0;
      v20 = *v19;
      v31[0] = v26;
      v31[1] = v27;
      v31[2] = v28;
      v31[3] = v29;
      v21 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *))(v20 + 496))(v19, v31);
      v5 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x505,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
          (const char *)(unsigned int)v21);
LABEL_17:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        return v5;
      }
      ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_PositionShellFeedsWindow<long &,long &,long &,long &,long &,long &,long &,long &>(
        (__int64)&v32,
        (__int64)&v32.top,
        (__int64)&v32.right,
        (__int64)&v32.bottom,
        (__int64)&v34,
        (__int64)&v34.top,
        (__int64)&v34.right,
        (__int64)&v34.bottom);
    }
    v5 = 0;
    goto LABEL_17;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL);
  return v5;
}
