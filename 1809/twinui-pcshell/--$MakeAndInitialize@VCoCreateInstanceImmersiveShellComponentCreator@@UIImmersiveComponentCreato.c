/*
 * XREFs of ??$MakeAndInitialize@VCoCreateInstanceImmersiveShellComponentCreator@@UIImmersiveComponentCreator@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveComponentCreator@@@Z @ 0x18018DBB0
 * Callers:
 *     ?EnsureComponentCreators@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18018E44C (-EnsureComponentCreators@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006E460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CoCreateInstanceImmersiveShellComponentCreator,IImmersiveComponentCreator,>(
        __int64 *a1)
{
  _DWORD *v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edi
  _DWORD *v5; // rcx
  volatile int *v6; // rdx

  *a1 = 0LL;
  v2 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (__int64)v2;
  if ( v2 )
  {
    v2[3] = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveComponentCreator>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &CoCreateInstanceImmersiveShellComponentCreator::`vftable';
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v3;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      v4 = 0;
    }
    else if ( InlineIsEqualGUID(v5, v5) )
    {
      *a1 = v3;
      v4 = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
        v3,
        v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
