/*
 * XREFs of _TabShellHotKeyHandler::OnSelectRelativeTab_::_1_::dtor$3 @ 0x18025B632
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabShellHotKeyHandler::OnSelectRelativeTab_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(a2 + 128));
}
