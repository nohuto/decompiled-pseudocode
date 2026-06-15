/*
 * XREFs of ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800BDCA8
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800323B0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180039810 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18003A370 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@K.c)
 *     ?InitializeProcessSubmixManager@@YAJXZ @ 0x18005ED5C (-InitializeProcessSubmixManager@@YAJXZ.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const___&_int_&__::_1_::dtor$0 @ 0x18006DF23 (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_un.c)
 *     _Microsoft::WRL::Details::Make_AtmosCheck__::_1_::dtor$1 @ 0x1800719F0 (_Microsoft--WRL--Details--Make_AtmosCheck__--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Sarm::CSpatialAudioResourceManager_ISpatialAudioResourceManager_IAudioPolicyManager___&__::_1_::dtor$0 @ 0x180071C4D (_Microsoft--WRL--Details--MakeAndInitialize_Sarm--CSpatialAudioResourceManager_ISpatialAudioReso.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore_unsigned_short_const___&__::_1_::dtor$0 @ 0x180071C93 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore_un.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionManagerProvider_CAudioSessionManagerProvider__::_1_::dtor$0 @ 0x18007418D (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionManagerProvider_CAudioSessionManagerPro.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamGroupParams___&_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&_unsigned_long_&__::_1_::dtor$0 @ 0x1800EC88B (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamG.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualAudioStream_IVirtualAudioStream_IAudioProcess___&_enum__AUDIO_STREAM_EXTENDED_CATEGORY_unsigned_short_const___&_enum___MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001_&__::_1_::dtor$0 @ 0x180103A18 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualAudioStream_IVirtualAudioStream_IAudioProces.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_DialogSession_DialogSession_IAudioProcess___unsigned_short_const___&__::_1_::dtor$0 @ 0x180103AFB (_Microsoft--WRL--Details--MakeAndInitialize_DialogSession_DialogSession_IAudioProcess___unsigned.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice___&_unsigned_int_&__tagpropertykey_const___&__::_1_::dtor$0 @ 0x18011BFF2 (_Microsoft--WRL--Details--MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice___-_un.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__::_1_::dtor$0 @ 0x18011E8D6 (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__--_1_.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AvoidEndpointPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$0 @ 0x1801291E9 (_Microsoft--WRL--Details--MakeAndInitialize_AvoidEndpointPolicyRule_IPolicyRule_IAudioProcess___.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CommunicationsRemapPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$0 @ 0x1801292C8 (_Microsoft--WRL--Details--MakeAndInitialize_CommunicationsRemapPolicyRule_IPolicyRule_IAudioProc.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$0 @ 0x1801293A1 (_Microsoft--WRL--Details--MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___-__Dynam.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
