/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x1400E94A8
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x1400E93DC (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x14000FA70 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x14000FC20 (KiAcquireThreadStateLock.c)
 *     KiEnterDeferredReadyState @ 0x140015188 (KiEnterDeferredReadyState.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400E4FB8 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400E9570 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1400E9720 (KeUpdateThreadSchedulingProperties.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v5; // rbp
  _DWORD *SchedulerAssist; // rcx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  char v10; // bl
  __int64 v11; // rcx
  volatile signed __int64 *v12; // r11
  __int64 v13; // r8
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // [rsp+48h] [rbp+10h] BYREF
  volatile signed __int64 *v18; // [rsp+50h] [rbp+18h] BYREF
  __int64 v19; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = 0LL;
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
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v15 = CurrentPrcb->SchedulerAssist;
      if ( v15 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v16 = v15[5] - 1;
          v15[5] = v16;
          if ( !v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v17);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v7 = KiAcquireThreadStateLock(a1, &v19, (volatile signed __int32 **)&v18);
    *(_QWORD *)(a1 + 104) = a2;
    LOBYTE(v8) = v7;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
    v9 = v19;
    v10 = v7;
    KeUpdateThreadSchedulingProperties(a1, v8, v19);
    v12 = v18;
    if ( v10 == 1 && v18 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
    {
      v5 = KeGetCurrentPrcb();
      KiRemoveThreadFromSharedReadyQueue((__int64)v18, a1, *(_BYTE *)(a1 + 195));
      KiEnterDeferredReadyState(a1);
      v9 = v19;
    }
    KiReleaseThreadStateLock(v11, v9, v12);
    KiReleaseThreadLockSafe(a1);
    if ( v5 )
      KiDeferredReadyThread((__int64)v5, a1, v13);
  }
  else
  {
    KiRemoveThreadFromSchedulingGroup(a1);
  }
}
