/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  *a3 = 0LL;
  if ( (*(_QWORD *)a2 != __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*(_DWORD *)a2 != 1628200849
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef.Data4[4]) )
  {
    return 2147500034LL;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
