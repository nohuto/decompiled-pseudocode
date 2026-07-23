/*
 * XREFs of PsImpersonateContainerOfThread @ 0x14005AE90
 * Callers:
 *     IopProcessWorkItem @ 0x140006640 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14084B180 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     ObpIncrPointerCount @ 0x14005B360 (ObpIncrPointerCount.c)
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400BC5E0 (ExpAcquireSpinLockExclusive.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400D2FF8 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x140297E80 (KeCheckAndApplyBamQos.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

BOOLEAN __fastcall PsImpersonateContainerOfThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // bp
  int v4; // edi
  unsigned __int8 v5; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  struct _KPRCB *v11; // r14
  _QWORD *v12; // rdi
  _KTHREAD *v13; // r13
  struct _KPRCB *v14; // r8
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  REGHANDLE v18; // rbx
  BOOLEAN result; // al
  __int64 v20; // rdx
  struct _KPRCB *v21; // rdi
  _DWORD *v22; // rcx
  _KTHREAD *NextThread; // rdi
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  _QWORD *v33; // rdx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  struct _KPRCB *v37; // rcx
  __int16 v38; // di
  unsigned int v39; // edx
  unsigned int v40; // eax
  bool v41; // di
  signed __int32 v42; // ett
  unsigned int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  struct _KPRCB *v46; // rcx
  int v47; // [rsp+40h] [rbp-88h] BYREF
  int v48; // [rsp+44h] [rbp-84h] BYREF
  int v49; // [rsp+48h] [rbp-80h] BYREF
  int v50; // [rsp+4Ch] [rbp-7Ch] BYREF
  _QWORD *v51; // [rsp+50h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-68h] BYREF
  int *v53; // [rsp+70h] [rbp-58h]
  __int64 v54; // [rsp+78h] [rbp-50h]
  int v55; // [rsp+C0h] [rbp-8h]
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
  v51 = 0LL;
  v5 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v5 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v47 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v29 = SchedulerAssist[5];
      SchedulerAssist[5] = v29 + 1;
      if ( v29 == -1 )
LABEL_62:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v27 = CurrentPrcb->SchedulerAssist;
    if ( v27 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = v27[5] - 1;
        v27[5] = v30;
        if ( !v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v47);
    while ( CurrentThread->ThreadLock );
    v28 = CurrentPrcb->SchedulerAssist;
    if ( v28 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v31 = v28[5];
        v28[5] = v31 + 1;
        if ( v31 == -1 )
          goto LABEL_62;
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
    KiSetPriorityThread(CurrentThread, &v51);
  CurrentThread->ThreadLock = 0LL;
  v9 = KeGetCurrentPrcb();
  v10 = v9->SchedulerAssist;
  if ( v10 )
  {
    if ( v9->NestingLevel <= 1u )
    {
      v32 = v10[5] - 1;
      v10[5] = v32;
      if ( !v32 )
        KiRemoveSystemWorkPriorityKick(v9);
    }
  }
  v11 = KeGetCurrentPrcb();
  v12 = v51;
  while ( v12 )
  {
    v33 = v12 - 27;
    v12 = (_QWORD *)*v12;
    KiDeferredReadyThread(v11, v33);
  }
  if ( v5 < 2u )
  {
    v13 = v11->CurrentThread;
    if ( v11->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v11->CurrentThread, 0);
      v21 = KeGetCurrentPrcb();
      v48 = 0;
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v34 = v22[5];
          v22[5] = v34 + 1;
          if ( v34 == -1 )
LABEL_77:
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v11->PrcbLock, 0LL) )
      {
        v25 = v21->SchedulerAssist;
        if ( v25 )
        {
          if ( v21->NestingLevel <= 1u )
          {
            v35 = v25[5] - 1;
            v25[5] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(v21);
          }
        }
        do
          KeYieldProcessorEx(&v48);
        while ( v11->PrcbLock );
        v26 = v21->SchedulerAssist;
        if ( v26 )
        {
          if ( v21->NestingLevel <= 1u )
          {
            v36 = v26[5];
            v26[5] = v36 + 1;
            if ( v36 == -1 )
              goto LABEL_77;
          }
        }
      }
      NextThread = v11->NextThread;
      v11->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(v11, v13, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(v11, NextThread, 0LL, 2LL);
      v13->WaitReason = 32;
      v13->WaitIrql = v5;
      KiQueueReadyThread(v11, v13);
      if ( !(unsigned __int8)KiSwapContext(v13, NextThread, v5) )
        goto LABEL_19;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        goto LABEL_41;
    }
    else
    {
      if ( (v13->MiscFlags & 0x40) == 0 )
        goto LABEL_19;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      {
LABEL_41:
        __writecr8(1uLL);
        v13->MiscFlags &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_19:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v37);
        }
        __writecr8(v5);
        goto LABEL_21;
      }
    }
    v24 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v24);
    goto LABEL_41;
  }
  if ( v11->NextThread && !v11->DpcRoutineActive )
    KiRequestSoftwareInterrupt(v11, 2);
LABEL_21:
  v14 = KeGetCurrentPrcb();
  if ( *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) )
  {
    v38 = v55;
    _disable();
    v39 = *(_DWORD *)(a1 + 120) & 3;
    v40 = *((_DWORD *)&CurrentThread->0 + 1) & 3;
    v41 = (v38 & 0x200) != 0;
    if ( v39 != v40 && (v39 == 3 || v40 == 3 || v39 < v40) )
    {
      do
        v42 = *(&CurrentThread->MiscFlags + 1);
      while ( v42 != _InterlockedCompareExchange(
                       (volatile signed __int32 *)&CurrentThread->116 + 1,
                       v39 | v42 & 0xFFFFFFFC,
                       v42) );
      v43 = v14->PrcbFlags.PrcbFlags & 3;
      v44 = *((_DWORD *)&CurrentThread->0 + 1) & 3;
      if ( v44 != v43 && (v44 == 3 || v43 == 3 || v44 < v43) )
        KeCheckAndApplyBamQos(v14, CurrentThread);
    }
    if ( v41 )
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
      v45 = v16[5] - 1;
      v16[5] = v45;
      if ( !v45 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v46 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v46);
  }
  __writecr8(CurrentIrql);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 944LL);
  if ( v17 )
  {
    v20 = *(_QWORD *)(v17 + 1016);
    if ( v20 )
      KeSetThreadChargeOnlySchedulingGroup(CurrentThread, v20, v14);
  }
  v18 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    v49 = 0;
    UserData.Ptr = (ULONGLONG)&v49;
    v50 = *(_DWORD *)(a1 + 1600);
    *(_QWORD *)&UserData.Size = 4LL;
    v53 = &v50;
    v54 = 4LL;
    return EtwWriteEx(v18, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
