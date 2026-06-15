/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphStore@@@WRL@Microsoft@@UEAA@XZ @ 0x1800C7020
 * Callers:
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$0 @ 0x18006B01C (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$0.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$0 @ 0x18006F640 (_AtmosCheck--AtmosCheck_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::CDeviceGraphStore_::_1_::dtor$0 @ 0x1800701C7 (_CDeviceGraphStore--CDeviceGraphStore_--_1_--dtor$0.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$0 @ 0x1800C7465 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphStore>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphStore>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
