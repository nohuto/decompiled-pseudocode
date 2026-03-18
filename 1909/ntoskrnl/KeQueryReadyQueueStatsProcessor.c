/*
 * XREFs of KeQueryReadyQueueStatsProcessor @ 0x1401BEE54
 * Callers:
 *     KiCanSelectSoftParkedProcessor @ 0x1401BF3BC (KiCanSelectSoftParkedProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiReleasePrcbLockSafe @ 0x14013DB90 (KiReleasePrcbLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryReadyQueueStatsProcessor(__int64 a1, _DWORD *a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v10; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  int v17; // eax
  struct _KPRCB *v18; // rbx
  _DWORD *v19; // rcx
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  int v24; // [rsp+50h] [rbp+8h] BYREF
  int v25; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a1 + 24896) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = 0;
    v10 = *(_QWORD *)(a1 + 24904);
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = SchedulerAssist[5];
          SchedulerAssist[5] = v12 + 1;
          if ( v12 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        break;
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v13[5] - 1;
          v13[5] = v14;
          if ( !v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v24);
      while ( *(_QWORD *)v10 );
    }
    *a4 = *(_DWORD *)(v10 + 608);
    *a5 = *(_QWORD *)(v10 + 616);
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v17 = v16[5] - 1;
        v16[5] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
  }
  v18 = KeGetCurrentPrcb();
  v25 = 0;
  while ( 1 )
  {
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v20 = v19[5];
        v19[5] = v20 + 1;
        if ( v20 == -1 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v21 = v18->SchedulerAssist;
    if ( v21 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v22 = v21[5] - 1;
        v21[5] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    do
      KeYieldProcessorEx(&v25);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *a2 = *(_DWORD *)(a1 + 23476);
  *a3 = *(_QWORD *)(a1 + 23480);
  return KiReleasePrcbLockSafe(a1);
}
