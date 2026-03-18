/*
 * XREFs of rimDispatchAutoRepeatCompleteFrame @ 0x1C00FE314
 * Callers:
 *     RIMOnTimerNotification @ 0x1C00E3E60 (RIMOnTimerNotification.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C00F8E1C (RIMFixUpAutoRepeatCompleteFrameTimeStamps.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00FEACC (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C00FF81C (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C00FFA5C (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimDispatchAutoRepeatCompleteFrame(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax
  char **v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  result = *(unsigned int *)(a2 + 200);
  if ( (result & 0x80u) == 0LL )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( (*(_DWORD *)(a2 + 184) & 0x100) != 0 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *(_QWORD *)(a1 + 336) == -1LL )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *(_BYTE *)(a1 + 568) )
  {
    result = a1 + 536;
    if ( *(_QWORD *)result == result )
    {
      v5 = *(char ***)(a2 + 408);
      if ( v5 )
      {
        result = RawInputManagerDeviceObjectResolveHandle(v5[4], 3u, *((_DWORD *)v5 + 12) == 0, &Object);
        if ( (int)result >= 0 )
        {
          if ( *(PVOID *)(a2 + 32) == Object )
          {
            if ( !*((_DWORD *)v5 + 6) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
            v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            if ( PerformanceCounter.QuadPart - (__int64)v5[8] >= *(_QWORD *)(a1 + 352) )
            {
              *((_DWORD *)v5 + 15) = v8;
              v5[8] = (char *)PerformanceCounter.QuadPart;
              *(_BYTE *)(a1 + 568) = 0;
              RIMFixUpAutoRepeatCompleteFrameTimeStamps(a1, a2, (__int64)v5);
              v13[0] = 0LL;
              v12 = (*(_DWORD *)(a2 + 184) & 0x1000) == 0;
              v13[1] = *(unsigned int *)v5;
              if ( !v12 )
              {
                if ( v5[4] != *(char **)(a2 + 24) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
                if ( !*((_DWORD *)v5 + 12) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
              }
              rimStackAttachAndProcessInput(a1, a2, (_DWORD)v5, (unsigned int)v13, 1);
              rimSignalReadComplete(a1, a2);
            }
          }
          return ObfDereferenceObject(Object);
        }
      }
    }
    else
    {
      return rimProcessAnyQueuedCompleteFrames(a1, a2);
    }
  }
  return result;
}
