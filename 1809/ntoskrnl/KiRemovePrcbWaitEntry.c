/*
 * XREFs of KiRemovePrcbWaitEntry @ 0x1400ACB50
 * Callers:
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiRemovePrcbWaitEntry(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1[89];
  if ( v3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = SchedulerAssist[5];
        SchedulerAssist[5] = v13 + 1;
        if ( v13 == -1 )
LABEL_16:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 22800), 0LL) )
    {
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v11[5] - 1;
          v11[5] = v14;
          if ( !v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v17, a2, a3);
      while ( *(_QWORD *)(v3 + 22800) );
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v12[5];
          v12[5] = v15 + 1;
          if ( v15 == -1 )
            goto LABEL_16;
        }
      }
    }
    if ( a1[89] )
    {
      v7 = a1[27];
      v8 = (_QWORD *)a1[28];
      if ( *(_QWORD **)(v7 + 8) != a1 + 27 || (_QWORD *)*v8 != a1 + 27 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      a1[89] = 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 22800), 0LL);
    v9 = KeGetCurrentPrcb();
    v10 = v9->SchedulerAssist;
    if ( v10 && v9->NestingLevel <= 1u )
    {
      v16 = v10[5] - 1;
      v10[5] = v16;
      if ( !v16 )
        KiRemoveSystemWorkPriorityKick(v9);
    }
  }
}
