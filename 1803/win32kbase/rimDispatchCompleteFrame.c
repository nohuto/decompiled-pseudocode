/*
 * XREFs of rimDispatchCompleteFrame @ 0x1C00FE4B0
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00FEACC (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C00FED4C (rimProcessCompleteFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C00F8ED4 (RIMFixUpAutoRepeatCompleteFrameUpDowns.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00FE678 (rimFreeAutoRepeatCompleteFrame.c)
 *     rimSignalReadComplete @ 0x1C00FF81C (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C00FFA5C (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimDispatchCompleteFrame(__int64 a1, __int64 a2, LARGE_INTEGER *a3)
{
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 LowPart; // [rsp+38h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-40h]
  __int128 v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+60h] [rbp-20h] BYREF
  __int128 v17; // [rsp+70h] [rbp-10h] BYREF

  v12 = 0LL;
  v6 = (*(_DWORD *)(a2 + 184) & 0x1000) == 0;
  LowPart = a3->LowPart;
  if ( !v6 )
  {
    if ( a3[4].QuadPart != *(_QWORD *)(a2 + 24) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    if ( !a3[6].LowPart )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  }
  a3[7].HighPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a3[8] = KeQueryPerformanceCounter(0LL);
  rimStackAttachAndProcessInput(a1, a2, (_DWORD)a3, (unsigned int)&v12, 1);
  if ( !*(_QWORD *)(a1 + 624) && !*(_BYTE *)(a1 + 568) && *(_QWORD *)(a2 + 24) )
  {
    *((_QWORD *)&v14 + 1) = a2;
    *(_QWORD *)&v14 = a1 + 48;
    v16 = v14;
    HMAssignmentLock((__int64)&v16);
    *(_QWORD *)&v15 = a1 + 56;
    *((_QWORD *)&v15 + 1) = *(_QWORD *)(a2 + 480);
    v17 = v15;
    HMAssignmentLock((__int64)&v17);
  }
  rimSignalReadComplete(a1, a2);
  if ( *(_QWORD *)(a1 + 336) == -1LL )
  {
    if ( *(_QWORD *)(a2 + 408) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
    return Win32FreePool((__int64)a3);
  }
  else
  {
    rimFreeAutoRepeatCompleteFrame(a2);
    RIMFixUpAutoRepeatCompleteFrameUpDowns(a1, a2, (__int64)a3);
    if ( a3[3].LowPart )
    {
      a3[7].LowPart = 1;
      *(_DWORD *)(a2 + 184) |= 0x80000000;
      *(_QWORD *)(a2 + 408) = a3;
    }
    else
    {
      if ( *(_QWORD *)(a2 + 408) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
      Win32FreePool((__int64)a3);
    }
    return WPP_RECORDER_SF_q(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x15u,
             0x14u,
             (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
             a2,
             v12,
             LowPart);
  }
}
