/*
 * XREFs of ??1?$ComPtr@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1400457CC
 * Callers:
 *     _Windows::Media::Devices::Internal::AudioDeviceBroker::CMModulesNotificationCallback_::_1_::dtor$3 @ 0x140046D8D (_Windows--Media--Devices--Internal--AudioDeviceBroker--CMModulesNotificationCallbac_ea_140046D8D.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBroker::ThreadpoolCallback_::_1_::dtor$1 @ 0x14004C17D (_Windows--Media--Devices--Internal--AudioDeviceBroker--ThreadpoolCallback_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004B270 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_14004B270.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs>::~ComPtr<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
