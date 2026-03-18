/*
 * XREFs of HUBMUX_UnregisterWithHSM @ 0x1C000E7A8
 * Callers:
 *     HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup @ 0x1C001B680 (HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup.c)
 *     HUBDSM_UnregsiteringWithHsmOnDetach @ 0x1C001B6B0 (HUBDSM_UnregsiteringWithHsmOnDetach.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_UnregisterWithHSM(__int64 a1)
{
  __int64 v2; // rdi
  KIRQL v3; // al
  int v4; // ecx
  char v5; // bp
  bool v6; // si
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  int v10; // edx

  if ( (*(_DWORD *)(a1 + 1636) & 0x40) != 0 )
  {
    *(_QWORD *)(a1 + 1516) = 0LL;
    *(_QWORD *)(a1 + 1524) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFBF);
  }
  v2 = *(_QWORD *)a1 + 2320LL;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  v4 = *(_DWORD *)(a1 + 240);
  v5 = 0;
  v6 = 0;
  if ( (v4 & 2) != 0 )
  {
    v5 = 1;
    --*(_DWORD *)(v2 + 28);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 240), 0xFFFFFFFD);
    v4 = *(_DWORD *)(a1 + 240);
  }
  if ( (v4 & 4) != 0 )
    v6 = _InterlockedAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF) == 0;
  v7 = *(_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(v7 + 8) != a1 + 192 || (v8 = *(_QWORD **)(a1 + 200), *v8 != a1 + 192) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v3);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v9,
    "DSM Registration Tag",
    2708LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  if ( v6 )
  {
    if ( v5 )
      v10 = 2018;
    else
      v10 = 2014;
    HUBSM_AddEvent(*(_QWORD *)a1 + 1264LL, v10);
  }
}
