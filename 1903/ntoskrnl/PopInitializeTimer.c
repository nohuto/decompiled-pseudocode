/*
 * XREFs of PopInitializeTimer @ 0x14077F9C4
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x140199BE8 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopThermalInit @ 0x140A1B434 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x140A1B4C0 (PpmPerfInitialize.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140A3D8E0 (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x140A3D9E0 (PopDripsWatchdogInitializeDiagnosticTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1400E3EA0 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopInitializeTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  KeInitializeTimer2(a1);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
  result = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a4;
  *(_QWORD *)(a1 + 160) = a5;
  return result;
}
