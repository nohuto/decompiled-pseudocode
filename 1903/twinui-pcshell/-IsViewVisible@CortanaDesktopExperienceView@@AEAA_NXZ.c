/*
 * XREFs of ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18005182C
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180039C10 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180051870 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801CF17C (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?InputHostHiding@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1801CF810 (-InputHostHiding@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1801CF870 (-InputHostShowing@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE.c)
 *     ?OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1801D07D0 (-OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CortanaDesktopExperienceView::IsViewVisible(CortanaDesktopExperienceView *this)
{
  __int64 v1; // rcx
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 21);
  v2 = 0;
  v4 = 0;
  if ( v1 && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 80LL))(v1, &v4) >= 0 )
    return v4 != 0;
  return v2;
}
