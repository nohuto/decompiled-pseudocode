/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x140013C10
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1400471A0 (PsImpersonateContainerOfThread.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x140012CB0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rdx
  struct _KPRCB *v7; // rbp
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct _KPRCB *v18; // rcx
  int v19; // [rsp+40h] [rbp+8h] BYREF

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
  KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
  KiStartThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0);
  _enable();
  v7 = KeGetCurrentPrcb();
  v19 = 0;
  SchedulerAssist = v7->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v7->NestingLevel <= 1u )
    {
      v14 = SchedulerAssist[5];
      SchedulerAssist[5] = v14 + 1;
      if ( v14 == -1 )
LABEL_24:
        KiRemoveSystemWorkPriorityKick(v7, v6);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    v12 = v7->SchedulerAssist;
    if ( v12 )
    {
      if ( v7->NestingLevel <= 1u )
      {
        v15 = v12[5] - 1;
        v12[5] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(v7, v6);
      }
    }
    do
      KeYieldProcessorEx(&v19);
    while ( CurrentPrcb->PrcbLock );
    v13 = v7->SchedulerAssist;
    if ( v13 )
    {
      if ( v7->NestingLevel <= 1u )
      {
        v16 = v13[5];
        v13[5] = v16 + 1;
        if ( v16 == -1 )
          goto LABEL_24;
      }
    }
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
  v9 = KeGetCurrentPrcb();
  v10 = v9->SchedulerAssist;
  if ( v10 )
  {
    if ( v9->NestingLevel <= 1u )
    {
      v17 = v10[5] - 1;
      v10[5] = v17;
      if ( !v17 )
        KiRemoveSystemWorkPriorityKick(v9, v10);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18, v10);
  }
  __writecr8(0LL);
  return 1;
}
