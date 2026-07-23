/*
 * XREFs of KiSetHeteroPolicyThread @ 0x14029924C
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x14028E450 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14028E46C (KeSetUserHeteroCpuPolicyThread.c)
 *     PopUpdateSingleThreadHeteroPolicies @ 0x1408776C0 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140003AE4 (KiSendSoftwareInterrupt.c)
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredReadyList @ 0x1400ACB08 (KiInsertDeferredReadyList.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140117384 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1401177F0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402985A0 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14029880C (KiGenerateHeteroSets.c)
 *     EtwTraceIdealProcessor @ 0x14030FFFC (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, int a2, __int64 a3, int a4)
{
  int v5; // esi
  __int64 CurrentIrql; // r12
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // esi
  char v19; // al
  bool v20; // sf
  unsigned __int8 v21; // r12
  struct _KPRCB *v22; // rcx
  int v23; // eax
  __int64 v24; // rdi
  char v25; // cl
  unsigned __int64 v26; // rax
  char v27; // cl
  int v28; // ecx
  int v29; // r14d
  unsigned __int8 v30; // al
  __int64 v31; // r8
  __int64 v32; // rdi
  __int64 v33; // rcx
  unsigned int v34; // r15d
  unsigned int v35; // r13d
  __int64 v36; // r8
  unsigned __int64 v37; // r9
  struct _KPRCB *v38; // rdi
  __int64 CurrentThread; // r14
  __int64 v40; // rdx
  __int64 v41; // r8
  struct _KPRCB *v42; // rbx
  _DWORD *v43; // rcx
  int v44; // eax
  _DWORD *v45; // rcx
  int v46; // eax
  _DWORD *v47; // rcx
  int v48; // eax
  __int64 NextThread; // rbx
  __int64 v50; // r8
  unsigned int v51; // r8d
  struct _KPRCB *v52; // rcx
  struct _KPRCB *v53; // rcx
  __int64 v55; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v56; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v57; // [rsp+40h] [rbp-40h]
  int v58; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v59; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int64 *v60; // [rsp+50h] [rbp-30h] BYREF
  __int64 v61; // [rsp+58h] [rbp-28h]
  int v62; // [rsp+60h] [rbp-20h]
  __int64 v63; // [rsp+68h] [rbp-18h] BYREF
  __int64 v64; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v65; // [rsp+C0h] [rbp+40h]
  int v66; // [rsp+D0h] [rbp+50h] BYREF

  v5 = a3;
  CurrentIrql = KeGetCurrentIrql();
  v61 = CurrentIrql;
  __writecr8(2uLL);
  v9 = 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v66 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = SchedulerAssist[5];
      SchedulerAssist[5] = v12 + 1;
      if ( v12 == -1 )
LABEL_8:
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v13[5] - 1;
        v13[5] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v66, v9, a3);
    while ( *(_QWORD *)(a1 + 64) );
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v15[5];
        v15[5] = v16 + 1;
        if ( v16 == -1 )
          goto LABEL_8;
      }
    }
  }
  v17 = *(unsigned int *)(a1 + 588);
  v65 = *(_DWORD *)(a1 + 588);
  v57 = *(_DWORD *)(a1 + 196);
  if ( v5 )
  {
    v18 = *(unsigned __int8 *)(a1 + 125);
    v19 = (a2 ^ *(_BYTE *)(a1 + 126)) & 0x7F;
    v20 = ((v19 ^ *(_BYTE *)(a1 + 126)) & 0x80u) != 0;
    *(_BYTE *)(a1 + 126) ^= v19;
    if ( v20 )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( a4 )
  {
LABEL_21:
    v18 = a2;
    goto LABEL_22;
  }
  v18 = *(_BYTE *)(a1 + 126) & 0x7F;
  *(_BYTE *)(a1 + 126) &= ~0x80u;
LABEL_22:
  v21 = v61;
  if ( v18 == 8 )
    v18 = KiDefaultHeteroCpuPolicy;
  if ( !KeHeteroSystem )
  {
    *(_BYTE *)(a1 + 126) &= ~0x80u;
    v18 = 0;
  }
  if ( *(unsigned __int8 *)(a1 + 125) == v18 )
  {
    KiReleaseThreadLockSafe(a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
    {
      v22 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v22);
    }
LABEL_83:
    __writecr8(v21);
    return (unsigned int)v18;
  }
  v23 = v18;
  v24 = KiProcessorBlock[v17];
  if ( v18 >= 5 )
    v23 = KiConvertDynamicHeteroPolicy(a1, v9, KiProcessorBlock[v17]);
  KiGenerateHeteroSets(*(_QWORD *)(v24 + 192), *(_QWORD *)(a1 + 576), v23, &v63, &v64, &v59);
  if ( (v63 & *(_QWORD *)(v24 + 200)) == 0 )
  {
    v25 = *(_BYTE *)(v24 + 209);
    _BitScanForward64(&v26, __ROR8__(v63, v25));
    v27 = v26 + v25;
    LODWORD(v26) = *(_DWORD *)(a1 + 116);
    v28 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v24 + 208) + (v27 & 0x3F)];
    v62 = v28;
    *(_DWORD *)(a1 + 588) = v28;
    if ( (v26 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v28;
  }
  v56 = 0LL;
  v29 = 0;
  v30 = KiAcquireThreadStateLock(a1, (__int64)&v55, (volatile signed __int32 **)&v60);
  v32 = v55;
  *(_BYTE *)(a1 + 125) = v18;
  if ( v30 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue(v32, (__int64)v60, a1, *(char *)(a1 + 195));
    KiPrepareReadyThreadForRescheduling(a1, *(char *)(a1 + 195), (__int64)&v56);
  }
  else
  {
    v33 = (unsigned int)v30 - 2;
    if ( v30 == 2 )
    {
      if ( (*(_QWORD *)(v32 + 200) & v59) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
          v32 = v55;
          if ( !*(_QWORD *)(v55 + 16) )
          {
            KiSelectNextThread(v55, (__int64)&v56, v31);
            v29 = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v32 = v55;
        }
      }
    }
    else if ( v30 == 3 && (*(_QWORD *)(v32 + 200) & v59) == 0 )
    {
      KiSelectNextThread(v32, (__int64)&v56, v31);
      KiInsertDeferredReadyList((__int64)&v56, a1);
    }
  }
  v34 = *(_DWORD *)(a1 + 588);
  v35 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadStateLock(v33, v32, v60);
  KiReleaseThreadLockSafe(a1);
  if ( v29 && KeGetPcr()->Prcb.Number != *(_DWORD *)(v55 + 36) )
    KiSendSoftwareInterrupt();
  if ( (xmmword_140542350 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v65, v34);
    if ( (xmmword_140542350 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v57, v35);
  }
  v38 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList((__int64)v38, &v56, v36, v37);
  if ( v21 < 2u )
  {
    CurrentThread = (__int64)v38->CurrentThread;
    if ( v38->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v38->CurrentThread, 0);
      v42 = KeGetCurrentPrcb();
      v58 = 0;
      v43 = v42->SchedulerAssist;
      if ( v43 )
      {
        v40 = 1LL;
        if ( v42->NestingLevel <= 1u )
        {
          v44 = v43[5];
          v43[5] = v44 + 1;
          if ( v44 == -1 )
LABEL_62:
            KiRemoveSystemWorkPriorityKick((__int64)v42);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v38->PrcbLock, 0LL) )
      {
        v45 = v42->SchedulerAssist;
        if ( v45 )
        {
          if ( v42->NestingLevel <= 1u )
          {
            v46 = v45[5] - 1;
            v45[5] = v46;
            if ( !v46 )
              KiRemoveSystemWorkPriorityKick((__int64)v42);
          }
        }
        do
          KeYieldProcessorEx(&v58, v40, v41);
        while ( v38->PrcbLock );
        v47 = v42->SchedulerAssist;
        if ( v47 )
        {
          if ( v42->NestingLevel <= 1u )
          {
            v48 = v47[5];
            v47[5] = v48 + 1;
            if ( v48 == -1 )
              goto LABEL_62;
          }
        }
      }
      NextThread = (__int64)v38->NextThread;
      v38->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v38, CurrentThread, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState((__int64)v38, NextThread, 0, 2LL);
      v21 = v61;
      *(_BYTE *)(CurrentThread + 390) = v61;
      *(_BYTE *)(CurrentThread + 643) = 32;
      KiQueueReadyThread(v38, CurrentThread, v50);
      LOBYTE(v51) = v21;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v51) )
        goto LABEL_79;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
        goto LABEL_78;
    }
    else
    {
      if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
        goto LABEL_79;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      {
LABEL_78:
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_79:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v53);
        }
        goto LABEL_83;
      }
    }
    if ( KeGetCurrentIrql() >= 2u )
    {
      v52 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v52);
    }
    goto LABEL_78;
  }
  if ( v38->NextThread && !v38->DpcRoutineActive )
    KiRequestSoftwareInterrupt(v38, 2);
  return (unsigned int)v18;
}
