/*
 * XREFs of ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ @ 0x1000B7F0
 * Callers:
 *     ??$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AA_KAA_K@Details@WRL@Microsoft@@YG?AV?$ComPtr@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@@12@AA_K0@Z @ 0x10008830 (--$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AA_KAA_K@Details@WRL@Microsoft@@YG.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100089C0 (-AddInternal@-$EventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeO.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YGJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAPAU345@@Z @ 0x10008B20 (--$CreateAgileHelper@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microso.c)
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QAE@XZ @ 0x1000B7E4 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QAE@XZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEAAV012@PAUIUnknown@@@Z @ 0x1000B830 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEAAV012@PAUIUnknown@@@Z.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEPAXI@Z @ 0x1000EFC4 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEPAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UAGKXZ @ 0x100092B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Implements@U-$.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

signed __int32 __thiscall Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(volatile signed __int32 **this)
{
  volatile signed __int32 *v1; // eax
  signed __int32 (__stdcall *v2)(volatile signed __int32 *); // esi

  v1 = *this;
  if ( !*this )
    return 0;
  *this = 0;
  v2 = *(signed __int32 (__stdcall **)(volatile signed __int32 *))(*v1 + 8);
  if ( v2 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::Release )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::Release(v1);
  else
    return ((int (__thiscall *)(_DWORD, volatile signed __int32 *))v2)(*(_DWORD *)(*v1 + 8), v1);
}
