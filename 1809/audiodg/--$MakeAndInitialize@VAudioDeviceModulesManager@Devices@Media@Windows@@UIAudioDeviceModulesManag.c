/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140002390
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003420 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140002444 (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x14000286C (--0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
        _QWORD *a1,
        void **a2)
{
  Windows::Media::Devices::AudioDeviceModulesManager *v4; // rax
  Windows::Media::Devices::AudioDeviceModulesManager *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = (Windows::Media::Devices::AudioDeviceModulesManager *)operator new(
                                                               0x80uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = (Windows::Media::Devices::AudioDeviceModulesManager *)Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(v4);
    v6 = Windows::Media::Devices::AudioDeviceModulesManager::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(Windows::Media::Devices::AudioDeviceModulesManager *, GUID *, _QWORD *))v5)(
             v5,
             &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed,
             a1);
    if ( v5 )
      (*(void (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
