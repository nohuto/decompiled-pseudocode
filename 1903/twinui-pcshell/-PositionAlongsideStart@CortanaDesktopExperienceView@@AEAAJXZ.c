/*
 * XREFs of ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180055CC4
 * Callers:
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180053F10 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 *     ?OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1801D07D0 (-OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x180055D10 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x180055E58 (-GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::PositionAlongsideStart(CortanaDesktopExperienceView *this)
{
  int ImmersiveLauncherMonitor; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HMONITOR v7; // [rsp+38h] [rbp+10h] BYREF

  ImmersiveLauncherMonitor = CortanaDesktopExperienceView::GetImmersiveLauncherMonitor(this, &v7);
  if ( ImmersiveLauncherMonitor < 0 )
  {
    v4 = 2079LL;
  }
  else
  {
    ImmersiveLauncherMonitor = CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(this, v7);
    if ( ImmersiveLauncherMonitor >= 0 )
      return 0LL;
    v4 = 2080LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)ImmersiveLauncherMonitor,
    v5);
  return (unsigned int)ImmersiveLauncherMonitor;
}
