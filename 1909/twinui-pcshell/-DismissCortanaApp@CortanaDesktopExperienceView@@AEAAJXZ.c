/*
 * XREFs of ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801EE8AC
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800426C8 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1801EE5A0 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?OnDismiss@CortanaDesktopExperienceView@@EEAAJXZ @ 0x1801EF5D0 (-OnDismiss@CortanaDesktopExperienceView@@EEAAJXZ.c)
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1801EF620 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801EFA80 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18004D9EC (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x18007E830 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::DismissCortanaApp(CortanaDesktopExperienceView *this)
{
  if ( CortanaDesktopExperienceView::IsViewVisible(this) )
  {
    CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, 0);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
    *((_BYTE *)this + 242) = 0;
  }
  return 0LL;
}
