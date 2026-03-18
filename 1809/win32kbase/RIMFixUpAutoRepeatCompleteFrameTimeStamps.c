/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C01230F8
 * Callers:
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0126518 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LARGE_INTEGER __fastcall RIMFixUpAutoRepeatCompleteFrameTimeStamps(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER result; // rax
  unsigned int v7; // r8d
  unsigned __int64 i; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_QWORD *)(a1 + 344) == -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  result = KeQueryPerformanceCounter(0LL);
  v7 = 0;
  for ( i = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v7 < *(_DWORD *)(a3 + 24);
        *(LARGE_INTEGER *)(*(_QWORD *)(a3 + 88) + v10 + 96) = result )
  {
    v9 = v7++;
    v10 = 168 * v9;
    *(_DWORD *)(*(_QWORD *)(a3 + 88) + v10 + 80) = i;
  }
  return result;
}
