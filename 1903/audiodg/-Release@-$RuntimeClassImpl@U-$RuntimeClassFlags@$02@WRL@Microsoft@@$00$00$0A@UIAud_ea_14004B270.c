/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004B270
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x140019010 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroke.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x140019020 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_140019020.c)
 *     ??1?$ComPtr@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1400457CC (--1-$ComPtr@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@@WRL@Microsoft@@Q.c)
 *     ?Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14004B310 (-Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     ?ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x14004BF90 (-ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTAN.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 7);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 7, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_6;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_6:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 56))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
