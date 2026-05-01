/*
 * XREFs of ?IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x18009D61C
 * Callers:
 *     ?InputHostHiding@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x18009D520 (-InputHostHiding@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x18009D590 (-InputHostShowing@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_M.c)
 *     ?OnViewEventQueued@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18009E5CC (-OnViewEventQueued@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collect.c)
 *     ?SetClickFlyoutShowing@ShellFeedsDesktopExperienceView@@UEAAX_N@Z @ 0x18009F690 (-SetClickFlyoutShowing@ShellFeedsDesktopExperienceView@@UEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ShellFeedsDesktopExperienceView::IsViewVisible(ShellFeedsDesktopExperienceView *this)
{
  __int64 v1; // rcx
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 13);
  v2 = 0;
  v4 = 0;
  if ( v1 && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 80LL))(v1, &v4) >= 0 )
    return v4 != 0;
  return v2;
}
