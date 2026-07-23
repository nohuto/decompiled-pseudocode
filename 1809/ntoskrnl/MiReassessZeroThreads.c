/*
 * XREFs of MiReassessZeroThreads @ 0x140185858
 * Callers:
 *     MiZeroLargePages @ 0x14018526C (MiZeroLargePages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiAddZeroingThreads @ 0x140185BCC (MiAddZeroingThreads.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReduceZeroingThreads @ 0x1402C1D14 (MiReduceZeroingThreads.c)
 */

void __fastcall MiReassessZeroThreads(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // rdx
  signed __int32 v5; // eax
  unsigned int v6; // ecx
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  int v12; // ecx
  unsigned int i; // edx
  __int64 v14; // rcx
  unsigned __int8 v15; // r14
  int v16; // eax
  unsigned __int8 v17; // bl
  struct _KPRCB *v18; // rcx
  struct _KPRCB *v19; // rcx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( !a2 )
    return;
  v2 = *(_QWORD *)(a1 + 224);
  if ( (*(_DWORD *)(v2 + 88) & 0xFFFFFFFB) == 0 )
    return;
  v4 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v2 + 96) + 16LL * *(unsigned int *)(a1 + 248)), a2);
  if ( v4 )
    return;
  v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 92), 1u);
  v6 = *(_DWORD *)(v2 + 112);
  if ( v5 + 1 != v6 )
    return;
  v7 = 0LL;
  if ( v6 )
  {
    do
    {
      v8 = (unsigned int)v4;
      LODWORD(v4) = v4 + 1;
      v7 += *(_QWORD *)(*(_QWORD *)(v2 + 96) + 16 * v8);
      v6 = *(_DWORD *)(v2 + 112);
    }
    while ( (unsigned int)v4 < v6 );
  }
  v9 = (int)(8 * v6);
  v10 = v7 % v9;
  v11 = v7 / v9;
  if ( !(v7 / v9) )
    v11 = 1LL;
  if ( *(_DWORD *)(v2 + 88) != 1 )
  {
LABEL_11:
    v12 = 0;
    if ( v11 < *(_QWORD *)(v2 + 104) )
    {
      ++*(_DWORD *)(v2 + 132);
      *(_DWORD *)(v2 + 136) = 0;
      if ( *(_DWORD *)(v2 + 132) < 8u )
      {
LABEL_14:
        *(_DWORD *)(v2 + 92) = 0;
        _InterlockedOr(v22, 0);
        for ( i = 0; i < *(_DWORD *)(v2 + 112); ++i )
        {
          v14 = 16LL * i;
          _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v2 + 96) + v14), 0LL);
        }
        return;
      }
      if ( *(_DWORD *)(v2 + 88) == 2 )
        v16 = MiReduceZeroingThreads(a1, 0LL);
      else
        v16 = MiAddZeroingThreads(a1, v10);
      *(_QWORD *)(v2 + 104) = v11;
    }
    else
    {
      if ( ++*(_DWORD *)(v2 + 136) < 8u )
        goto LABEL_13;
      if ( *(int *)(v2 + 88) >= 3 )
      {
        *(_DWORD *)(v2 + 116) = 1;
        v16 = MiReduceZeroingThreads(a1, 1LL);
      }
      else
      {
        *(_DWORD *)(v2 + 136) = 0;
        *(_DWORD *)(v2 + 88) = 3;
        v16 = MiAddZeroingThreads(a1, v10);
      }
    }
    v12 = v16;
LABEL_13:
    *(_DWORD *)(v2 + 132) = 0;
    if ( v12 == 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      KeSetEvent((PRKEVENT)(v2 + 64), 0, 0);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
    goto LABEL_14;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
  if ( *(_DWORD *)(v2 + 88) != 4 )
  {
    *(_DWORD *)(v2 + 88) = 2;
    *(_QWORD *)(v2 + 104) = v11 + 1;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v15 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    __writecr8(v15);
    goto LABEL_11;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v17 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(v17);
}
