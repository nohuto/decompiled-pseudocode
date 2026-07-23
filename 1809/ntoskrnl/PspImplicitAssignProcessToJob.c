/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x1406057A0
 * Callers:
 *     PspInsertProcess @ 0x14060A3A8 (PspInsertProcess.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008FC70 (PsGetEffectiveServerSilo.c)
 *     PspLockJobChain @ 0x1406017CC (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x140601864 (PspUnlockJobChain.c)
 *     PspApplyJobChainLimitsToProcess @ 0x140604EB0 (PspApplyJobChainLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x140605944 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140605D74 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspIncrementJobChainProcessCounts @ 0x140605F28 (PspIncrementJobChainProcessCounts.c)
 *     PspEstablishJobHierarchy @ 0x140605FE0 (PspEstablishJobHierarchy.c)
 *     PspValidateJobChainLimits @ 0x1406064CC (PspValidateJobChainLimits.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x1406065DC (PspValidateJobAssignmentMemoryPartition.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(__int64 a1, volatile signed __int32 *a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 EffectiveServerSilo; // rbx
  int v8; // edi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  volatile signed __int32 *v13; // rax
  __int64 v14; // rcx
  int v15; // ebx

  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(a1, (__int64)CurrentThread, 0);
  if ( (a3 & 0x400) != 0 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
  }
  else
  {
    for ( EffectiveServerSilo = a1; EffectiveServerSilo; EffectiveServerSilo = *(_QWORD *)(EffectiveServerSilo + 1072) )
    {
      v10 = *(_DWORD *)(EffectiveServerSilo + 256);
      if ( (v10 & 0x1000) == 0 )
      {
        if ( (a3 & 1) == 0 )
          goto LABEL_3;
        if ( (v10 & 0x800) == 0 )
          break;
      }
    }
    if ( (a3 & 1) != 0 && EffectiveServerSilo == a1 && (*(_DWORD *)(EffectiveServerSilo + 1304) & 0x40000000) == 0 )
    {
      v8 = -1073741790;
      goto LABEL_5;
    }
  }
LABEL_3:
  if ( !EffectiveServerSilo )
  {
    v8 = 0;
LABEL_5:
    PspUnlockJobChain(a1, (__int64)CurrentThread, 0);
    return (unsigned int)v8;
  }
  if ( !(unsigned __int8)PspValidateJobAssignmentMemoryPartition(EffectiveServerSilo, 0LL, a2, 1LL) )
  {
    v8 = -1073741637;
    goto LABEL_5;
  }
  v8 = PspValidateJobChainLimits(EffectiveServerSilo, v11, v12, a3);
  if ( v8 < 0 )
    goto LABEL_5;
  v8 = PspEstablishJobHierarchy((PVOID)EffectiveServerSilo);
  if ( v8 < 0 )
    goto LABEL_5;
  PspIncrementJobChainProcessCounts(EffectiveServerSilo, 0LL, a2, a3);
  PspApplyJobChainLimitsToProcess(EffectiveServerSilo, 0LL, a2);
  if ( (*(_DWORD *)(EffectiveServerSilo + 1304) & 0x1000) != 0 )
  {
    v13 = a2 + 510;
    v14 = 7LL;
    do
    {
      _interlockedbittestandset(v13++, 0x1Fu);
      --v14;
    }
    while ( v14 );
    _interlockedbittestandset(a2 + 519, 0x1Fu);
  }
  PspUnlockJobChain(a1, (__int64)CurrentThread, 0);
  v15 = PspApplyWorkingSetLimitsToProcess((ULONG_PTR)a2);
  if ( v15 >= 0 && !(unsigned int)MmAssignProcessToJob(a2, 0LL, 0LL) )
    return (unsigned int)-1073741756;
  return (unsigned int)v15;
}
