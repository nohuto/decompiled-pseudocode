/*
 * XREFs of ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180006EA0
 * Callers:
 *     ?CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180006D54 (-CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180015270 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1801166CC (-DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180119288 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x180119364 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?IsSFXModeSupported@CEndpointCharacteristics@@AEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180006FAC (-IsSFXModeSupported@CEndpointCharacteristics@@AEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180007390 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000C208 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetStreamEffect(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        int a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct ICompositeSystemEffect **a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  unsigned int v7; // ebx
  __int64 v8; // rbp
  struct _GUID v13; // [rsp+60h] [rbp-38h] BYREF

  v7 = 0;
  v8 = a4;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a4) )
  {
    if ( a3
      || (v13 = *a2,
          CEndpointCharacteristics::IsSFXModeSupported(
            this,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
            &v13)) )
    {
      v13 = *a2;
      return (unsigned int)CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                             this,
                             (char *)this + 96 * v8 + 232,
                             1LL);
    }
  }
  return v7;
}
