/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x1401396E0
 * Callers:
 *     KiTimer2Expiration @ 0x1400BFE90 (KiTimer2Expiration.c)
 *     KiCallInterruptServiceRoutine @ 0x1400FDA00 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 *     KeRemoveQueueDpcEx @ 0x140108E40 (KeRemoveQueueDpcEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x1402B2A8C (KiSetForceIdleState.c)
 */

void KiCheckAndRearmForceIdle()
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v2; // rcx
  _DWORD *v3; // rdx
  int v4; // eax
  _DWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  int v11; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  if ( KiForceIdleDisabled )
    return;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v4 = SchedulerAssist[5];
        SchedulerAssist[5] = v4 + 1;
        if ( v4 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    v5 = CurrentPrcb->SchedulerAssist;
    if ( v5 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v6 = v5[5] - 1;
        v5[5] = v6;
        if ( !v6 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v11);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleState == 1 )
  {
    KeRemoveQueueDpcEx((__int64)&KiForceIdleStartDpc, 0);
    KiSetForceIdleState(2LL, v7, v8, v9);
  }
  else if ( KiForceIdleState != 2 )
  {
    goto LABEL_7;
  }
  KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
                       + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
LABEL_7:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v2 = KeGetCurrentPrcb();
  v3 = v2->SchedulerAssist;
  if ( v3 && v2->NestingLevel <= 1u )
  {
    v10 = v3[5] - 1;
    v3[5] = v10;
    if ( !v10 )
      KiRemoveSystemWorkPriorityKick(v2);
  }
  _enable();
}
