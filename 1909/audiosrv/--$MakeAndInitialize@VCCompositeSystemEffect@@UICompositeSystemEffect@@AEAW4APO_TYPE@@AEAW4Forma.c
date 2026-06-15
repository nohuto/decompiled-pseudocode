/*
 * XREFs of ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18003EED0
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800073B0 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180014DE0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180018550 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001BC50 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     _lambda_cd418586ae46a8fc9b3fb78e22f50b3b_::operator() @ 0x1800685EC (_lambda_cd418586ae46a8fc9b3fb78e22f50b3b_--operator().c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18011DD80 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
        _QWORD *a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        unsigned int *a5,
        _OWORD **a6)
{
  unsigned int v6; // edi
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v13; // rcx
  _OWORD *v14; // rbp
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // r13d
  int v18; // eax
  int v19; // ecx
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  unsigned int v24; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0;
  *a1 = 0LL;
  v11 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v11 )
    return 2147942414LL;
  v13 = Microsoft::WRL::Details::ModuleBase::module_;
  v11[9] = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `ICompositeSystemEffect'};
  *((_QWORD *)v11 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v11 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v11 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  if ( v13 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v13 + 8LL))(v13);
  *(_QWORD *)v12 = &CCompositeSystemEffect::`vftable'{for `ICompositeSystemEffect'};
  *((_QWORD *)v12 + 1) = &CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v12 + 2) = &CCompositeSystemEffect::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v12 + 3) = &CCompositeSystemEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v12 + 7) = 0LL;
  *((_QWORD *)v12 + 8) = 0LL;
  *((_QWORD *)v12 + 9) = 0LL;
  *((_QWORD *)v12 + 10) = 0LL;
  *((_QWORD *)v12 + 11) = 0LL;
  *((_QWORD *)v12 + 12) = 0LL;
  *((_QWORD *)v12 + 13) = 0LL;
  v14 = *a6;
  v15 = *a4;
  v16 = *a3;
  v17 = *a5;
  v12[10] = *a2;
  v12[11] = v16;
  v12[12] = v15;
  if ( !v17 )
  {
LABEL_15:
    v24 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v12)(
            v12,
            &GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee,
            a1);
    goto LABEL_16;
  }
  v18 = 0;
  while ( 1 )
  {
    v19 = v12[17];
    if ( v18 != v19 )
    {
      v22 = *((_QWORD *)v12 + 7);
      goto LABEL_12;
    }
    if ( v19 )
    {
      v20 = 2 * v18;
      if ( (v18 & 0x40000000) != 0 )
        break;
    }
    else
    {
      v20 = 1;
    }
    if ( (unsigned __int64)v20 > 0x7FFFFFF )
      break;
    v21 = _o__recalloc(*((_QWORD *)v12 + 7), v20, 16LL);
    v22 = v21;
    if ( !v21 )
      break;
    *((_QWORD *)v12 + 7) = v21;
    v18 = v12[16];
    v12[17] = v20;
LABEL_12:
    v23 = (_OWORD *)(v22 + 16LL * v18);
    if ( v23 )
    {
      *v23 = *v14;
      v18 = v12[16];
    }
    ++v18;
    ++v6;
    ++v14;
    v12[16] = v18;
    if ( v6 >= v17 )
      goto LABEL_15;
  }
  v24 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C3,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
LABEL_16:
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
  return v24;
}
