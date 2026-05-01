/*
 * XREFs of _DefaultIconManager::DefaultIconManager_::_1_::dtor$8 @ 0x1801FD6A9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DefaultIconManager::DefaultIconManager_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 192) + 136LL));
}
