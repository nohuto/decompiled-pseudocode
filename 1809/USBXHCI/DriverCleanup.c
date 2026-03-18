/*
 * XREFs of DriverCleanup @ 0x1C005CA70
 * Callers:
 *     <none>
 * Callees:
 *     UninitializeTelemetryAssertsKM @ 0x1C0006A88 (UninitializeTelemetryAssertsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     McGenEventUnregister @ 0x1C0014060 (McGenEventUnregister.c)
 *     WppCleanupKm @ 0x1C005CE7C (WppCleanupKm.c)
 */

void __fastcall DriverCleanup(__int64 a1)
{
  __int64 v1; // rax
  PREGHANDLE v2; // rcx

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 944))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1);
  WppCleanupKm(v1);
  UninitializeTelemetryAssertsKM();
  McGenEventUnregister(v2);
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 28LL) )
  {
    PcwUnregister(*(PPCW_REGISTRATION *)&WPP_MAIN_CB.DeviceQueue.32);
    PcwUnregister((PPCW_REGISTRATION)WPP_MAIN_CB.Dpc.DpcListEntry.Next);
    PcwUnregister(*(PPCW_REGISTRATION *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
  }
}
