/*
 * XREFs of ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x180078DE0
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18002646C (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180078D8C (-OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(
        CortanaDesktopExperienceView *this)
{
  if ( *((_DWORD *)this + 35) == 3 && *((_BYTE *)this + 226) )
  {
    if ( !*((_BYTE *)this + 227) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 72LL))(*((_QWORD *)this + 12));
      *((_BYTE *)this + 227) = 1;
    }
  }
  else
  {
    *((_BYTE *)this + 227) = 0;
  }
}
