/*
 * XREFs of HUBFDO_EvtPostPoFxRegisterDevice @ 0x1C000D390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtPostPoFxRegisterDevice(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8

  *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a1,
                off_1C00640E0)
            + 2608) = a2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *))(WdfFunctions_01015 + 944))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver);
  LOBYTE(v4) = 1;
  PoFxRegisterDripsWatchdogCallback(a2, HUBPDO_PoFxDripsWatchdogCallback, v4, v3);
  return 0LL;
}
