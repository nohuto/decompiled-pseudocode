/*
 * XREFs of ??1?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAA@XZ @ 0x180302654
 * Callers:
 *     _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$3 @ 0x18030211D (_AppViewDataSourceAdapter--AppViewDataSourceAdapter_--_1_--dtor$3.c)
 *     _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$4 @ 0x180302130 (_AppViewDataSourceAdapter--AppViewDataSourceAdapter_--_1_--dtor$4.c)
 *     _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$5 @ 0x180302143 (_AppViewDataSourceAdapter--AppViewDataSourceAdapter_--_1_--dtor$5.c)
 * Callees:
 *     ?reset@?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAXXZ @ 0x180308784 (-reset@-$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@.c)
 */

__int64 __fastcall wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::~unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>(
        __int64 a1)
{
  wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::reset();
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
