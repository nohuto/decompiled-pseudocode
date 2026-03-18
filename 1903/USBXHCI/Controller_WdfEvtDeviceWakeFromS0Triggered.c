/*
 * XREFs of Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C0013D00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceWakeFromS0Triggered(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C00563D8)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(*(_QWORD *)(v2 + 72), 4u, 4u, 0x5Bu, (__int64)&Context.Logger + 4, a1);
  return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0057690)(UcxDriverGlobals, **(_QWORD **)(v2 + 152));
}
