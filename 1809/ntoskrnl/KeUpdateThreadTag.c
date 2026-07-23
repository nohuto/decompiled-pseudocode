/*
 * XREFs of KeUpdateThreadTag @ 0x14013E8F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1EF0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KiIpiSendPacket @ 0x1400ED184 (KiIpiSendPacket.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v7; // rbx
  char v8; // al
  struct _KPRCB *v9; // rcx
  char v10; // al
  __int64 result; // rax
  int v12; // ebx
  unsigned __int8 v13; // cl
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // rcx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPRCB *v19; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int64 *v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[44]; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+148h] [rbp+48h] BYREF

  v22 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[5];
        SchedulerAssist[5] = v15 + 1;
        if ( v15 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v14[5] - 1;
        v14[5] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v18, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 124) != v22 )
  {
    if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    {
      v7 = KeGetCurrentPrcb();
      v19 = v7;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v7, a1, 0LL);
      v8 = v22;
      if ( v22 )
        _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
      *(_BYTE *)(a1 + 124) = v8;
      KiStartThreadCycleAccumulation((__int64)v7, a1, 0);
      _enable();
    }
    else
    {
      if ( (unsigned __int8)KiAcquireThreadStateLock(a1, (__int64)&v19, (volatile signed __int32 **)&v20) == 2
        || *(_BYTE *)(a1 + 113) )
      {
        v12 = *(_DWORD *)(a1 + 536);
        v21[0] = 1310721;
        memset(&v21[1], 0, 0xA4uLL);
        KeAddProcessorAffinityEx(v21, v12 & 0x7FFFFFFF);
        v13 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        KiIpiSendPacket(0, (int)v21, (__int64)KiIpiUpdateThreadTag, a1, (__int64)&v22, 0LL);
        v9 = KeGetCurrentPrcb();
        while ( v9->PacketBarrier )
          _mm_pause();
      }
      else
      {
        v10 = v22;
        if ( v22 )
          _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
        *(_BYTE *)(a1 + 124) = v10;
      }
      KiReleaseThreadStateLock((__int64)v9, (__int64)v19, v20);
    }
  }
  KiReleaseThreadLockSafe(a1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
