/*
 * XREFs of HUBUCX_ClientRequestCompleteFromUCX @ 0x1C00234B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBUCX_ClientRequestCompleteFromUCX(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
    WdfDriverGlobals,
    a1,
    *(unsigned int *)(a3 + 8));
  HUBSM_AddEvent(a4 + 504, 4016);
}
