/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModule@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004B0F0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModule@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x140018FB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAud_ea_140018FB0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModule@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x140018FC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAud_ea_140018FC0.c)
 *     ?Release@AudioDeviceModule@Devices@Media@Windows@@UEAAKXZ @ 0x14004B320 (-Release@AudioDeviceModule@Devices@Media@Windows@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::Release(
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
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 96))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
