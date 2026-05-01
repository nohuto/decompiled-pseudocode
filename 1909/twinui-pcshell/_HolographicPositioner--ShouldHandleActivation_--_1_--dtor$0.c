/*
 * XREFs of _HolographicPositioner::ShouldHandleActivation_::_1_::dtor$0 @ 0x1800E6526
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::ShouldHandleActivation_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
