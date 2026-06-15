/*
 * XREFs of ??1?$ComPtr@VAudioDeviceBroker@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x140047FFC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::Internal::AudioDeviceBroker_Windows::Media::Devices::Internal::IAudioDeviceBroker_void_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x14001F818 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--Internal--Audi_ea_14001F818.c)
 * Callees:
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x1400189D0 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 */

Windows::Media::Devices::AudioDeviceModulesManager *__fastcall Microsoft::WRL::ComPtr<Windows::Media::Devices::Internal::AudioDeviceBroker>::~ComPtr<Windows::Media::Devices::Internal::AudioDeviceBroker>(
        Windows::Media::Devices::AudioDeviceModulesManager **a1)
{
  Windows::Media::Devices::AudioDeviceModulesManager *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (Windows::Media::Devices::AudioDeviceModulesManager *)Windows::Media::Devices::AudioDeviceModulesManager::Release(result);
  }
  return result;
}
