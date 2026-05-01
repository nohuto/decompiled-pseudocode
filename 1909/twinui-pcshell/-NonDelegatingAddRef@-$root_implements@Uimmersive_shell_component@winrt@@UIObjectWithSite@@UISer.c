/*
 * XREFs of ?NonDelegatingAddRef@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAIXZ @ 0x1800C1024
 * Callers:
 *     ?AddRef@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@QEAAIXZ @ 0x1800C09D4 (-AddRef@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@.c)
 * Callees:
 *     ?atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z @ 0x1800C48EC (-atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingAddRef(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int v3; // r8d
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1 + 8;
  v2 = *(_QWORD *)(a1 + 8);
  v5 = v2;
  while ( v2 >= 0 )
  {
    if ( (unsigned __int8)std::atomic_compare_exchange_weak_explicit(v1, &v5, v2 + 1, 0LL, 0) )
      return v3;
    v2 = v5;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 24));
}
