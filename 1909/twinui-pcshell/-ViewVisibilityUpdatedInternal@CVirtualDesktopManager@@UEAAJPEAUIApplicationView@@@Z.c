/*
 * XREFs of ?ViewVisibilityUpdatedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18040F5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006F940 (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVirtualDesktopManager::ViewVisibilityUpdatedInternal(
        struct IVirtualDesktop **this,
        struct IApplicationView *a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = CVirtualDesktopManager::_UpdateViewVisibility((CVirtualDesktopManager *)(this - 1), a2, this[17]);
  v3 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27F,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
  return v3;
}
