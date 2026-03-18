/*
 * XREFs of KeSetForceIdle @ 0x1402B205C
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x1400F0750 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x1402B27EC (KiSetForceIdleState.c)
 */

void KeSetForceIdle()
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v2; // eax
  _DWORD *v3; // rcx
  int v4; // eax
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  int v12; // eax
  int v13; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER v14; // [rsp+38h] [rbp+10h] BYREF

  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v2 = SchedulerAssist[5];
        SchedulerAssist[5] = v2 + 1;
        if ( v2 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    v3 = CurrentPrcb->SchedulerAssist;
    if ( v3 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v4 = v3[5] - 1;
        v3[5] = v4;
        if ( !v4 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v13);
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled )
  {
    v5 = KiForceIdleState;
    v7 = RtlGetInterruptTimePrecise(&v14) + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( !v5 )
    {
      KiSetForceIdleState(2LL, v6, v8, v9);
LABEL_18:
      KiForceIdleStartTime = v7;
      goto LABEL_19;
    }
    if ( v5 == 3 )
      goto LABEL_18;
  }
LABEL_19:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v10 = KeGetCurrentPrcb();
  v11 = v10->SchedulerAssist;
  if ( v11 )
  {
    if ( v10->NestingLevel <= 1u )
    {
      v12 = v11[5] - 1;
      v11[5] = v12;
      if ( !v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v10);
    }
  }
  _enable();
}
