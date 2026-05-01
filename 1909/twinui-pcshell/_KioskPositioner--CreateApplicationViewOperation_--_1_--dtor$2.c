/*
 * XREFs of _KioskPositioner::CreateApplicationViewOperation_::_1_::dtor$2 @ 0x1803BBA9B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KioskPositioner::CreateApplicationViewOperation_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
