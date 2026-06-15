/*
 * XREFs of ??$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@12@$$QEAPEAUIAudioDeviceModule@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x1400448B8
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140049E70 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400165AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@QEAA@PEAUIAudioDeviceModule@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x140045348 (--0AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@QEAA@PEAUIAudioDeviceModule@123.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004B0B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_14004B0B0.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,Windows::Media::Devices::IAudioDeviceModule *,Windows::Storage::Streams::IBuffer *>(
        __int64 *a1,
        struct Windows::Media::Devices::IAudioDeviceModule **a2,
        struct Windows::Storage::Streams::IBuffer **a3)
{
  Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *v6; // rax
  __int64 v7; // rdi

  *a1 = 0LL;
  v6 = (Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *)operator new(
                                                                            0x50uLL,
                                                                            (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::AudioDeviceModuleNotificationEventArgs(
           v6,
           *a2,
           *a3);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v7;
  }
  return a1;
}
