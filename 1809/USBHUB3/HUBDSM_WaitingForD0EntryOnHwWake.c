/*
 * XREFs of HUBDSM_WaitingForD0EntryOnHwWake @ 0x1C001EA60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0011A7C (WPP_RECORDER_SF_q.c)
 *     HUBPDO_CompleteWaitWake @ 0x1C0017920 (HUBPDO_CompleteWaitWake.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_WaitingForD0EntryOnHwWake(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 960);
  HUBPDO_CompleteWaitWake(v1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(v1 + 16));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v2);
  PoSetSystemWakeDevice(v3);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v2);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005F130);
  WPP_RECORDER_SF_q(*(_QWORD *)(v5 + 64), 4u, 2u, 0x7Fu, (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids, v4);
  return 1000LL;
}
