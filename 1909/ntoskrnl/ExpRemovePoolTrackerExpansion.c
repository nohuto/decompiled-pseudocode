/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x140127254
 * Callers:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     ExRemovePoolTag @ 0x1400F59A8 (ExRemovePoolTag.c)
 *     ExPoolCleanupExpansionTable @ 0x1401660EC (ExPoolCleanupExpansionTable.c)
 *     ExpFreeHeapSpecialPool @ 0x14033ECD0 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, char a3)
{
  unsigned __int64 v6; // rax
  _DWORD *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // r9d
  _QWORD *v12; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v16; // di
  struct _KPRCB *v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  volatile signed __int64 *v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  if ( (a3 & 0x20) != 0 )
  {
    v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
    v7 = *(_DWORD **)(v6 + 1256);
    v8 = *(_QWORD *)(v6 + 1264);
  }
  else
  {
    v8 = PoolTrackTableExpansionSize;
    v7 = PoolTrackTableExpansion;
  }
  v9 = 0;
  if ( v8 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = v7[14 * v10];
      if ( v11 == a1 )
        break;
      if ( v11 )
      {
        v10 = ++v9;
        if ( v9 < v8 )
          continue;
      }
      goto LABEL_19;
    }
    v12 = &v7[14 * v9];
    if ( (a3 & 1) != 0 )
    {
      ++v12[6];
      v12[4] -= a2;
    }
    else
    {
      ++v12[3];
      v12[1] -= a2;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
  }
  else
  {
LABEL_19:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v16 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v17);
    }
    v18 = v16;
    __writecr8(v16);
    if ( (a3 & 0x20) != 0 )
    {
      v20 = ExpSessionPoolTrackTable;
      v19 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      LODWORD(v18) = KeGetPcr()->Prcb.Number;
      v19 = PoolTrackTableSize;
      v20 = (__int64)*(&ExPoolTagTables + v18);
    }
    v21 = -a2;
    result = (unsigned int)(v19 - 1);
    v22 = (volatile signed __int64 *)(v20 + 56 * result);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64(v22 + 6);
      _InterlockedExchangeAdd64(v22 + 4, v21);
    }
    else
    {
      _InterlockedIncrement64(v22 + 3);
      _InterlockedExchangeAdd64(v22 + 1, v21);
    }
  }
  return result;
}
