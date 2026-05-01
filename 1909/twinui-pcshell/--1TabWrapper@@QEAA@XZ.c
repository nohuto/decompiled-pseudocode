/*
 * XREFs of ??1TabWrapper@@QEAA@XZ @ 0x18022C2D8
 * Callers:
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_FirePresentationReadinessOrRetryAfterDelay_::_1_::dtor$1 @ 0x18023489D (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--_FirePresentationR_ea_18023489D.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$19 @ 0x180249330 (_TabViewManager--TabViewManager_--_1_--dtor$19.c)
 *     _TabViewManager::TryGetLastSelectedTabForView_::_1_::dtor$1 @ 0x18025F612 (_TabViewManager--TryGetLastSelectedTabForView_--_1_--dtor$1.c)
 *     _TabViewManager::TryRemoveViewFromTabGroup_::_1_::dtor$6 @ 0x18026015F (_TabViewManager--TryRemoveViewFromTabGroup_--_1_--dtor$6.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$0 @ 0x1802611E6 (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$0.c)
 *     __lambda_961dfd5ca30ced7f152f1faecc2cc684_::operator()_::_1_::dtor$10 @ 0x1802708FC (__lambda_961dfd5ca30ced7f152f1faecc2cc684_--operator()_--_1_--dtor$10.c)
 *     _TabTransferManager::PrepareTabAndViewForDrag_::_1_::dtor$2 @ 0x180277FCA (_TabTransferManager--PrepareTabAndViewForDrag_--_1_--dtor$2.c)
 *     _AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_4f02fd2cc1c1e9b5768550b824f350bd____::_1_::dtor$1 @ 0x18031FE99 (_AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Intern_ea_18031FE99.c)
 *     _AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__lambda_7be9b31505ec13bab2864f0aa84a83a3____::_1_::dtor$1 @ 0x18031FF3D (_AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Intern_ea_18031FF3D.c)
 *     _AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_695800337203f165c386051dd76ff0a7____::_1_::dtor$1 @ 0x18031FFE1 (_AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Intern_ea_18031FFE1.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$31 @ 0x18041D508 (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$31.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$8 @ 0x18041D54C (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall TabWrapper::~TabWrapper(__int64 *this)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(this);
}
