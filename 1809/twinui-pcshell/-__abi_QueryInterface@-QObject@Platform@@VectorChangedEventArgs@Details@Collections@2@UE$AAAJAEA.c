/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180279290
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800A5590 (-__abi_QueryInterface@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAJAE.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800A55A0 (-__abi_QueryInterface@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAJ.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800A55B0 (-__abi_QueryInterface@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBI@E$AAAJ.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1800A55C0 (-__abi_QueryInterface@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAJ.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801301B0 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x18025CD54 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18025D398 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__VectorChangedEventArgs_Details_Collections_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(
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
  __int64 v14; // r9
  struct Platform::Guid *v15; // r10

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90)
    || Platform::Guid::Equals(v5, &_uuidof__AUIVectorChangedEventArgs_Collections_Foundation_Windows__)
    || *(_QWORD *)(v3 + 56) && Platform::Guid::Equals(v6, &_uuidof__AUIAgileObject_Details_Platform__) )
  {
    *v4 = v3;
    v13 = v3 + 48;
    goto LABEL_15;
  }
  if ( Platform::Guid::Equals(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v12 = (v10 + 24) & -(__int64)(v10 != 0);
LABEL_8:
    *v11 = (void *)v12;
    v13 = v9;
LABEL_15:
    __abi_FTMWeakRefData::Increment(v13);
    return 0LL;
  }
  if ( Platform::Guid::Equals(v8, &_uuidof__AU__IVectorChangedEventArgsPublicNonVirtuals_Details_Collections_Platform__) )
  {
    v12 = (v14 + 8) & -(__int64)(v14 != 0);
    goto LABEL_8;
  }
  if ( !*(_QWORD *)(v9 + 8)
    || (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                       (__abi_FTMWeakRefData *)(v9 & -(__int64)(*(_QWORD *)(v9 + 8) != 0LL)),
                       v15,
                       v11) )
  {
    return 2147500034LL;
  }
  return 0LL;
}
