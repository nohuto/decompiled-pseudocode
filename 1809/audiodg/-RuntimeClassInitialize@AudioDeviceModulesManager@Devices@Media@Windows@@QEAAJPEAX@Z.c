/*
 * XREFs of ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140002444
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140002390 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x140002658 (-RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140003004 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ?InternalRelease@?$ComPtr@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140019FB0 (-InternalRelease@-$ComPtr@V-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqual.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::RuntimeClassInitialize(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        void *a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v5; // rdi
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (__int64 *)((char *)this + 96);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease((char *)this + 96);
  result = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
             v2,
             &v6);
  if ( (int)result >= 0 )
  {
    result = Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents(this);
    if ( (int)result >= 0 )
    {
      v5 = *v2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease((char *)this + 104);
      return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 48LL))(v5, (char *)this + 104);
    }
  }
  return result;
}
