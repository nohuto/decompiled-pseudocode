/*
 * XREFs of _MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor$2 @ 0x180134E7E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(*(__int64 **)(a2 + 112));
}
