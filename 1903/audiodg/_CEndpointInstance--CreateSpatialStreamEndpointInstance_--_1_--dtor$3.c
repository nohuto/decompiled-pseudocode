/*
 * XREFs of _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$3 @ 0x140039B78
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>>::~out_param_t<wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>>(a2 + 112);
}
