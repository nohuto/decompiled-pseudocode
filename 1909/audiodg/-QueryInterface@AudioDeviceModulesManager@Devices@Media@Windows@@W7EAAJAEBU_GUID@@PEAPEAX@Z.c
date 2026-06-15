/*
 * XREFs of ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface(
           (Windows::Media::Devices::AudioDeviceModulesManager *)(a1 - 8),
           a2,
           a3);
}
