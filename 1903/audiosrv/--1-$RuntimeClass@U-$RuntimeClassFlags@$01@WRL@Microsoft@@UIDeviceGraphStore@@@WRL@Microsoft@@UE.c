/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphStore@@@WRL@Microsoft@@UEAA@XZ @ 0x1800D5968
 * Callers:
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$0 @ 0x18006DAF2 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::CDeviceGraphStore_::_1_::dtor$0 @ 0x18007187C (_CDeviceGraphStore--CDeviceGraphStore_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$0 @ 0x1800719A8 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$0.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$0 @ 0x1800D5E45 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphStore>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphStore>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
