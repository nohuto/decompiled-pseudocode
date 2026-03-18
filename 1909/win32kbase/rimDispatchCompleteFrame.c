/*
 * XREFs of rimDispatchCompleteFrame @ 0x1C01509D4
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0151038 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C01512DC (rimProcessCompleteFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C0024280 (HMAssignmentLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00B7CB0 (rimFreeAutoRepeatCompleteFrame.c)
 *     RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C014D008 (RIMFixUpAutoRepeatCompleteFrameUpDowns.c)
 *     rimSignalReadComplete @ 0x1C01520B4 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C015233C (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDispatchCompleteFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2, LARGE_INTEGER *a3)
{
  bool v5; // zf
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 LowPart; // [rsp+38h] [rbp-48h]
  __int128 v15; // [rsp+40h] [rbp-40h]
  __int128 v16; // [rsp+50h] [rbp-30h]
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  __int128 v18; // [rsp+70h] [rbp-10h] BYREF

  v13 = 0LL;
  v5 = (*((_DWORD *)a2 + 46) & 0x2000) == 0;
  LowPart = a3->LowPart;
  if ( !v5 )
  {
    if ( a3[4].QuadPart != *((_QWORD *)a2 + 3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( !a3[9].LowPart )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  }
  a3[10].HighPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a3[11] = KeQueryPerformanceCounter(0LL);
  rimStackAttachAndProcessInput((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (unsigned int)&v13, 1);
  if ( !*((_QWORD *)a1 + 80) && !*((_BYTE *)a1 + 584) && *((_QWORD *)a2 + 3) )
  {
    *((_QWORD *)&v15 + 1) = a2;
    *(_QWORD *)&v15 = (char *)a1 + 48;
    v17 = v15;
    HMAssignmentLock((__int64 **)&v17);
    *(_QWORD *)&v16 = (char *)a1 + 56;
    *((_QWORD *)&v16 + 1) = *((_QWORD *)a2 + 60);
    v18 = v16;
    HMAssignmentLock((__int64 **)&v18);
  }
  rimSignalReadComplete(a1, a2);
  if ( *((_QWORD *)a1 + 43) == -1LL || (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
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
      a3[10].LowPart = 1;
      *((_DWORD *)a2 + 46) |= 0x80000000;
      *((_QWORD *)a2 + 51) = a3;
    }
    else
    {
      if ( *((_QWORD *)a2 + 51) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
      Win32FreePool((__int64)a3);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        v10,
        1,
        19,
        (__int64)&WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids,
        a2,
        v13,
        LowPart);
    }
  }
}
