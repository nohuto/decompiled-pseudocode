/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800233D8
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x180066AA0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c576b7c555b6a6b1a6c16cffcb9322a9____::_1_::dtor$1 @ 0x180066B8C (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_c576b7c555b6a6b1a6c16cff_ea_180066B8C.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$10 @ 0x18006D6D0 (_DerivePeriodicityForStream_--_1_--dtor$10.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$7 @ 0x18006D6F0 (_DerivePeriodicityForStream_--_1_--dtor$7.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$8 @ 0x18006D710 (_DerivePeriodicityForStream_--_1_--dtor$8.c)
 *     _DerivePeriodicityForStream_::_1_::dtor$9 @ 0x18006D730 (_DerivePeriodicityForStream_--_1_--dtor$9.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee____::_1_::dtor$1 @ 0x18006D790 (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5_ea_18006D790.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee____::_1_::dtor$4 @ 0x18006D7D0 (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5_ea_18006D7D0.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$7 @ 0x18006D850 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$7.c)
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$5 @ 0x18006FCE7 (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$5 @ 0x1800D1438 (_DeriveDevicePipeFormatFromConnectorFormat_--_1_--dtor$5.c)
 *     _CPolicyConfig::RefreshDeviceFormat_::_1_::dtor$1 @ 0x1800D395F (_CPolicyConfig--RefreshDeviceFormat_--_1_--dtor$1.c)
 *     _CPolicyConfig::SetDeviceFormatCommon_::_1_::dtor$5 @ 0x1800D46F6 (_CPolicyConfig--SetDeviceFormatCommon_--_1_--dtor$5.c)
 *     _CPolicyConfig::SetDeviceFormatSwAudioEngine_::_1_::dtor$5 @ 0x1800D4F3E (_CPolicyConfig--SetDeviceFormatSwAudioEngine_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7____::_1_::dtor$1 @ 0x1801073F3 (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe484753_ea_1801073F3.c)
 *     _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7____::_1_::dtor$4 @ 0x18010740B (_CEndpointCharacteristics--GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe484753_ea_18010740B.c)
 *     _CEndpointCharacteristics::RefreshDefaultConnectorFormats_::_1_::dtor$1 @ 0x18010C9F1 (_CEndpointCharacteristics--RefreshDefaultConnectorFormats_--_1_--dtor$1.c)
 *     _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$4 @ 0x180121D05 (_CSpatialProperties--GetAudioFormatForSpatialFormat_--_1_--dtor$4.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$12 @ 0x180132A71 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$12.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$17 @ 0x180132AA1 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$17.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        void ***a1)
{
  void **v1; // rbx
  void **v2; // rdi
  void **v3; // rcx

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = a1[1];
    v2 = *a1;
    v3 = (void **)**a1;
    if ( v1 != v3 )
    {
      if ( v3 )
        CoTaskMemFree(v3);
      *v2 = v1;
    }
  }
}
