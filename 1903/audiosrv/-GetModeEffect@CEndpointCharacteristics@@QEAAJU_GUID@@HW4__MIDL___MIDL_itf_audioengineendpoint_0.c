/*
 * XREFs of ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180007210
 * Callers:
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180006544 (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     GetPackedSysFx2List @ 0x1800070D0 (GetPackedSysFx2List.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180011B00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x1800DFBE0 (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180119288 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x180119364 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180007390 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000A478 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000C26C (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x18000C350 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180038840 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetModeEffect(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        int a3,
        int a4,
        struct ICompositeSystemEffect **a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  unsigned int v7; // esi
  __int64 v8; // r13
  __int64 v10; // rbx
  __int64 SupportedConnectorModesInternal; // rax
  struct _GUID v13; // [rsp+60h] [rbp-58h] BYREF
  struct _GUID v14; // [rsp+70h] [rbp-48h]

  v7 = 0;
  v8 = a4;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  v10 = 96LL * a4;
  SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + v10 + 232));
  SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + v10 + 616));
  SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + v10 + 1000));
  if ( *((_DWORD *)this + v8 + 12) )
  {
    if ( a3
      || (v13 = *a2,
          (unsigned int)CEndpointCharacteristics::IsAPOModeSupported(
                          this,
                          &v13,
                          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8)) )
    {
      v13 = *a2;
      SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal(
                                          this,
                                          (unsigned int)v8,
                                          0LL);
      v14 = *a2;
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(SupportedConnectorModesInternal, &v13);
      return (unsigned int)CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                             this,
                             (char *)this + v10 + 616,
                             2LL);
    }
  }
  return v7;
}
