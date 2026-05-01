/*
 * XREFs of ?NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z @ 0x18009DB18
 * Callers:
 *     ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E0D4 (-OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E3C8 (-OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009EA9C (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ??$ShellFeedsDesktopExperienceView_NotifyTrayOfFlyoutVisibility@AEA_N@ShellFeedsTelemetry@@SAXAEA_N@Z @ 0x18009B594 (--$ShellFeedsDesktopExperienceView_NotifyTrayOfFlyoutVisibility@AEA_N@ShellFeedsTelemetry@@SAXAE.c)
 *     ?GetTrayWindowFromLastActivatedMonitor@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x18009D2D0 (-GetTrayWindowFromLastActivatedMonitor@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::NotifyTrayOfFlyoutVisibility(UINT *this, unsigned __int8 a2)
{
  HWND TrayWindowFromLastActivatedMonitor; // rax
  HWND v4; // rdi
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( *((_BYTE *)this + 157) != a2 )
  {
    ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_NotifyTrayOfFlyoutVisibility<bool &>((__int64)&v6);
    TrayWindowFromLastActivatedMonitor = ShellFeedsDesktopExperienceView::GetTrayWindowFromLastActivatedMonitor((ShellFeedsDesktopExperienceView *)this);
    v4 = TrayWindowFromLastActivatedMonitor;
    if ( TrayWindowFromLastActivatedMonitor )
    {
      PostMessageW(TrayWindowFromLastActivatedMonitor, 0x4F6u, v6, 0LL);
      PostMessageW(v4, this[40], 6LL - (v6 != 0), *((unsigned __int8 *)this + 158));
      *((_BYTE *)this + 157) = v6;
    }
  }
  return 0LL;
}
