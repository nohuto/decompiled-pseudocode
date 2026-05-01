/*
 * XREFs of ??1?$map@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@XZ @ 0x1803BFCB0
 * Callers:
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$14 @ 0x1803BFBB3 (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$14.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAAXXZ @ 0x1803C5A84 (-clear@-$_Tree@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$ComPtr.c)
 */

void __fastcall std::map<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>>::~map<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>>(
        void **a1)
{
  std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::clear();
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x38);
}
