/*
 * XREFs of KeClearForceIdle @ 0x14029AF2C
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x140004DF8 (PopDeepSleepSetDisengageReason.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiResetForceIdle @ 0x14029B62C (KiResetForceIdle.c)
 *     KiSetForceIdleState @ 0x14029B7A4 (KiSetForceIdleState.c)
 */

char __fastcall KeClearForceIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  int v14; // [rsp+30h] [rbp+8h] BYREF

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
        v6 = SchedulerAssist[5];
        v7 = v6 == -1;
        v8 = v6 + 1;
        SchedulerAssist[5] = v8;
        if ( v7 )
          LOBYTE(v8) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
      break;
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v9[5] - 1;
        v9[5] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
    {
      KeYieldProcessorEx(&v14, a2, a3);
      LOBYTE(v8) = KiForceIdleLock;
    }
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled )
  {
    if ( KiForceIdleState == 1 )
    {
      KiSetForceIdleState(0LL, a2, a3, a4);
      LOBYTE(v8) = KeRemoveQueueDpcEx((int *)&KiForceIdleStartDpc, 0);
    }
    else if ( KiForceIdleState == 2 )
    {
      LOBYTE(v8) = KiSetForceIdleState(0LL, a2, a3, a4);
    }
    else
    {
      if ( KiForceIdleState != 3 )
      {
        if ( KiForceIdleState == 4 )
        {
          LOBYTE(a2) = 1;
          LOBYTE(v8) = KiResetForceIdle(3LL, a2);
        }
        goto LABEL_24;
      }
      LOBYTE(v8) = KiForceIdleStartTime;
      if ( !KiForceIdleStartTime )
        goto LABEL_24;
    }
    KiForceIdleStartTime = 0LL;
  }
LABEL_24:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v8 = v12[5] - 1;
      v12[5] = v8;
      if ( !v8 )
        LOBYTE(v8) = KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
  }
  _enable();
  return v8;
}
