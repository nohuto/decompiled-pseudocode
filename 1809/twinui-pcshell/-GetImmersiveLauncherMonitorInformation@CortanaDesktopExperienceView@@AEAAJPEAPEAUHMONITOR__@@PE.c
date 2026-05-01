/*
 * XREFs of ?GetImmersiveLauncherMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180079C7C
 * Callers:
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180079AF0 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x180013F98 (-GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x180016558 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::GetImmersiveLauncherMonitorInformation(
        CortanaDesktopExperienceView *this,
        HMONITOR *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        enum EDGEUI_TRAYSTUCKPLACE *a6,
        bool *a7)
{
  int ImmersiveLauncherMonitor; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ImmersiveLauncherMonitor = CortanaDesktopExperienceView::GetImmersiveLauncherMonitor(this, a2);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v13 = 1808LL;
  }
  else
  {
    ImmersiveLauncherMonitor = CortanaDesktopExperienceView::GetMonitorInformation(this, *a2, a3, a4, a5, a6, a7);
    if ( ImmersiveLauncherMonitor >= 0 )
      return 0LL;
    v13 = 1811LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)ImmersiveLauncherMonitor);
  return (unsigned int)ImmersiveLauncherMonitor;
}
