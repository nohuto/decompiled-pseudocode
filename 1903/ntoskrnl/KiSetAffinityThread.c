/*
 * XREFs of KiSetAffinityThread @ 0x1400F7E40
 * Callers:
 *     KeSetLegacyAffinityThread @ 0x1400F7C30 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityThread @ 0x14015A184 (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x14019A6D8 (KeSetAffinityProcess.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x14000FA70 (KiReleaseThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14000FAD0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x14000FC20 (KiAcquireThreadStateLock.c)
 *     KiPrcbInGroupAffinity @ 0x1400156A4 (KiPrcbInGroupAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14001C0F0 (KiUpdateNodeAffinitizedFlag.c)
 *     KeSelectIdealProcessor @ 0x14001C1F4 (KeSelectIdealProcessor.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400F8088 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiComputeThreadAffinity @ 0x1400F8CF0 (KiComputeThreadAffinity.c)
 *     KeSelectNodeForAffinity @ 0x1400F90B0 (KeSelectNodeForAffinity.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x14012C798 (KiSendSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14032DACC (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x14032E5D4 (EtwTraceThreadAffinity.c)
 */

unsigned int __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // r12d
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rsi
  char v13; // r15
  int v14; // r8d
  volatile signed __int64 *v15; // rbx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int result; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-3Ch]
  unsigned int v28; // [rsp+38h] [rbp-38h]
  __int64 v29; // [rsp+40h] [rbp-30h] BYREF
  __int64 v30; // [rsp+48h] [rbp-28h]
  volatile signed __int64 *v31; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+58h] [rbp-18h] BYREF
  __int64 v33; // [rsp+60h] [rbp-10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v30 = a2;
  v26 = 0;
  v32 = 0LL;
  v33 = 0LL;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = SchedulerAssist[5];
        SchedulerAssist[5] = v24 + 1;
        if ( v24 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v23 = CurrentPrcb->SchedulerAssist;
    if ( v23 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = v23[5] - 1;
        v23[5] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v26);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v27 = *(_DWORD *)(a1 + 588);
  v28 = *(_DWORD *)(a1 + 196);
  *(_WORD *)(a1 + 560) = *((_WORD *)a3 + 4);
  *(_QWORD *)(a1 + 552) = *a3;
  v8 = *(unsigned int *)(a1 + 196);
  v9 = *(_DWORD *)(a1 + 196);
  v10 = KiProcessorBlock[v8];
  if ( !KiPrcbInGroupAffinity(v10, (__int64)a3) )
  {
    v20 = KeSelectNodeForAffinity(a3);
    LOWORD(v33) = *((_WORD *)a3 + 4);
    v32 = *a3 & *(_QWORD *)(v20 + 136);
    v21 = KeSelectIdealProcessor(v20, &v32, 0LL, (unsigned int *)(v10 + 36));
    LODWORD(v8) = v21;
    *(_DWORD *)(a1 + 196) = v21;
    v9 = v21;
    v10 = KiProcessorBlock[v21];
  }
  v11 = *(_DWORD *)(a1 + 116);
  v12 = 0LL;
  v29 = 0LL;
  if ( (v11 & 8) == 0 )
  {
    v13 = KiAcquireThreadStateLock(a1, &v29, (volatile signed __int32 **)&v31);
    *(_WORD *)(a1 + 584) = *((_WORD *)a3 + 4);
    *(_QWORD *)(a1 + 576) = *a3;
    if ( (unsigned int)KiComputeThreadAffinity(a1) )
    {
      a3 = &v32;
      LOWORD(v33) = *(_WORD *)(a1 + 584);
      v32 = *(_QWORD *)(a1 + 576);
    }
    else
    {
      *(_DWORD *)(a1 + 588) = v8;
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v10, a1);
    }
    LOBYTE(v14) = v13;
    v12 = v29;
    v15 = v31;
    v4 = KiRescheduleThreadAfterAffinityChange(a1, (_DWORD)a3, v14, v29, (__int64)v31, v30);
    KiReleaseThreadStateLock(v16, v12, v15);
    v9 = *(_DWORD *)(a1 + 196);
  }
  v17 = *(_DWORD *)(a1 + 588);
  result = KiReleaseThreadLockSafe(a1);
  if ( v4 )
  {
    v22 = *(unsigned int *)(v12 + 36);
    result = KeGetPcr()->Prcb.Number;
    if ( result != (_DWORD)v22 )
    {
      LOBYTE(v19) = 2;
      result = KiSendSoftwareInterrupt(v22, v19);
    }
  }
  if ( (xmmword_140572410 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, v27, v17);
    if ( (xmmword_140572410 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, v28, v9);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    return EtwTraceThreadAffinity(a1, a3);
  return result;
}
