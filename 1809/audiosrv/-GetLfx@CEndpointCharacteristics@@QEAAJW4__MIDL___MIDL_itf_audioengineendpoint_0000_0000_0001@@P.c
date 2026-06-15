/*
 * XREFs of ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010AAA8
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180005440 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N6PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18003B2D0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?CheckForPreferredStreamFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800CF098 (-CheckForPreferredStreamFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800D1BF0 (-DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_a.c)
 * Callees:
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005F0FC (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18010A860 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetLfx(
        CEndpointCharacteristics *this,
        int a2,
        struct ICompositeSystemEffect **a3,
        struct IAudioProcessingObject **a4)
{
  __int64 v4; // rbx
  GUID v9; // [rsp+60h] [rbp-18h] BYREF

  v4 = a2;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a2 == 3 || (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a2) )
    return 0LL;
  v9 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  return CEndpointCharacteristics::GetInitializedSystemEffectInterface(
           (__int64)this,
           (__int64)this + 96 * v4 + 232,
           1,
           0,
           (__int128 *)&v9,
           0,
           1,
           v4,
           a3,
           a4,
           0LL);
}
