/*
 * XREFs of HUBPARENT_ResetHubComplete @ 0x1C00074C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C0001864 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs @ 0x1C000F630 (HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPARENT_ResetHubComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx

  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1392))(WdfDriverGlobals);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v5,
         off_1C00640E0);
  v8 = v6;
  v9 = *(_DWORD *)(a3 + 8);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
    McTemplateK0pq(v7, &USBHUB3_ETW_EVENT_HUB_RESET_REQUEST_COMPLETE, 0LL, *(_QWORD *)(v6 + 248), v9);
  if ( v9 >= 0 )
  {
    if ( (*(_DWORD *)(v8 + 2408) & 1) != 0 )
      HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs(v8);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 2520),
      2u,
      3u,
      0x12u,
      (__int64)&WPP_6f1c5846342730c10a7f2a15ffc55722_Traceguids,
      v9);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  if ( v9 < 0 )
  {
    v10 = 2070LL;
    if ( v9 == -1073741810 )
      v10 = 2074LL;
  }
  else
  {
    v10 = 2066LL;
  }
  return HUBSM_AddEvent(v8 + 1264, v10);
}
