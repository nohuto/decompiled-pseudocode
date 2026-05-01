/*
 * XREFs of ?SetClickFlyoutShowing@ShellFeedsDesktopExperienceView@@UEAAX_N@Z @ 0x18009F690
 * Callers:
 *     <none>
 * Callees:
 *     ??$ShellFeedsDesktopExperienceView_SetClickFlyoutShowing@AEA_N@ShellFeedsTelemetry@@SAXAEA_N@Z @ 0x18009B83C (--$ShellFeedsDesktopExperienceView_SetClickFlyoutShowing@AEA_N@ShellFeedsTelemetry@@SAXAEA_N@Z.c)
 *     ?GetTrayWindowFromLastActivatedMonitor@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x18009D2D0 (-GetTrayWindowFromLastActivatedMonitor@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x18009D61C (-IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 */

void __fastcall ShellFeedsDesktopExperienceView::SetClickFlyoutShowing(ShellFeedsDesktopExperienceView *this, char a2)
{
  HWND TrayWindowFromLastActivatedMonitor; // rax
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_SetClickFlyoutShowing<bool &>((__int64)&v4);
  *((_BYTE *)this + 150) = v4;
  if ( ShellFeedsDesktopExperienceView::IsViewVisible((ShellFeedsDesktopExperienceView *)((char *)this - 8)) && v4 )
  {
    TrayWindowFromLastActivatedMonitor = ShellFeedsDesktopExperienceView::GetTrayWindowFromLastActivatedMonitor((ShellFeedsDesktopExperienceView *)((char *)this - 8));
    if ( TrayWindowFromLastActivatedMonitor )
      PostMessageW(TrayWindowFromLastActivatedMonitor, *((_DWORD *)this + 38), 5uLL, *((unsigned __int8 *)this + 150));
  }
}
