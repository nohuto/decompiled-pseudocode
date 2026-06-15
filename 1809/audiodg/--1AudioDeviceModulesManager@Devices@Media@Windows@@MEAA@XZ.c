/*
 * XREFs of ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x140018FAC
 * Callers:
 *     ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140018F70 (--_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140019FB0 (-InternalRelease@-$ComPtr@V-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqual.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D7F4 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Media::Devices::AudioDeviceModulesManager::~AudioDeviceModulesManager(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  __int64 v2; // r10
  __int64 v3; // r10

  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( *((_BYTE *)this + 120) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 72LL))(
      *((_QWORD *)this + 12),
      *((_QWORD *)this + 14));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease((char *)this + 104);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease((char *)this + 96);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    if ( !ATL::SafeDecrementReferenceMultiThread((int *)(v2 + 12)) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>((__int64)this);
}
