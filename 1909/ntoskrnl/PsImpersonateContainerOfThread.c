/*
 * XREFs of PsImpersonateContainerOfThread @ 0x140047240
 * Callers:
 *     IopProcessWorkItem @ 0x140013BB0 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140884C00 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F8C0 (KiSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140013E40 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     PspRevertContainerImpersonation @ 0x140036C00 (PspRevertContainerImpersonation.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     ObpIncrPointerCount @ 0x140047740 (ObpIncrPointerCount.c)
 *     ExpAcquireSpinLockExclusive @ 0x140047890 (ExpAcquireSpinLockExclusive.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x1402AE8A0 (KeCheckAndApplyBamQos.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

BOOLEAN __fastcall PsImpersonateContainerOfThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r14
  int v4; // edi
  unsigned __int8 v5; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  struct _KPRCB *v11; // rbp
  _QWORD *v12; // rdi
  __int64 v13; // rdi
  struct _KPRCB *v14; // r8
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  REGHANDLE v18; // rbx
  BOOLEAN result; // al
  __int64 v20; // rdx
  struct _KPRCB *v21; // r13
  _DWORD *v22; // rcx
  _KTHREAD *NextThread; // r13
  __int64 v24; // r8
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  _QWORD *v34; // rdx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  struct _KPRCB *v38; // rcx
  __int16 v39; // di
  unsigned int v40; // edx
  unsigned int v41; // eax
  bool v42; // di
  signed __int32 v43; // ett
  unsigned int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  struct _KPRCB *v47; // rcx
  int v48; // [rsp+40h] [rbp-88h] BYREF
  int v49; // [rsp+44h] [rbp-84h] BYREF
  int v50; // [rsp+48h] [rbp-80h] BYREF
  int v51; // [rsp+4Ch] [rbp-7Ch] BYREF
  _QWORD *v52; // [rsp+50h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-68h] BYREF
  int *v54; // [rsp+70h] [rbp-58h]
  __int64 v55; // [rsp+78h] [rbp-50h]
  int v56; // [rsp+C0h] [rbp-8h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  if ( ObpTraceFlags )
    ObpPushStackInfo(a1 - 48);
  ObpIncrPointerCount(a1 - 48);
  CurrentThread = KeGetCurrentThread();
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, CurrentIrql);
  CurrentThread[1].WaitBlock[1].Thread = (struct _KTHREAD *)a1;
  v4 = *(char *)(a1 + 195);
  if ( v4 > 15 )
    LOBYTE(v4) = 15;
  v52 = 0LL;
  v5 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v5 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v48 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v30 = SchedulerAssist[5];
      SchedulerAssist[5] = v30 + 1;
      if ( v30 == -1 )
LABEL_65:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v28 = CurrentPrcb->SchedulerAssist;
    if ( v28 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v31 = v28[5] - 1;
        v28[5] = v31;
        if ( !v31 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v48);
    while ( CurrentThread->ThreadLock );
    v29 = CurrentPrcb->SchedulerAssist;
    if ( v29 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v32 = v29[5];
        v29[5] = v32 + 1;
        if ( v32 == -1 )
          goto LABEL_65;
      }
    }
  }
  CurrentThread->SystemPriority = v4;
  v8 = CurrentThread->PriorityFloorCounts[(char)v4];
  if ( v8 == 0xFF )
    KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)v4, 1uLL, 0LL);
  CurrentThread->PriorityFloorCounts[(char)v4] = v8 + 1;
  CurrentThread->PriorityFloorSummary |= 1 << v4;
  if ( CurrentThread->Priority < (char)v4 )
    KiSetPriorityThread(CurrentThread, (__int64 *)&v52, v4);
  CurrentThread->ThreadLock = 0LL;
  v9 = KeGetCurrentPrcb();
  v10 = v9->SchedulerAssist;
  if ( v10 )
  {
    if ( v9->NestingLevel <= 1u )
    {
      v33 = v10[5] - 1;
      v10[5] = v33;
      if ( !v33 )
        KiRemoveSystemWorkPriorityKick(v9);
    }
  }
  v11 = KeGetCurrentPrcb();
  v12 = v52;
  while ( v12 )
  {
    v34 = v12 - 27;
    v12 = (_QWORD *)*v12;
    KiDeferredReadyThread(v11, v34);
  }
  if ( v5 < 2u )
  {
    v13 = (__int64)v11->CurrentThread;
    if ( v11->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v11->CurrentThread, 0);
      v21 = KeGetCurrentPrcb();
      v49 = 0;
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v35 = v22[5];
          v22[5] = v35 + 1;
          if ( v35 == -1 )
LABEL_80:
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v11->PrcbLock, 0LL) )
      {
        v26 = v21->SchedulerAssist;
        if ( v26 )
        {
          if ( v21->NestingLevel <= 1u )
          {
            v36 = v26[5] - 1;
            v26[5] = v36;
            if ( !v36 )
              KiRemoveSystemWorkPriorityKick(v21);
          }
        }
        do
          KeYieldProcessorEx(&v49);
        while ( v11->PrcbLock );
        v27 = v21->SchedulerAssist;
        if ( v27 )
        {
          if ( v21->NestingLevel <= 1u )
          {
            v37 = v27[5];
            v27[5] = v37 + 1;
            if ( v37 == -1 )
              goto LABEL_80;
          }
        }
      }
      NextThread = v11->NextThread;
      v11->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v11, v13, 0LL);
      _enable();
      v11->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v24 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v24 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v13 + 643) = 32;
      *(_BYTE *)(v13 + 390) = v5;
      KiQueueReadyThread((__int64)v11, v13, v24);
      if ( !(unsigned __int8)KiSwapContext(v13, NextThread, v5) )
        goto LABEL_19;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        goto LABEL_42;
    }
    else
    {
      if ( (*(_DWORD *)(v13 + 116) & 0x40) == 0 )
        goto LABEL_19;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      {
LABEL_42:
        __writecr8(1uLL);
        *(_DWORD *)(v13 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_19:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v38);
        }
        __writecr8(v5);
        goto LABEL_21;
      }
    }
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
    goto LABEL_42;
  }
  if ( v11->NextThread && !v11->DpcRoutineActive )
    KiRequestSoftwareInterrupt(v11, 2LL);
LABEL_21:
  v14 = KeGetCurrentPrcb();
  if ( KeHeteroSystemQos )
  {
    v39 = v56;
    _disable();
    v40 = *(_DWORD *)(a1 + 120) & 3;
    v41 = *((_DWORD *)&CurrentThread->0 + 1) & 3;
    v42 = (v39 & 0x200) != 0;
    if ( v40 != v41 && (v40 == 3 || v41 == 3 || v40 < v41) )
    {
      do
        v43 = *(&CurrentThread->MiscFlags + 1);
      while ( v43 != _InterlockedCompareExchange(
                       (volatile signed __int32 *)&CurrentThread->116 + 1,
                       v40 | v43 & 0xFFFFFFFC,
                       v43) );
      v44 = v14->PrcbFlags.PrcbFlags & 3;
      v45 = *((_DWORD *)&CurrentThread->0 + 1) & 3;
      if ( v45 != v44 && (v45 == 3 || v44 == 3 || v45 < v44) )
        KeCheckAndApplyBamQos(v14, CurrentThread);
    }
    if ( v42 )
      _enable();
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  else
    PspThreadWorkOnBehalfLock = 0;
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v46 = v16[5] - 1;
      v16[5] = v46;
      if ( !v46 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v47 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v47);
  }
  __writecr8(CurrentIrql);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 952LL);
  if ( v17 )
  {
    v20 = *(_QWORD *)(v17 + 1016);
    if ( v20 )
      KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v20);
  }
  v18 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    v50 = 0;
    UserData.Ptr = (ULONGLONG)&v50;
    v51 = *(_DWORD *)(a1 + 1616);
    *(_QWORD *)&UserData.Size = 4LL;
    v54 = &v51;
    v55 = 4LL;
    return EtwWriteEx(v18, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
