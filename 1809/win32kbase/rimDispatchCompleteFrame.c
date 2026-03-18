/*
 * XREFs of rimDispatchCompleteFrame @ 0x1C01266D8
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C012689C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C0126B0C (rimProcessCompleteFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C0031820 (HMAssignmentLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C0095490 (rimFreeAutoRepeatCompleteFrame.c)
 *     RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C01231B4 (RIMFixUpAutoRepeatCompleteFrameUpDowns.c)
 *     rimSignalReadComplete @ 0x1C0127738 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C0127974 (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDispatchCompleteFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2, LARGE_INTEGER *a3)
{
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int128 v15; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)&v13 = 0LL;
  v6 = (*((_DWORD *)a2 + 46) & 0x2000) == 0;
  *((_QWORD *)&v13 + 1) = a3->LowPart;
  if ( !v6 )
  {
    if ( a3[4].QuadPart != *((_QWORD *)a2 + 3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( !a3[6].LowPart )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  }
  a3[7].HighPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a3[8] = KeQueryPerformanceCounter(0LL);
  rimStackAttachAndProcessInput((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (unsigned int)&v13, 1);
  if ( !*((_QWORD *)a1 + 80) && !*((_BYTE *)a1 + 584) && *((_QWORD *)a2 + 3) )
  {
    *((_QWORD *)&v13 + 1) = a2;
    *(_QWORD *)&v13 = (char *)a1 + 48;
    v14 = v13;
    HMAssignmentLock((__int64)&v14);
    *(_QWORD *)&v13 = (char *)a1 + 56;
    *((_QWORD *)&v13 + 1) = *((_QWORD *)a2 + 60);
    v15 = v13;
    HMAssignmentLock((__int64)&v15);
  }
  rimSignalReadComplete(a1, a2);
  if ( *((_QWORD *)a1 + 43) == -1LL )
  {
    if ( *((_QWORD *)a2 + 51) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    Win32FreePool((__int64)a3);
  }
  else
  {
    rimFreeAutoRepeatCompleteFrame((__int64)a2);
    RIMFixUpAutoRepeatCompleteFrameUpDowns((__int64)a1, (__int64)a2, (__int64)a3);
    if ( a3[3].LowPart )
    {
      a3[7].LowPart = 1;
      *((_DWORD *)a2 + 46) |= 0x80000000;
      *((_QWORD *)a2 + 51) = a3;
    }
    else
    {
      if ( *((_QWORD *)a2 + 51) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
      Win32FreePool((__int64)a3);
    }
    WPP_RECORDER_SF_q(gRimLog, 3u, 0x16u, 0x14u, (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids, a2, v13);
  }
}
