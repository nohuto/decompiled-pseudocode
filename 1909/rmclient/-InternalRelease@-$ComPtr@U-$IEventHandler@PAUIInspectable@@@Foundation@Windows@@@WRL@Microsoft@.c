/*
 * XREFs of ?InternalRelease@?$ComPtr@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IAEKXZ @ 0x1000B9E1
 * Callers:
 *     _lambda_046e550ea9397cce661af54b6af0d395_::operator()_IInspectable___IInspectable___ @ 0x100079EF (_lambda_046e550ea9397cce661af54b6af0d395_--operator()_IInspectable___IInspectable___.c)
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAUEventRegistrationToken@@@Z @ 0x10008950 (-Add@-$AgileEventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpti.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YGJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAPAU345@@Z @ 0x10008B20 (--$CreateAgileHelper@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microso.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UAGKXZ @ 0x100092B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Implements@U-$.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

signed __int32 __thiscall Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(
        volatile signed __int32 **this)
{
  volatile signed __int32 *v1; // edx
  signed __int32 result; // eax
  signed __int32 (__stdcall *v3)(volatile signed __int32 *); // esi

  v1 = *this;
  result = 0;
  if ( *this )
  {
    *this = 0;
    v3 = *(signed __int32 (__stdcall **)(volatile signed __int32 *))(*v1 + 8);
    if ( v3 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::Release(v1);
    else
      return ((int (__thiscall *)(_DWORD, volatile signed __int32 *))v3)(*(_DWORD *)(*v1 + 8), v1);
  }
  return result;
}
