/*
 * XREFs of rimDispatchAutoRepeatCompleteFrame @ 0x1C0150818
 * Callers:
 *     RIMOnTimerNotification @ 0x1C0137790 (RIMOnTimerNotification.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFixUpAutoRepeatCompleteFrameTimeStamps @ 0x1C014CF4C (RIMFixUpAutoRepeatCompleteFrameTimeStamps.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@_N@Z @ 0x1C014FD24 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@_N@Z.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0151038 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C01520B4 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C015233C (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimDispatchAutoRepeatCompleteFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2, __int64 a3)
{
  LONG_PTR result; // rax
  char **v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  bool v15; // zf
  _DWORD v16[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-10h]
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  result = *((unsigned int *)a2 + 50);
  if ( (result & 0x80u) == 0LL )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *((_QWORD *)a1 + 43) == -1LL )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *((_BYTE *)a1 + 584) )
  {
    result = (LONG_PTR)a1 + 552;
    if ( *(_QWORD *)result == result )
    {
      v6 = (char **)*((_QWORD *)a2 + 51);
      if ( v6 )
      {
        result = RawInputManagerDeviceObjectResolveHandle(v6[4], 3u, *((_DWORD *)v6 + 18) == 0, &Object);
        if ( (int)result >= 0 )
        {
          if ( *((PVOID *)a2 + 4) == Object )
          {
            if ( !*((_DWORD *)v6 + 6) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
            v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            if ( PerformanceCounter.QuadPart - (__int64)v6[11] >= *((_QWORD *)a1 + 45) )
            {
              *((_DWORD *)v6 + 21) = v10;
              v6[11] = (char *)PerformanceCounter.QuadPart;
              v6[5] = (char *)PerformanceCounter.QuadPart;
              *((_BYTE *)a1 + 584) = 0;
              RIMFixUpAutoRepeatCompleteFrameTimeStamps((__int64)a1, (__int64)a2, (__int64)v6);
              InputTraceLogging::RIM::DispatchFrame(a2, (const struct RIMCOMPLETEFRAME *)v6, 1);
              v16[1] = 0;
              v16[0] = 0;
              v15 = (*((_DWORD *)a2 + 46) & 0x2000) == 0;
              v17 = *(unsigned int *)v6;
              if ( !v15 )
              {
                if ( v6[4] != *((char **)a2 + 3) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
                if ( !*((_DWORD *)v6 + 18) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
              }
              rimStackAttachAndProcessInput((_DWORD)a1, (_DWORD)a2, (_DWORD)v6, (unsigned int)v16, 1);
              rimSignalReadComplete(a1, a2);
            }
          }
          return ObfDereferenceObject(Object);
        }
      }
    }
    else
    {
      return rimProcessAnyQueuedCompleteFrames(a1);
    }
  }
  return result;
}
