/*
 * XREFs of KeRemoveQueueApc @ 0x14012F428
 * Callers:
 *     ExpCancelTimer @ 0x14001D270 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140132A60 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpQueueStackWalkApc @ 0x14030F450 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140314058 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140316734 (EtwpCovSampCaptureCancelApcs.c)
 *     CmNotifyRunDown @ 0x1405FA17C (CmNotifyRunDown.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveQueueApc @ 0x14012F4CC (KiRemoveQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeRemoveQueueApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  char v8; // bl
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  struct _KPRCB *v13; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[5];
        SchedulerAssist[5] = v10 + 1;
        if ( v10 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
      break;
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v11[5] - 1;
        v11[5] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v14, a2, a3);
    while ( *(_QWORD *)(v4 + 64) );
  }
  v8 = KiRemoveQueueApc(a1);
  KiReleaseThreadLockSafe(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v13);
  }
  __writecr8(CurrentIrql);
  return v8;
}
