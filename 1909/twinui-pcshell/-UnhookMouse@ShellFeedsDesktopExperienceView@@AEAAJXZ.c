/*
 * XREFs of ?UnhookMouse@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009FD70
 * Callers:
 *     ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E0D4 (-OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E3C8 (-OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?ShellFeedsDesktopExperienceView_UnhookMouse@ShellFeedsTelemetry@@SAXXZ @ 0x18009F9D8 (-ShellFeedsDesktopExperienceView_UnhookMouse@ShellFeedsTelemetry@@SAXXZ.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::UnhookMouse(ShellFeedsDesktopExperienceView *this)
{
  if ( `anonymous namespace'::g_hMouseHook )
  {
    ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_UnhookMouse((__int64)this);
    UnhookWindowsHookEx(`anonymous namespace'::g_hMouseHook);
    `anonymous namespace'::g_hMouseHook = 0LL;
  }
  return 0LL;
}
