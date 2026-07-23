/*
 * XREFs of KiIdleSchedule @ 0x1400D1CD0
 * Callers:
 *     KiIdleLoop @ 0x1401C0680 (KiIdleLoop.c)
 * Callees:
 *     KiSearchForNewThread @ 0x140056AE0 (KiSearchForNewThread.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1EF0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140298E20 (KiSendHeteroRescheduleIntRequest.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v17, a2, a3);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_BYTE *)(a1 + 11883) = 0;
  v6 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v6 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  KiEndThreadCycleAccumulation(a1, v6, 0LL);
  _enable();
  v7 = KiSearchForNewThread(a1, 1);
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
          KiRemoveSystemWorkPriorityKick(v12);
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
