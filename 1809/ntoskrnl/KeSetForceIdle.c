/*
 * XREFs of KeSetForceIdle @ 0x14029AD68
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x140004E80 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x14008BAA0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x14029B4B4 (KiSetForceIdleState.c)
 */

void __fastcall KeSetForceIdle(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v5; // eax
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  int v15; // eax
  int v16; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER v17; // [rsp+38h] [rbp+10h] BYREF

  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v5 = SchedulerAssist[5];
        SchedulerAssist[5] = v5 + 1;
        if ( v5 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    v6 = CurrentPrcb->SchedulerAssist;
    if ( v6 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v7 = v6[5] - 1;
        v6[5] = v7;
        if ( !v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v16, a2, a3);
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled )
  {
    v8 = KiForceIdleState;
    v10 = RtlGetInterruptTimePrecise(&v17) + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( !v8 )
    {
      KiSetForceIdleState(2LL, v9, v11, v12);
LABEL_18:
      KiForceIdleStartTime = v10;
      goto LABEL_19;
    }
    if ( v8 == 3 )
      goto LABEL_18;
  }
LABEL_19:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v13 = KeGetCurrentPrcb();
  v14 = v13->SchedulerAssist;
  if ( v14 )
  {
    if ( v13->NestingLevel <= 1u )
    {
      v15 = v14[5] - 1;
      v14[5] = v15;
      if ( !v15 )
        KiRemoveSystemWorkPriorityKick((__int64)v13);
    }
  }
  _enable();
}
