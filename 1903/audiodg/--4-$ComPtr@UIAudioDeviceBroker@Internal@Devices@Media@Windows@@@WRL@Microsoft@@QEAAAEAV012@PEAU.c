/*
 * XREFs of ??4?$ComPtr@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@@Z @ 0x140045D80
 * Callers:
 *     ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBroker@Internal@123@@Z @ 0x140045314 (--0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBroker@Inter.c)
 *     ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x14004A2C0 (-OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Media::Devices::Internal::IAudioDeviceBroker>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *a1;
    }
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
