/*
 * XREFs of PopComputeWatchdogTimeout @ 0x140172CC8
 * Callers:
 *     PoQueryWatchdogTime @ 0x14007CCA0 (PoQueryWatchdogTime.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x140171400 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopEnableIrpWatchdog @ 0x140172C2C (PopEnableIrpWatchdog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopComputeWatchdogTimeout(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 188);
  if ( !v1 && *(_DWORD *)(a1 + 192) == 1 || v1 == 1 && *(_DWORD *)(a1 + 192) == 1 )
    return (unsigned int)PopWatchdogResumeTimeout;
  else
    return (unsigned int)PopWatchdogSleepTimeout;
}
