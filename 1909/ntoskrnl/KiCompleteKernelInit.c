/*
 * XREFs of KiCompleteKernelInit @ 0x1405A1A9C
 * Callers:
 *     KiInitializeKernel @ 0x1405A1220 (KiInitializeKernel.c)
 * Callees:
 *     KiUpdateThreadPriority @ 0x1400100B0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KeInitializeTimer2 @ 0x1400E8C90 (KeInitializeTimer2.c)
 *     KeAttachProcess @ 0x140130690 (KeAttachProcess.c)
 *     KiSetProcessorIdle @ 0x140135BFC (KiSetProcessorIdle.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCreateCpuSetForProcessor @ 0x1405A1C4C (KiCreateCpuSetForProcessor.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // cl
  char v7; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  bool v10; // zf
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+50h] [rbp+18h] BYREF

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
    qword_14044D958 = 0LL;
    qword_14044D950 = (__int64)&qword_14044D948;
    qword_14044D948 = (__int64)&qword_14044D948;
    KeInitializeTimer2((__int64)&KiForegroundState);
    KeInitializeDpc((PRKDPC)&stru_14044D8C8, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc(&stru_14044D908, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
  }
  v7 = 0;
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 80LL), *(unsigned __int8 *)(a1 + 209));
  _interlockedbittestandset64((volatile signed __int32 *)(*(_QWORD *)(a1 + 192) + 96LL), *(unsigned __int8 *)(a1 + 209));
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = SchedulerAssist[5];
        SchedulerAssist[5] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v15[5] - 1;
        v15[5] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v18);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v10 = *(_QWORD *)(a1 + 16) == 0LL;
  *(_BYTE *)(a1 + 35) = 1;
  if ( v10 )
  {
    v7 = 1;
    KiSetProcessorIdle(a1, 1, 1);
  }
  KiUpdateThreadPriority(a1, a2, 0LL, v7);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v17 = v12[5] - 1;
      v12[5] = v17;
      if ( !v17 )
        KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
  }
  return KiCreateCpuSetForProcessor(a1);
}
