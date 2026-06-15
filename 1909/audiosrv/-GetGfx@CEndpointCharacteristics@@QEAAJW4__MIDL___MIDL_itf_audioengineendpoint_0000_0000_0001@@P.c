/*
 * XREFs of ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180117F7C
 * Callers:
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180006274 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180014DE0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800073B0 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18000E004 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000F4E8 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetGfx(
        CEndpointCharacteristics *this,
        int a2,
        struct ICompositeSystemEffect **a3,
        struct IAudioProcessingObject **a4)
{
  __int64 v4; // rbx
  BOOL v8; // eax
  GUID *v9; // rcx
  GUID v11; // [rsp+60h] [rbp-18h] BYREF

  v4 = a2;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a2 == 3 || (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a2) )
    return 0LL;
  v8 = CEndpointCharacteristics::AreEnhancementsEnabled(this);
  v9 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( !v8 )
    v9 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v11 = *v9;
  return CEndpointCharacteristics::GetInitializedSystemEffectInterface(
           (__int64)this,
           (__int64)this + 96 * v4 + 616,
           2,
           1,
           (__int128 *)&v11,
           0,
           0,
           v4,
           a3,
           a4,
           0LL);
}
