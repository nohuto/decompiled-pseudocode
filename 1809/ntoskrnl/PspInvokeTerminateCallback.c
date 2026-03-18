/*
 * XREFs of PspInvokeTerminateCallback @ 0x14088BC7C
 * Callers:
 *     PsStartSiloMonitor @ 0x140755710 (PsStartSiloMonitor.c)
 *     PspNotifyServerSiloTermination @ 0x14088BE8C (PspNotifyServerSiloTermination.c)
 * Callees:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x14018D9E0 (EtwTraceJobServerSiloMonitorCallback.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall PspInvokeTerminateCallback(__int64 a1, __int64 a2)
{
  EtwTraceJobServerSiloMonitorCallback(2, a1, (unsigned __int16 *)(a2 + 40), 0);
  (*(void (__fastcall **)(__int64))(a2 + 32))(a1);
  return EtwTraceJobServerSiloMonitorCallback(3, a1, (unsigned __int16 *)(a2 + 40), 0);
}
