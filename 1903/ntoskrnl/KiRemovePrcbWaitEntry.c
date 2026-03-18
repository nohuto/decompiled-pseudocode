/*
 * XREFs of KiRemovePrcbWaitEntry @ 0x14000D250
 * Callers:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiRemovePrcbWaitEntry(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  struct _KPRCB *v8; // rcx
  _DWORD *v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[89];
  if ( v2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = SchedulerAssist[5];
        SchedulerAssist[5] = v12 + 1;
        if ( v12 == -1 )
LABEL_16:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 22800), 0LL) )
    {
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = v10[5] - 1;
          v10[5] = v13;
          if ( !v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
        }
      }
      do
        KeYieldProcessorEx(&v16);
      while ( *(_QWORD *)(v2 + 22800) );
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v11[5];
          v11[5] = v14 + 1;
          if ( v14 == -1 )
            goto LABEL_16;
        }
      }
    }
    if ( a1[89] )
    {
      v6 = a1[27];
      v7 = (_QWORD *)a1[28];
      if ( *(_QWORD **)(v6 + 8) != a1 + 27 || (_QWORD *)*v7 != a1 + 27 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      a1[89] = 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 22800), 0LL);
    v8 = KeGetCurrentPrcb();
    v9 = v8->SchedulerAssist;
    if ( v9 && v8->NestingLevel <= 1u )
    {
      v15 = v9[5] - 1;
      v9[5] = v15;
      if ( !v15 )
        KiRemoveSystemWorkPriorityKick(v8, v9);
    }
  }
}
