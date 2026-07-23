/*
 * XREFs of PspRevertContainerImpersonation @ 0x14005B390
 * Callers:
 *     IopProcessWorkItem @ 0x140006640 (IopProcessWorkItem.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     NtRevertContainerImpersonation @ 0x1402EA230 (NtRevertContainerImpersonation.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 * Callees:
 *     KeClearSystemPriority @ 0x14005B570 (KeClearSystemPriority.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14005B870 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400BC5E0 (ExpAcquireSpinLockExclusive.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(ULONG_PTR BugCheckParameter1)
{
  void *v1; // rdi
  unsigned __int8 v4; // si
  struct _KPRCB *v5; // rcx
  _DWORD *v6; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v9; // rbp
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct _KPRCB *v19; // rcx
  int v20; // eax
  struct _KPRCB *v21; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v23; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(void **)(BugCheckParameter1 + 1912);
  if ( !v1 )
    return 3221225473LL;
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x200) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread(CurrentPrcb, BugCheckParameter1, 0LL);
    _enable();
    v9 = KeGetCurrentPrcb();
    v23 = 0;
    SchedulerAssist = v9->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v9->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[5];
        SchedulerAssist[5] = v15 + 1;
        if ( v15 == -1 )
LABEL_27:
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v13 = v9->SchedulerAssist;
      if ( v13 )
      {
        if ( v9->NestingLevel <= 1u )
        {
          v16 = v13[5] - 1;
          v13[5] = v16;
          if ( !v16 )
            KiRemoveSystemWorkPriorityKick(v9);
        }
      }
      do
        KeYieldProcessorEx(&v23);
      while ( CurrentPrcb->PrcbLock );
      v14 = v9->SchedulerAssist;
      if ( v14 )
      {
        if ( v9->NestingLevel <= 1u )
        {
          v17 = v14[5];
          v14[5] = v17 + 1;
          if ( v17 == -1 )
            goto LABEL_27;
        }
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x12u);
    *(_QWORD *)(BugCheckParameter1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 9u);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v11 = KeGetCurrentPrcb();
    v12 = v11->SchedulerAssist;
    if ( v12 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v18 = v12[5] - 1;
        v12[5] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    __writecr8(0LL);
  }
  v4 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v4 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, v4);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, v4);
  *(_QWORD *)(BugCheckParameter1 + 1912) = 0LL;
  KeClearSystemPriority(BugCheckParameter1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  else
    PspThreadWorkOnBehalfLock = 0;
  v5 = KeGetCurrentPrcb();
  v6 = v5->SchedulerAssist;
  if ( v6 )
  {
    if ( v5->NestingLevel <= 1u )
    {
      v20 = v6[5] - 1;
      v6[5] = v20;
      if ( !v20 )
        KiRemoveSystemWorkPriorityKick(v5);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
  __writecr8(v4);
  EtwTraceThreadWorkOnBehalfUpdate(v1, 0LL);
  ObDereferenceObjectDeferDeleteWithTag(v1, 0x746E6F43u);
  return 0LL;
}
