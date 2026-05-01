/*
 * XREFs of ?UnhookKeyboard@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009FD38
 * Callers:
 *     ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E0D4 (-OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E3C8 (-OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?ShellFeedsDesktopExperienceView_UnhookKeyboard@ShellFeedsTelemetry@@SAXXZ @ 0x18009F948 (-ShellFeedsDesktopExperienceView_UnhookKeyboard@ShellFeedsTelemetry@@SAXXZ.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::UnhookKeyboard(ShellFeedsDesktopExperienceView *this)
{
  if ( `anonymous namespace'::g_hKeyboardHook )
  {
    ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_UnhookKeyboard((__int64)this);
    UnhookWindowsHookEx(`anonymous namespace'::g_hKeyboardHook);
    `anonymous namespace'::g_hKeyboardHook = 0LL;
  }
  return 0LL;
}
