/*
 * XREFs of KiFlushQueueApc @ 0x140089E68
 * Callers:
 *     KeRundownApcQueues @ 0x1405F8DE0 (KeRundownApcQueues.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall KiFlushQueueApc(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  struct _KPRCB *v16; // rcx
  struct _KPRCB *v17; // rbx
  _DWORD *v18; // rcx
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  struct _KPRCB *v22; // rcx
  int v23; // [rsp+58h] [rbp+10h] BYREF
  int v24; // [rsp+60h] [rbp+18h] BYREF

  v3 = a2;
  if ( (_BYTE)a2 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = 0;
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
        KeYieldProcessorEx(&v23, a2, a3);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(_QWORD *)(a1 + 168) == a1 + 168 )
    {
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v16 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v16);
      }
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16LL * (char)a2 + 152) == a1 + 16LL * (char)a2 + 152 )
      return 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v17 = KeGetCurrentPrcb();
    v24 = 0;
    while ( 1 )
    {
      v18 = v17->SchedulerAssist;
      if ( v18 )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v19 = v18[5];
          v18[5] = v19 + 1;
          if ( v19 == -1 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v20 = v17->SchedulerAssist;
      if ( v20 )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v21 = v20[5] - 1;
          v20[5] = v21;
          if ( !v21 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      do
        KeYieldProcessorEx(&v24, a2, a3);
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  v9 = (_QWORD *)(16LL * v3 + a1 + 152);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 == v9 )
  {
    v10 = 0LL;
  }
  else
  {
    v11 = (_QWORD *)v9[1];
    if ( (_QWORD *)v10[1] != v9 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    v12 = v10;
    do
    {
      *((_BYTE *)v12 + 66) = 0;
      v12 = (_QWORD *)*v12;
    }
    while ( v12 != v10 );
    v9[1] = v9;
    *v9 = v9;
  }
  KiReleaseThreadLockSafe(a1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v22 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v22);
  }
  __writecr8(CurrentIrql);
  return v10;
}
