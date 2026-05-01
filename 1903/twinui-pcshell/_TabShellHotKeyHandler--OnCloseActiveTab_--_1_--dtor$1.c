/*
 * XREFs of _TabShellHotKeyHandler::OnCloseActiveTab_::_1_::dtor$1 @ 0x18025AFCA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabShellHotKeyHandler::OnCloseActiveTab_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a2 + 112));
}
