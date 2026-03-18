/*
 * XREFs of HUBUCX_EvtResetActionCompletion @ 0x1C0021FC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0002BC0 (WPP_RECORDER_SF_qd.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBUCX_EvtResetActionCompletion(__int64 a1, int a2)
{
  __int64 v4; // rax
  int v5; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 16));
    v5 = a2;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      2u,
      0xAu,
      (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids,
      v4,
      v5);
  }
  HUBSM_AddEvent(a1 + 504, 4028);
}
