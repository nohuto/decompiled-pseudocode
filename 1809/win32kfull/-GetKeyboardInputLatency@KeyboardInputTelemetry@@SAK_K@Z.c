/*
 * XREFs of ?GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z @ 0x1C010FB00
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C010F9B8 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardInputTelemetry::GetKeyboardInputLatency(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return RIMQpcCountToMilliSecs(PerformanceCounter.QuadPart - a1);
}
