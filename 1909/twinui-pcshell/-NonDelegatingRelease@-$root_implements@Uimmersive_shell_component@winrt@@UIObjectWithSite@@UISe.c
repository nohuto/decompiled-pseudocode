/*
 * XREFs of ?NonDelegatingRelease@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAIXZ @ 0x1800C1230
 * Callers:
 *     ?Release@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEAAKXZ @ 0x1800C1D40 (-Release@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt.c)
 *     ?Release@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEAAKXZ @ 0x1800C1D70 (-Release@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UII.c)
 * Callees:
 *     ?atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z @ 0x1800C48EC (-atomic_compare_exchange_weak_explicit@std@@YA_NPEAU_Atomic_ullong@1@PEA_K_KW4memory_order@1@3@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingRelease(
        __int64 a1)
{
  __int64 v2; // rax
  unsigned __int32 v3; // ebx
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v5 = v2;
  while ( v2 >= 0 )
  {
    v3 = v2 - 1;
    if ( (unsigned __int8)std::atomic_compare_exchange_weak_explicit(a1 + 8, &v5, v2 - 1, 3LL, 0) )
      goto LABEL_7;
    v2 = v5;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v2 + 24));
  if ( !v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(2 * v2) + 16LL))(2 * v2);
LABEL_7:
  if ( !v3 && a1 )
    (**(void (__fastcall ***)(__int64, __int64))a1)(a1, 1LL);
  return v3;
}
