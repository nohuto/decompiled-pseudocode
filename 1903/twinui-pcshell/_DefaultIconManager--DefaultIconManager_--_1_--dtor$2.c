/*
 * XREFs of _DefaultIconManager::DefaultIconManager_::_1_::dtor$2 @ 0x1802508BA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DefaultIconManager::DefaultIconManager_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::map<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,HICON__ *>::~map<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,HICON__ *>(*(_QWORD *)(a2 + 192) + 80LL);
}
