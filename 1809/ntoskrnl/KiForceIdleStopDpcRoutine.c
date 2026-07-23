/*
 * XREFs of KiForceIdleStopDpcRoutine @ 0x14029B400
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14029B4F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiSetForceIdleState @ 0x14029B7A4 (KiSetForceIdleState.c)
 */

void __fastcall KiForceIdleStopDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v14; // eax
  int v15[6]; // [rsp+20h] [rbp-18h] BYREF

  KiForceIdleUpdateSchedulerParkState(0LL, DeferredContext, SystemArgument1, SystemArgument2, v15[0]);
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v15[0] = 0;
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
      KeYieldProcessorEx(v15, v4, v5);
    while ( KiForceIdleLock );
  }
  KiForceIdleWatchdogResetCount = 0;
  KiForceIdleActiveLastStartTime = 0LL;
  KiSetForceIdleState(KiForceIdleStartTime != 0 ? 2 : 0, v4, v5, v6);
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v12 = KeGetCurrentPrcb();
  v13 = v12->SchedulerAssist;
  if ( v13 )
  {
    if ( v12->NestingLevel <= 1u )
    {
      v14 = v13[5] - 1;
      v13[5] = v14;
      if ( !v14 )
        KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
  }
  _enable();
}
