/*
 * XREFs of Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C005C2B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0012A94 (WPP_RECORDER_SF_qq.c)
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C005E888 (Interrupter_FilterRemoveResourceRequirements.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceFilterRemoveResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3B0)
                 + 8);
  WPP_RECORDER_SF_qq(*(_QWORD *)(v4 + 72), 4u, 4u, 0xCCu, (__int64)&Context.Logger + 4, a1, a2);
  return Interrupter_FilterRemoveResourceRequirements(*(_QWORD *)(v4 + 128), a2);
}
