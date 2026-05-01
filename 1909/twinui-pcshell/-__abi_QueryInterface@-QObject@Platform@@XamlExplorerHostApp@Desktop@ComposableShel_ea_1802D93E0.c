/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802D93E0
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DD820 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInte.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DD830 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_1800DD830.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DD840 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_1800DD840.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DD850 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_1800DD850.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DD860 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_1800DD860.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WFA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800DD870 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_1800DD870.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180178EE0 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x1802D49B4 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802D53F8 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        __int64 a1,
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
  __int64 v14; // rcx

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || Platform::Guid::Equals(
         v7,
         &_uuidof__AU__IXamlExplorerHostAppPublicNonVirtuals_Desktop_ComposableShell_WindowsInternal__)
    || *(_QWORD *)(a1 + 232) && Platform::Guid::Equals(v8, &_uuidof__AUIAgileObject_Details_Platform__) )
  {
    *a3 = (void *)a1;
    v12 = a1 + 224;
    goto LABEL_18;
  }
  if ( Platform::Guid::Equals(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v11 = (a1 + 72) & -(__int64)(a1 != 0);
LABEL_8:
    *a3 = (void *)v11;
    v12 = v10;
LABEL_18:
    __abi_FTMWeakRefData::Increment(v12);
    return 0LL;
  }
  if ( Platform::Guid::Equals(v9, &_uuidof__AUIApplicationOverrides_Xaml_UI_Windows__) )
  {
    v14 = a1 + 40;
LABEL_11:
    v11 = v14 & -(__int64)(a1 != 0);
    goto LABEL_8;
  }
  if ( Platform::Guid::Equals(v13, &_uuidof__AUIXamlMetadataProvider_Markup_Xaml_UI_Windows__) )
  {
    v14 = a1 + 64;
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(v10 + 8)
    || (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                       (__abi_FTMWeakRefData *)(v10 & -(__int64)(*(_QWORD *)(v10 + 8) != 0LL)),
                       a2,
                       a3) )
  {
    return (***(__int64 (__fastcall ****)(_QWORD, Platform::Guid *, void **))(a1 + 56))(*(_QWORD *)(a1 + 56), a2, a3);
  }
  return 0LL;
}
