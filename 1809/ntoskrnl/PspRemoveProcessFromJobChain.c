/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x140601410
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1405FED20 (PspEnforceLimitsJobPostCallback.c)
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     PspTerminateProcessesJobCallback @ 0x14068E5B0 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     PspSendJobNotification @ 0x140137EBC (PspSendJobNotification.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PsQueryStatisticsProcess @ 0x1405FF700 (PsQueryStatisticsProcess.c)
 *     PspUnlockJobConditionally @ 0x1405FF8B8 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1406016E4 (PspLockJobConditionally.c)
 *     PspLockRootJobFromProcess @ 0x140601738 (PspLockRootJobFromProcess.c)
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406047D8 (PspFoldProcessAccountingIntoJob.c)
 *     PspUnlinkJobProcess @ 0x140604A04 (PspUnlinkJobProcess.c)
 *     PspRequestProcessExecutionState @ 0x140605508 (PspRequestProcessExecutionState.c)
 *     PsTerminateProcess @ 0x1406CAB74 (PsTerminateProcess.c)
 *     PspSubtractAccountingValues @ 0x1406D7D34 (PspSubtractAccountingValues.c)
 *     EtwTraceJobRemoveProcess @ 0x1408B88CC (EtwTraceJobRemoveProcess.c)
 */

void __fastcall PspRemoveProcessFromJobChain(PEPROCESS Process, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  bool v8; // r12
  char v9; // r15
  int v10; // r13d
  __int64 v11; // rbx
  _QWORD *v12; // rax
  char v13; // [rsp+28h] [rbp-59h]
  __int64 v14; // [rsp+30h] [rbp-51h] BYREF
  __int64 v15; // [rsp+38h] [rbp-49h] BYREF
  struct _KTHREAD *v16; // [rsp+40h] [rbp-41h]
  _QWORD v17[18]; // [rsp+48h] [rbp-39h] BYREF
  char v19; // [rsp+F8h] [rbp+77h]

  v19 = a3;
  v5 = a3;
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 || (a3 & 1) != 0 )
  {
    memset(v17, 0, 0x58uLL);
    CurrentThread = KeGetCurrentThread();
    v16 = CurrentThread;
    v8 = !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0);
    v9 = 0;
    v13 = 0;
    if ( (v5 & 2) != 0
      && (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0
      && (Process[2].ActiveProcessors.Bitmap[0] & 0x4000000000LL) == 0 )
    {
      PsTerminateProcess(Process, a4);
      v13 = 1;
    }
    v10 = 1;
    PspLockRootJobFromProcess(Process, CurrentThread, &v15, &v14);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobRemoveProcess(Process, v5, a4);
    if ( (v5 & 4) != 0 && !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 1u) )
    {
      _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFFFFFFDF);
      PsQueryStatisticsProcess((__int64)Process, v17);
      v9 = 1;
    }
    v11 = v15;
    if ( v15 )
    {
      do
      {
        PspLockJobConditionally(v11, &v14);
        if ( v8 )
        {
          --*(_DWORD *)(v11 + 216);
          if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x2000000000LL) != 0 )
            --*(_DWORD *)(v11 + 1212);
        }
        if ( (v5 & 8) != 0 && v8 )
          ++*(_DWORD *)(v11 + 220);
        if ( a2 && (!*a2 || *a2 == v11) && *(_QWORD *)(v11 + 456) && ((1 << a2[1]) & *(_DWORD *)(v11 + 876)) != 0 )
          PspSendJobNotification(v11, a2[1], a2[2], 0);
        if ( v9 )
        {
          PspFoldProcessAccountingIntoJob(v11, Process, v17);
          if ( v11 == Process[1].Affinity.Bitmap[16] && *(_DWORD *)(v11 + 1216) != PspEnforcementSequenceNumber )
            v10 = 0;
          if ( v10 == 1 )
          {
            v12 = (_QWORD *)(v11 + 1120);
            if ( v11 + 1120 < (unsigned __int64)(v11 + 1208) )
            {
              while ( !*v12 )
              {
                if ( (unsigned __int64)++v12 >= v11 + 1208 )
                  goto LABEL_13;
              }
              PspSubtractAccountingValues(v11 + 1120, v17);
              v10 = 2;
            }
          }
        }
LABEL_13:
        PspUnlockJobConditionally(v11, &v14);
        v11 = *(_QWORD *)(v11 + 1072);
      }
      while ( v11 );
      v11 = v15;
      CurrentThread = v16;
      LOBYTE(v5) = v19;
    }
    PspLockJobConditionally(v11, &v14);
    if ( (v5 & 1) != 0 )
    {
      PspUnlinkJobProcess(v11, Process);
      PspUnlockJobConditionally(v11, &v14);
      PspUnlockJob(v14, (__int64)CurrentThread);
    }
    else
    {
      if ( v8 && (Process[1].DirectoryTableBase & 4) != 0 && !v13 )
        PspRequestProcessExecutionState(Process, 0LL, 0LL);
      PspUnlockJobConditionally(v11, &v14);
      PspUnlockJob(v14, (__int64)CurrentThread);
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(Process);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
}
