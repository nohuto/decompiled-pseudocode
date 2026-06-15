/*
 * XREFs of ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x140025D3C
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14000F96C (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$12 @ 0x14001B5B3 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$12.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$9 @ 0x140039B54 (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$9.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400360CC (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

CEndpointInstance *__fastcall wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(
        CEndpointInstance **a1,
        unsigned int a2)
{
  CEndpointInstance *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CEndpointInstance *)CEndpointInstance::`scalar deleting destructor'(result, a2);
  return result;
}
