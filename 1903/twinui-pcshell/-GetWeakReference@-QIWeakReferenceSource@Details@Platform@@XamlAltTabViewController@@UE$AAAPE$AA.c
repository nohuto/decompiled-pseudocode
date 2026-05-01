/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1802C9A40
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800BB430 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@SwitchItemDataViewImpl@Multitasking@C.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@WCI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800BCD80 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@WCI@E$AAAPE.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WJI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800BCD90 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WJI@E$AAAPE$.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlSnapAssistViewController@@WJA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800BD930 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlSnapAssistViewController@@WJA@E$A.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802D1F04 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1802D1F04.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802E4D58 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1802E4D58.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802E9A98 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1802E9A98.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlSnapAssistViewController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802EABFC (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1802EABFC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlAltTabViewController__UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 120));
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
