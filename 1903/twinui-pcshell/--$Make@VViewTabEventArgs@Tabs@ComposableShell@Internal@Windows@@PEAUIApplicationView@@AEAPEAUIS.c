/*
 * XREFs of ??$Make@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@AEAPEAUIShellTab@2345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@12@$$QEAPEAUIApplicationView@@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180225888
 * Callers:
 *     ?AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@UWindowId@WindowManagement@ApplicationModel@56@PEAPEAU23456@@Z @ 0x18022C340 (-AddVirtualTabForWindow@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 *     ?RemoveVirtualTabImpl@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180236EC0 (-RemoveVirtualTabImpl@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@PEAUIApplicationView@@PEAUIShellTab@1234@@Z @ 0x180229EBC (--0ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@PEAUIApplicationView@@PEAUIShell.c)
 *     ?Attach@?$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18022C8AC (-Attach@-$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAAXP.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs,IApplicationView *,Windows::Internal::ComposableShell::Tabs::IShellTab * &>(
        _QWORD *a1,
        struct IApplicationView **a2,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab **a3)
{
  Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *v6; // rax
  __int64 v7; // rax

  *a1 = 0LL;
  v6 = (Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *)operator new(
                                                                       0x50uLL,
                                                                       (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs::ViewTabEventArgs(v6, *a2, *a3);
    Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs>::Attach(a1, v7);
  }
  return a1;
}
