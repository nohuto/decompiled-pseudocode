/*
 * XREFs of KiCheckAndRearmForceIdle @ 0x1400F99D8
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x1400162E0 (KiCallInterruptServiceRoutine.c)
 *     KiTimer2Expiration @ 0x1400FB470 (KiTimer2Expiration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x14008BA90 (RtlGetInterruptTimePrecise.c)
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x14029B7A4 (KiSetForceIdleState.c)
 */

void __fastcall KiCheckAndRearmForceIdle(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v5; // rcx
  _DWORD *v6; // rdx
  int v7; // eax
  _DWORD *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  if ( KiForceIdleDisabled )
    return;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v7 = SchedulerAssist[5];
        SchedulerAssist[5] = v7 + 1;
        if ( v7 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = v8[5] - 1;
        v8[5] = v9;
        if ( !v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v14, a2, a3);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleState == 1 )
  {
    KeRemoveQueueDpcEx(&KiForceIdleStartDpc, 0LL);
    KiSetForceIdleState(2LL, v10, v11, v12);
  }
  else if ( KiForceIdleState != 2 )
  {
    goto LABEL_7;
  }
  KiForceIdleStartTime = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
                       + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
LABEL_7:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v5 = KeGetCurrentPrcb();
  v6 = v5->SchedulerAssist;
  if ( v6 && v5->NestingLevel <= 1u )
  {
    v13 = v6[5] - 1;
    v6[5] = v13;
    if ( !v13 )
      KiRemoveSystemWorkPriorityKick(v5);
  }
  _enable();
}
