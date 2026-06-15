/*
 * XREFs of _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$5 @ 0x18003933C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
