/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioGraphCallback@@UIVolumeStrip@@@WRL@Microsoft@@UEAA@XZ @ 0x1800BDD64
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$0 @ 0x180072A2C (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$0.c)
 *     _CVolumeStrip::CVolumeStrip_::_1_::dtor$0 @ 0x180074330 (_CVolumeStrip--CVolumeStrip_--_1_--dtor$0.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$0 @ 0x1800DCCF8 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioGraphCallback,IVolumeStrip>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioGraphCallback,IVolumeStrip>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = -1073741823;
}
