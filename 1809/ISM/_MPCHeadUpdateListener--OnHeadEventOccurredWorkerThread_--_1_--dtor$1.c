/*
 * XREFs of _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$1 @ 0x180130DAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::~vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>(a2 + 40);
}
