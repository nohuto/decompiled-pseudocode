/*
 * XREFs of ??1?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@QEAA@XZ @ 0x140025E30
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14000F97C (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$1 @ 0x14001AE9D (_CEndpointInstance--CreateStreamEndpointInstance_--_1_--dtor$1.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$1 @ 0x140039B60 (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::~unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
