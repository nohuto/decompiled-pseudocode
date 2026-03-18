/*
 * XREFs of HUBFDO_EvtDeviceShutdownPreprocess @ 0x1C000AD10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     HUBREG_UxdShutdown @ 0x1C0076940 (HUBREG_UxdShutdown.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceShutdownPreprocess(__int64 a1, IRP *a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005F0E0);
  HUBREG_UxdShutdown(v3);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
