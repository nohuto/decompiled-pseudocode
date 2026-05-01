/*
 * XREFs of _WindowEventDispatcher::TryShowAsStandaloneAsync_::_1_::dtor$1 @ 0x1800E51A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::TryShowAsStandaloneAsync_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 112));
}
