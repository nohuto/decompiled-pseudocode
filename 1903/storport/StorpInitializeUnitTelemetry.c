/*
 * XREFs of StorpInitializeUnitTelemetry @ 0x1C001FCC4
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001FBBC (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     StorpUninititalizePerUnitPerfTelemetry @ 0x1C00229B8 (StorpUninititalizePerUnitPerfTelemetry.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C006EEA0 (StorpInititalizePerUnitPerfTelemetry.c)
 */

void __fastcall StorpInitializeUnitTelemetry(__int64 a1)
{
  int v1; // ebx
  bool v2; // zf

  v1 = 0;
  *(_QWORD *)(a1 + 1808) = 1LL;
  v2 = g_StorpTraceLoggingPerformanceEnabled == 0;
  *(_QWORD *)(a1 + 1744) = 0LL;
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_QWORD *)(a1 + 1776) = 0LL;
  *(_QWORD *)(a1 + 1752) = 0LL;
  *(_QWORD *)(a1 + 1760) = 0LL;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_DWORD *)(a1 + 1816) = 0;
  if ( !v2 )
  {
    if ( (unsigned int)StorpInititalizePerUnitPerfTelemetry() )
      StorpUninititalizePerUnitPerfTelemetry(a1);
    else
      v1 = 1;
  }
  *(_DWORD *)(a1 + 1944) = v1;
}
