/*
 * XREFs of ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180384E18
 * Callers:
 *     _winrt::impl::make_event_revoker_winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_winrt::impl::event_revoker_winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_&winrt::impl::abi_winrt::Windows::System::IUserWatcher_::type::_vcall__144____winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher__const_____ptr64__::_1_::dtor$2 @ 0x18009ACFE (_winrt--impl--make_event_revoker_winrt--Windows--Internal--ComposableShell--Tabs--ITabDataModelW.c)
 *     _winrt::impl::make_event_revoker_winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_winrt::impl::event_revoker_winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_&winrt::impl::abi_winrt::Windows::System::IUserWatcher_::type::_vcall__144____winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher__const_____ptr64__::_1_::dtor$3 @ 0x18009AD0A (_winrt--impl--make_event_revoker_winrt--Windows--Internal--ComposableShell--Tabs--I_ea_18009AD0A.c)
 *     _winrt::impl::as_IInspectable_winrt::impl::abi_winrt::Windows::Foundation::IUnknown_::type__::_1_::dtor$0 @ 0x1803969F1 (_winrt--impl--as_IInspectable_winrt--impl--abi_winrt--Windows--Foundation--IUnknown_--type__--_1.c)
 *     _winrt::impl::as_winrt::impl::IWeakReferenceSource_winrt::impl::abi_winrt::Windows::Foundation::IUnknown_::type__::_1_::dtor$0 @ 0x180396A7D (_winrt--impl--as_winrt--impl--IWeakReferenceSource_winrt--impl--abi_winrt--Windows--Foundation--.c)
 *     _winrt::impl::as_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModel_IInspectable__::_1_::dtor$0 @ 0x180396B09 (_winrt--impl--as_winrt--Windows--Internal--ComposableShell--Tabs--TabDataModel_IInspectable__--_.c)
 *     __lambda_0b192ff2ee59a0e56115e85b2e997556_::operator()_::_1_::dtor$0 @ 0x1803971C0 (__lambda_0b192ff2ee59a0e56115e85b2e997556_--operator()_--_1_--dtor$0.c)
 *     __lambda_0b192ff2ee59a0e56115e85b2e997556_::operator()_::_1_::dtor$1 @ 0x1803971CC (__lambda_0b192ff2ee59a0e56115e85b2e997556_--operator()_--_1_--dtor$1.c)
 *     _winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs_winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs_::AddedTab_::_1_::dtor$0 @ 0x180397308 (_winrt--impl--consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs_wi.c)
 *     _winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModel_winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModel_::CreateWatcher_::_1_::dtor$0 @ 0x180397380 (_winrt--impl--consume_Windows_Internal_ComposableShell_Tabs_ITabDataModel_winrt--Windows--Intern.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180397F80 (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$33 @ 0x180397FA4 (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$33.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$5 @ 0x180397FD0 (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _VirtualDesktopGroupedViewsEventListener::TabAdded_::_1_::dtor$0 @ 0x18039816C (_VirtualDesktopGroupedViewsEventListener--TabAdded_--_1_--dtor$0.c)
 *     _VirtualDesktopGroupedViewsEventListener::TabAdded_::_1_::dtor$1 @ 0x180398178 (_VirtualDesktopGroupedViewsEventListener--TabAdded_--_1_--dtor$1.c)
 *     _VirtualDesktopGroupedViewsEventListener::TabAdded_::_1_::dtor$3 @ 0x180398190 (_VirtualDesktopGroupedViewsEventListener--TabAdded_--_1_--dtor$3.c)
 *     _VirtualDesktopGroupedViewsEventListener::TabAdded_::_1_::dtor$5 @ 0x18039819C (_VirtualDesktopGroupedViewsEventListener--TabAdded_--_1_--dtor$5.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1803850DC (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<IInspectable>::unconditional_release_ref(a1);
  return result;
}
