/*
 * XREFs of _DesktopBlueLightReductionManager::UnsubscribeFromServices_::_1_::dtor$0 @ 0x180180390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopBlueLightReductionManager::UnsubscribeFromServices_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
