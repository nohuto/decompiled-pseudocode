/*
 * XREFs of KiIdleSchedule @ 0x140012A80
 * Callers:
 *     KiIdleLoop @ 0x1401C75D0 (KiIdleLoop.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x140012CB0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiSearchForNewThread @ 0x1400130A4 (KiSearchForNewThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x1402AFC14 (KiSendHeteroRescheduleIntRequest.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rdx
  _DWORD *v11; // rcx
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v17 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = SchedulerAssist[5];
        SchedulerAssist[5] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v11[5] - 1;
        v11[5] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
      }
    }
    do
      KeYieldProcessorEx(&v17);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_BYTE *)(a1 + 11883) = 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v5 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  KiEndThreadCycleAccumulation(a1, v5, 0LL);
  _enable();
  LOBYTE(v6) = 1;
  v7 = KiSearchForNewThread(a1, v6);
  if ( v7 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v16 = v13[5] - 1;
        v13[5] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick(v12, v13);
      }
    }
  }
  else
  {
    if ( KeHeteroSystem && !KeHeteroSystemVirtual )
      KiSendHeteroRescheduleIntRequest(a1);
    v9 = *(_QWORD *)(a1 + 24);
    _disable();
    LOBYTE(v8) = 1;
    KiStartThreadCycleAccumulation(a1, v9, v8);
    _enable();
  }
  return v7;
}
