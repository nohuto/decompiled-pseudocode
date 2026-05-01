/*
 * XREFs of ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180083740
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18003BAD4 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180040C58 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800413C4 (-GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800415B0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180055C0C (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1801CF688 (-GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PE.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::CanTransitionFromStart(
        CortanaDesktopExperienceView *this,
        unsigned __int8 *a2)
{
  float v5; // xmm0_4
  float v6; // xmm1_4
  LONG v7; // eax
  float v8; // xmm0_4
  LONG v9; // eax
  float v10; // xmm1_4
  HMONITOR v11; // rax
  int IsTraySearchBoxVisible; // ebx
  __int64 v13; // rdx
  CortanaDesktopExperienceView *v14; // rsi
  CortanaFlightingHelpers *v15; // rcx
  HMONITOR v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  int v19; // r14d
  HMONITOR v20; // r8
  int v21; // eax
  bool v22; // [rsp+40h] [rbp-29h] BYREF
  HMONITOR v23; // [rsp+48h] [rbp-21h] BYREF
  float v24[2]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v25[8]; // [rsp+58h] [rbp-11h] BYREF
  struct tagRECT v26; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v27; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v28; // [rsp+80h] [rbp+17h] BYREF
  RECT rc; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( IsSearchAndCortanaSplitEnabled() )
    goto LABEL_2;
  *a2 = 1;
  v5 = *((float *)this + 45);
  v6 = *((float *)this + 46);
  v7 = (int)v5;
  v8 = v5 + *((float *)this + 47);
  rc.left = v7;
  v9 = (int)v6;
  v10 = v6 + *((float *)this + 48);
  rc.top = v9;
  rc.right = (int)v8;
  rc.bottom = (int)v10;
  v11 = MonitorFromRect(&rc, 0);
  if ( v11 )
  {
    v14 = (CortanaDesktopExperienceView *)((char *)this - 16);
    v22 = 0;
    IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(
                               (CortanaDesktopExperienceView *)((char *)this - 16),
                               v11,
                               &v22);
    if ( IsTraySearchBoxVisible >= 0 )
    {
      if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v15) && !v22 )
      {
LABEL_2:
        *a2 = 0;
        return 0LL;
      }
      IsTraySearchBoxVisible = CortanaDesktopExperienceView::GetImmersiveLauncherMonitorInformation(
                                 v14,
                                 &v23,
                                 &v26,
                                 &v28,
                                 &v27,
                                 (enum EDGEUI_TRAYSTUCKPLACE *)v25,
                                 &v22);
      if ( IsTraySearchBoxVisible >= 0 )
      {
        v17 = 344LL;
        if ( v26.right - v26.left < 1196 )
          v17 = 320LL;
        v18 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                (ExperienceManagerUtils *)v17,
                (ExperienceManagerUtils *)v23,
                v16);
        v19 = v18 + v27.right - v27.left;
        IsTraySearchBoxVisible = CortanaDesktopExperienceView::GetStartSize(
                                   v14,
                                   (struct Windows::Foundation::Size *)v24);
        if ( IsTraySearchBoxVisible >= 0 )
        {
          v21 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                  (ExperienceManagerUtils *)0x1E0,
                  (ExperienceManagerUtils *)v23,
                  v20);
          if ( (float)v21 <= v24[1] && (float)v19 <= v24[0] )
            return 0LL;
          goto LABEL_2;
        }
        v13 = 543LL;
      }
      else
      {
        v13 = 539LL;
      }
    }
    else
    {
      v13 = 514LL;
    }
  }
  else
  {
    IsTraySearchBoxVisible = -2147418113;
    v13 = 512LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)IsTraySearchBoxVisible);
  return (unsigned int)IsTraySearchBoxVisible;
}
