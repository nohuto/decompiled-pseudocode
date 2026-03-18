/*
 * XREFs of KiSignalThread @ 0x14005BE90
 * Callers:
 *     KeInsertPriQueue @ 0x14005B380 (KeInsertPriQueue.c)
 *     KiResumeThread @ 0x1400817C8 (KiResumeThread.c)
 *     KeAlertThread @ 0x1400E4F50 (KeAlertThread.c)
 *     KiSignalThreadForApc @ 0x1400E5680 (KiSignalThreadForApc.c)
 *     KiSuspendThread @ 0x1400E5914 (KiSuspendThread.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1400E8EEC (KiTryUnwaitThreadWithPriority.c)
 *     KeAlertThreadByThreadId @ 0x14011794C (KeAlertThreadByThreadId.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  char result; // al
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a2 + 112);
  result = 0;
  v9 = v6 & 7;
  if ( v9 == 1 || v9 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    if ( v10 )
    {
      if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
      {
        *(_DWORD *)(a2 + 540) = (unsigned __int8)*(_DWORD *)(a2 + 540);
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 4LL * *(unsigned int *)(a2 + 540) + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 40));
      }
    }
    v11 = *(_QWORD *)(a2 + 712);
    if ( v11 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v24 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v20 = SchedulerAssist[5];
          SchedulerAssist[5] = v20 + 1;
          if ( v20 == -1 )
LABEL_34:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 22800), 0LL) )
      {
        v18 = CurrentPrcb->SchedulerAssist;
        if ( v18 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v21 = v18[5] - 1;
            v18[5] = v21;
            if ( !v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v24);
        while ( *(_QWORD *)(v11 + 22800) );
        v19 = CurrentPrcb->SchedulerAssist;
        if ( v19 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v22 = v19[5];
            v19[5] = v22 + 1;
            if ( v22 == -1 )
              goto LABEL_34;
          }
        }
      }
      if ( *(_QWORD *)(a2 + 712) )
      {
        v14 = *(_QWORD *)(a2 + 216);
        v15 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(v14 + 8) != a2 + 216 || *v15 != a2 + 216 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *(_QWORD *)(a2 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 22800), 0LL);
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v23 = v17[5] - 1;
          v17[5] = v23;
          if ( !v23 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
    }
    if ( *(_BYTE *)(a2 + 388) == 1 )
      *(_DWORD *)(a2 + 116) |= 2u;
    *(_BYTE *)(a2 + 388) = 7;
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = a2 + 216;
    *(_QWORD *)(a2 + 200) = a3;
    *(_QWORD *)(a2 + 1528) = 0LL;
    return 1;
  }
  if ( a4 )
  {
    if ( (v6 & 7) == 0 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 2;
      *(_QWORD *)(a2 + 200) = a3;
      *(_QWORD *)(a2 + 1528) = 0LL;
      *(_BYTE *)(a4 + 17) = 0;
      return 1;
    }
    if ( v9 == 5 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 6;
    }
    else if ( v9 == 3 )
    {
      *(_BYTE *)(a4 + 17) = 2;
    }
  }
  return result;
}
