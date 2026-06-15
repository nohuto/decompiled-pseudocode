/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioGraphCallback@@UIVolumeStrip@@@WRL@Microsoft@@UEAA@XZ @ 0x1800BA568
 * Callers:
 *     _CVolumeStrip::CVolumeStrip_::_1_::dtor$0 @ 0x18006FE43 (_CVolumeStrip--CVolumeStrip_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$0 @ 0x18007009A (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioGraphCallback,IVolumeStrip>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioGraphCallback,IVolumeStrip>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = -1073741823;
}
