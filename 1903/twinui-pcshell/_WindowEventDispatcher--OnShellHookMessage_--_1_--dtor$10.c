/*
 * XREFs of _WindowEventDispatcher::OnShellHookMessage_::_1_::dtor$10 @ 0x1800C3B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::OnShellHookMessage_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
