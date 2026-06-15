/*
 * XREFs of IsGetDefaultSpatialRenderingModePresent @ 0x1800665D8
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180015270 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001C728 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     IsSpatialOnlyFormat @ 0x180037FF8 (IsSpatialOnlyFormat.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x180040FC0 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x1800434D0 (-IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180047734 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z @ 0x180052FA0 (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     DoesPlatformSupportSpatialAudio @ 0x18005A07C (DoesPlatformSupportSpatialAudio.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x18005EF84 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x180062528 (IsSpatialComboEndpointDeterminationDisabled.c)
 *     ?RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z @ 0x180063090 (-RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800687E0 (-IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_00.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_ae96820b4eb80ed9553374ed48d01cb4___ @ 0x1801133BC (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_ae96820b4eb80ed9553374ed48d01.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_ee245c642eda141d5fbc36375a27f951___ @ 0x18011363C (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_ee245c642eda141d5fbc36375a27f.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18013492C (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180066960 (ApiSetQueryApiSetPresence_0.c)
 */

char __fastcall IsGetDefaultSpatialRenderingModePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801B8120 == 1 )
    return 1;
  if ( dword_1801B8120 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_1801B8120 = 2 - (v1 != 0);
  return result;
}
