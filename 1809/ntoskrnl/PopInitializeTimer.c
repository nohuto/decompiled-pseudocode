/*
 * XREFs of PopInitializeTimer @ 0x14075A638
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x14018FB6C (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopThermalInit @ 0x1409D9110 (PopThermalInit.c)
 *     PpmPerfInitialize @ 0x1409D91A0 (PpmPerfInitialize.c)
 *     PopInitializeDripsWatchdog @ 0x1409DFB00 (PopInitializeDripsWatchdog.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x1409F8E78 (PopDripsWatchdogInitializeCallbackTimer.c)
 *     PopDripsWatchdogInitializeDiagnosticTimer @ 0x1409F8F78 (PopDripsWatchdogInitializeDiagnosticTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1400FD550 (KeInitializeTimer2.c)
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
