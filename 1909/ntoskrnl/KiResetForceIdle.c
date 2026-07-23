/*
 * XREFs of KiResetForceIdle @ 0x1402B2674
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140033DF0 (KeResumeClockTimerFromIdle.c)
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     KiCallInterruptServiceRoutine @ 0x1400FFB90 (KiCallInterruptServiceRoutine.c)
 *     KeClearForceIdle @ 0x1402B1F30 (KeClearForceIdle.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x14009F0F8 (KeIsForceIdleEngaged.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x1402B27EC (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x1402FB34C (PoTraceForceIdleReset.c)
 */

char __fastcall KiResetForceIdle(unsigned int a1, char a2)
{
  bool v2; // di
  __int16 v5; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  __int16 v19; // [rsp+30h] [rbp-8h]
  int v20; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v5 = v19;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v2 = (v5 & 0x200) != 0;
    v20 = 0;
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
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
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
        KeYieldProcessorEx(&v20);
      while ( KiForceIdleLock );
    }
  }
  LOBYTE(v11) = KeIsForceIdleEngaged();
  if ( (_BYTE)v11 )
  {
    KiSetForceIdleState(3LL, v12, v13, v14);
    if ( a1 == 3 )
      v15 = 0LL;
    else
      v15 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
          + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiForceIdleStartTime = v15;
    if ( !KiForceIdleStopDpc.DpcData )
      KiForceIdleStopDpc.Number = KiClockTimerOwner + 1280;
    KeInsertQueueDpc(&KiForceIdleStopDpc, 0LL, 0LL);
    LOBYTE(v11) = PoTraceForceIdleReset(a1);
  }
  if ( !a2 )
  {
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v11 = v17[5] - 1;
        v17[5] = v11;
        if ( !v11 )
          LOBYTE(v11) = KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
    if ( v2 )
      _enable();
  }
  return v11;
}
