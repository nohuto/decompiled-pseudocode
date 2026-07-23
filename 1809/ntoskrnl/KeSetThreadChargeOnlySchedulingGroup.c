/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x1400D2FF8
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KPRCB *v8; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // rcx
  int v18; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x200) == 0 )
  {
    if ( a2 && !*(_QWORD *)(a1 + 104) )
      goto LABEL_4;
    return 0;
  }
  if ( a2 )
    return 0;
LABEL_4:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
  _enable();
  v8 = KeGetCurrentPrcb();
  v18 = 0;
  while ( 1 )
  {
    SchedulerAssist = v8->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v14 = SchedulerAssist[5];
        SchedulerAssist[5] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      break;
    v13 = v8->SchedulerAssist;
    if ( v13 )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v15 = v13[5] - 1;
        v13[5] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    do
      KeYieldProcessorEx(&v18, v6, v7);
    while ( CurrentPrcb->PrcbLock );
  }
  if ( a2 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 9u);
    *(_QWORD *)(a1 + 104) = a2;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 9u);
  }
  _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  v10 = KeGetCurrentPrcb();
  v11 = v10->SchedulerAssist;
  if ( v11 )
  {
    if ( v10->NestingLevel <= 1u )
    {
      v16 = v11[5] - 1;
      v11[5] = v16;
      if ( !v16 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  __writecr8(0LL);
  return 1;
}
