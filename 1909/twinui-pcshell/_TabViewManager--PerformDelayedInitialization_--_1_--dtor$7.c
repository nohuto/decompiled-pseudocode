/*
 * XREFs of _TabViewManager::PerformDelayedInitialization_::_1_::dtor$7 @ 0x1802554C1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabViewManager::PerformDelayedInitialization_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(*(__int64 **)(a2 + 112));
}
