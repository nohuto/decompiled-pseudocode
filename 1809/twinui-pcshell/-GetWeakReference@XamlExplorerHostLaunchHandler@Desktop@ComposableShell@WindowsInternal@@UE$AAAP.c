/*
 * XREFs of ?GetWeakReference@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIWeakReference@Details@Platform@@XZ @ 0x18025CCEC
 * Callers:
 *     ?GetWeakReference@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAPE$AAUIWeakReference@Details@Platform@@XZ @ 0x1800A35B0 (-GetWeakReference@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$A.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18025D158 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_18025D158.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::GetWeakReference(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 40));
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
