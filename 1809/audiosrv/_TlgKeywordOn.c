/*
 * XREFs of _TlgKeywordOn @ 0x1800255F0
 * Callers:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x1800077B8 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18000D080 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180010C10 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x180012FE4 (-CheckAndLogTelemetry@AudioJournal@@AEAAXXZ.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180016028 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180016490 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180016678 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002A180 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180032420 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCha.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800348C0 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEAPEAUIAudioDeviceGraph@@@Z @ 0x180037B70 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180041234 (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x18004BBA8 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004C1D4 (--$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_i.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800564A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180057430 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x180063C5C (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x180063D44 (-IsFirstHang@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x180063E74 (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 *     ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x1800AE820 (-Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x1800AEB44 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x1800AF010 (-LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800B4518 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 *     ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800B5FC0 (-OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800B65C0 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800B8078 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x1800CC854 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EA564 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x18010D678 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1801107BC (--$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180110954 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?LogEPCProductionAssert@@YAX_KPEBG@Z @ 0x180110A14 (-LogEPCProductionAssert@@YAX_KPEBG@Z.c)
 *     ?LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z @ 0x180110AC0 (-LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z.c)
 *     ?LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z @ 0x180110B90 (-LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z.c)
 *     ?LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ @ 0x180116BC0 (-LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ.c)
 *     ?NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x180117FF0 (-NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x180121D18 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEBGAEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x180122F84 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEBGAEBU_tagpropertykey@@PEAUIPropertyStore@@PEA.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEBGPEAUIPolicyConfig@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x180123C1C (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEBGPEAUIPolicyConfig@@AEBUWAVEFORMATEXTENSIBLE@@_N@.c)
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18012E730 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x180130730 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x180134658 (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 *     PdcpFireClientCallWatchdog @ 0x180134AC0 (PdcpFireClientCallWatchdog.c)
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x180135B68 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x180135C0C (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEA_N1@Z @ 0x180139408 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEA_N1@Z.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHV?$function@$$A6AJPEBG@Z@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x18013A9D4 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHV-$function@$$A6AJPEBG@Z@wistd@@PEAUEndpointSpe.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword
    || (keyword & *((_QWORD *)hProvider + 2)) != 0
    && (keyword & *((_QWORD *)hProvider + 3)) == *((_QWORD *)hProvider + 3) )
  {
    return 1;
  }
  return v2;
}
