/*
 * XREFs of ??1?$ComPtr@VAudioDeviceBroker@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1400457A8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::Internal::AudioDeviceBroker_Windows::Media::Devices::Internal::IAudioDeviceBroker_void___&__::_1_::dtor$2 @ 0x140019B08 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--Internal--Audi_ea_140019B08.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140014320 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModul.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Media::Devices::Internal::AudioDeviceBroker>::~ComPtr<Windows::Media::Devices::Internal::AudioDeviceBroker>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
