/*
 * XREFs of IsGetDefaultSpatialRenderingModePresent @ 0x1800675C8
 * Callers:
 *     IsSpatialOnlyFormat @ 0x18000BCC4 (IsSpatialOnlyFormat.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180018550 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001FA08 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180038224 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x1800454E0 (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 *     ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x180048CB0 (-IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ.c)
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z @ 0x18005163C (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x180052AC0 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x180062F4C (IsSpatialComboEndpointDeterminationDisabled.c)
 *     DoesPlatformSupportSpatialAudio @ 0x1800635D8 (DoesPlatformSupportSpatialAudio.c)
 *     ?RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z @ 0x180063FC0 (-RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180069840 (-IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_00.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_ae96820b4eb80ed9553374ed48d01cb4___ @ 0x180112EBC (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_ae96820b4eb80ed9553374ed48d01.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_ee245c642eda141d5fbc36375a27f951___ @ 0x18011313C (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_ee245c642eda141d5fbc36375a27f.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18013450C (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180067950 (ApiSetQueryApiSetPresence_0.c)
 */

char __fastcall IsGetDefaultSpatialRenderingModePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801B7120 == 1 )
    return 1;
  if ( dword_1801B7120 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_1801B7120 = 2 - (v1 != 0);
  return result;
}
