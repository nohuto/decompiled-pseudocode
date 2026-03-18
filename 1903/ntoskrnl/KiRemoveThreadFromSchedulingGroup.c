/*
 * XREFs of KiRemoveThreadFromSchedulingGroup @ 0x1400E9570
 * Callers:
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400E94A8 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x14000FA70 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x14000FC20 (KiAcquireThreadStateLock.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012B6C (KiUpdateTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAddThreadToPrcbQueue @ 0x1400E4D74 (KiAddThreadToPrcbQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400E8D10 (KiRemoveThreadFromScbQueue.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400E9720 (KeUpdateThreadSchedulingProperties.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiRemoveThreadFromSchedulingGroup(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  char v3; // r15
  _DWORD *v4; // rcx
  __int64 v5; // rdx
  char v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  struct _KPRCB *v11; // r14
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF
  struct _KPRCB *v23; // [rsp+70h] [rbp+18h] BYREF
  volatile signed __int64 *v24; // [rsp+78h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    v23 = CurrentPrcb;
    _disable();
    KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
    _enable();
    v11 = KeGetCurrentPrcb();
    v21 = 0;
    while ( 1 )
    {
      SchedulerAssist = v11->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v11->NestingLevel <= 1u )
        {
          v16 = SchedulerAssist[5];
          SchedulerAssist[5] = v16 + 1;
          if ( v16 == -1 )
            KiRemoveSystemWorkPriorityKick(v11);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v15 = v11->SchedulerAssist;
      if ( v15 )
      {
        if ( v11->NestingLevel <= 1u )
        {
          v17 = v15[5] - 1;
          v15[5] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(v11);
        }
      }
      do
        KeYieldProcessorEx(&v21);
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    LOBYTE(v10) = 2;
    result = KeUpdateThreadSchedulingProperties(a1, v10, CurrentPrcb);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v13 = KeGetCurrentPrcb();
    v14 = v13->SchedulerAssist;
    if ( v14 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        result = (unsigned int)(v14[5] - 1);
        v14[5] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(v13);
      }
    }
  }
  else
  {
    v3 = 0;
    v22 = 0;
    while ( 1 )
    {
      v4 = CurrentPrcb->SchedulerAssist;
      if ( v4 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = v4[5];
          v4[5] = v18 + 1;
          if ( v18 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v19 = CurrentPrcb->SchedulerAssist;
      if ( v19 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v20 = v19[5] - 1;
          v19[5] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v22);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v6 = KiAcquireThreadStateLock(a1, (__int64 *)&v23, (volatile signed __int32 **)&v24);
    if ( (*(_DWORD *)(a1 + 116) & 0x2000) != 0 )
    {
      KiRemoveThreadFromScbQueue((__int64)v23, *(_QWORD *)(a1 + 1496), a1, *(_BYTE *)(a1 + 195));
      v3 = 1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    if ( (*(_DWORD *)(a1 + 120) & 0x800) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xBu);
    v7 = (__int64)v23;
    LOBYTE(v5) = v6;
    KeUpdateThreadSchedulingProperties(a1, v5, v23);
    if ( v3 )
      KiAddThreadToPrcbQueue(v7, a1, *(char *)(a1 + 195), 0, 0);
    KiReleaseThreadStateLock(v8, v7, v24);
    return KiReleaseThreadLockSafe(a1);
  }
  return result;
}
