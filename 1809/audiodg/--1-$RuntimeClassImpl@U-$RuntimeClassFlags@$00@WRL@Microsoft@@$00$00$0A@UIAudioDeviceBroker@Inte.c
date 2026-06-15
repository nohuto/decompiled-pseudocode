/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1400188E8
 * Callers:
 *     ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x14001873C (--1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 *     ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x140018FAC (--1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140048940 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIAudioDeviceBroker@Internal@Devices@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140018300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release(2 * v2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 40);
}
