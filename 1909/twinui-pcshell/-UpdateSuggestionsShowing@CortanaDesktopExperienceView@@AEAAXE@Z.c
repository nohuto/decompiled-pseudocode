/*
 * XREFs of ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x18006BD14
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180022540 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18006BC64 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1801EE5A0 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 * Callees:
 *     <none>
 */

void __fastcall CortanaDesktopExperienceView::UpdateSuggestionsShowing(CortanaDesktopExperienceView *this, char a2)
{
  __int64 v2; // rax
  void (*v3)(void); // rax

  if ( a2 != *((_BYTE *)this + 136) )
  {
    *((_BYTE *)this + 136) = a2;
    v2 = **((_QWORD **)this + 12);
    if ( a2 )
      v3 = *(void (**)(void))(v2 + 120);
    else
      v3 = *(void (**)(void))(v2 + 128);
    v3();
  }
}
