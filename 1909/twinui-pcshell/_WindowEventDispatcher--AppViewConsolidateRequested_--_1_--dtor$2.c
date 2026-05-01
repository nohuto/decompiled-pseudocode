/*
 * XREFs of _WindowEventDispatcher::AppViewConsolidateRequested_::_1_::dtor$2 @ 0x18029AA84
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewConsolidateRequested_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 48));
}
