/*
 * XREFs of PfHardFaultLog @ 0x140019F24
 * Callers:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 * Callees:
 *     PfLogEvent @ 0x1400D5478 (PfLogEvent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwTraceSiloTimedEvent @ 0x1403107A8 (EtwTraceSiloTimedEvent.c)
 */

struct _KTHREAD *__fastcall PfHardFaultLog(_QWORD *a1, int a2, int a3)
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rbp
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  _QWORD v12[6]; // [rsp+40h] [rbp-38h] BYREF

  result = KeGetCurrentThread();
  Process = result->Process;
  if ( *a1 || a1[1] )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v11 = 626;
        goto LABEL_13;
      }
      if ( a2 == 2 )
      {
        v11 = 627;
LABEL_13:
        result = (struct _KTHREAD *)EtwTraceSiloTimedEvent(
                                      *(_QWORD *)&Process[2].ActiveProcessors.Count,
                                      v11,
                                      a3,
                                      (int)a1 + 32);
        goto LABEL_3;
      }
    }
    v11 = 544;
    goto LABEL_13;
  }
LABEL_3:
  if ( a1[8] )
  {
    if ( a2 != 2 )
    {
      v7 = MEMORY[0xFFFFF78000000320];
      v8 = MEMORY[0xFFFFF78000000320] - a1[8];
      a1[8] = v8;
      memset(v12, 0, 0x28uLL);
      v9 = (__int64)Process[1].Header.WaitListHead.Flink ^ (__int64)Process[1].ThreadListHead.Flink;
      LODWORD(v12[0]) = 2 * v8;
      HIDWORD(v12[0]) = dword_1404D8610;
      v12[3] = a1[6];
      v12[1] = (unsigned int)(a1[4] >> 9);
      v10 = a1[5];
      v12[4] = v9 & 0x1FFFFFFFFFFFFFFFLL;
      v12[2] = v10;
      return (struct _KTHREAD *)PfLogEvent(29LL, v7, v12);
    }
  }
  return result;
}
