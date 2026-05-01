/*
 * XREFs of ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18035E100
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1800789B0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18035E070 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18040EE00 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18040EE20 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18040F27C (-IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall TabletModePositionerHelpers::IsOperableWindow(TabletModePositionerHelpers *this, HWND a2)
{
  HWND v3; // rdx
  char v4; // bl
  HWND v5; // rdx
  HWND v6; // rdx

  v4 = 0;
  if ( IsWindow((HWND)this)
    && ApplicationViewHelpers::CanResizeWindow(this, v3)
    && ApplicationViewHelpers::CanMaximizeWindow(this, v5) )
  {
    return !ApplicationViewHelpers::IsWindowInHighZOrderBand(this, v6);
  }
  return v4;
}
