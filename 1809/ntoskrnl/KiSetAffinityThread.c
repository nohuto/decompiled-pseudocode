/*
 * XREFs of KiSetAffinityThread @ 0x1401154EC
 * Callers:
 *     KeSetLegacyAffinityThread @ 0x140115260 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityThread @ 0x14016B3B0 (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1401905F4 (KeSetAffinityProcess.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140003AE4 (KiSendSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiComputeThreadAffinity @ 0x14008A420 (KiComputeThreadAffinity.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400D1644 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400D563C (KiUpdateNodeAffinitizedFlag.c)
 *     KiPrcbInGroupAffinity @ 0x1400D57B4 (KiPrcbInGroupAffinity.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KeSelectIdealProcessor @ 0x1400D8A34 (KeSelectIdealProcessor.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140115718 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeSelectNodeForAffinity @ 0x1401157D8 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14030FFFC (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1403108C8 (EtwTraceThreadAffinity.c)
 */

int __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // r13d
  __int64 *v5; // r14
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 v10; // r12
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rsi
  char v14; // r15
  int v15; // r8d
  volatile signed __int64 *v16; // rbx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  int result; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-3Ch]
  unsigned int v25; // [rsp+38h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h]
  volatile signed __int64 *v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v23 = 0;
  v5 = (__int64 *)a3;
  v27 = a2;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = SchedulerAssist[5];
        SchedulerAssist[5] = v21 + 1;
        if ( v21 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v20 = CurrentPrcb->SchedulerAssist;
    if ( v20 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = v20[5] - 1;
        v20[5] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v23, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v24 = *(_DWORD *)(a1 + 588);
  v25 = *(_DWORD *)(a1 + 196);
  *(_WORD *)(a1 + 560) = *((_WORD *)v5 + 4);
  *(_QWORD *)(a1 + 552) = *v5;
  v8 = *(unsigned int *)(a1 + 196);
  v9 = *(_DWORD *)(a1 + 196);
  v10 = KiProcessorBlock[v8];
  if ( !KiPrcbInGroupAffinity(v10, (__int64)v5) )
  {
    v11 = KeSelectNodeForAffinity(v5);
    v30 = 0LL;
    LOWORD(v30) = *((_WORD *)v5 + 4);
    v29 = *v5 & *(_QWORD *)(v11 + 136);
    LODWORD(v8) = KeSelectIdealProcessor(v11, (__int64)&v29, 0LL);
    v9 = v8;
    *(_DWORD *)(a1 + 196) = v8;
    v10 = KiProcessorBlock[(unsigned int)v8];
  }
  v12 = *(_DWORD *)(a1 + 116);
  v13 = 0LL;
  v26 = 0LL;
  if ( (v12 & 8) == 0 )
  {
    v14 = KiAcquireThreadStateLock(a1, (__int64)&v26, (volatile signed __int32 **)&v28);
    *(_WORD *)(a1 + 584) = *((_WORD *)v5 + 4);
    *(_QWORD *)(a1 + 576) = *v5;
    if ( (unsigned int)KiComputeThreadAffinity(a1) )
    {
      v5 = &v29;
      LOWORD(v30) = *(_WORD *)(a1 + 584);
      v29 = *(_QWORD *)(a1 + 576);
    }
    else
    {
      *(_DWORD *)(a1 + 588) = v8;
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v10, a1);
    }
    LOBYTE(v15) = v14;
    v13 = v26;
    v16 = v28;
    v4 = KiRescheduleThreadAfterAffinityChange(a1, (_DWORD)v5, v15, v26, (__int64)v28, v27);
    KiReleaseThreadStateLock(v17, v13, v16);
    v9 = *(_DWORD *)(a1 + 196);
  }
  v18 = *(_DWORD *)(a1 + 588);
  result = KiReleaseThreadLockSafe(a1);
  if ( v4 )
  {
    result = KeGetPcr()->Prcb.Number;
    if ( result != *(_DWORD *)(v13 + 36) )
      result = KiSendSoftwareInterrupt();
  }
  if ( (xmmword_140542350 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, v24, v18);
    if ( (xmmword_140542350 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, v25, v9);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    return EtwTraceThreadAffinity(a1, v5);
  return result;
}
