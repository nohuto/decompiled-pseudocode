/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$79 @ 0x1800E61E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_79(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ViewEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewEventArgs,wil::err_exception_policy>(a2 + 392);
}
