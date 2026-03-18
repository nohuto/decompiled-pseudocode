/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C00F8E1C
 * Callers:
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00FE314 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LARGE_INTEGER __fastcall RIMFixUpAutoRepeatCompleteFrameTimeStamps(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER result; // rax
  unsigned int v7; // r8d
  unsigned __int64 i; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( (*(_DWORD *)(a2 + 184) & 0x100) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *(_QWORD *)(a1 + 336) == -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
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
