/*
 * XREFs of _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$5 @ 0x1802A9BDB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::~unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>(*(_QWORD *)(a2 + 64) + 312LL);
}
