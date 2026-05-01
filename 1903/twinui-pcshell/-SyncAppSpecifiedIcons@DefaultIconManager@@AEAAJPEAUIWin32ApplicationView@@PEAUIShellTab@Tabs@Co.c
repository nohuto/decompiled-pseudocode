/*
 * XREFs of ?SyncAppSpecifiedIcons@DefaultIconManager@@AEAAJPEAUIWin32ApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802537D4
 * Callers:
 *     ?SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180253370 (-SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SyncAppSpecifiedIcons@DefaultIconManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180253730 (-SyncAppSpecifiedIcons@DefaultIconManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@I.c)
 */

__int64 __fastcall DefaultIconManager::SyncAppSpecifiedIcons(
        HICON *this,
        struct IWin32ApplicationView *a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &v9);
  if ( v5 < 0 )
  {
    v6 = 681LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = DefaultIconManager::SyncAppSpecifiedIcons(this, v9, a3);
  if ( v5 < 0 )
  {
    v6 = 682LL;
    goto LABEL_3;
  }
  return 0LL;
}
