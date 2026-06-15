/*
 * XREFs of ??1AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAA@XZ @ 0x140048264
 * Callers:
 *     ??_EAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140048CE0 (--_EAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::~AudioDeviceModuleNotificationEventArgs(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this)
{
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::FtmBase>((__int64)this);
}
