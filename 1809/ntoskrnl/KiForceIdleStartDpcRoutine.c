/*
 * XREFs of KiForceIdleStartDpcRoutine @ 0x14029B2F0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14029B4F0 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiSetForceIdleState @ 0x14029B7A4 (KiSetForceIdleState.c)
 */

void __fastcall KiForceIdleStartDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  char v4; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v7; // eax
  _DWORD *v8; // rcx
  int v9; // eax
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  int v12; // eax
  int v13[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v13[0] = 0;
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
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
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
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(v13, DeferredContext, SystemArgument1);
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleState == 1 )
  {
    KiSetForceIdleState(4LL, DeferredContext, SystemArgument1, SystemArgument2);
    KiForceIdleActiveLastStartTime = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    v4 = 1;
  }
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
  if ( !v4 )
  {
    LOBYTE(v10) = 1;
    KiForceIdleUpdateSchedulerParkState(v10, v11, SystemArgument1, SystemArgument2, v13[0]);
  }
}
