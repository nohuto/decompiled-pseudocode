/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x14000E9B0
 * Callers:
 *     MiWorkingSetManager @ 0x1400DA208 (MiWorkingSetManager.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     MiRelinkStandbyPage @ 0x14000EBC0 (MiRelinkStandbyPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiRemoveDecayClusterTimer @ 0x14011868C (MiRemoveDecayClusterTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  char v3; // r15
  __int64 v4; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rax
  ULONG_PTR v7; // rdx
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  ULONG_PTR v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v1 = a1;
  LOBYTE(a1) = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = KiQueryUnbiasedInterruptTime(a1);
  if ( (unsigned __int64)(result - *(_QWORD *)(v1 + 4768)) >= 0x989680 )
  {
    v3 = *(_DWORD *)(v1 + 4760) + 1;
    *(_QWORD *)(v1 + 4768) = result;
    v4 = v3 & 3;
    result = *(_QWORD *)(8 * v4 + v1 + 4728) >> 33;
    if ( result != 0x7FFFFFFF )
    {
      while ( 1 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v1 + 2600);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v1 + 2600));
        v6 = *(_QWORD *)(8 * v4 + v1 + 4728) >> 33;
        if ( v6 == 0x7FFFFFFF )
          break;
        v7 = v6 + qword_1404661E0;
        v8 = 48 * (v6 + qword_1404661E0) - 0x58000000000LL;
        v9 = *(_QWORD *)(v8 + 16);
        if ( qword_140465800 && (v9 & 0x10) == 0 )
          v9 &= ~qword_140465800;
        v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
        if ( v10 == v7 )
        {
          MiUnlinkPageFromList(v8);
          *(_BYTE *)(v8 + 35) &= ~8u;
          MiRemoveDecayClusterTimer(v8);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
          v11 = 48 * v10 - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
          else
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            MiRelinkStandbyPage(v11);
            _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v12);
        }
        __writecr8(CurrentIrql);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v15 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v15, v13);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    *(_DWORD *)(v1 + 4760) = v4;
  }
  return result;
}
