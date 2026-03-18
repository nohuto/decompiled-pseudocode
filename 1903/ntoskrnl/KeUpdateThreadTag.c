/*
 * XREFs of KeUpdateThreadTag @ 0x140142860
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseThreadStateLock @ 0x14000FA70 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x14000FC20 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x140012CB0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiIpiSendPacket @ 0x1400B8F44 (KiIpiSendPacket.c)
 *     KeAddProcessorAffinityEx @ 0x1400BE1E0 (KeAddProcessorAffinityEx.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v6; // rbx
  char v7; // al
  __int64 result; // rax
  struct _KPRCB *v9; // rcx
  char v10; // al
  int v11; // ebx
  unsigned __int8 v12; // cl
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  struct _KPRCB *v16; // rcx
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPRCB *v18; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int64 *v19; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v20[44]; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+148h] [rbp+48h] BYREF

  v21 = a2;
  memset(v20, 0, 0xA8uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
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
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v13[5] - 1;
        v13[5] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v17);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 124) != v21 )
  {
    if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    {
      v6 = KeGetCurrentPrcb();
      v18 = v6;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v6, a1, 0LL);
      v7 = v21;
      if ( v21 )
        _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
      *(_BYTE *)(a1 + 124) = v7;
      KiStartThreadCycleAccumulation((__int64)v6, a1, 0);
      _enable();
    }
    else
    {
      if ( (unsigned __int8)KiAcquireThreadStateLock(a1, (__int64 *)&v18, (volatile signed __int32 **)&v19) == 2
        || *(_BYTE *)(a1 + 113) )
      {
        v11 = *(_DWORD *)(a1 + 536);
        v20[0] = 1310721;
        memset(&v20[1], 0, 0xA4uLL);
        KeAddProcessorAffinityEx(v20, v11 & 0x7FFFFFFF);
        v12 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        KiIpiSendPacket(0, (int)v20, (__int64)KiIpiUpdateThreadTag, a1, (__int64)&v21, 0LL);
        v9 = KeGetCurrentPrcb();
        while ( v9->PacketBarrier )
          _mm_pause();
      }
      else
      {
        v10 = v21;
        if ( v21 )
          _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
        *(_BYTE *)(a1 + 124) = v10;
      }
      KiReleaseThreadStateLock((__int64)v9, (__int64)v18, v19);
    }
  }
  KiReleaseThreadLockSafe(a1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v16);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
