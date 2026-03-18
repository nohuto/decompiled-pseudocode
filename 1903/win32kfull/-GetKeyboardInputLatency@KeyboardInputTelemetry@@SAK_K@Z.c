/*
 * XREFs of ?GetKeyboardInputLatency@KeyboardInputTelemetry@@SAK_K@Z @ 0x1C007944C
 * Callers:
 *     ?UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C000AC90 (-UnblockDeferredInput@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C0079414 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardInputTelemetry::GetKeyboardInputLatency(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return RIMQpcCountToMilliSecs(PerformanceCounter.QuadPart - a1);
}
