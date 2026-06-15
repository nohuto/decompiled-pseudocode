/*
 * XREFs of ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180042A5C
 * Callers:
 *     ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18000DED8 (-GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18000E620 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x18000F630 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180013360 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180014940 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180014DE0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180018550 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001BC50 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18003B330 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemEffectChainDescriptor::Resolve(
        SystemEffectChainDescriptor *this,
        struct SystemEffectDescriptor *a2)
{
  volatile signed __int32 *v3; // rdi
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  SystemEffectChainDescriptor *v12; // [rsp+60h] [rbp+8h] BYREF
  struct SystemEffectDescriptor *v13; // [rsp+68h] [rbp+10h] BYREF

  v3 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    _InterlockedIncrement(v3 + 2);
    v3 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  }
  v4 = *((_QWORD *)this + 3);
  v5 = (std::_Ref_count_base *)v3;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  v12 = this;
  v13 = a2;
  v6 = *(_QWORD *)(v4 + 56);
  if ( !v6 )
  {
    std::_Xbad_function_call();
LABEL_12:
    *((_BYTE *)this + 20) = 1;
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, struct SystemEffectDescriptor **, SystemEffectChainDescriptor **))(*(_QWORD *)v6 + 16LL))(
         v6,
         &v13,
         &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = *((_DWORD *)this + 4);
    if ( !v9 )
    {
      v5 = 0LL;
      LOBYTE(v9) = 0;
      if ( v3 )
      {
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v3);
        v9 = *((_DWORD *)this + 4);
      }
    }
    if ( (v9 & 1) == 0 )
      goto LABEL_7;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x65,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v7);
LABEL_8:
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return v8;
}
