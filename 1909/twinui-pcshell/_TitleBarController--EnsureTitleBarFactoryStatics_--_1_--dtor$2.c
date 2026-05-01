/*
 * XREFs of _TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor$2 @ 0x180267E11
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
