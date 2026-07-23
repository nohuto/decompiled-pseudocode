/*
 * XREFs of KiResetForceIdle @ 0x14029B62C
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x1400162E0 (KiCallInterruptServiceRoutine.c)
 *     KeResumeClockTimerFromIdle @ 0x140060910 (KeResumeClockTimerFromIdle.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KeClearForceIdle @ 0x14029AF2C (KeClearForceIdle.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x14008BA90 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x1400FC49C (KeIsForceIdleEngaged.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetForceIdleState @ 0x14029B7A4 (KiSetForceIdleState.c)
 *     PoTraceForceIdleReset @ 0x1402DEB74 (PoTraceForceIdleReset.c)
 */

char __fastcall KiResetForceIdle(unsigned int a1, __int64 a2, __int64 a3)
{
  bool v3; // di
  char v4; // si
  __int16 v6; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  __int16 v20; // [rsp+30h] [rbp-8h]
  int v21; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !(_BYTE)a2 )
  {
    v6 = v20;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = (v6 & 0x200) != 0;
    v21 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v9 = SchedulerAssist[5];
          SchedulerAssist[5] = v9 + 1;
          if ( v9 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
        break;
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = v10[5] - 1;
          v10[5] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v21, a2, a3);
      while ( KiForceIdleLock );
    }
  }
  LOBYTE(v12) = KeIsForceIdleEngaged();
  if ( (_BYTE)v12 )
  {
    KiSetForceIdleState(3LL, v13, v14, v15);
    if ( a1 == 3 )
      v16 = 0LL;
    else
      v16 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec
          + *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiForceIdleStartTime = v16;
    if ( !KiForceIdleStopDpc.DpcData )
      KiForceIdleStopDpc.Number = KiClockTimerOwner + 1280;
    KeInsertQueueDpc(&KiForceIdleStopDpc, 0LL, 0LL);
    LOBYTE(v12) = PoTraceForceIdleReset(a1);
  }
  if ( !v4 )
  {
    _InterlockedAnd64(&KiForceIdleLock, 0LL);
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v12 = v18[5] - 1;
        v18[5] = v12;
        if ( !v12 )
          LOBYTE(v12) = KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
    if ( v3 )
      _enable();
  }
  return v12;
}
