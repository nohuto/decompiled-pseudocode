/*
 * XREFs of ?DisplayTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C028C620
 * Callers:
 *     <none>
 * Callees:
 *     LogMonitorOnOffTelemetry @ 0x1C015D1C0 (LogMonitorOnOffTelemetry.c)
 */

__int64 __fastcall DisplayTelemetryEnabledCallback(struct DXGADAPTER *a1, __int64 a2)
{
  return LogMonitorOnOffTelemetry(a2, (__int64)a1, 2);
}
