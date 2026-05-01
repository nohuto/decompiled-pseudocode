/*
 * XREFs of ?__abi_QueryInterface@WindowActivatedEventHandler@Xaml@UI@Windows@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802D34D0
 * Callers:
 *     ?__abi_QueryInterface@WindowActivatedEventHandler@Xaml@UI@Windows@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1800BC530 (-__abi_QueryInterface@WindowActivatedEventHandler@Xaml@UI@Windows@@W7E$AAAJAEAVGuid@Platform@@PE.c)
 *     ?__abi_QueryInterface@WindowActivatedEventHandler@Xaml@UI@Windows@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1800BC540 (-__abi_QueryInterface@WindowActivatedEventHandler@Xaml@UI@Windows@@WBA@E$AAAJAEAVGuid@Platform@@.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180159C40 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x1802B5494 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802B5EC8 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::WindowActivatedEventHandler::__abi_QueryInterface(__int64 a1, Platform::Guid *a2)
{
  Platform::Guid *v2; // rcx
  _QWORD *v3; // r9
  void **v4; // r11
  Platform::Guid *v5; // rcx
  Platform::Guid *v6; // r10
  __int64 v7; // r8
  struct Platform::Guid *v8; // r10
  __int64 v9; // rcx

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v2, &_uuidof__AU__abi_IDelegate_WindowActivatedEventHandler_Xaml_UI_Windows__)
    || v3[4] && Platform::Guid::Equals(v5, &_uuidof__AUIAgileObject_Details_Platform__) )
  {
    v9 = (__int64)(v3 + 3);
    goto LABEL_11;
  }
  if ( Platform::Guid::Equals(v6, &_uuidof__AU__abi_IDelegate_WindowActivatedEventHandler_Xaml_UI_Windows__) )
  {
    v9 = v7;
LABEL_11:
    *v4 = v3;
    __abi_FTMWeakRefData::Increment(v9);
    return 0LL;
  }
  if ( !*(_QWORD *)(v7 + 8)
    || (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                       (__abi_FTMWeakRefData *)(v7 & -(__int64)(*(_QWORD *)(v7 + 8) != 0LL)),
                       v8,
                       v4) )
  {
    return 2147500034LL;
  }
  return 0LL;
}
