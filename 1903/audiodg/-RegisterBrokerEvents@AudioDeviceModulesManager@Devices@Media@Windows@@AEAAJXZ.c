/*
 * XREFs of ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x140001DC4
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14000136C (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBroker____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::_)(Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___ @ 0x1400026FC (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001357C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  __int64 v2; // rbx
  void *v3; // rax
  int v4; // ebx
  __int128 v6; // [rsp+28h] [rbp-30h]
  Windows::Media::Devices::AudioDeviceModulesManager *v7; // [rsp+38h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)&v6 = Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged;
  DWORD2(v6) = 0;
  v7 = this;
  v8 = v6;
  v2 = 0LL;
  v3 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v2 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBroker____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::___Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___(
           v3,
           &v7);
  v9 = v2;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 12) + 64LL))(
         *((_QWORD *)this + 12),
         v2,
         (char *)this + 112);
  if ( v4 >= 0 )
    *((_BYTE *)this + 120) = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return (unsigned int)v4;
}
