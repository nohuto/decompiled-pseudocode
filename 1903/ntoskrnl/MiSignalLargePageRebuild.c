/*
 * XREFs of MiSignalLargePageRebuild @ 0x1400F2000
 * Callers:
 *     MiWorkingSetManager @ 0x1400F1CC8 (MiWorkingSetManager.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400DAFC8 (MiNodeLargeFreeZeroPages.c)
 *     MiPageCombiningActive @ 0x1400F233C (MiPageCombiningActive.c)
 *     MiNodeFreeZeroPages @ 0x1400F3834 (MiNodeFreeZeroPages.c)
 *     MiWakeLargePageRebuild @ 0x140169DAC (MiWakeLargePageRebuild.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  unsigned int i; // ebx
  __int64 v7; // rdi
  unsigned __int64 v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // rdx
  unsigned __int64 j; // rbp
  int v13; // edx
  int v14; // edx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  result = MiPageCombiningActive(a1, a2, a3);
  if ( (_DWORD)result != 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      LockHandle.LockQueue.Next = 0LL;
      v7 = *(_QWORD *)(a1 + 16) + 1984LL * i;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 1952);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v7 + 1952));
      if ( !*(_BYTE *)(v7 + 849) && (*(_BYTE *)(v7 + 848))-- == 1 )
      {
        v9 = 0LL;
        v10 = MmNumberOfChannels;
        v11 = 0LL;
        for ( j = (-(__int64)(*(_BYTE *)(v7 + 851) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
              (unsigned int)v11 < v10;
              v11 = (unsigned int)(v13 + 1) )
        {
          v9 += MiNodeFreeZeroPages(v7, v11, 0LL);
        }
        if ( v9 < j
          || (MiFlags & 0x30) == 0
          || (unsigned __int64)MiNodeLargeFreeZeroPages((_QWORD *)v7, 4u, 2) >> 3 >= v9
          || !(unsigned int)MiWakeLargePageRebuild(a1, i, (unsigned int)(v14 - 3)) )
        {
          *(_BYTE *)(v7 + 850) = 8;
          *(_BYTE *)(v7 + 848) = 8;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
