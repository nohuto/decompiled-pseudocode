/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802E5610
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800BDEC0 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800BDED0 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800BDEE0 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800BDEF0 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800BDF00 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802E54A0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802E9B10 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1802EAC70 (-__abi_QueryInterface@-QObject@Platform@@XamlSnapAssistViewController@@UE$AAAJAEAVGuid@2@PEAPEAX.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180159C40 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x1802B5494 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802B5EC8 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlBaseViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        __int64 a1,
        Platform::Guid *a2)
{
  Platform::Guid *v2; // rcx
  __int64 v3; // r9
  _QWORD *v4; // r11
  Platform::Guid *v5; // rcx
  Platform::Guid *v6; // rcx
  Platform::Guid *v7; // r10
  Platform::Guid *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void **v11; // r11
  __int64 v12; // rax
  __int64 v13; // rcx
  Platform::Guid *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx
  struct Platform::Guid *v17; // r10

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || Platform::Guid::Equals(v5, &_uuidof__AU__IXamlBaseViewControllerPublicNonVirtuals__)
    || *(_QWORD *)(v3 + 120) && Platform::Guid::Equals(v6, &_uuidof__AUIAgileObject_Details_Platform__) )
  {
    *v4 = v3;
    v13 = v3 + 112;
    goto LABEL_18;
  }
  if ( Platform::Guid::Equals(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v12 = (v10 + 32) & -(__int64)(v10 != 0);
LABEL_8:
    *v11 = (void *)v12;
    v13 = v9;
LABEL_18:
    __abi_FTMWeakRefData::Increment(v13);
    return 0LL;
  }
  if ( Platform::Guid::Equals(v8, &_uuidof__AUIXamlMultitaskingViewController__) )
  {
    v16 = v15 + 8;
LABEL_11:
    v12 = v16 & -(__int64)(v15 != 0);
    goto LABEL_8;
  }
  if ( Platform::Guid::Equals(v14, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__) )
  {
    v16 = v15 + 16;
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(v9 + 8)
    || (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                       (__abi_FTMWeakRefData *)(v9 & -(__int64)(*(_QWORD *)(v9 + 8) != 0LL)),
                       v17,
                       v11) )
  {
    return 2147500034LL;
  }
  return 0LL;
}
