/*
 * XREFs of ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x140002658
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140002444 (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64___::_)(Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64___lambda_511023af88e174782ac1e7ddac964c62___ @ 0x1400031AC (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140018300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  int v4; // ebx
  __int128 v6; // [rsp+28h] [rbp-30h]
  Windows::Media::Devices::AudioDeviceModulesManager *v7; // [rsp+38h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)&v6 = Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged;
  DWORD2(v6) = 0;
  v7 = this;
  v8 = v6;
  v2 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64___::___Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64___lambda_511023af88e174782ac1e7ddac964c62___(
                    &v9,
                    &v7);
  v3 = *v2;
  v10 = *v2;
  *v2 = 0LL;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release();
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 12) + 64LL))(
         *((_QWORD *)this + 12),
         v3,
         (char *)this + 112);
  if ( v4 >= 0 )
    *((_BYTE *)this + 120) = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return (unsigned int)v4;
}
