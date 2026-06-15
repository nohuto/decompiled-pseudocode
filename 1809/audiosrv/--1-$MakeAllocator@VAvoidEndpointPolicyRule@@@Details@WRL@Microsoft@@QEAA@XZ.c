/*
 * XREFs of ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800BA544
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x18003F3E0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18003FA50 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?InitializeProcessSubmixManager@@YAJXZ @ 0x18005D2DC (-InitializeProcessSubmixManager@@YAJXZ.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore_unsigned_short_const_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18006A3F2 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore_un.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const_____ptr64_&___ptr64_int_&___ptr64__::_1_::dtor$0 @ 0x18006B218 (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_un.c)
 *     _Microsoft::WRL::Details::Make_AtmosCheck__::_1_::dtor$1 @ 0x18006EFC0 (_Microsoft--WRL--Details--Make_AtmosCheck__--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionManagerProvider_CAudioSessionManagerProvider__::_1_::dtor$0 @ 0x18006FEF2 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionManagerProvider_CAudioSessionManagerPro.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Sarm::CSpatialAudioResourceManager_ISpatialAudioResourceManager_IAudioPolicyManager_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18006FF70 (_Microsoft--WRL--Details--MakeAndInitialize_Sarm--CSpatialAudioResourceManager_ISpatialAudioReso.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamGroupParams_____ptr64_&___ptr64_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&___ptr64_unsigned_long_&___ptr64__::_1_::dtor$0 @ 0x1800E167F (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamG.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice_____ptr64_&___ptr64_unsigned_int_&___ptr64__tagpropertykey_const_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18010EE92 (_Microsoft--WRL--Details--MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice_____pt.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__::_1_::dtor$0 @ 0x1801128E6 (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__--_1_.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AvoidEndpointPolicyRule_IPolicyRule_IAudioProcess_____ptr64_&___ptr64__DynamicRoutingRule_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18011CBC9 (_Microsoft--WRL--Details--MakeAndInitialize_AvoidEndpointPolicyRule_IPolicyRule_IAudioProcess___.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CommunicationsRemapPolicyRule_IPolicyRule_IAudioProcess_____ptr64_&___ptr64__DynamicRoutingRule_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18011CCA8 (_Microsoft--WRL--Details--MakeAndInitialize_CommunicationsRemapPolicyRule_IPolicyRule_IAudioProc.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess_____ptr64_&___ptr64__DynamicRoutingRule_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x18011CD81 (_Microsoft--WRL--Details--MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess_____ptr64_.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
