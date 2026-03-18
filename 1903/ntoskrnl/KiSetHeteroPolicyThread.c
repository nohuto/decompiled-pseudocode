/*
 * XREFs of KiSetHeteroPolicyThread @ 0x1402B0040
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x1402A4BD0 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x1402A4BEC (KeSetUserHeteroCpuPolicyThread.c)
 *     PopUpdateSingleThreadHeteroPolicies @ 0x1408B3730 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D220 (KiInsertDeferredReadyList.c)
 *     KiReleaseThreadStateLock @ 0x14000FA70 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x14000FC20 (KiAcquireThreadStateLock.c)
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x1400136A0 (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400E4D24 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400E4F6C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x14012C798 (KiSendSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402AF260 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x1402AF378 (KiGenerateHeteroSets.c)
 *     EtwTraceIdealProcessor @ 0x14032DACC (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, int a2, int a3, int a4)
{
  __int64 CurrentIrql; // r12
  int v9; // edx
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
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // r14d
  unsigned __int8 v32; // al
  __int64 v33; // rdi
  __int64 v34; // rcx
  unsigned int v35; // r15d
  unsigned int v36; // r13d
  __int64 v37; // rdx
  __int64 v38; // rcx
  struct _KPRCB *v39; // rbx
  __int64 CurrentThread; // rdi
  struct _KPRCB *v41; // r14
  _DWORD *v42; // rcx
  int v43; // eax
  _DWORD *v44; // rcx
  int v45; // eax
  _DWORD *v46; // rcx
  int v47; // eax
  __int64 NextThread; // r14
  __int64 v49; // r8
  unsigned int v50; // r8d
  bool v51; // zf
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

  v56 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v61 = CurrentIrql;
  __writecr8(2uLL);
  v9 = 1;
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
      KeYieldProcessorEx(&v66);
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
  if ( a3 )
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
LABEL_86:
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
    v28 = v27 & 0x3F;
    v29 = v28 + (*(unsigned __int8 *)(v24 + 208) << 6);
    v62 = v28;
    v30 = KiProcessorNumberToIndexMappingTable[v29];
    *(_DWORD *)(a1 + 588) = v30;
    if ( (v26 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v30;
  }
  v31 = 0;
  v32 = KiAcquireThreadStateLock(a1, &v55, (volatile signed __int32 **)&v60);
  v33 = v55;
  *(_BYTE *)(a1 + 125) = v18;
  if ( v32 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue(v33, (__int64)v60, a1, *(char *)(a1 + 195));
    KiPrepareReadyThreadForRescheduling(a1, *(char *)(a1 + 195), (__int64 *)&v56);
  }
  else
  {
    v34 = (unsigned int)v32 - 2;
    if ( v32 == 2 )
    {
      if ( (*(_QWORD *)(v33 + 200) & v59) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
          v33 = v55;
          if ( !*(_QWORD *)(v55 + 16) )
          {
            KiSelectNextThread(v55, (__int64 *)&v56);
            v31 = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v33 = v55;
        }
      }
    }
    else if ( v32 == 3 && (*(_QWORD *)(v33 + 200) & v59) == 0 )
    {
      KiSelectNextThread(v33, (__int64 *)&v56);
      KiInsertDeferredReadyList((__int64 *)&v56, a1);
    }
  }
  v35 = *(_DWORD *)(a1 + 588);
  v36 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadStateLock(v34, v33, v60);
  KiReleaseThreadLockSafe(a1);
  if ( v31 )
  {
    LODWORD(v37) = KeGetPcr()->Prcb.Number;
    v38 = *(unsigned int *)(v55 + 36);
    if ( (_DWORD)v37 != (_DWORD)v38 )
    {
      LOBYTE(v37) = 2;
      KiSendSoftwareInterrupt(v38, v37);
    }
  }
  if ( (xmmword_140572410 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v65, v35);
    if ( (xmmword_140572410 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v57, v36);
  }
  v39 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList((__int64)v39, &v56);
  if ( v21 < 2u )
  {
    CurrentThread = (__int64)v39->CurrentThread;
    if ( v39->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v39->CurrentThread, 0);
      v41 = KeGetCurrentPrcb();
      v58 = 0;
      v42 = v41->SchedulerAssist;
      if ( v42 )
      {
        if ( v41->NestingLevel <= 1u )
        {
          v43 = v42[5];
          v42[5] = v43 + 1;
          if ( v43 == -1 )
LABEL_62:
            KiRemoveSystemWorkPriorityKick((__int64)v41);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v39->PrcbLock, 0LL) )
      {
        v44 = v41->SchedulerAssist;
        if ( v44 )
        {
          if ( v41->NestingLevel <= 1u )
          {
            v45 = v44[5] - 1;
            v44[5] = v45;
            if ( !v45 )
              KiRemoveSystemWorkPriorityKick((__int64)v41);
          }
        }
        do
          KeYieldProcessorEx(&v58);
        while ( v39->PrcbLock );
        v46 = v41->SchedulerAssist;
        if ( v46 )
        {
          if ( v41->NestingLevel <= 1u )
          {
            v47 = v46[5];
            v46[5] = v47 + 1;
            if ( v47 == -1 )
              goto LABEL_62;
          }
        }
      }
      NextThread = (__int64)v39->NextThread;
      v39->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v39, CurrentThread, 0LL);
      _enable();
      v39->CurrentThread = (_KTHREAD *)NextThread;
      v21 = v61;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v49 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v49 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v21;
      KiQueueReadyThread((__int64)v39, CurrentThread, v49);
      LOBYTE(v50) = v21;
      v51 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v50) == 0;
    }
    else
    {
      v51 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v51 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v52 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v52);
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v53 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v53);
    }
    goto LABEL_86;
  }
  if ( v39->NextThread && !v39->DpcRoutineActive )
    KiRequestSoftwareInterrupt(v39, 2);
  return (unsigned int)v18;
}
