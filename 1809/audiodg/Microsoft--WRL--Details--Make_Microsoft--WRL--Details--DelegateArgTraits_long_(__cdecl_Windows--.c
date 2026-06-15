/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64___::_)(Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64___lambda_511023af88e174782ac1e7ddac964c62___ @ 0x1400031AC
 * Callers:
 *     ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x140002658 (-RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140018300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64___::___Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____ptr64___lambda_511023af88e174782ac1e7ddac964c62___(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v4 = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::`vftable';
    v4[3] = 1;
    if ( v6 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
    *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
    *((_QWORD *)v5 + 4) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v5 = off_140064468;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release();
    *a1 = v5;
  }
  return a1;
}
