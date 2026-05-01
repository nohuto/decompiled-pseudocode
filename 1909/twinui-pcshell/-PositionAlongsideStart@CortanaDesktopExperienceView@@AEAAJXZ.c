/*
 * XREFs of ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18004995C
 * Callers:
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x18004B140 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 *     ?OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1801EFEB0 (-OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x180046A44 (-GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800499A8 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
    v4 = 2078LL;
  }
  else
  {
    ImmersiveLauncherMonitor = CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(this, v7);
    if ( ImmersiveLauncherMonitor >= 0 )
      return 0LL;
    v4 = 2079LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)ImmersiveLauncherMonitor,
    v5);
  return (unsigned int)ImmersiveLauncherMonitor;
}
