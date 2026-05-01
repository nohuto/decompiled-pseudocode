/*
 * XREFs of ?CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z @ 0x180344CEC
 * Callers:
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x18034ACA0 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x18034ACE4 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 * Callees:
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18007FFA8 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ @ 0x180348778 (-IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180348898 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 */

char __fastcall TabletModePositioner::CanShowSwitcherOrLauncher(TabletModePositioner *this, char a2)
{
  __int64 v4; // rcx
  char v5; // bl

  v5 = 0;
  if ( TabletModePositioner::IsTabletMode(this)
    && !*(_QWORD *)(v4 + 288)
    && !GetSystemMetrics(0x2000)
    && (a2 || !(unsigned __int8)TabletModePositioner::IsSwitcherVisible(this, 15LL))
    && !TabletModePositioner::IsFullScreenViewVisible(this) )
  {
    return 1;
  }
  return v5;
}
