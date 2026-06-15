/*
 * XREFs of ??0AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@QEAA@PEAUIAudioDeviceModule@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x140047BF4
 * Callers:
 *     ??$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@12@$$QEAPEAUIAudioDeviceModule@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x1400470D0 (--$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@23.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x140003250 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140048418 (--4-$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@St.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x14004C1BC (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 */

Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *__fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::AudioDeviceModuleNotificationEventArgs(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3)
{
  _QWORD *v3; // rsi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  struct Windows::Media::Devices::IAudioDeviceModule *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *)((char *)this + 16));
  v7 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 1LL;
  if ( v7 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v3 = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  if ( *((struct Windows::Media::Devices::IAudioDeviceModule **)this + 8) != a2 )
  {
    v9 = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef(&v9);
    v9 = (struct Windows::Media::Devices::IAudioDeviceModule *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  }
  Microsoft::WRL::ComPtr<Windows::Storage::Streams::IBuffer>::operator=((char *)this + 72, a3);
  return this;
}
