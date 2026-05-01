/*
 * XREFs of ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x1802B3AC4
 * Callers:
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$0 @ 0x1802B33BA (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$0.c)
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$1 @ 0x1802B33C6 (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$1.c)
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$3 @ 0x1802B33F2 (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$3.c)
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$0 @ 0x1802B3512 (_wil--details--MaybeGetExceptionString_--_1_--dtor$0.c)
 *     _wil::details::ThrowPlatformException_::_1_::dtor$1 @ 0x1802B3902 (_wil--details--ThrowPlatformException_--_1_--dtor$1.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler___::ToString_::_1_::dtor$1 @ 0x1802B91C5 (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplor_ea_1802B91C5.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler___::ToString_::_1_::dtor$0 @ 0x1802B91D1 (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplor_ea_1802B91D1.c)
 *     _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$0 @ 0x1802E1883 (_XamlAllUpViewController--CreateAndAppendSwitcherContextMenuItem_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$8 @ 0x1802E1FCF (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$8.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$10 @ 0x1802E1FF8 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$14 @ 0x1802E2039 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$14.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$20 @ 0x1802E2092 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$20.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$9 @ 0x1802E2B5E (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$9.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$10 @ 0x1802E2B6A (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::GetResourceString_::_1_::dtor$1 @ 0x1802E2D41 (_XamlAllUpViewController--GetResourceString_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$3 @ 0x1802E2F63 (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$3.c)
 *     _Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get_::_1_::dtor$0 @ 0x1802E6643 (_Windows--Internal--ComposableShell--Multitasking--IVirtualDesktop--Name--get_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall __abi_winrt_ptrto_string_dtor(HSTRING string)
{
  return WindowsDeleteString_0(string);
}
