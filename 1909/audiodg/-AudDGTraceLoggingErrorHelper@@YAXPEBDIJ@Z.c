/*
 * XREFs of ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003868 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003AA4 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140003DB4 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140003E2C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140004020 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140004970 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140005690 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140005B10 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000606C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400066A4 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400091E0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009EBC (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009F34 (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z @ 0x14000A2DC (-CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000A510 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000A928 (-InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObj.c)
 *     ?InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000AA84 (-InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000ABEC (-InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000ACB8 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?InitializeDitherInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000AD78 (-InitializeDitherInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z @ 0x14000AE40 (-InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z.c)
 *     ?InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000AFC4 (-InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x14000B394 (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000B7EC (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000B9E0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000C210 (-SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Window.c)
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14000EC00 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000ED60 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400104CC (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICr.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400105E4 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProce.c)
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x1400106B4 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140010700 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140012EE0 (-IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x1400130D0 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140013500 (-IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x1400139D0 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140013D90 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x140014490 (-InnerInitializeAPO@CSystemAudioDeviceSharedBase@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x14002A86C (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x14002AE10 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14002ECEC (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400308E0 (-CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DE.c)
 *     ?GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140030C30 (-GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z @ 0x140030D40 (-GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140030E50 (-GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputCon.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140030F70 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z @ 0x140031BF0 (-GetEndpointBufferSize@CSystemAudioDeviceSharedBase@@UEAAJPEAIPEAM@Z.c)
 *     ?GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140031D40 (-GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x140031E60 (-GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z.c)
 *     ?GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z @ 0x140032060 (-GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z.c)
 *     ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x140032170 (-GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x1400322D0 (-GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputCo.c)
 *     ?ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140032840 (-ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 *     ?GetMeterChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z @ 0x1400339F0 (-GetMeterChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z.c)
 *     ?GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x140033AD0 (-GetMeteringData@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_METER_DATA@@I@Z.c)
 *     ?GetMute@CSystemAudioDeviceOffloadGraph@@UEAAJPEAE@Z @ 0x140033C10 (-GetMute@CSystemAudioDeviceOffloadGraph@@UEAAJPEAE@Z.c)
 *     ?GetVolumeChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z @ 0x140033CF0 (-GetVolumeChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z.c)
 *     ?GetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAM@Z @ 0x140033DD0 (-GetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAM@Z.c)
 *     ?SetMute@CSystemAudioDeviceOffloadGraph@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x1400344C0 (-SetMute@CSystemAudioDeviceOffloadGraph@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z.c)
 *     ?SetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z @ 0x1400345A0 (-SetVolumeCoefficients@CSystemAudioDeviceOffloadGraph@@UEAAJIPEAMPEA_JW4AUDIO_CURVE_TYPE@@1@Z.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140034A6C (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140034B20 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140034F74 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140035790 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x140035B44 (-SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140035BC8 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14003618C (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 *     ?CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140036730 (-CreateVirtualProtectedOutput@CProtectedOutputController@@UEAAJPEAUIAudioProcessingObject@@PEAPE.c)
 *     ?GetDescription@CProtectedOutputController@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z @ 0x140036890 (-GetDescription@CProtectedOutputController@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z.c)
 *     ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x140036C10 (-RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConst.c)
 *     ?SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z @ 0x140036CD0 (-SetPolicy@CVirtualProtectedOutput@@UEAAJW4EAudioConstriction@@@Z.c)
 *     ?SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z @ 0x140036D70 (-SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z.c)
 *     ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x140037B30 (-GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140037DA0 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x140037EE0 (-GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z.c)
 *     ?GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z @ 0x140038100 (-GetPositionForOffload@CAudioDeviceGraph@@UEAAJPEA_K0@Z.c)
 *     ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x1400387B0 (-ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x14003908C (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x14003935C (-CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140039BD8 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 * Callees:
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     atexit @ 0x140016558 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x140025D60 (TraceLoggingRegisterEx.c)
 *     _TlgCreateSz @ 0x14002BFF8 (_TlgCreateSz.c)
 */

void __fastcall AudDGTraceLoggingErrorHelper(LPCSTR psz, int a2, int a3)
{
  TLG_PENABLECALLBACK v4; // rdx
  PVOID v5; // r8
  TraceLoggingHProvider v6; // r9
  WINBOOL fPending; // [rsp+30h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v11; // [rsp+70h] [rbp+17h]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+7Ch] [rbp+23h]
  int *v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]
  int v17; // [rsp+C8h] [rbp+6Fh] BYREF
  int v18; // [rsp+D0h] [rbp+77h] BYREF

  v18 = a3;
  v17 = a2;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_140085EE8;
    qword_140085EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140085F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    qword_140085EF0 = (__int64)qword_140085F00;
    byte_140085EF8 = 1;
    TraceLoggingRegisterEx(qword_140085F00, v4, v5);
    dword_140085EFC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_140085EE8 + 8))(&qword_140085EE8);
    InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140085EE8);
  }
  if ( **((_DWORD **)Context + 1) > 2u )
  {
    TlgCreateSz(&pDesc, psz);
    v13 = 0;
    v16 = 0;
    v11 = &v17;
    v12 = 4;
    v15 = 4;
    v14 = &v18;
    TlgWrite(v6, &unk_14006FC3C, 0LL, (LPCGUID)v6, 5u, &pData);
  }
}
