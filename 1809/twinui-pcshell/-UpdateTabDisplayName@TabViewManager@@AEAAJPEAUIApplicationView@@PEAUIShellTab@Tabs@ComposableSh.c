/*
 * XREFs of ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EF3BC
 * Callers:
 *     ?SelectViewInTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1801E4DA0 (-SelectViewInTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x1801ECEF0 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EF24C (-UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Intern.c)
 */

__int64 __fastcall TabViewManager::UpdateTabDisplayName(
        TabViewManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  HWND WindowForView; // rax
  TabViewManager *v5; // rcx
  int updated; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( !WindowForView )
    return 0LL;
  updated = TabViewManager::UpdateTabDisplayName(v5, WindowForView, a3);
  v7 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD7C,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)updated);
  return v7;
}
