/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x180279B90
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@W7E$AAAKXZ @ 0x1800A5760 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Intern.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WBA@E$AAAKXZ @ 0x1800A5770 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800A5770.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WBI@E$AAAKXZ @ 0x1800A5780 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800A5780.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WCA@E$AAAKXZ @ 0x1800A5790 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800A5790.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WCI@E$AAAKXZ @ 0x1800A57A0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800A57A0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WDA@E$AAAKXZ @ 0x1800A57B0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800A57B0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WDI@E$AAAKXZ @ 0x1800A57C0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800A57C0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WEA@E$AAAKXZ @ 0x1800A57D0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800A57D0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WEI@E$AAAKXZ @ 0x1800A57E0 (-__abi_Release@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@Composabl_ea_1800A57E0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18025C724 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x18025D4A8 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_Release__QObject_Platform____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_2_UE_AAAKXZ(
        std::_Ref_count_base **a1)
{
  Platform::Details::ControlBlock **v2; // rsi
  void **v3; // rdx
  unsigned int v4; // edi
  void **v5; // rdx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  Platform::Details::ControlBlock *v8; // rbx

  v2 = a1 + 17;
  v4 = __abi_FTMWeakRefData::Decrement((int **)a1 + 17);
  if ( !v4 )
  {
    Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 16), v3);
    Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 15), v5);
    v6 = a1[13];
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    v7 = a1[11];
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    v8 = *v2;
    Platform::Details::ControlBlock::ReleaseTarget(*v2);
    Platform::Details::ControlBlock::__abi_Release(v8);
  }
  return v4;
}
