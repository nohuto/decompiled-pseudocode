/*
 * XREFs of ?OnViewRemovedFromSwitchersInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180386B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006999C (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::OnViewRemovedFromSwitchersInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  int updated; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 64LL))(*((_QWORD *)this + 11));
  if ( updated < 0 )
  {
    v5 = 536LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CVirtualDesktopManager::_UpdateViewVisibility(
              (CVirtualDesktopManager *)((char *)this - 8),
              a2,
              *((struct IVirtualDesktop **)this + 17));
  if ( updated < 0 )
  {
    v5 = 537LL;
    goto LABEL_5;
  }
  return (unsigned int)updated;
}
