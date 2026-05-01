/*
 * XREFs of ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180079AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1800106C8 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800153F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800162E4 (-GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180016770 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180079C7C (-GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PE.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::CanTransitionFromStart(
        CortanaDesktopExperienceView *this,
        unsigned __int8 *a2)
{
  float v3; // xmm0_4
  float v5; // xmm1_4
  LONG v6; // eax
  float v7; // xmm0_4
  LONG v8; // eax
  float v9; // xmm1_4
  HMONITOR v10; // rax
  CortanaDesktopExperienceView *v11; // rdi
  CortanaFlightingHelpers *v12; // rcx
  int IsTraySearchBoxVisible; // ebx
  HMONITOR v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  int v17; // esi
  HMONITOR v18; // r8
  int v19; // eax
  __int64 v21; // rdx
  bool v22; // [rsp+40h] [rbp-29h] BYREF
  HMONITOR v23; // [rsp+48h] [rbp-21h] BYREF
  float v24[2]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v25[8]; // [rsp+58h] [rbp-11h] BYREF
  struct tagRECT v26; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT v27; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v28; // [rsp+80h] [rbp+17h] BYREF
  RECT rc; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a2 = 1;
  v3 = *((float *)this + 45);
  v5 = *((float *)this + 46);
  v6 = (int)v3;
  v7 = v3 + *((float *)this + 47);
  rc.left = v6;
  v8 = (int)v5;
  v9 = v5 + *((float *)this + 48);
  rc.top = v8;
  rc.right = (int)v7;
  rc.bottom = (int)v9;
  v10 = MonitorFromRect(&rc, 0);
  if ( v10 )
  {
    v11 = (CortanaDesktopExperienceView *)((char *)this - 16);
    v22 = 0;
    IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(v11, v10, &v22);
    if ( IsTraySearchBoxVisible < 0 )
    {
      v21 = 499LL;
    }
    else
    {
      if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v12) && !v22 )
      {
LABEL_11:
        *a2 = 0;
        return 0LL;
      }
      IsTraySearchBoxVisible = CortanaDesktopExperienceView::GetImmersiveLauncherMonitorInformation(
                                 v11,
                                 &v23,
                                 &v26,
                                 &v28,
                                 &v27,
                                 (enum EDGEUI_TRAYSTUCKPLACE *)v25,
                                 &v22);
      if ( IsTraySearchBoxVisible < 0 )
      {
        v21 = 524LL;
      }
      else
      {
        v15 = 344LL;
        if ( v26.right - v26.left < 1196 )
          v15 = 320LL;
        v16 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v15, (__int64)v23, v14);
        v17 = v16 + v27.right - v27.left;
        IsTraySearchBoxVisible = CortanaDesktopExperienceView::GetStartSize(
                                   v11,
                                   (struct Windows::Foundation::Size *)v24);
        if ( IsTraySearchBoxVisible >= 0 )
        {
          v19 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x1E0, (__int64)v23, v18);
          if ( (float)v19 <= v24[1] && (float)v17 <= v24[0] )
            return 0LL;
          goto LABEL_11;
        }
        v21 = 528LL;
      }
    }
  }
  else
  {
    IsTraySearchBoxVisible = -2147418113;
    v21 = 497LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)IsTraySearchBoxVisible);
  return (unsigned int)IsTraySearchBoxVisible;
}
