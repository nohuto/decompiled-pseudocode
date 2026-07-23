/*
 * XREFs of PopDiagInterruptTimeToSystemTime @ 0x140567808
 * Callers:
 *     PopDiagTraceRtcWakeInfo @ 0x140143028 (PopDiagTraceRtcWakeInfo.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x140876830 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagInterruptTimeToSystemTime(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = MEMORY[0xFFFFF78000000014];
  v3 = -a1;
  if ( a1 >= 0 )
    v3 = a1 - MEMORY[0xFFFFF78000000008];
  *a2 = MEMORY[0xFFFFF78000000014] + v3;
  return result;
}
