/*
 * XREFs of ?IsOwnedAppWindow@KioskPositioner@@AEAA_NPEAUHWND__@@@Z @ 0x1803BCC04
 * Callers:
 *     ?OnShellTrackedWindowPosChanged@KioskPositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1803BD2A0 (-OnShellTrackedWindowPosChanged@KioskPositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRE.c)
 *     ?OnShowWindowPolicy@KioskPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1803BD390 (-OnShowWindowPolicy@KioskPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall KioskPositioner::IsOwnedAppWindow(KioskPositioner *this, HWND a2)
{
  return (GetWindowLongPtrW(a2, -20) & 0x40000) != 0 && GetWindow(a2, 4u) != 0LL;
}
