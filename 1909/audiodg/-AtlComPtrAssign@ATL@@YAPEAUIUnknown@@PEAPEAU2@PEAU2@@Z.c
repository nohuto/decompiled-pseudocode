/*
 * XREFs of ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D34
 * Callers:
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140005B10 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000606C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400066A4 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x140008070 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x140009C1C (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTI.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@W4AUDIO_DIRECTION@@PEAVCProcessNode@@3@Z @ 0x140009C6C (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@W4AUDIO_DIRECTION.c)
 *     ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140009CD0 (-SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000A0D0 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000A510 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000B604 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000B8B0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14000CF94 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x14000E358 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140010700 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x1400108CC (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x140029694 (-RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRI.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140034B20 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140034F74 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140038710 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

struct IUnknown *__fastcall ATL::AtlComPtrAssign(struct IUnknown **a1, struct IUnknown *a2)
{
  if ( !a1 )
    return 0LL;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  if ( *a1 )
    ((void (__fastcall *)(_QWORD))(*a1)->lpVtbl->Release)(*a1);
  *a1 = a2;
  return a2;
}
