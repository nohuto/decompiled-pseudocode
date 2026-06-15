/*
 * XREFs of _TlgWrite @ 0x1400196A4
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140004670 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x140004910 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x140008D30 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140009760 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140010BA0 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140012D18 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140013F48 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140014210 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140019480 (-LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140019750 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x140032278 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x140032400 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x140044BD0 (-GetEffectsList@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x1400450B0 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     ?GetNextDataPointer@CCPAudioHistoryReader@@UEAA_KPEAIPEAUAE_CURRENT_POSITION@@PEAW4APO_BUFFER_FLAGS@@@Z @ 0x140053FB0 (-GetNextDataPointer@CCPAudioHistoryReader@@UEAA_KPEAIPEAUAE_CURRENT_POSITION@@PEAW4APO_BUFFER_FL.c)
 *     ?RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0PEAUVolatileControlData@@PEAUSharedMessageQueueItem@@IIII@Z @ 0x14005446C (-RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0PEAUVolatileControlData@@PEAUSharedMessag.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140056324 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x140057550 (-GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?AddAudioHistoryPacket@CCrossProcessServerOutputEndpoint@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@_K@Z @ 0x140057D40 (-AddAudioHistoryPacket@CCrossProcessServerOutputEndpoint@@UEAAJIUAE_CURRENT_POSITION@@W4APO_BUFF.c)
 *     ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x14005BC34 (-LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z.c)
 *     ?LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z @ 0x14005BD30 (-LogClientIndexMap@CSpatialCrossProcessEndpointTraceLogger@@QEAAXIII_NJ@Z.c)
 *     ?LogEmptyBufferCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005BE24 (-LogEmptyBufferCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z @ 0x14005BEB4 (-LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z.c)
 *     ?LogGetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005BF5C (-LogGetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERTY@@_N@Z @ 0x14005BFEC (-LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERT.c)
 *     ?LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z @ 0x14005C0A0 (-LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z.c)
 *     ?LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005C188 (-LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005C218 (-LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z.c)
 *     ?LogPulseEndpoint@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005C2C4 (-LogPulseEndpoint@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z.c)
 *     ?LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005C368 (-LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z.c)
 *     ?LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ @ 0x14005C40C (-LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ.c)
 *     ?LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z @ 0x14005C480 (-LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z.c)
 *     ?LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z @ 0x14005C520 (-LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z.c)
 *     ?LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005C5B0 (-LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005C740 (-LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXX.c)
 *     ?LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005C990 (-LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAX.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005CD58 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005CDF8 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?SpatialCPTraceLoggingWarningHelper@@YAXPEBDI0J@Z @ 0x14005CE84 (-SpatialCPTraceLoggingWarningHelper@@YAXPEBDI0J@Z.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  ULONG v7; // ecx
  _DWORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9[0] = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  v9[1] = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  v10 = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwEventWriteTransfer(*((_QWORD *)hProvider + 4), v9, pActivityId, 0LL, cData, pData);
}
