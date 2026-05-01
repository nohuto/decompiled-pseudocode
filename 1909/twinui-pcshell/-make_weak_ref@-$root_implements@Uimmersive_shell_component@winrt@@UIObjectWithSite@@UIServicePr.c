/*
 * XREFs of ?make_weak_ref@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800C4BE4
 * Callers:
 *     ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C4FF0 (-query_interface@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z @ 0x1800C48EC (-atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ @ 0x1800C515C (-unconditional_release_ref@-$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::make_weak_ref(
        volatile signed __int64 *a1)
{
  volatile signed __int64 *v2; // r15
  __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  bool v7; // al
  signed __int64 v8; // r8
  signed __int64 v9; // rax
  __int64 v10; // rbx
  signed __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  signed __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = a1 + 1;
  v3 = *((_QWORD *)a1 + 1);
  v12 = v3;
  if ( v3 >= 0 )
  {
    v5 = (unsigned __int64)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 8))(a1);
      *(_QWORD *)(v5 + 8) = &winrt::impl::weak_source<1>::`vftable';
      *(_QWORD *)v5 = &winrt::impl::weak_ref<1>::`vftable';
      *(_QWORD *)(v5 + 16) = v6;
      *(_DWORD *)(v5 + 24) = v3;
      *(_DWORD *)(v5 + 28) = 1;
    }
    else
    {
      v5 = 0LL;
    }
    v11 = v5;
    if ( v5 )
    {
      v7 = std::atomic_compare_exchange_weak_explicit(v2, &v12, (v5 >> 1) | 0x8000000000000000uLL, 4, 0);
      while ( 1 )
      {
        if ( v7 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 24), 1u);
          return v11 + 8;
        }
        v9 = v12;
        if ( v12 < 0 )
          break;
        _InterlockedExchange((volatile __int32 *)(v5 + 24), v12);
        v7 = std::atomic_compare_exchange_weak_explicit(v2, &v12, v8, 4, 0);
        v5 = v11;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v12 + 24), 1u);
      v10 = 2 * v9 + 8;
      winrt::com_ptr<winrt::immersive_shell_component>::unconditional_release_ref(&v11);
      return v10;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v3 + 24), 1u);
    return 2 * v3 + 8;
  }
}
