/*
 * XREFs of ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x1802D2FE4
 * Callers:
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$0 @ 0x1802D28DA (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$0.c)
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$1 @ 0x1802D28E6 (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$1.c)
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$3 @ 0x1802D2912 (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$3.c)
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$0 @ 0x1802D2A32 (_wil--details--MaybeGetExceptionString_--_1_--dtor$0.c)
 *     _wil::details::ThrowPlatformException_::_1_::dtor$1 @ 0x1802D2E22 (_wil--details--ThrowPlatformException_--_1_--dtor$1.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler___::ToString_::_1_::dtor$1 @ 0x1802D86F5 (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplor_ea_1802D86F5.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler___::ToString_::_1_::dtor$0 @ 0x1802D8701 (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplor_ea_1802D8701.c)
 *     _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$0 @ 0x180300D13 (_XamlAllUpViewController--CreateAndAppendSwitcherContextMenuItem_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$8 @ 0x18030145F (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$8.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$10 @ 0x180301488 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$14 @ 0x1803014C9 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$14.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$20 @ 0x180301522 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$20.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$9 @ 0x180301FEE (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$9.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$10 @ 0x180301FFA (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::GetResourceString_::_1_::dtor$1 @ 0x1803021D1 (_XamlAllUpViewController--GetResourceString_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$3 @ 0x1803023F3 (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$3.c)
 *     _Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get_::_1_::dtor$0 @ 0x180305AD3 (_Windows--Internal--ComposableShell--Multitasking--IVirtualDesktop--Name--get_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall __abi_winrt_ptrto_string_dtor(HSTRING string)
{
  return WindowsDeleteString_0(string);
}
