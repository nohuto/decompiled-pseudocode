/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x1400F3B18
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x1400F362C (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400F4738 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400F48B0 (KeUpdateThreadSchedulingProperties.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140117848 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 */

__int64 __fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v7; // rbp
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rsi
  char v15; // bl
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  int v19; // [rsp+48h] [rbp+10h] BYREF
  volatile signed __int64 *v20; // [rsp+50h] [rbp+18h] BYREF
  __int64 v21; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
    return KiRemoveThreadFromSchedulingGroup(a1);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0LL;
  v19 = 0;
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v10[5] - 1;
        v10[5] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v19, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v12 = KiAcquireThreadStateLock(a1, (__int64)&v21, (volatile signed __int32 **)&v20);
  *(_QWORD *)(a1 + 104) = a2;
  LOBYTE(v13) = v12;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  v14 = v21;
  v15 = v12;
  KeUpdateThreadSchedulingProperties(a1, v13, v21);
  if ( v15 == 1 && v20 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
  {
    v7 = KeGetCurrentPrcb();
    KiRemoveThreadFromSharedReadyQueue(v20, a1, (unsigned int)*(char *)(a1 + 195));
    if ( *(_BYTE *)(a1 + 388) == 1 )
      *(_DWORD *)(a1 + 116) |= 2u;
    KiSetThreadState(a1, 7LL);
    v14 = v21;
  }
  KiReleaseThreadStateLock(v16, v14, v20);
  result = KiReleaseThreadLockSafe(a1);
  if ( v7 )
    return KiDeferredReadyThread((__int64)v7, a1, v17, v18);
  return result;
}
