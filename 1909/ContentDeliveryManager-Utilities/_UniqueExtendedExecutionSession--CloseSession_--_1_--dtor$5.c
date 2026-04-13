/*
 * XREFs of _UniqueExtendedExecutionSession::CloseSession_::_1_::dtor$5 @ 0x1800D1AB6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UniqueExtendedExecutionSession::CloseSession_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 112));
}
