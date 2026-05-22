/*
 * XREFs of _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$3 @ 0x1800C5D05
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a2 + 88));
}
