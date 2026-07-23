/*
 * XREFs of KiInsertQueueDpc @ 0x1400621B0
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     PoExecutePerfCheck @ 0x140061660 (PoExecutePerfCheck.c)
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KiTimerWaitTest @ 0x1400C7AB0 (KiTimerWaitTest.c)
 *     PpmPerfAction @ 0x14010BA20 (PpmPerfAction.c)
 *     KiGenericCallDpcWorker @ 0x1401120F0 (KiGenericCallDpcWorker.c)
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     KiForegroundTimerCallback @ 0x14012DC60 (KiForegroundTimerCallback.c)
 *     KiEntropyQueueDpc @ 0x14012F570 (KiEntropyQueueDpc.c)
 *     ExpTimeRefreshCallback @ 0x14016A160 (ExpTimeRefreshCallback.c)
 *     KeMaskInterrupt @ 0x14016D648 (KeMaskInterrupt.c)
 *     PpmPerfQueueAction @ 0x1401759D8 (PpmPerfQueueAction.c)
 *     HvlSharedIsr @ 0x140271390 (HvlSharedIsr.c)
 *     IoProcessPassiveInterrupts @ 0x14028858C (IoProcessPassiveInterrupts.c)
 *     KiInsertSecondarySignalList @ 0x14029396C (KiInsertSecondarySignalList.c)
 *     KeUpdatePendingQosRequest @ 0x1402981E4 (KeUpdatePendingQosRequest.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14029B4F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiEpfCompletionIsr @ 0x14029C000 (KiEpfCompletionIsr.c)
 *     PpmPerfControlActionCallback @ 0x1402DB520 (PpmPerfControlActionCallback.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x1402E3DA0 (PpmHeteroDispatchHgsInterrupt.c)
 *     ExpSvmFaultRoutine @ 0x14031E720 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x140320EB0 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140320F70 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x140321374 (WheapWorkQueueAddItem.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140291128 (KiReleaseSpinLockInstrumented.c)
 *     KiSetVpThreadSystemWork @ 0x140299950 (KiSetVpThreadSystemWork.c)
 *     EtwTraceDpcEnqueueEvent @ 0x14030FEE8 (EtwTraceDpcEnqueueEvent.c)
 */

__int64 __fastcall KiInsertQueueDpc(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5)
{
  unsigned __int16 v5; // si
  int v6; // r11d
  unsigned __int8 v7; // r15
  bool v9; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbp
  char v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  struct _KPRCB *v16; // r13
  _DWORD *SchedulerAssist; // rcx
  signed __int64 IsrDpcStats; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  char v23; // al
  __int64 v24; // rdx
  __int16 v25; // r8
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  unsigned __int16 v28; // tt
  signed __int16 v30; // ax
  signed __int16 v31; // tt
  int v32; // esi
  struct _KPRCB *v33; // rax
  __int64 v34; // rax
  signed __int16 v35; // ax
  signed __int16 v36; // tt
  _DWORD *v37; // rcx
  char v38; // al
  int v39; // eax
  int v40; // eax
  int v41; // eax
  char v42; // r8
  int v43; // ecx
  bool v44; // zf
  _DWORD *v45; // rdx
  __int64 v46; // rcx
  struct _KPRCB *v47; // rcx
  char v48; // [rsp+30h] [rbp-68h]
  int v49; // [rsp+34h] [rbp-64h]
  unsigned int Number; // [rsp+38h] [rbp-60h]
  int v51; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int8 v52; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  char v54; // [rsp+A0h] [rbp+8h]
  __int64 v55; // [rsp+A8h] [rbp+10h]
  __int64 v56; // [rsp+B0h] [rbp+18h]
  volatile signed __int32 *v57; // [rsp+B8h] [rbp+20h]

  v57 = a4;
  v56 = a3;
  v55 = a2;
  v5 = *(_WORD *)(BugCheckParameter2 + 2);
  v6 = 0;
  v7 = 0;
  v49 = 0;
  v51 = 0;
  v9 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v48 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v52 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  v54 = 0;
  if ( CurrentPrcb->SchedulerAssist )
  {
    LOBYTE(a2) = 1;
    v38 = KiSetVpThreadSystemWork(CurrentPrcb, a2);
    a3 = v56;
    v12 = v38;
    a2 = v55;
    a4 = v57;
    v6 = 0;
    v54 = v38;
  }
  if ( v5 >= 0x500u )
  {
    Number = v5 - 1280;
    v13 = KiProcessorBlock[Number];
    if ( !v13 )
      KeBugCheckEx(0xC7u, 3uLL, BugCheckParameter2, v5, (unsigned int)KeNumberProcessors_0);
  }
  else
  {
    Number = CurrentPrcb->Number;
    if ( v5 != (_WORD)Number )
      v48 = 1;
    v13 = (__int64)CurrentPrcb;
  }
  if ( (*(_QWORD *)(v13 + 200) & *(_QWORD *)(BugCheckParameter2 + 16)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 16), *(unsigned __int8 *)(v13 + 209));
  if ( *(_BYTE *)BugCheckParameter2 == 26 && *(_BYTE *)(v13 + 11880) )
    v14 = 11816LL;
  else
    v14 = 11776LL;
  v15 = v13 + v14;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v15 + 16);
    a3 = v56;
    a2 = v55;
    a4 = v57;
    v6 = 0;
  }
  else
  {
    v16 = KeGetCurrentPrcb();
    SchedulerAssist = v16->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v39 = SchedulerAssist[5];
        SchedulerAssist[5] = v39 + 1;
        if ( v39 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v16);
          a3 = v56;
          a2 = v55;
          a4 = v57;
          v6 = 0;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 16), 0LL) )
    {
      v37 = v16->SchedulerAssist;
      if ( v37 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v40 = v37[5] - 1;
          v37[5] = v40;
          if ( !v40 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      KxWaitForSpinLockAndAcquire(v15 + 16);
      a3 = v56;
      a2 = v55;
      a4 = v57;
      v6 = 0;
    }
    v12 = v54;
  }
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( Number != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), IsrDpcStats, 0LL) )
  {
    v19 = *(_DWORD *)(v15 + 24);
    ++*(_DWORD *)(v15 + 28);
    *(_DWORD *)(v15 + 24) = v19 + 1;
    *(_QWORD *)(BugCheckParameter2 + 40) = a2;
    *(_QWORD *)(BugCheckParameter2 + 48) = a3;
    if ( v9 )
    {
      v6 = *(_DWORD *)(v15 + 28);
      v49 = v6;
      v51 = *(_DWORD *)(v15 + 24);
    }
    v20 = (_QWORD *)(BugCheckParameter2 + 8);
    v7 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v34 = *(_QWORD *)v15;
      if ( !*(_QWORD *)v15 )
        *(_QWORD *)(v15 + 8) = v20;
      *v20 = v34;
      *(_QWORD *)v15 = v20;
    }
    else
    {
      *v20 = 0LL;
      **(_QWORD **)(v15 + 8) = v20;
      *(_QWORD *)(v15 + 8) = v20;
    }
    if ( v48 )
      *(_WORD *)(BugCheckParameter2 + 2) = Number;
  }
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v15 + 16, retaddr);
    v6 = v49;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 16), 0LL);
  }
  v21 = KeGetCurrentPrcb();
  v22 = v21->SchedulerAssist;
  if ( v22 )
  {
    if ( v21->NestingLevel <= 1u )
    {
      v41 = v22[5] - 1;
      v22[5] = v41;
      if ( !v41 )
      {
        KiRemoveSystemWorkPriorityKick(v21);
        v6 = v49;
      }
    }
  }
  if ( v7 )
  {
    if ( v9 )
      EtwTraceDpcEnqueueEvent(
        -203591049
      * (KiWaitNever ^ __ROR8__(
                         *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64(BugCheckParameter2 ^ KiWaitAlways),
                         KiWaitNever)),
        *(_QWORD *)(BugCheckParameter2 + 24),
        v51,
        v6,
        Number,
        *(_BYTE *)(BugCheckParameter2 + 1));
    if ( v15 == v13 + 11816 )
    {
      _m_prefetchw((const void *)(v13 + 11886));
      v35 = *(_WORD *)(v13 + 11886);
      do
      {
        v36 = v35;
        v35 = _InterlockedCompareExchange16((volatile signed __int16 *)(v13 + 11886), v35 | 2, v35);
      }
      while ( v36 != v35 );
      if ( (v35 & 0x2F) != 0 )
        goto LABEL_46;
      v24 = 4LL;
      goto LABEL_38;
    }
    if ( *(_DWORD *)(v15 + 24) < *(_DWORD *)(v13 + 11864) )
    {
      v23 = *(_BYTE *)(BugCheckParameter2 + 1);
      if ( CurrentPrcb == (struct _KPRCB *)v13 )
      {
        if ( !v23 && *(_DWORD *)(v13 + 11868) >= *(_DWORD *)(v13 + 11872) )
        {
LABEL_53:
          _m_prefetchw((const void *)(v13 + 11884));
          v30 = *(_WORD *)(v13 + 11884);
          do
          {
            v31 = v30;
            v30 = _InterlockedCompareExchange16((volatile signed __int16 *)(v13 + 11884), v30 | 0x10, v30);
          }
          while ( v31 != v30 );
          if ( (v30 & 0x2F) != 0 || (*(_QWORD *)(*(_QWORD *)(v13 + 192) + 64LL) & *(_QWORD *)(v13 + 200)) == 0LL )
            goto LABEL_46;
        }
      }
      else if ( (unsigned __int8)(v23 - 2) > 1u )
      {
        goto LABEL_53;
      }
    }
    v24 = 2LL;
LABEL_38:
    v25 = 47;
    if ( (struct _KPRCB *)v13 == CurrentPrcb )
    {
      v25 = 41;
      LOWORD(v24) = v24 | 0x20;
    }
    _m_prefetchw((const void *)(v13 + 11884));
    v26 = *(_WORD *)(v13 + 11884);
    do
    {
      v27 = v26;
      BYTE1(v27) = BYTE1(v24) | HIBYTE(v26);
      v28 = v26;
      v26 = _InterlockedCompareExchange16((volatile signed __int16 *)(v13 + 11884), v24 | v26, v26);
    }
    while ( v28 != v26 );
    if ( ((unsigned __int16)v25 & v26) == 0 )
    {
      if ( (struct _KPRCB *)v13 == CurrentPrcb )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v27) = 2;
          HalRequestSoftwareInterrupt(v27);
        }
      }
      else if ( *(_QWORD *)(v13 + 8) != *(_QWORD *)(v13 + 24) || *(_BYTE *)(v13 + 7) )
      {
        if ( *(_QWORD *)(v13 + 25016) )
        {
          LOBYTE(v24) = 1;
          KiSetVpThreadSystemWork(v13, v24);
        }
        v32 = KiVpThreadSystemWorkPriority;
        if ( (KiVelocityFlags & 2) != 0
          && *(_QWORD *)(v13 + 25016)
          && CurrentPrcb->SchedulerAssist
          && KiVpThreadSystemWorkPriority >= 8 )
        {
          LOBYTE(v24) = 1;
          v42 = KiSetVpThreadSystemWork(CurrentPrcb, v24);
          v43 = **(_DWORD **)(v13 + 25016);
          if ( (v43 & 0x40000) != 0 && (unsigned __int8)v43 < v32 )
          {
            v44 = HvlpVirtualProcessorsIdentityMapped == 0;
            v45 = CurrentPrcb->SchedulerAssist;
            v45[3] = 2;
            v46 = *(unsigned int *)(v13 + 36);
            if ( v44 )
              LODWORD(v46) = (unsigned __int8)byte_140546541[2 * (unsigned int)v46] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v46] << 6);
            v45[2] = v46;
            v24 = 0LL;
            __writemsr(0x400000C2u, (unsigned int)v46);
          }
          if ( v42 )
            KiSetVpThreadSystemWork(CurrentPrcb, 0LL);
        }
        v33 = KeGetCurrentPrcb();
        LOBYTE(v24) = 2;
        ++v33->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(Number, v24);
      }
    }
  }
LABEL_46:
  if ( v12 )
    KiSetVpThreadSystemWork(CurrentPrcb, 0LL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v52 < 2u )
  {
    v47 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v47);
  }
  __writecr8(v52);
  return v7;
}
