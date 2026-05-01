/*
 * XREFs of ??0?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QE$AAA@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180268988
 * Callers:
 *     ?get@?Q?$IBoxArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Platform@@Value@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAP$01E$AAV42@XZ @ 0x18027C3D0 (-get@-Q-$IBoxArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Platform@@V.c)
 * Callees:
 *     ??0?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@IE$AAA@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180268F44 (--0-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platfor.c)
 */

// Hidden C++ exception states: #wind=1
Platform::Details *__fastcall Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(
        Platform::Details *a1)
{
  void *v2; // rdx

  Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>((char *)a1 + 32);
  *(_QWORD *)a1 = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>'};
  *((_QWORD *)a1 + 1) = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::IValueType'};
  *((_QWORD *)a1 + 2) = ___7__Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_Platform__6B__I__Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00PublicNonVirtuals_1__;
  *((_QWORD *)a1 + 3) = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::IDisposable'};
  *((_QWORD *)a1 + 4) = ___7__Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_Platform__6B__I__WriteOnlyArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00PublicNonVirtuals_1__;
  *((_QWORD *)a1 + 5) = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>'};
  *((_QWORD *)a1 + 6) = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>'};
  *((_QWORD *)a1 + 7) = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>'};
  *((_QWORD *)a1 + 8) = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>'};
  *((_QWORD *)a1 + 14) = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  *((_QWORD *)a1 + 15) = &Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *((_QWORD *)a1 + 1) = Platform::Details::GetIBoxArrayVtable(a1, v2);
  return a1;
}
