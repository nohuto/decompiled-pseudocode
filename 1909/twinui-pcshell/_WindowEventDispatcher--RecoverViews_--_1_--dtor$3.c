/*
 * XREFs of _WindowEventDispatcher::RecoverViews_::_1_::dtor$3 @ 0x18029EC4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::RecoverViews_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
