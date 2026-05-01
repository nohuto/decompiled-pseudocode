/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802F18B0
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DEAB0 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DEAC0 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Com_ea_1800DEAC0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DEAD0 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Com_ea_1800DEAD0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DEAE0 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Com_ea_1800DEAE0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DEAF0 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Com_ea_1800DEAF0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DEB00 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Com_ea_1800DEB00.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WDI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DEB10 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Com_ea_1800DEB10.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WEA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DEB20 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Com_ea_1800DEB20.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WHA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DEB30 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Com_ea_1800DEB30.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WHI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DEB40 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Com_ea_1800DEB40.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180178EE0 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x1802D49B4 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802D53F8 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802F1DD0 (-__abi_QueryInterface@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Multita_ea_1802F1DD0.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform____Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        _QWORD *a1,
        Platform::Guid *a2,
        void **a3)
{
  Platform::Guid *v6; // rcx
  Platform::Guid *v7; // rcx
  Platform::Guid *v8; // rcx
  Platform::Guid *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  Platform::Guid *v13; // rcx
  unsigned __int64 v14; // rcx
  Platform::Guid *v15; // rcx
  Platform::Guid *v16; // rcx

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || Platform::Guid::Equals(
         v7,
         &_uuidof__AU__IBoxArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Platform__)
    || a1[12] && Platform::Guid::Equals(v8, &_uuidof__AUIAgileObject_Details_Platform__) )
  {
    *a3 = a1;
    v12 = (__int64)(a1 + 11);
    goto LABEL_22;
  }
  if ( Platform::Guid::Equals(a2, &_uuidof__AUIValueType_Platform__) )
  {
    v11 = (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL);
LABEL_8:
    *a3 = (void *)v11;
    v12 = v10;
LABEL_22:
    __abi_FTMWeakRefData::Increment(v12);
    return 0LL;
  }
  if ( Platform::Guid::Equals(v9, &_uuidof__AUIDisposable_Platform__) )
  {
    v14 = (unsigned __int64)(a1 + 3);
LABEL_11:
    v11 = v14 & -(__int64)(a1 != 0LL);
    goto LABEL_8;
  }
  if ( Platform::Guid::Equals(v13, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v14 = (unsigned __int64)(a1 + 14);
    goto LABEL_11;
  }
  if ( Platform::Guid::Equals(
         v15,
         &_uuidof__AU__I__WriteOnlyArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00PublicNonVirtuals_Platform__) )
  {
    v14 = (unsigned __int64)(a1 + 4);
    goto LABEL_11;
  }
  if ( Platform::Guid::Equals(
         v16,
         &_uuidof__AU__I__Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00PublicNonVirtuals_Platform__) )
  {
    v14 = (unsigned __int64)(a1 + 2);
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(v10 + 8)
    || (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                       (__abi_FTMWeakRefData *)(v10 & -(__int64)(*(_QWORD *)(v10 + 8) != 0LL)),
                       a2,
                       a3) )
  {
    return ___abi_QueryInterface__QObject_Platform____WriteOnlyArray_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(a1 + 4);
  }
  return 0LL;
}
