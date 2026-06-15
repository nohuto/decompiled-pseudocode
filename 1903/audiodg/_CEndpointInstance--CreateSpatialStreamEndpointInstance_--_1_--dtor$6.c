/*
 * XREFs of _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$6 @ 0x140039B9C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
