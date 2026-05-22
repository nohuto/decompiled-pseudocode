/*
 * XREFs of _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$1 @ 0x180031CAF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>::~vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>(a2 + 48);
}
