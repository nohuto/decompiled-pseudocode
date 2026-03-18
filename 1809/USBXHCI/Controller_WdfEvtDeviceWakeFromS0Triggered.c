/*
 * XREFs of Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C00110F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceWakeFromS0Triggered(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3B0)
                 + 8);
  WPP_RECORDER_SF_i(*(_QWORD *)(v2 + 72), 4u, 4u, 0x59u, (__int64)&Context.Logger + 4, a1);
  return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0050650)(UcxDriverGlobals, **(_QWORD **)(v2 + 152));
}
