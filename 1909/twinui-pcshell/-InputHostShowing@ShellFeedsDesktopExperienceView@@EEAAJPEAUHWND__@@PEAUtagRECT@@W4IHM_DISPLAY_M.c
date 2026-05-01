/*
 * XREFs of ?InputHostShowing@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x18009D590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x18009D61C (-IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009EE24 (-PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShellFeedsDesktopExperienceView_InputHostShowing@ShellFeedsTelemetry@@SAXXZ @ 0x18009F8B8 (-ShellFeedsDesktopExperienceView_InputHostShowing@ShellFeedsTelemetry@@SAXXZ.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::InputHostShowing(__int64 a1)
{
  ShellFeedsDesktopExperienceView *v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (ShellFeedsDesktopExperienceView *)(a1 - 40);
  if ( !ShellFeedsDesktopExperienceView::IsViewVisible((ShellFeedsDesktopExperienceView *)(a1 - 40)) )
    return 0LL;
  ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_InputHostShowing();
  v2 = ShellFeedsDesktopExperienceView::PositionShellFeedsWindow(v1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x217,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
