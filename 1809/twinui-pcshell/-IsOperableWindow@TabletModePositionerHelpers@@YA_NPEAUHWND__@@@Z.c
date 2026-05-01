/*
 * XREFs of ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x1802FD7F8
 * Callers:
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802FD768 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18034B0F0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1803ACB60 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1803ACB80 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1803ACFE4 (-IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
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
