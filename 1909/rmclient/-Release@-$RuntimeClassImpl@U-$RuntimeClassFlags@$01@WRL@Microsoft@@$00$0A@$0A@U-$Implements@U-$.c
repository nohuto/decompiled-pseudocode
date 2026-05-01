/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UAGKXZ @ 0x100092B0
 * Callers:
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UAGJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PAUEventRegistrationToken@@@Z @ 0x10009230 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UAGJPAU-$IEventHandler@PAVAppMem.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ @ 0x1000B7F0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IAEKXZ @ 0x1000B9E1 (-InternalRelease@-$ComPtr@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@W3AGKXZ @ 0x1000D6E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Im_ea_1000D6E0.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

signed __int32 __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 8);
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__thiscall **)(volatile signed __int32 *, int))(*a1 + 16))(a1, 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8))(
        *(_DWORD *)(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8),
        Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
