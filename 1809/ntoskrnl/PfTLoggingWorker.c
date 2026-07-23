/*
 * XREFs of PfTLoggingWorker @ 0x140740B20
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetBasePriorityThread @ 0x1400CD3F0 (KeSetBasePriorityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PfpFlushBuffers @ 0x14066B030 (PfpFlushBuffers.c)
 *     PfTGenerateTrace @ 0x140684C30 (PfTGenerateTrace.c)
 */

LONG __fastcall PfTLoggingWorker(__int64 a1)
{
  NTSTATUS v2; // ebx
  LONG result; // eax
  int v4; // ebx
  int v5; // ebx
  unsigned int v6; // ebx
  unsigned __int8 v7; // al
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned __int8 v12; // al
  int v13; // edi
  int v14; // eax
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object[4]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+78h] [rbp-90h] BYREF

  Interval.QuadPart = -300000LL;
  Timeout.QuadPart = -3000000000LL;
  KeSetBasePriorityThread(KeGetCurrentThread(), -1);
  Object[0] = (PVOID)(a1 + 96);
  Object[1] = (PVOID)(a1 + 32);
  Object[2] = (PVOID)(a1 + 8);
  Object[3] = &Event;
  qword_14043CCC0 = KiQueryUnbiasedInterruptTime();
  while ( 1 )
  {
    do
    {
      v2 = KeWaitForMultipleObjects(4u, Object, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
      if ( v2 == 258 )
        v2 = 3;
    }
    while ( v2 >= 4 );
    result = KeResetEvent((PRKEVENT)Object[v2]);
    if ( !v2 )
      return result;
    if ( dword_14043CE18 >= (unsigned int)dword_14043CE1C )
    {
      if ( v2 == 1 )
        goto LABEL_20;
    }
    else
    {
      v4 = v2 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 == 1 )
          {
            v6 = 0;
            while ( 1 )
            {
              v7 = PfpFlushBuffers();
              v8 = v7;
              if ( !v7 && (unsigned int)PfTGenerateTrace() == -1073741670 )
                break;
              ++v6;
              if ( v8 || v6 >= 0x3E8 )
                goto LABEL_13;
            }
            KeDelayExecutionThread(0, 0, &Interval);
LABEL_13:
            if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime() - qword_14043CCC0) > 0xB2D05E00 )
              PfTGenerateTrace();
          }
        }
        else
        {
          v9 = (unsigned __int8)PfpFlushBuffers();
          v10 = PfTGenerateTrace();
          if ( !v9 )
          {
            if ( v10 == -1073741670 )
              KeDelayExecutionThread(0, 0, &Interval);
            PfpFlushBuffers();
          }
        }
      }
      else
      {
        v11 = 0;
        do
        {
          v12 = PfpFlushBuffers();
          v13 = v12;
          if ( (!v12 || *(_DWORD *)(a1 + 80)) && (unsigned int)PfTGenerateTrace() == -1073741670 )
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v14 = 1000;
          }
          else
          {
            v14 = 1;
          }
          v11 += v14;
        }
        while ( !v13 && v11 < 0x2710 );
LABEL_20:
        KeSetEvent((PRKEVENT)(a1 + 56), 0, 0);
      }
    }
  }
}
