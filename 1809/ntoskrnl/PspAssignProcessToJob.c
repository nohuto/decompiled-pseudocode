/*
 * XREFs of PspAssignProcessToJob @ 0x140606664
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140606DB0 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 *     PspChargeJobWakeCounter @ 0x1405FE81C (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405FF100 (PspLockJobExclusive.c)
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     PspUnlockJobAssignment @ 0x1406018EC (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x14060193C (PspLockJobAssignment.c)
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 *     PspApplyJobChainLimitsToProcess @ 0x140604EB0 (PspApplyJobChainLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x140605944 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605D74 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspIncrementJobChainProcessCounts @ 0x140605F28 (PspIncrementJobChainProcessCounts.c)
 *     PspEstablishJobHierarchy @ 0x140605FE0 (PspEstablishJobHierarchy.c)
 *     PspValidateJobChainLimits @ 0x1406064CC (PspValidateJobChainLimits.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x1406065DC (PspValidateJobAssignmentMemoryPartition.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140606AEC (PspUnlockJobsAndProcessExclusive.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140606B68 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspGetJobAssignmentDisposition @ 0x140606BD4 (PspGetJobAssignmentDisposition.c)
 *     PspLockJobsAndProcessExclusive @ 0x140606CC4 (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x140606D44 (PspGetJobLockHierarchyForAssignment.c)
 *     PsQueryProcessAttributes @ 0x14062691C (PsQueryProcessAttributes.c)
 *     PspIsSetJobIoAttribution @ 0x14068DEA0 (PspIsSetJobIoAttribution.c)
 *     PspGetNextJobProcess @ 0x14068E660 (PspGetNextJobProcess.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406D0F8C (PspDoesJobHierarchyPermitUILimits.c)
 *     PspIsJobMovable @ 0x14088AFD4 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x14088B25C (PspQuitNextJobProcess.c)
 */

__int64 __fastcall PspAssignProcessToJob(PVOID Object, __int64 BugCheckParameter1, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v9; // r14d
  char v10; // bl
  int JobAssignmentDisposition; // eax
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r12
  int v15; // edi
  __int64 v16; // rdi
  char v17; // bl
  __int64 v18; // rdx
  int v19; // r8d
  unsigned int v20; // r13d
  PVOID v22; // rax
  int v23; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v24[4]; // [rsp+44h] [rbp-55h] BYREF
  __int64 v25; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *v26; // [rsp+50h] [rbp-49h]
  unsigned int v27; // [rsp+58h] [rbp-41h] BYREF
  PVOID v28; // [rsp+60h] [rbp-39h] BYREF
  int v29; // [rsp+68h] [rbp-31h]
  __int64 v30; // [rsp+70h] [rbp-29h]
  _BYTE v31[24]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v32[40]; // [rsp+90h] [rbp-9h] BYREF

  memset(v32, 0, sizeof(v32));
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = 0;
  v26 = CurrentThread;
  v23 = 0;
  if ( a4 == 5 )
  {
    a3 = *(_QWORD *)(BugCheckParameter1 + 944);
    BugCheckParameter1 = PspGetNextJobProcess(Object, CurrentThread, v31, 0LL);
    ObfReferenceObjectWithTag((PVOID)BugCheckParameter1, 0x624A7350u);
    v10 = 1;
    PspQuitNextJobProcess(Object, CurrentThread, v31, BugCheckParameter1);
    v9 = v23;
  }
  if ( !BugCheckParameter1 )
  {
LABEL_6:
    PspGetJobLockHierarchyForAssignment((_DWORD)Object, BugCheckParameter1, a3, a4, (__int64)v32);
    v10 |= 6u;
    PspLockJobAssignment((__int64)CurrentThread);
    PspLockJobsAndProcessExclusive(v32, BugCheckParameter1, CurrentThread, 1LL);
    if ( a4 == 5 )
    {
      if ( (unsigned __int8)PspIsJobMovable(Object) )
      {
        v22 = *(PVOID *)(BugCheckParameter1 + 944);
        v23 = 5;
        if ( v22 == Object && (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x1000) != 0 )
        {
          v9 = v23;
          goto LABEL_10;
        }
        v9 = v23;
        v15 = -1073741790;
LABEL_60:
        v20 = -1073741558;
        goto LABEL_61;
      }
    }
    else
    {
      JobAssignmentDisposition = PspGetJobAssignmentDisposition(Object, BugCheckParameter1, a3, &v23);
      v9 = v23;
      if ( JobAssignmentDisposition >= 0 )
      {
        if ( v23 == a4 )
        {
          if ( v23 != 2 )
          {
LABEL_10:
            if ( BugCheckParameter1 && v9 != 5 )
            {
              a3 = *(_QWORD *)(BugCheckParameter1 + 944);
              v9 = v23;
            }
            if ( v9 == 4
              && (*((_DWORD *)Object + 326) & 0x10) != 0
              && ((*(_DWORD *)(a3 + 1304) & 0x10) != 0 || !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a3))
              || !(unsigned __int8)PspValidateJobAssignmentSiloPolicy(Object, a3, BugCheckParameter1, v9)
              || !PspValidateJobAssignmentMemoryPartition((__int64)Object, a3, BugCheckParameter1, v9) )
            {
              goto LABEL_91;
            }
            if ( v9 == 5 )
            {
              if ( (*((_DWORD *)Object + 212) & 1) != 0 )
                goto LABEL_91;
            }
            else if ( ((v9 - 4) & 0xFFFFFFFC) != 0 || v9 == 6 )
            {
LABEL_20:
              if ( ((v9 - 4) & 0xFFFFFFFC) == 0 && v9 != 6 )
              {
                v12 = 0;
                while ( (unsigned int)(v12 - 1) <= 1
                     || (*((_DWORD *)Object + 326) & 0x2000000) == 0
                     || (*(_DWORD *)(a3 + 1304) & 0x2000000) == 0 )
                {
                  if ( ++v12 >= 3 )
                    goto LABEL_25;
                }
                goto LABEL_91;
              }
LABEL_25:
              if ( ((v9 - 4) & 0xFFFFFFFC) != 0
                || v9 == 6
                || !*(_DWORD *)(a3 + 1332) && !(unsigned __int8)PspIsSetJobIoAttribution(a3)
                || !*((_DWORD *)Object + 333) && !(unsigned __int8)PspIsSetJobIoAttribution((__int64)Object) )
              {
                switch ( v9 )
                {
                  case 1u:
                  case 3u:
                    v13 = a3;
                    break;
                  case 4u:
                    v13 = 0LL;
                    break;
                  case 5u:
                    v14 = a3;
                    v13 = 0LL;
LABEL_32:
                    v25 = v13;
                    if ( v14 )
                    {
                      v15 = PspValidateJobChainLimits(v14, v13, BugCheckParameter1, 0);
                      if ( v15 < 0 )
                      {
LABEL_103:
                        CurrentThread = v26;
                        goto LABEL_60;
                      }
                    }
LABEL_34:
                    v15 = PspEstablishJobHierarchy((char *)Object, BugCheckParameter1, a3, v9);
                    if ( v15 >= 0 )
                    {
                      if ( BugCheckParameter1 )
                      {
                        if ( (*((_DWORD *)Object + 326) & 0x1000) != 0 )
                        {
                          v16 = 0LL;
                          do
                          {
                            if ( (*(_DWORD *)(BugCheckParameter1 + 4LL * (int)v16 + 2040) & 0x7FFFFFFF) != 0 )
                              PspChargeJobWakeCounter(
                                (char *)Object,
                                (char *)a3,
                                v16,
                                *(_DWORD *)(BugCheckParameter1 + 4LL * (int)v16 + 2040) & 0x7FFFFFFF,
                                0,
                                0LL,
                                6451018LL);
                            _interlockedbittestandset(
                              (volatile signed __int32 *)(BugCheckParameter1 + 4 * v16 + 2040),
                              0x1Fu);
                            v16 = (unsigned int)(v16 + 1);
                          }
                          while ( (unsigned int)v16 < 7 );
                          if ( (*(_DWORD *)(BugCheckParameter1 + 2076) & 0x7FFFFFFF) != 0 )
                            PspChargeJobWakeCounter(
                              (char *)Object,
                              (char *)a3,
                              0,
                              *(_DWORD *)(BugCheckParameter1 + 2076) & 0x7FFFFFFF,
                              4,
                              0LL,
                              6451018LL);
                          _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 2076), 0x1Fu);
                        }
                        if ( (_InterlockedExchangeAdd64(
                                (volatile signed __int64 *)(BugCheckParameter1 + 728),
                                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                          ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728));
                        KeAbPostRelease(BugCheckParameter1 + 728);
                        v9 = v23;
                        v17 = v10 | 8;
                        v18 = v25;
                        if ( v23 == 4 )
                          v18 = a3;
                        PspIncrementJobChainProcessCounts(v14, v18, BugCheckParameter1, 0);
                        PspApplyJobChainLimitsToProcess(
                          (__int64)Object,
                          a3,
                          (volatile signed __int32 *)BugCheckParameter1);
                        CurrentThread = v26;
                        PspUnlockJobsAndProcessExclusive(v32, 0LL, v26);
                        v10 = v17 & 0xFB;
                        if ( (*((_DWORD *)Object + 326) & 0x1000000) == 0 )
                        {
                          PsQueryProcessAttributes(BugCheckParameter1, v24, 0LL);
                          if ( v24[0] )
                            _InterlockedOr((volatile signed __int32 *)Object + 326, 0x1000000u);
                          else
                            _InterlockedOr((volatile signed __int32 *)Object + 326, 0x1800000u);
                          v9 = v23;
                        }
                        v15 = PspApplyWorkingSetLimitsToProcess(BugCheckParameter1);
                        if ( v15 >= 0 )
                        {
                          v19 = 0;
                          if ( v9 == 5 )
                            v19 = 4;
                          if ( (unsigned int)MmAssignProcessToJob(BugCheckParameter1, a3, v19) )
                          {
                            PspUnlockJobAssignment((__int64)CurrentThread);
                            v10 &= ~2u;
                            --CurrentThread->KernelApcDisable;
                            PspChangeProcessExecutionState((PEPROCESS)BugCheckParameter1);
                            KeLeaveCriticalRegionThread((__int64)CurrentThread);
                            if ( !*(_QWORD *)(BugCheckParameter1 + 936) || !*((_DWORD *)Object + 112) )
                              goto LABEL_58;
                            v28 = Object;
                            v29 = 1;
                            v30 = *(_QWORD *)(BugCheckParameter1 + 936);
                            v27 = *((_DWORD *)Object + 120);
                            if ( v27 <= 0xFFFFFFFD )
                            {
                              PspLockJobExclusive((__int64)Object, (__int64)CurrentThread);
                              v15 = PsInvokeWin32Callout(6, (__int64)&v28, 1, (__int64)&v27);
                              PspUnlockJob((__int64)Object, (__int64)CurrentThread);
                            }
                            if ( v15 >= 0 )
                            {
LABEL_58:
                              if ( v9 == 5 )
                              {
                                v15 = -1073741267;
                                v10 |= 0x20u;
                              }
                            }
                          }
                          else
                          {
                            v15 = -1073741756;
                          }
                        }
                        goto LABEL_60;
                      }
                      v15 = 0;
                    }
                    goto LABEL_103;
                  default:
                    v14 = 0LL;
                    v25 = 0LL;
                    goto LABEL_34;
                }
                v14 = (__int64)Object;
                goto LABEL_32;
              }
LABEL_91:
              v15 = -1073741637;
              goto LABEL_60;
            }
            if ( (unsigned int)*(unsigned __int8 *)(a3 + 874) + 1 > 0x64 )
              goto LABEL_91;
            goto LABEL_20;
          }
          v15 = 0;
        }
        else
        {
          v15 = -1073741267;
        }
        goto LABEL_60;
      }
    }
    v15 = -1073741790;
    goto LABEL_60;
  }
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
  {
    v10 |= 0x10u;
    goto LABEL_6;
  }
  v20 = -1073741558;
  v15 = -1073741558;
LABEL_61:
  if ( (v10 & 0x10) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
  if ( (v10 & 0x20) == 0 && v15 < 0 && (v10 & 8) != 0 )
  {
    if ( v9 == 5 )
      KeBugCheckEx(0xEFu, BugCheckParameter1, 0LL, (ULONG_PTR)Object, v15);
    if ( v15 != -1073741558 )
      v20 = -1073741756;
    PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1, 0LL, 0xAu, v20);
  }
  if ( (v10 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive(v32, BugCheckParameter1, CurrentThread);
  if ( (v10 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v10 & 1) != 0 )
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x624A7350u);
  return (unsigned int)v15;
}
