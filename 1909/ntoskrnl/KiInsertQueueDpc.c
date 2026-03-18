/*
 * XREFs of KiInsertQueueDpc @ 0x14009C970
 * Callers:
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140035C00 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PoExecutePerfCheck @ 0x140036090 (PoExecutePerfCheck.c)
 *     PpmCheckContinueExecution @ 0x14009C880 (PpmCheckContinueExecution.c)
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 *     KiTimerWaitTest @ 0x1400A35B0 (KiTimerWaitTest.c)
 *     KiGenericCallDpcWorker @ 0x140116160 (KiGenericCallDpcWorker.c)
 *     ObpDeferObjectDeletion @ 0x140128EA4 (ObpDeferObjectDeletion.c)
 *     KiForegroundTimerCallback @ 0x14012DE70 (KiForegroundTimerCallback.c)
 *     KiEntropyQueueDpc @ 0x140131990 (KiEntropyQueueDpc.c)
 *     ExpTimeRefreshCallback @ 0x140171DA0 (ExpTimeRefreshCallback.c)
 *     PpmPerfQueueAction @ 0x1401768EC (PpmPerfQueueAction.c)
 *     KeMaskInterrupt @ 0x14017C410 (KeMaskInterrupt.c)
 *     HvlSharedIsr @ 0x140284C80 (HvlSharedIsr.c)
 *     IoProcessPassiveInterrupts @ 0x14029E1E8 (IoProcessPassiveInterrupts.c)
 *     KiInsertSecondarySignalList @ 0x1402A9EBC (KiInsertSecondarySignalList.c)
 *     KeUpdatePendingQosRequest @ 0x1402AEC04 (KeUpdatePendingQosRequest.c)
 *     KeAbCrossThreadDelete @ 0x1402B0538 (KeAbCrossThreadDelete.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1402B2500 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiEpfCompletionIsr @ 0x1402B30A0 (KiEpfCompletionIsr.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x140300420 (PpmHeteroDispatchHgsInterrupt.c)
 *     ExpSvmFaultRoutine @ 0x14033DF50 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x140340EC0 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140340F80 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x140342140 (WheapWorkQueueAddItem.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008A00 (KxWaitForSpinLockAndAcquire.c)
 *     RtlBackoff @ 0x1400EFB70 (RtlBackoff.c)
 *     KiSetDpcRequestFlag @ 0x14012D204 (KiSetDpcRequestFlag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A75D8 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A76E8 (KiReleaseSpinLockInstrumented.c)
 *     KiSetVpThreadSystemWork @ 0x1402B04D0 (KiSetVpThreadSystemWork.c)
 *     EtwTraceDpcEnqueueEvent @ 0x14032D40C (EtwTraceDpcEnqueueEvent.c)
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
  __int64 CurrentIrql; // rcx
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
  __int16 v24; // r10
  __int16 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int16 v28; // tt
  unsigned __int8 v29; // bl
  int v31; // esi
  struct _KPRCB *v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rcx
  __int16 v35; // r10
  __int16 v36; // tt
  char v37; // al
  int v38; // eax
  int v39; // eax
  int v40; // eax
  char v41; // r8
  int v42; // ecx
  bool v43; // zf
  _DWORD *v44; // rdx
  __int64 v45; // rcx
  struct _KPRCB *v46; // rcx
  char v47; // [rsp+30h] [rbp-68h]
  int v48; // [rsp+34h] [rbp-64h]
  unsigned int Number; // [rsp+38h] [rbp-60h]
  int v50; // [rsp+3Ch] [rbp-5Ch]
  int v51; // [rsp+40h] [rbp-58h] BYREF
  __int64 v52; // [rsp+48h] [rbp-50h]
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
  v48 = 0;
  v50 = 0;
  v9 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v47 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v52 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  v54 = 0;
  if ( CurrentPrcb->SchedulerAssist )
  {
    LOBYTE(a2) = 1;
    v37 = KiSetVpThreadSystemWork(CurrentPrcb, a2);
    a3 = v56;
    v12 = v37;
    a2 = v55;
    a4 = v57;
    v6 = 0;
    v54 = v37;
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
      v47 = 1;
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
        v38 = SchedulerAssist[5];
        SchedulerAssist[5] = v38 + 1;
        if ( v38 == -1 )
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
      v34 = v16->SchedulerAssist;
      if ( v34 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v39 = v34[5] - 1;
          v34[5] = v39;
          if ( !v39 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v15 + 16), a2);
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
      v48 = v6;
      v50 = *(_DWORD *)(v15 + 24);
    }
    v20 = (_QWORD *)(BugCheckParameter2 + 8);
    v7 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v33 = *(_QWORD *)v15;
      if ( !*(_QWORD *)v15 )
        *(_QWORD *)(v15 + 8) = v20;
      *v20 = v33;
      *(_QWORD *)v15 = v20;
    }
    else
    {
      *v20 = 0LL;
      **(_QWORD **)(v15 + 8) = v20;
      *(_QWORD *)(v15 + 8) = v20;
    }
    if ( v47 )
      *(_WORD *)(BugCheckParameter2 + 2) = Number;
  }
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v15 + 16, retaddr);
    v6 = v48;
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
      v40 = v22[5] - 1;
      v22[5] = v40;
      if ( !v40 )
      {
        KiRemoveSystemWorkPriorityKick(v21);
        v6 = v48;
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
        v50,
        v6,
        Number,
        *(_BYTE *)(BugCheckParameter2 + 1));
    if ( v15 == v13 + 11816 )
    {
      if ( (KiSetDpcRequestFlag(v13 + 11886, 2LL) & 0x2F) != 0 )
        goto LABEL_45;
      v24 = 4;
      goto LABEL_38;
    }
    if ( *(_DWORD *)(v15 + 24) < *(_DWORD *)(v13 + 11864) )
    {
      v23 = *(_BYTE *)(BugCheckParameter2 + 1);
      if ( CurrentPrcb == (struct _KPRCB *)v13 )
      {
        if ( !v23 && *(_DWORD *)(v13 + 11868) >= *(_DWORD *)(v13 + 11872) )
        {
LABEL_63:
          if ( (KiSetDpcRequestFlag(v13 + 11884, 16LL) & 0x2F) != 0
            || (*(_QWORD *)(*(_QWORD *)(v13 + 192) + 64LL) & *(_QWORD *)(v13 + 200)) == 0LL )
          {
            goto LABEL_45;
          }
        }
      }
      else if ( (unsigned __int8)(v23 - 2) > 1u )
      {
        goto LABEL_63;
      }
    }
    v24 = 2;
LABEL_38:
    v25 = 47;
    if ( (struct _KPRCB *)v13 == CurrentPrcb )
    {
      v25 = 41;
      v24 |= 0x20u;
    }
    v51 = 0;
    _m_prefetchw((const void *)(v13 + 11884));
    v26 = *(unsigned __int16 *)(v13 + 11884);
    v27 = (unsigned __int16)v26;
    BYTE1(v27) = HIBYTE(v24) | BYTE1(v26);
    v28 = *(_WORD *)(v13 + 11884);
    if ( v28 != _InterlockedCompareExchange16((volatile signed __int16 *)(v13 + 11884), v24 | v26, v26) )
    {
      do
      {
        RtlBackoff(&v51);
        _m_prefetchw((const void *)(v13 + 11884));
        v26 = *(unsigned __int16 *)(v13 + 11884);
        v27 = (unsigned __int16)v26;
        BYTE1(v27) = HIBYTE(v35) | BYTE1(v26);
        v36 = *(_WORD *)(v13 + 11884);
      }
      while ( v36 != _InterlockedCompareExchange16((volatile signed __int16 *)(v13 + 11884), v35 | v26, v26) );
    }
    if ( ((unsigned __int16)v26 & (unsigned __int16)v25) == 0 )
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
          LOBYTE(v26) = 1;
          KiSetVpThreadSystemWork(v13, v26);
        }
        v31 = KiVpThreadSystemWorkPriority;
        if ( (KiVelocityFlags & 2) != 0
          && *(_QWORD *)(v13 + 25016)
          && CurrentPrcb->SchedulerAssist
          && KiVpThreadSystemWorkPriority >= 8 )
        {
          LOBYTE(v26) = 1;
          v41 = KiSetVpThreadSystemWork(CurrentPrcb, v26);
          v42 = **(_DWORD **)(v13 + 25016);
          if ( (v42 & 0x40000) != 0 && (unsigned __int8)v42 < v31 )
          {
            v43 = HvlpVirtualProcessorsIdentityMapped == 0;
            v44 = CurrentPrcb->SchedulerAssist;
            v44[3] = 2;
            v45 = *(unsigned int *)(v13 + 36);
            if ( v43 )
              LODWORD(v45) = (unsigned __int8)byte_1405766D1[2 * (unsigned int)v45] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v45] << 6);
            v44[2] = v45;
            v26 = 0LL;
            __writemsr(0x400000C2u, (unsigned int)v45);
          }
          if ( v41 )
            KiSetVpThreadSystemWork(CurrentPrcb, 0LL);
        }
        v32 = KeGetCurrentPrcb();
        LOBYTE(v26) = 2;
        ++v32->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(Number, v26);
      }
    }
  }
LABEL_45:
  if ( v12 )
    KiSetVpThreadSystemWork(CurrentPrcb, 0LL);
  v29 = v52;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v52 < 2u )
  {
    v46 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v46);
  }
  __writecr8(v29);
  return v7;
}
