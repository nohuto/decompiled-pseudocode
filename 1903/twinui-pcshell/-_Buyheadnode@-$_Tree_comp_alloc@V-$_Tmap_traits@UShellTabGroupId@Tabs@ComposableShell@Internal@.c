/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x1802D0B60
 * Callers:
 *     ??0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ @ 0x1802C2798 (--0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ.c)
 *     ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x18032A860 (--0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ??0CDesktopPositioner@@QEAA@XZ @ 0x1803A0418 (--0CDesktopPositioner@@QEAA@XZ.c)
 *     ??0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1803FFC20 (--0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
