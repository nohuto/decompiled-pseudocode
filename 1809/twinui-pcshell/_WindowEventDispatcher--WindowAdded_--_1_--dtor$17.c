/*
 * XREFs of _WindowEventDispatcher::WindowAdded_::_1_::dtor$17 @ 0x1800AB7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::WindowAdded_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a2 + 240));
}
