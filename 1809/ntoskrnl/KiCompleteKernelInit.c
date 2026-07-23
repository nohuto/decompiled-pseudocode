/*
 * XREFs of KiCompleteKernelInit @ 0x140572B50
 * Callers:
 *     KiInitializeKernel @ 0x140572310 (KiInitializeKernel.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiSetProcessorIdle @ 0x1400D73C4 (KiSetProcessorIdle.c)
 *     KeInitializeTimer2 @ 0x1400FD550 (KeInitializeTimer2.c)
 *     KeAttachProcess @ 0x14012F630 (KeAttachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCreateCpuSetForProcessor @ 0x140572D00 (KiCreateCpuSetForProcessor.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  bool v13; // zf
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 )
  {
    *(_DWORD *)(a1 + 11864) = KiMaximumDpcQueueDepth;
    *(_DWORD *)(a1 + 11872) = KiMinimumDpcRate;
    *(_DWORD *)(a1 + 23444) = KiAdjustDpcThreshold;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  _enable();
  KeAttachProcess(PsInitialSystemProcess);
  if ( !a3 )
  {
    qword_140423078 = 0LL;
    qword_140423070 = (__int64)&qword_140423068;
    qword_140423068 = (__int64)&qword_140423068;
    KeInitializeTimer2((__int64)&KiForegroundState);
    KeInitializeDpc((PRKDPC)&stru_140422FE8, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc(&stru_140423028, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
  }
  v10 = 0;
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 80LL), *(unsigned __int8 *)(a1 + 209));
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 88LL), *(unsigned __int8 *)(a1 + 209));
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = SchedulerAssist[5];
        SchedulerAssist[5] = v17 + 1;
        if ( v17 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v18[5] - 1;
        v18[5] = v19;
        if ( !v19 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v21, v7, v8);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v13 = *(_QWORD *)(a1 + 16) == 0LL;
  *(_BYTE *)(a1 + 35) = 1;
  if ( v13 )
  {
    v10 = 1;
    KiSetProcessorIdle(a1, 1, 1);
  }
  LOBYTE(v9) = v10;
  KiUpdateThreadPriority(a1, a2, 0LL, v9);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v20 = v15[5] - 1;
      v15[5] = v20;
      if ( !v20 )
        KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
  }
  return KiCreateCpuSetForProcessor(a1);
}
