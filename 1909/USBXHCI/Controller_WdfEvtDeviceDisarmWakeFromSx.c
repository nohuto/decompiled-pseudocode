/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C0013AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall Controller_WdfEvtDeviceDisarmWakeFromSx(__int64 a1)
{
  __int64 v2; // rbx
  _UNKNOWN **result; // rax

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C00563D8)
                 + 8);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_i(*(_QWORD *)(v2 + 72), 4u, 4u, 0x5Au, (__int64)&Context.Logger + 4, a1);
  *(_BYTE *)(v2 + 468) = 0;
  return result;
}
