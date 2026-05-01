/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UAGKXZ @ 0x10010DD0
 * Callers:
 *     ??_GAppMemoryUsageLimitChangingEventArgs@System@Windows@@UAEPAXI@Z @ 0x100081E0 (--_GAppMemoryUsageLimitChangingEventArgs@System@Windows@@UAEPAXI@Z.c)
 *     ??_GCAppMemoryReport@System@Windows@@UAEPAXI@Z @ 0x10009F70 (--_GCAppMemoryReport@System@Windows@@UAEPAXI@Z.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AAPAUIUnknown@@@Details@WRL@Microsoft@@YG?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AAPAUIUnknown@@@Z @ 0x100101F8 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AAPAUIUnknown@@@Details@WRL@Microsoft@@YG-AV-$.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UAE@XZ @ 0x10010428 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitCha.c)
 *     ??_E?$RuntimeClass@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@23@UIInspectable@@@WRL@Microsoft@@UAEPAXI@Z @ 0x10010530 (--_E-$RuntimeClass@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@23@UIInspectable@@@WRL@M.c)
 *     ??_E?$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@@WRL@Microsoft@@UAEPAXI@Z @ 0x100105A0 (--_E-$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@@WRL@Microsoft@@UAEPAXI@.c)
 *     ??_ECProcessMemoryReport@System@Windows@@UAEPAXI@Z @ 0x100105E0 (--_ECProcessMemoryReport@System@Windows@@UAEPAXI@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YGPAVWeakReferenceImpl@123@PAUIUnknown@@@Z @ 0x1001078D (-CreateWeakReference@Details@WRL@Microsoft@@YGPAVWeakReferenceImpl@123@PAUIUnknown@@@Z.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

signed __int32 __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
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
