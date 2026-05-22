/*
 * XREFs of _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$0 @ 0x180031FC3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::function<bool (wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>)>::~function<bool (wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>)>(
           *(_QWORD *)(a2 + 176),
           a2);
}
