/*
 * XREFs of _CAudioStream::CAudioStream_::_1_::dtor$11 @ 0x18006C1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::CAudioStream_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 96) + 208LL));
}
