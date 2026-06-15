/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18001E0B8
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18000D900 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052044 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     _CEndpointCharacteristics::RefreshDeviceFormat_::_1_::dtor$1 @ 0x18006D9B6 (_CEndpointCharacteristics--RefreshDeviceFormat_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor$5 @ 0x18006DFB2 (_CEndpointCharacteristics--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::ProcessPropertyChange_::_1_::dtor$1 @ 0x18006E240 (_CEndpointCharacteristics--ProcessPropertyChange_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::GetProcessingPeriod_::_1_::dtor$2 @ 0x18006E620 (_CEndpointCharacteristics--GetProcessingPeriod_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::SetDeviceFormatSwAudioEngine_::_1_::dtor$2 @ 0x18006FC00 (_CEndpointCharacteristics--SetDeviceFormatSwAudioEngine_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9____::_1_::dtor$4 @ 0x18006FC40 (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81ca_ea_18006FC40.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$7 @ 0x18006FD40 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$7.c)
 *     _CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings_::_1_::dtor$4 @ 0x180072CB4 (_CEndpointCharacteristics--SetDeviceFormatAndSpatialSettings_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$5 @ 0x180072D7A (_CEndpointCharacteristics--DeriveDevicePipeFormatFromConnectorFormat_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$3 @ 0x180072E22 (_CEndpointCharacteristics--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$3.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$10 @ 0x180072FE0 (_DerivePeriodicityForStream_--_1_--dtor$10.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$7 @ 0x180073000 (_DerivePeriodicityForStream_--_1_--dtor$7.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$8 @ 0x180073020 (_DerivePeriodicityForStream_--_1_--dtor$8.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E7360 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$5 @ 0x1800F7914 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$5.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$6 @ 0x1800F7920 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$6.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$7 @ 0x1800F792C (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$7.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$8 @ 0x1800F7938 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$8.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$10 @ 0x1800F7950 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$10.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2____::_1_::dtor$1 @ 0x180114C2A (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d_ea_180114C2A.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2____::_1_::dtor$4 @ 0x180114C42 (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d_ea_180114C42.c)
 *     _CEndpointCharacteristics::ResetDeviceFormat_::_1_::dtor$1 @ 0x18011A2D0 (_CEndpointCharacteristics--ResetDeviceFormat_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::ResetDeviceFormat_::_1_::dtor$3 @ 0x18011A2E8 (_CEndpointCharacteristics--ResetDeviceFormat_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::SetDeviceFormatHwAudioEngine_::_1_::dtor$1 @ 0x18011A714 (_CEndpointCharacteristics--SetDeviceFormatHwAudioEngine_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::UseAutoConvertPCMForLoopbackStreams_::_1_::dtor$1 @ 0x18011B160 (_CEndpointCharacteristics--UseAutoConvertPCMForLoopbackStreams_--_1_--dtor$1.c)
 *     _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$4 @ 0x18012E76C (_CSpatialProperties--GetAudioFormatForSpatialFormat_--_1_--dtor$4.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$11 @ 0x18013B363 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
