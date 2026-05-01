/*
 * XREFs of ?DisplaySettingsChange@ShellFeedsExperienceManagerImpl@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180093100
 * Callers:
 *     <none>
 * Callees:
 *     ?ShellFeedsExperienceManagerImpl_DisplaySettingsChange@ShellFeedsTelemetry@@SAXXZ @ 0x180094A30 (-ShellFeedsExperienceManagerImpl_DisplaySettingsChange@ShellFeedsTelemetry@@SAXXZ.c)
 *     ?_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180094FC4 (-_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  if ( (a3 & 0x15) != 0 )
  {
    ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_DisplaySettingsChange();
    ShellFeedsExperienceManagerImpl::_Hide((ShellFeedsExperienceManagerImpl *)(a1 - 16));
  }
  return 0LL;
}
