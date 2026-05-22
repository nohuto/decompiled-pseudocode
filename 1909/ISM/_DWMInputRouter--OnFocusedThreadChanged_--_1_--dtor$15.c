/*
 * XREFs of _DWMInputRouter::OnFocusedThreadChanged_::_1_::dtor$15 @ 0x18003BA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::OnFocusedThreadChanged_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a2 + 88));
}
