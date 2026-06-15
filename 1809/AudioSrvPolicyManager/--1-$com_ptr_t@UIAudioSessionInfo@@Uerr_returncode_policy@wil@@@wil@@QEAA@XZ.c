/*
 * XREFs of ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A9DC
 * Callers:
 *     _CApplication::DelinkProcess_::_1_::dtor$1 @ 0x180038A8C (_CApplication--DelinkProcess_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$4 @ 0x18003932A (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$4.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$5 @ 0x18003933C (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$5.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18003958C (_CAastPreStartContext--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180039709 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CEndpointVolumeState::CEndpointVolumeState_::_1_::dtor$0 @ 0x180039BD7 (_CEndpointVolumeState--CEndpointVolumeState_--_1_--dtor$0.c)
 *     _GetPolicyVolumeForAudioStream_::_1_::dtor$0 @ 0x180039E19 (_GetPolicyVolumeForAudioStream_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$6 @ 0x180039E2B (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$6.c)
 *     _ApplicationSpecificEndpointInfo::GetPersistentId_::_1_::dtor$0 @ 0x180039FA2 (_ApplicationSpecificEndpointInfo--GetPersistentId_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
