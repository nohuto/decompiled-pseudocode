/*
 * XREFs of _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$6 @ 0x180226CE6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  return wil::IterableRange<Windows::Foundation::Collections::IKeyValuePair<Windows::Internal::ApplicationModel::WindowManagement::AppViewId,Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *> *> *,wil::err_exception_policy>::IterableIterator::~IterableIterator((__int64 *)(a2 + 112));
}
