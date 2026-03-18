/*
 * XREFs of Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C0063950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0015494 (WPP_RECORDER_SF_qq.c)
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C0066494 (Interrupter_FilterRemoveResourceRequirements.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceFilterRemoveResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C00563D8)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(*(_QWORD *)(v4 + 72), 4u, 4u, 0xCFu, (__int64)&Context.Logger + 4, a1, a2);
  return Interrupter_FilterRemoveResourceRequirements(*(_QWORD *)(v4 + 128), a2);
}
