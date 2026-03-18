/*
 * XREFs of Controller_WdfEvtDeviceArmWakeFromSx @ 0x1C00100A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceArmWakeFromSx(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C004F3B0)
                 + 8);
  WPP_RECORDER_SF_i(*(_QWORD *)(v2 + 72), 4u, 4u, 0x57u, (__int64)&Context.Logger + 4, a1);
  *(_BYTE *)(v2 + 404) = 1;
  return 0LL;
}
