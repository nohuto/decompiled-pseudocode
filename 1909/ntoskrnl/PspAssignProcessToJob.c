/*
 * XREFs of PspAssignProcessToJob @ 0x14068917C
 * Callers:
 *     PsAssignProcessToJobObject @ 0x1406898F0 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PsInvokeWin32Callout @ 0x1405EBC10 (PsInvokeWin32Callout.c)
 *     PspChargeJobWakeCounter @ 0x140612B50 (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x140613420 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140613460 (PspLockJobExclusive.c)
 *     PspRemoveProcessFromJobChain @ 0x140614EA4 (PspRemoveProcessFromJobChain.c)
 *     PspUnlockJobAssignment @ 0x140615500 (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x140615550 (PspLockJobAssignment.c)
 *     PsQueryProcessAttributes @ 0x1406845F4 (PsQueryProcessAttributes.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1406874E8 (PspApplyJobChainLimitsToProcess.c)
 *     PspChangeProcessExecutionState @ 0x140687F94 (PspChangeProcessExecutionState.c)
 *     MmAssignProcessToJob @ 0x1406881E0 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140688620 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspIncrementJobChainProcessCounts @ 0x1406887F0 (PspIncrementJobChainProcessCounts.c)
 *     PspEstablishJobHierarchy @ 0x1406888B4 (PspEstablishJobHierarchy.c)
 *     PspValidateJobChainLimits @ 0x140688DAC (PspValidateJobChainLimits.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x140688EBC (PspValidateJobAssignmentMemoryPartition.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140689624 (PspUnlockJobsAndProcessExclusive.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406896A0 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspGetJobAssignmentDisposition @ 0x14068970C (PspGetJobAssignmentDisposition.c)
 *     PspLockJobsAndProcessExclusive @ 0x1406897FC (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x14068987C (PspGetJobLockHierarchyForAssignment.c)
 *     PspGetNextJobProcess @ 0x14068A0A0 (PspGetNextJobProcess.c)
 *     PspIsSetJobIoAttribution @ 0x14068A638 (PspIsSetJobIoAttribution.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406F094C (PspDoesJobHierarchyPermitUILimits.c)
 *     PspIsJobMovable @ 0x1408C7584 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x1408C7818 (PspQuitNextJobProcess.c)
 */

__int64 __fastcall PspAssignProcessToJob(PVOID Object, __int64 BugCheckParameter1, __int64 a3, int a4)
{
  unsigned int v8; // r14d
  char v9; // bl
  struct _KTHREAD *CurrentThread; // r12
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
  __int64 v29; // [rsp+68h] [rbp-31h]
  __int64 v30; // [rsp+70h] [rbp-29h]
  _QWORD v31[3]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v32[40]; // [rsp+90h] [rbp-9h] BYREF

  memset(v32, 0, sizeof(v32));
  v8 = 0;
  v28 = 0LL;
  v9 = 0;
  v29 = 0LL;
  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  CurrentThread = KeGetCurrentThread();
  v26 = CurrentThread;
  v23 = 0;
  if ( a4 == 5 )
  {
    a3 = *(_QWORD *)(BugCheckParameter1 + 952);
    BugCheckParameter1 = PspGetNextJobProcess(Object, CurrentThread, v31, 0LL);
    ObfReferenceObjectWithTag((PVOID)BugCheckParameter1, 0x624A7350u);
    v9 = 1;
    PspQuitNextJobProcess(Object, CurrentThread, v31, BugCheckParameter1);
    v8 = v23;
  }
  if ( !BugCheckParameter1 )
  {
LABEL_6:
    PspGetJobLockHierarchyForAssignment((_DWORD)Object, BugCheckParameter1, a3, a4, (__int64)v32);
    v9 |= 6u;
    PspLockJobAssignment((__int64)CurrentThread);
    PspLockJobsAndProcessExclusive(v32, BugCheckParameter1, CurrentThread, 1LL);
    if ( a4 == 5 )
    {
      if ( (unsigned __int8)PspIsJobMovable(Object) )
      {
        v22 = *(PVOID *)(BugCheckParameter1 + 952);
        v23 = 5;
        if ( v22 == Object && (*(_DWORD *)(BugCheckParameter1 + 1788) & 0x1000) != 0 )
        {
          v8 = v23;
          goto LABEL_10;
        }
        v8 = v23;
        v15 = -1073741790;
LABEL_56:
        v20 = -1073741558;
        goto LABEL_57;
      }
    }
    else
    {
      JobAssignmentDisposition = PspGetJobAssignmentDisposition(Object, BugCheckParameter1, a3, &v23);
      v8 = v23;
      if ( JobAssignmentDisposition >= 0 )
      {
        if ( v23 == a4 )
        {
          if ( v23 != 2 )
          {
LABEL_10:
            if ( BugCheckParameter1 && v8 != 5 )
            {
              a3 = *(_QWORD *)(BugCheckParameter1 + 952);
              v8 = v23;
            }
            if ( v8 == 4
              && (*((_DWORD *)Object + 326) & 0x10) != 0
              && ((*(_DWORD *)(a3 + 1304) & 0x10) != 0 || !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a3))
              || !(unsigned __int8)PspValidateJobAssignmentSiloPolicy(Object, a3, BugCheckParameter1, v8)
              || !PspValidateJobAssignmentMemoryPartition((__int64)Object, a3, BugCheckParameter1, v8) )
            {
              goto LABEL_92;
            }
            if ( v8 == 5 )
            {
              if ( (*((_DWORD *)Object + 212) & 1) != 0 )
                goto LABEL_92;
            }
            else if ( ((v8 - 4) & 0xFFFFFFFC) != 0 || v8 == 6 )
            {
LABEL_20:
              if ( ((v8 - 4) & 0xFFFFFFFC) == 0 && v8 != 6 )
              {
                v12 = 0;
                while ( (unsigned int)(v12 - 1) <= 1
                     || (*((_DWORD *)Object + 326) & 0x2000000) == 0
                     || (*(_DWORD *)(a3 + 1304) & 0x2000000) == 0 )
                {
                  if ( ++v12 >= 3 )
                    goto LABEL_25;
                }
                goto LABEL_92;
              }
LABEL_25:
              if ( ((v8 - 4) & 0xFFFFFFFC) != 0
                || v8 == 6
                || !*(_DWORD *)(a3 + 1332) && !(unsigned __int8)PspIsSetJobIoAttribution(a3)
                || !*((_DWORD *)Object + 333) && !(unsigned __int8)PspIsSetJobIoAttribution((__int64)Object) )
              {
                switch ( v8 )
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
LABEL_104:
                        CurrentThread = v26;
                        goto LABEL_56;
                      }
                    }
LABEL_34:
                    v15 = PspEstablishJobHierarchy((char *)Object, BugCheckParameter1, a3, v8);
                    if ( v15 >= 0 )
                    {
                      if ( BugCheckParameter1 )
                      {
                        if ( (*((_DWORD *)Object + 326) & 0x1000) != 0 )
                        {
                          v16 = 0LL;
                          do
                          {
                            if ( (*(_DWORD *)(BugCheckParameter1 + 4LL * (int)v16 + 2088) & 0x7FFFFFFF) != 0 )
                              PspChargeJobWakeCounter(
                                (char *)Object,
                                (char *)a3,
                                v16,
                                *(_DWORD *)(BugCheckParameter1 + 4LL * (int)v16 + 2088) & 0x7FFFFFFF,
                                0,
                                0LL,
                                6451018LL);
                            _interlockedbittestandset(
                              (volatile signed __int32 *)(BugCheckParameter1 + 4 * v16 + 2088),
                              0x1Fu);
                            v16 = (unsigned int)(v16 + 1);
                          }
                          while ( (unsigned int)v16 < 7 );
                          if ( (*(_DWORD *)(BugCheckParameter1 + 2124) & 0x7FFFFFFF) != 0 )
                            PspChargeJobWakeCounter(
                              (char *)Object,
                              (char *)a3,
                              0,
                              *(_DWORD *)(BugCheckParameter1 + 2124) & 0x7FFFFFFF,
                              4,
                              0LL,
                              6451018LL);
                          _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 2124), 0x1Fu);
                        }
                        if ( (_InterlockedExchangeAdd64(
                                (volatile signed __int64 *)(BugCheckParameter1 + 736),
                                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                          ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 736));
                        KeAbPostRelease(BugCheckParameter1 + 736);
                        v8 = v23;
                        v17 = v9 | 8;
                        v18 = v25;
                        if ( v23 == 4 )
                          v18 = a3;
                        PspIncrementJobChainProcessCounts(v14, v18, BugCheckParameter1, 0);
                        PspApplyJobChainLimitsToProcess((__int64)Object, a3, BugCheckParameter1);
                        CurrentThread = v26;
                        PspUnlockJobsAndProcessExclusive(v32, 0LL, v26);
                        v9 = v17 & 0xFB;
                        if ( (*((_DWORD *)Object + 326) & 0x1000000) == 0 )
                        {
                          PsQueryProcessAttributes((struct _KPROCESS *)BugCheckParameter1, (__int64)v24, 0LL);
                          if ( v24[0] )
                            _InterlockedOr((volatile signed __int32 *)Object + 326, 0x1000000u);
                          else
                            _InterlockedOr((volatile signed __int32 *)Object + 326, 0x1800000u);
                          v8 = v23;
                        }
                        v15 = PspApplyWorkingSetLimitsToProcess(BugCheckParameter1);
                        if ( v15 >= 0 )
                        {
                          v19 = 0;
                          if ( v8 == 5 )
                            v19 = 4;
                          if ( (unsigned int)MmAssignProcessToJob(BugCheckParameter1, a3, v19) )
                          {
                            PspUnlockJobAssignment((__int64)CurrentThread);
                            v9 &= ~2u;
                            --CurrentThread->KernelApcDisable;
                            PspChangeProcessExecutionState((PEPROCESS)BugCheckParameter1);
                            KeLeaveCriticalRegionThread((__int64)CurrentThread);
                            if ( !*(_QWORD *)(BugCheckParameter1 + 944) || !*((_DWORD *)Object + 112) )
                              goto LABEL_54;
                            v28 = Object;
                            LODWORD(v29) = 1;
                            v30 = *(_QWORD *)(BugCheckParameter1 + 944);
                            v27 = *((_DWORD *)Object + 120);
                            if ( v27 <= 0xFFFFFFFD )
                            {
                              PspLockJobExclusive((__int64)Object, (__int64)CurrentThread);
                              v15 = PsInvokeWin32Callout(6, (__int64)&v28, 1, (__int64)&v27);
                              PspUnlockJob((__int64)Object, (__int64)CurrentThread);
                            }
                            if ( v15 >= 0 )
                            {
LABEL_54:
                              if ( v8 == 5 )
                              {
                                v15 = -1073741267;
                                v9 |= 0x20u;
                              }
                            }
                          }
                          else
                          {
                            v15 = -1073741756;
                          }
                        }
                        goto LABEL_56;
                      }
                      v15 = 0;
                    }
                    goto LABEL_104;
                  default:
                    v14 = 0LL;
                    v25 = 0LL;
                    goto LABEL_34;
                }
                v14 = (__int64)Object;
                goto LABEL_32;
              }
LABEL_92:
              v15 = -1073741637;
              goto LABEL_56;
            }
            if ( (unsigned int)*(unsigned __int8 *)(a3 + 874) + 1 > 0x64 )
              goto LABEL_92;
            goto LABEL_20;
          }
          v15 = 0;
        }
        else
        {
          v15 = -1073741267;
        }
        goto LABEL_56;
      }
    }
    v15 = -1073741790;
    goto LABEL_56;
  }
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768)) )
  {
    v9 |= 0x10u;
    goto LABEL_6;
  }
  v20 = -1073741558;
  v15 = -1073741558;
LABEL_57:
  if ( (v9 & 0x10) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
  if ( (v9 & 0x20) == 0 && v15 < 0 && (v9 & 8) != 0 )
  {
    if ( v8 == 5 )
      KeBugCheckEx(0xEFu, BugCheckParameter1, 0LL, (ULONG_PTR)Object, v15);
    if ( v15 != -1073741558 )
      v20 = -1073741756;
    PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1, 0LL, 0xAu, v20);
  }
  if ( (v9 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive(v32, BugCheckParameter1, CurrentThread);
  if ( (v9 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v9 & 1) != 0 )
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x624A7350u);
  return (unsigned int)v15;
}
