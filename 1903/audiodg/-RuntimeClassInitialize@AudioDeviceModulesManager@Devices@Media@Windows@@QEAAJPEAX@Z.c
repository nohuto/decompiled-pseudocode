/*
 * XREFs of ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14000136C
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x1400012B8 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x140001DC4 (-RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140002E10 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::RuntimeClassInitialize(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        void *a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = (__int64 *)((char *)this + 96);
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  result = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
             v2,
             &v8);
  if ( (int)result >= 0 )
  {
    result = Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents(this);
    if ( (int)result >= 0 )
    {
      v6 = *((_QWORD *)this + 13);
      v7 = *v2;
      if ( v6 )
      {
        *((_QWORD *)this + 13) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 48LL))(v7, (char *)this + 104);
    }
  }
  return result;
}
