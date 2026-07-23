/*
 * XREFs of KiRemoveThreadFromSchedulingGroup @ 0x1400F4738
 * Callers:
 *     KeTerminateThread @ 0x140089A10 (KeTerminateThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400F3B18 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400F48B0 (KeUpdateThreadSchedulingProperties.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveThreadFromScbQueue @ 0x140116EA8 (KiRemoveThreadFromScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1401175DC (KiAddThreadToPrcbQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KPRCB *v7; // r14
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  char v12; // r15
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  char v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+68h] [rbp+10h] BYREF
  struct _KPRCB *v26; // [rsp+70h] [rbp+18h] BYREF
  volatile signed __int64 *v27; // [rsp+78h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    v26 = CurrentPrcb;
    _disable();
    KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
    _enable();
    v7 = KeGetCurrentPrcb();
    v24 = 0;
    while ( 1 )
    {
      SchedulerAssist = v7->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v19 = SchedulerAssist[5];
          SchedulerAssist[5] = v19 + 1;
          if ( v19 == -1 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v18 = v7->SchedulerAssist;
      if ( v18 )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v20 = v18[5] - 1;
          v18[5] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      do
        KeYieldProcessorEx(&v24, v5, v6);
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    LOBYTE(v5) = 2;
    result = KeUpdateThreadSchedulingProperties(a1, v5, CurrentPrcb);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v10 = KeGetCurrentPrcb();
    v11 = v10->SchedulerAssist;
    if ( v11 && v10->NestingLevel <= 1u )
    {
      result = (unsigned int)(v11[5] - 1);
      v11[5] = result;
      if ( !(_DWORD)result )
        return KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  else
  {
    v12 = 0;
    v25 = 0;
    while ( 1 )
    {
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v21 = v13[5];
          v13[5] = v21 + 1;
          if ( v21 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v22 = CurrentPrcb->SchedulerAssist;
      if ( v22 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v23 = v22[5] - 1;
          v22[5] = v23;
          if ( !v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v25, a2, a3);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v15 = KiAcquireThreadStateLock(a1, (__int64)&v26, (volatile signed __int32 **)&v27);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue(v26, *(_QWORD *)(a1 + 1496), a1, (unsigned int)*(char *)(a1 + 195));
      v12 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    v16 = (__int64)v26;
    LOBYTE(v14) = v15;
    KeUpdateThreadSchedulingProperties(a1, v14, v26);
    if ( v12 )
      KiAddThreadToPrcbQueue(v16, a1, *(char *)(a1 + 195), 0, 0);
    KiReleaseThreadStateLock(v17, v16, v27);
    return KiReleaseThreadLockSafe(a1);
  }
  return result;
}
