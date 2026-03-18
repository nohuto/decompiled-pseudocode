/*
 * XREFs of KeRemoveQueueApc @ 0x140131FF4
 * Callers:
 *     ExpCancelTimer @ 0x140008730 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x1400FD4E4 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpQueueStackWalkApc @ 0x14032C950 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140331C98 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1403349B8 (EtwpCovSampCaptureCancelApcs.c)
 *     CmNotifyRunDown @ 0x14060F400 (CmNotifyRunDown.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveQueueApc @ 0x140132098 (KiRemoveQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeRemoveQueueApc(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  char v6; // bl
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  struct _KPRCB *v11; // rcx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = SchedulerAssist[5];
        SchedulerAssist[5] = v8 + 1;
        if ( v8 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v1 + 64), 0LL) )
      break;
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v9[5] - 1;
        v9[5] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(v1 + 64) );
  }
  v6 = KiRemoveQueueApc(a1);
  KiReleaseThreadLockSafe(v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v11);
  }
  __writecr8(CurrentIrql);
  return v6;
}
