/*
 * XREFs of ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x18039D3A4
 * Callers:
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18039DBE0 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800222E0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18040EE00 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18040EE20 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18040F210 (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18040F27C (-IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall Win32ViewOperationPolicy::IsOperableView(
        Win32ViewOperationPolicy *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  char v3; // bl
  ApplicationViewHelpers *WindowForView; // rdi
  HWND v5; // rdx
  HWND v6; // rdx
  HWND v7; // rdx
  struct IApplicationView *v8; // rdx
  Win32ViewOperationPolicy *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  v3 = 0;
  WindowForView = (ApplicationViewHelpers *)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( IsWindow((HWND)WindowForView)
    && ApplicationViewHelpers::CanResizeWindow(WindowForView, v5)
    && ApplicationViewHelpers::CanMaximizeWindow(WindowForView, v6)
    && !ApplicationViewHelpers::IsWindowInHighZOrderBand(WindowForView, v7)
    && !ApplicationViewHelpers::HasRootSwitchableOwner((struct IUnknown *)a2, v8)
    && ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), Win32ViewOperationPolicy **))(*a2)[27])(
         a2,
         &v10) >= 0 )
  {
    return (_DWORD)v10 != 0;
  }
  return v3;
}
