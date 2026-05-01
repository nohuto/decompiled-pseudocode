/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UAGKXZ @ 0x10008230
 * Callers:
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGKXZ @ 0x10008220 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGKXZ.c)
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z @ 0x10008790 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z.c)
 *     ??$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AA_KAA_K@Details@WRL@Microsoft@@YG?AV?$ComPtr@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@@12@AA_K0@Z @ 0x10008830 (--$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AA_KAA_K@Details@WRL@Microsoft@@YG.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W3AGKXZ @ 0x1000D6A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppM_ea_1000D6A0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7AGKXZ @ 0x1000D6B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppM_ea_1000D6B0.c)
 * Callees:
 *     ??_GAppMemoryUsageLimitChangingEventArgs@System@Windows@@UAEPAXI@Z @ 0x100081E0 (--_GAppMemoryUsageLimitChangingEventArgs@System@Windows@@UAEPAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009F60 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::Release(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *a1)
{
  signed __int32 i; // ecx
  signed __int32 v2; // edi
  signed __int32 v3; // eax
  Windows::System::AppMemoryUsageLimitChangingEventArgs *(__thiscall *v5)(Windows::System::AppMemoryUsageLimitChangingEventArgs *, char); // ebx
  void (__thiscall *v6)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *); // esi

  for ( i = *((_DWORD *)a1 + 7); i >= 0; i = v3 )
  {
    v2 = i - 1;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 7, i - 1, i);
    if ( v3 == i )
      goto LABEL_4;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * i + 12));
LABEL_4:
  if ( v2 )
    return v2;
  if ( a1 )
  {
    v5 = *(Windows::System::AppMemoryUsageLimitChangingEventArgs *(__thiscall **)(Windows::System::AppMemoryUsageLimitChangingEventArgs *, char))(*(_DWORD *)a1 + 32);
    if ( v5 == Windows::System::AppMemoryUsageLimitChangingEventArgs::`scalar deleting destructor' )
      Windows::System::AppMemoryUsageLimitChangingEventArgs::`scalar deleting destructor'(a1, 1);
    else
      v5(a1, 1);
  }
  if ( !Microsoft::WRL::Details::ModuleBase::module_ )
    return v2;
  v6 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8);
  if ( (char *)v6 != (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
  {
    v6(
      *(_DWORD *)(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8),
      Microsoft::WRL::Details::ModuleBase::module_);
    return v2;
  }
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
  return 0;
}
