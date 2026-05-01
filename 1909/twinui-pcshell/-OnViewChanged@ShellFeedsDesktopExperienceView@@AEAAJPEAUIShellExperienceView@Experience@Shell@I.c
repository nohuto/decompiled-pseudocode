/*
 * XREFs of ?OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18009E000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E0D4 (-OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E3C8 (-OnViewDestroyed@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E6B0 (-OnViewHidden@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E770 (-OnViewPropertiesChanging@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewSetForegroundFailed@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E874 (-OnViewSetForegroundFailed@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewShown@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E91C (-OnViewShown@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaked@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E9DC (-OnViewUncloaked@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009EA9C (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::OnViewChanged(
        ShellFeedsDesktopExperienceView *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    switch ( v8 )
    {
      case 3:
        return ShellFeedsDesktopExperienceView::OnViewSetForegroundFailed(this);
      case 4:
        return ShellFeedsDesktopExperienceView::OnViewCloaking(this);
      case 6:
        return ShellFeedsDesktopExperienceView::OnViewDestroyed(this);
      case 7:
        return ShellFeedsDesktopExperienceView::OnViewHidden(this);
      case 8:
        return ShellFeedsDesktopExperienceView::OnViewPropertiesChanging(this);
      case 9:
        return ShellFeedsDesktopExperienceView::OnViewShown(this);
      case 10:
        return ShellFeedsDesktopExperienceView::OnViewUncloaking(this);
      case 11:
        return ShellFeedsDesktopExperienceView::OnViewUncloaked(this);
      default:
        return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x243,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
