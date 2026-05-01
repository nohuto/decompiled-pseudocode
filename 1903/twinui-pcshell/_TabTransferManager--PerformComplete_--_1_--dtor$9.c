/*
 * XREFs of _TabTransferManager::PerformComplete_::_1_::dtor$9 @ 0x18025856D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabTransferManager::PerformComplete_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
