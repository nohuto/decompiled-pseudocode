/*
 * XREFs of ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAKXZ @ 0x1400194A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::Release(__int64 a1)
{
  return Windows::Media::Devices::AudioDeviceModulesManager::Release((Windows::Media::Devices::AudioDeviceModulesManager *)(a1 - 16));
}
