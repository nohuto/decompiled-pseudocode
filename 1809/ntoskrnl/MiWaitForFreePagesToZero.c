/*
 * XREFs of MiWaitForFreePagesToZero @ 0x140053280
 * Callers:
 *     MiZeroPageThread @ 0x140179300 (MiZeroPageThread.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiWaitForFreePagesToZero(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r12
  void *v4; // r15
  unsigned int v5; // ebx
  struct _KEVENT *v6; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // r15
  _QWORD *v12; // rbx
  _QWORD *v13; // r12
  void *v14; // r8
  volatile signed __int32 *v15; // rsi
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v19; // edx
  bool v20; // zf
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  unsigned __int8 v23; // si
  struct _KPRCB *v24; // rbx
  _DWORD *v25; // rcx
  signed __int32 v26; // edx
  _QWORD *v27; // rbx
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  __int64 v31; // rcx
  unsigned int v32; // edx
  _QWORD *v33; // rax
  unsigned __int8 v34; // dl
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  __int64 v37; // rax
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  unsigned __int8 v40; // bl
  _DWORD *v41; // rcx
  _DWORD *v42; // rcx
  int v43; // eax
  int v44; // eax
  signed __int32 v45; // eax
  struct _KPRCB *v46; // rcx
  KIRQL v47; // al
  int v48; // eax
  struct _KPRCB *v49; // rcx
  _QWORD *v50; // rbx
  int v51; // eax
  int v52; // eax
  struct _KPRCB *v53; // rcx
  int v54; // eax
  int v55; // eax
  signed __int32 v56; // eax
  int v57; // eax
  struct _KPRCB *v58; // rcx
  void *v59; // [rsp+40h] [rbp-89h]
  __int64 v60; // [rsp+48h] [rbp-81h] BYREF
  volatile signed __int64 *v61; // [rsp+50h] [rbp-79h]
  unsigned __int8 v62; // [rsp+58h] [rbp-71h]
  __int64 v63; // [rsp+60h] [rbp-69h]
  __int64 v64; // [rsp+68h] [rbp-61h]
  PVOID Object[2]; // [rsp+70h] [rbp-59h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-49h] BYREF
  void *retaddr; // [rsp+128h] [rbp+5Fh]
  int v68; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v69; // [rsp+138h] [rbp+6Fh]
  unsigned int v70; // [rsp+140h] [rbp+77h]
  int v71; // [rsp+148h] [rbp+7Fh] BYREF

  v70 = a3;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = (void *)(a1 + 104);
  v5 = a3;
  Object[0] = (PVOID)(a1 + 104);
  v6 = (struct _KEVENT *)(a1 + 6528);
  v69 = a3;
  Object[1] = (PVOID)(a1 + 6528);
  v64 = v3;
  v9 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *a2;
      if ( !*a2 )
        goto LABEL_22;
      v11 = *(_QWORD *)(v10 - 16);
      v12 = (_QWORD *)(v10 - 16);
      v13 = 0LL;
      v59 = 0LL;
      v14 = 0LL;
      v15 = (volatile signed __int32 *)(v11 + 192);
      CurrentIrql = KeGetCurrentIrql();
      v63 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11 + 192, (unsigned __int8)CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v68 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v43 = SchedulerAssist[5];
            SchedulerAssist[5] = v43 + 1;
            if ( v43 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v14 = 0LL;
            }
          }
        }
        if ( _interlockedbittestandset(v15, 0x1Fu) )
        {
          v42 = CurrentPrcb->SchedulerAssist;
          if ( v42 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v44 = v42[5] - 1;
              v42[5] = v44;
              if ( !v44 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          LOBYTE(CurrentIrql) = v63;
          v68 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v11 + 192), v63);
          v14 = 0LL;
        }
        else
        {
          LOBYTE(CurrentIrql) = v63;
        }
        v19 = *v15;
        if ( (*v15 & 0xBFFFFFFF) == 0x80000000 )
          goto LABEL_9;
        do
        {
          if ( (v19 & 0x40000000) == 0 )
          {
            v45 = _InterlockedCompareExchange(v15, v19 | 0x40000000, v19);
            v20 = v19 == v45;
            v19 = v45;
            if ( !v20 )
              continue;
          }
          KeYieldProcessorEx(&v68);
          v19 = *v15;
        }
        while ( (v19 & 0xBFFFFFFF) != 0x80000000 );
      }
      v14 = 0LL;
LABEL_9:
      v20 = v12[1]-- == 1LL;
      if ( v20 )
      {
        v14 = v12;
        v59 = v12;
      }
      if ( (ULONG_PTR *)v11 != &MiSystemPartition )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 192));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
        {
          v46 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v46);
        }
        __writecr8((unsigned __int8)CurrentIrql);
        v47 = ExAcquireSpinLockExclusive(&dword_14043DAC0);
        v14 = v59;
        LOBYTE(CurrentIrql) = v47;
      }
      if ( !--qword_14043DA28 )
      {
        v13 = (_QWORD *)qword_14043DA58;
        qword_14043DA58 = 0LL;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14043DAC0, retaddr);
        v14 = v59;
      }
      else
      {
        dword_14043DAC0 = 0;
      }
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v48 = v22[5] - 1;
          v22[5] = v48;
          if ( !v48 )
          {
            KiRemoveSystemWorkPriorityKick(v21);
            v14 = v59;
          }
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
      {
        v49 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v49->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v49);
        v14 = v59;
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( v13 )
      {
        do
        {
          v50 = (_QWORD *)*v13;
          KeSignalGate(v13 + 1, 1LL);
          v13 = v50;
        }
        while ( v50 );
        v14 = v59;
      }
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      v9 = v69;
      v6 = (struct _KEVENT *)(a1 + 6528);
      v5 = v70;
      v4 = (void *)(a1 + 104);
      v3 = v64;
      *a2 = 0LL;
LABEL_22:
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
        return 0xFFFFFFFFLL;
      if ( *(_QWORD *)(a1 + 2240) )
        break;
      v60 = 0LL;
      v61 = (volatile signed __int64 *)(a1 + 4864);
      v34 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v62 = v34;
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      if ( v36 )
      {
        if ( v35->NestingLevel <= 1u )
        {
          v51 = v36[5];
          v36[5] = v51 + 1;
          if ( v51 == -1 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v60, a1 + 4864);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)(a1 + 4864), (__int64)&v60) )
      {
        KxWaitForLockOwnerShip(&v60);
      }
      if ( !*(_QWORD *)(a1 + 2240) )
      {
        *(_BYTE *)(a1 + 6552) = 0;
        KeResetEvent(v6);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v60, retaddr);
        goto LABEL_63;
      }
      _m_prefetchw(&v60);
      v37 = v60;
      if ( v60 )
        goto LABEL_67;
      if ( (__int64 *)_InterlockedCompareExchange64(v61, 0LL, (signed __int64)&v60) != &v60 )
      {
        v37 = KxWaitForLockChainValid(&v60);
LABEL_67:
        v60 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v37 + 8), 1uLL);
      }
LABEL_63:
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      if ( v39 )
      {
        if ( v38->NestingLevel <= 1u )
        {
          v52 = v39[5] - 1;
          v39[5] = v52;
          if ( !v52 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
      v40 = v62;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v62 < 2u )
      {
        v53 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v53);
      }
      __writecr8(v40);
      v5 = v70;
    }
LABEL_24:
    if ( !dword_14043BF90 && (unsigned int)MiSufficientAvailablePages(a1, 160LL) )
      break;
    KeWaitForSingleObject(v4, WrFreePage, 0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v9 = v5;
    while ( 1 )
    {
      v31 = 1984LL * v9;
      if ( *(_QWORD *)(v31 + v3 + 1768) )
        break;
      v32 = 0;
      v33 = (_QWORD *)(v31 + v3 + 8);
      do
      {
        if ( *v33 )
          break;
        ++v32;
        v33 += 34;
      }
      while ( v32 < 3 );
      if ( v32 != 3 )
        break;
      v9 = (v9 + 1) % (unsigned __int16)KeNumberNodes;
      v69 = v9;
      if ( v9 == v5 )
        goto LABEL_24;
    }
  }
  v23 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14043DAC0, v23);
  }
  else
  {
    v24 = KeGetCurrentPrcb();
    v71 = 0;
    v25 = v24->SchedulerAssist;
    if ( v25 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        v54 = v25[5];
        v25[5] = v54 + 1;
        if ( v54 == -1 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    if ( _interlockedbittestandset(&dword_14043DAC0, 0x1Fu) )
    {
      v41 = v24->SchedulerAssist;
      if ( v41 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v55 = v41[5] - 1;
          v41[5] = v55;
          if ( !v55 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      v71 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14043DAC0, v23);
    }
    v26 = dword_14043DAC0;
    while ( (v26 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v26 & 0x40000000) == 0 )
      {
        v56 = _InterlockedCompareExchange(&dword_14043DAC0, v26 | 0x40000000, v26);
        v20 = v26 == v56;
        v26 = v56;
        if ( !v20 )
          continue;
      }
      KeYieldProcessorEx(&v71);
      v26 = dword_14043DAC0;
    }
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    v27 = MmPhysicalMemoryBlock;
  }
  else
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
    v27 = *(_QWORD **)(a1 + 96);
  }
  if ( v27 )
  {
    ++*(v27 - 1);
    ++qword_14043DA28;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14043DAC0, retaddr);
  else
    dword_14043DAC0 = 0;
  v28 = KeGetCurrentPrcb();
  v29 = v28->SchedulerAssist;
  if ( v29 )
  {
    if ( v28->NestingLevel <= 1u )
    {
      v57 = v29[5] - 1;
      v29[5] = v57;
      if ( !v57 )
        KiRemoveSystemWorkPriorityKick(v28);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v23 < 2u )
  {
    v58 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v58->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v58);
  }
  __writecr8(v23);
  if ( !v27 )
    v27 = (_QWORD *)MiReferencePageRuns(&MiSystemPartition, 0LL);
  *a2 = (__int64)v27;
  return v9;
}
