/*
 * XREFs of ??1TabWrapper@@QEAA@XZ @ 0x1801D5000
 * Callers:
 *     _TabViewManager::TabViewManager_::_1_::dtor$19 @ 0x1801D4CB9 (_TabViewManager--TabViewManager_--_1_--dtor$19.c)
 *     _TabViewManager::TryGetLastSelectedTabForView_::_1_::dtor$1 @ 0x1801EDAAA (_TabViewManager--TryGetLastSelectedTabForView_--_1_--dtor$1.c)
 *     _TabViewManager::TryRemoveViewFromTabGroup_::_1_::dtor$6 @ 0x1801EE5AA (_TabViewManager--TryRemoveViewFromTabGroup_--_1_--dtor$6.c)
 *     _TabViewManager::UngroupAndCloakForDrag_::_1_::dtor$1 @ 0x1801EE7E8 (_TabViewManager--UngroupAndCloakForDrag_--_1_--dtor$1.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$0 @ 0x1801EF565 (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$0.c)
 *     __lambda_961dfd5ca30ced7f152f1faecc2cc684_::operator()_::_1_::dtor$10 @ 0x1801FE13C (__lambda_961dfd5ca30ced7f152f1faecc2cc684_--operator()_--_1_--dtor$10.c)
 *     _DefaultIconManager::GetIconForView_::_1_::dtor$10 @ 0x1801FF58E (_DefaultIconManager--GetIconForView_--_1_--dtor$10.c)
 *     _AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_0935a17dcf8c46657c105b82d8cca1f2____::_1_::dtor$1 @ 0x1802A83A1 (_AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Intern_ea_1802A83A1.c)
 *     _AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__lambda_1ec4de1928236930de40fe3536856c48____::_1_::dtor$1 @ 0x1802A8445 (_AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Intern_ea_1802A8445.c)
 *     _AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_8e29ff95208472147f8d85b39b7eadad____::_1_::dtor$1 @ 0x1802A84E9 (_AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Intern_ea_1802A84E9.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$31 @ 0x180397F98 (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$31.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$8 @ 0x180397FDC (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall TabWrapper::~TabWrapper(__int64 *this)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(this);
}
