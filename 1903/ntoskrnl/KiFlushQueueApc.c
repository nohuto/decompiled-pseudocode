/*
 * XREFs of KiFlushQueueApc @ 0x140081104
 * Callers:
 *     KeRundownApcQueues @ 0x14060D84C (KeRundownApcQueues.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall KiFlushQueueApc(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // eax
  struct _KPRCB *v15; // rcx
  struct _KPRCB *v16; // rbx
  _DWORD *v17; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  struct _KPRCB *v21; // rcx
  int v22; // [rsp+58h] [rbp+10h] BYREF
  int v23; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v22 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = SchedulerAssist[5];
          SchedulerAssist[5] = v13 + 1;
          if ( v13 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v12[5] - 1;
          v12[5] = v14;
          if ( !v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v22);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(_QWORD *)(a1 + 168) == a1 + 168 )
    {
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v15 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v15);
      }
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16LL * a2 + 152) == a1 + 16LL * a2 + 152 )
      return 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v16 = KeGetCurrentPrcb();
    v23 = 0;
    while ( 1 )
    {
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v18 = v17[5];
          v17[5] = v18 + 1;
          if ( v18 == -1 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v19 = v16->SchedulerAssist;
      if ( v19 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v20 = v19[5] - 1;
          v19[5] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      do
        KeYieldProcessorEx(&v23);
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  v8 = (_QWORD *)(16LL * a2 + a1 + 152);
  v9 = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 == v8 )
  {
    v9 = 0LL;
  }
  else
  {
    v10 = (_QWORD *)v8[1];
    if ( (_QWORD *)v9[1] != v8 || (_QWORD *)*v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    v11 = v9;
    do
    {
      *((_BYTE *)v11 + 66) = 0;
      v11 = (_QWORD *)*v11;
    }
    while ( v11 != v9 );
    v8[1] = v8;
    *v8 = v8;
  }
  KiReleaseThreadLockSafe(a1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
  __writecr8(CurrentIrql);
  return v9;
}
