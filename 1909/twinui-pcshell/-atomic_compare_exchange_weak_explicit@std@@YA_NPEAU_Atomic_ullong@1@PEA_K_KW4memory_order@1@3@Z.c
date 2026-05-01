/*
 * XREFs of ?atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z @ 0x1800C48EC
 * Callers:
 *     ?NonDelegatingAddRef@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAIXZ @ 0x1800C1024 (-NonDelegatingAddRef@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UISer.c)
 *     ?NonDelegatingRelease@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAIXZ @ 0x1800C1230 (-NonDelegatingRelease@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UISe.c)
 *     ?make_weak_ref@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800C4BE4 (-make_weak_ref@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServicePr.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::atomic_compare_exchange_weak_explicit(
        volatile signed __int64 *a1,
        signed __int64 *a2,
        signed __int64 a3,
        int a4,
        int a5)
{
  int v6; // eax
  int v7; // ecx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // rtt

  v6 = `std::_Memory_order_upper_bound'::`2'::_Upper[6 * a4 + a5];
  if ( !v6 )
    goto LABEL_9;
  if ( v6 <= 0 )
  {
LABEL_7:
    v7 = 0;
    return v7 != 0;
  }
  if ( v6 < 4 )
  {
LABEL_9:
    v11 = *a2;
    v8 = _InterlockedCompareExchange64(a1, a3, *a2);
    if ( v11 == v8 )
    {
      v7 = 1;
      return v7 != 0;
    }
    goto LABEL_6;
  }
  v7 = 1;
  if ( (unsigned int)(v6 - 4) > 1 )
    goto LABEL_7;
  v9 = *a2;
  v8 = _InterlockedCompareExchange64(a1, a3, *a2);
  if ( v9 != v8 )
  {
LABEL_6:
    *a2 = v8;
    goto LABEL_7;
  }
  return v7 != 0;
}
