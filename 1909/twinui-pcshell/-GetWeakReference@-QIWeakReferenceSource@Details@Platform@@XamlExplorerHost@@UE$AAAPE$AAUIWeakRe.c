/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlExplorerHost@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1802D48E4
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlExplorerHost@@WBI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800DCDC0 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlExplorerHost@@WBI@E$AAAPE$AAUIWea.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlBaseViewController@@WCA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800E0780 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlBaseViewController@@WCA@E$AAAPE$A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlExplorerHost__UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 112));
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
