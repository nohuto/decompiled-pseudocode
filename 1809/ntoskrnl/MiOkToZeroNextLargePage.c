/*
 * XREFs of MiOkToZeroNextLargePage @ 0x1401854DC
 * Callers:
 *     MiZeroLargePages @ 0x14018526C (MiZeroLargePages.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiOkToZeroNextLargePage(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r13
  __int64 v4; // r14
  unsigned __int8 v6; // bl
  struct _KPRCB *v7; // rcx
  unsigned __int8 v8; // r12
  struct _KPRCB *v9; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  LONG v13; // [rsp+80h] [rbp+8h]
  _DWORD *v14; // [rsp+88h] [rbp+10h]

  v14 = a2;
  v2 = *(_QWORD *)(a1 + 224);
  *a2 = 0;
  if ( *(_DWORD *)(v2 + 88) )
  {
    v4 = 2LL * *(unsigned int *)(a1 + 248);
    while ( 1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v2 + 96) + 8 * v4 + 8) & 3) == 0 )
        return 1LL;
      if ( (*(_BYTE *)(*(_QWORD *)(v2 + 96) + 8 * v4 + 8) & 2) != 0 )
        break;
      *a2 = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      if ( *(_DWORD *)(v2 + 88) == 4 )
      {
        --*(_DWORD *)(v2 + 124);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(OldIrql);
        return 0LL;
      }
      v13 = KeResetEvent((PRKEVENT)(v2 + 64));
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v8 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v9 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v9);
      }
      __writecr8(v8);
      if ( !v13 )
        KeWaitForSingleObject((PVOID)(v2 + 64), Executive, 0, 0, 0LL);
      a2 = v14;
    }
    *(_BYTE *)(*(_QWORD *)(v2 + 96) + 8 * v4 + 8) |= 4u;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 224) + 56LL), 1u);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 256) )
  {
    *(_BYTE *)(a1 + 256) = 1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 92), 0xFFFFFFFF) == 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      if ( *(_DWORD *)(v2 + 88) != 4 )
        *(_DWORD *)(v2 + 88) = 1;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v6 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v7 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v7);
      }
      __writecr8(v6);
    }
  }
  return 1LL;
}
