/*
 * XREFs of MiGetSlabStandbyPage @ 0x1402DC440
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x1402DBD8C (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiDiscardTransitionPteEx @ 0x14016817C (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402DCB60 (MiReInitializeFreeSlabPfn.c)
 */

__int64 __fastcall MiGetSlabStandbyPage(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdi
  __int64 v5; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v9; // [rsp+70h] [rbp+30h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( *(_QWORD *)(a1 + 80) == 0xFFFFFFFFFLL )
    return -1LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 96));
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 == 0xFFFFFFFFFLL )
  {
LABEL_14:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    v4 = -1LL;
  }
  else
  {
    while ( 1 )
    {
      v5 = 48 * v4 - 0x58000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
        break;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v9);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 96));
      if ( v4 == *(_QWORD *)(a1 + 80) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = *(_QWORD *)(a1 + 80);
      if ( v4 == 0xFFFFFFFFFLL )
        goto LABEL_14;
    }
    MiUnlinkPageFromList(48 * v4 - 0x58000000000LL, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    MiDiscardTransitionPteEx(48 * v4 - 0x58000000000LL, 2048);
    MiReInitializeFreeSlabPfn(48 * v4 - 0x58000000000LL, a1);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v7 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v7);
    }
  }
  __writecr8(CurrentIrql);
  return v4;
}
