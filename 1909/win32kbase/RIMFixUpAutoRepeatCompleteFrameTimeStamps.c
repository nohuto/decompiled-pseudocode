/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C014CF4C
 * Callers:
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0150818 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LARGE_INTEGER __fastcall RIMFixUpAutoRepeatCompleteFrameTimeStamps(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER result; // rax
  __int64 v7; // r8
  unsigned __int64 i; // r9
  __int64 v9; // rdx

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_QWORD *)(a1 + 344) == -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  result = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  for ( i = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        (unsigned int)v7 < *(_DWORD *)(a3 + 24);
        *(LARGE_INTEGER *)(*(_QWORD *)(a3 + 112) + v9 + 96) = result )
  {
    v9 = 192 * v7;
    v7 = (unsigned int)(v7 + 1);
    *(_DWORD *)(*(_QWORD *)(a3 + 112) + v9 + 80) = i;
  }
  return result;
}
