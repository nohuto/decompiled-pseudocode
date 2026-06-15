/*
 * XREFs of ??1?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1400457F0
 * Callers:
 *     _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$7 @ 0x14004A2AD (_Windows--Media--Devices--AudioDeviceModulesManager--OnModuleChanged_--_1_--dtor$7.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004B160 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_14004B160.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs>::~ComPtr<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
