/*
 * XREFs of ??4?$ComPtr@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@@Z @ 0x1400483C0
 * Callers:
 *     ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBroker@Internal@123@@Z @ 0x140047B0C (--0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBroker@Inter.c)
 *     ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x14004CA60 (-OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140019FB0 (-InternalRelease@-$ComPtr@V-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqual.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Media::Devices::Internal::IAudioDeviceBroker>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(&v6);
  }
  return a1;
}
