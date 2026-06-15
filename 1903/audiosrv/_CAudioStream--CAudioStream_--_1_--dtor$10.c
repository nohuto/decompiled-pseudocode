/*
 * XREFs of _CAudioStream::CAudioStream_::_1_::dtor$10 @ 0x1800711C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::CAudioStream_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 72) + 200LL));
}
