/*
 * XREFs of ExGetSessionPoolTagInfo @ 0x1400F45A8
 * Callers:
 *     ExGetAttachedSessionPoolTagInfo @ 0x1406A4874 (ExGetAttachedSessionPoolTagInfo.c)
 *     EtwpPoolRunDown @ 0x1408FB7DC (EtwpPoolRunDown.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MmAcquireSessionPoolRundown @ 0x1406A4920 (MmAcquireSessionPoolRundown.c)
 */

__int64 __fastcall ExGetSessionPoolTagInfo(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  ULONG_PTR PoolWithTag; // rdi
  unsigned __int8 OldIrql; // si
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // eax
  size_t v13; // rsi
  unsigned __int8 v14; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-78h]
  unsigned int v18; // [rsp+24h] [rbp-74h]
  int v19; // [rsp+28h] [rbp-70h]
  int v20; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v21; // [rsp+30h] [rbp-68h]
  ULONG_PTR v22; // [rsp+38h] [rbp-60h]
  unsigned __int64 v23; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  const void *v26; // [rsp+68h] [rbp-30h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v18 = 0;
  v20 = 0;
  v19 = 0;
  v17 = 0;
  if ( !(unsigned int)MmAcquireSessionPoolRundown(1LL) )
    return 3221225738LL;
  v21 = ExpSessionPoolTrackTable;
  v23 = ExpSessionPoolTrackTable + 56 * ExpSessionPoolTrackTableSize;
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  PoolWithTag = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 1264);
  v22 = PoolWithTag;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( PoolWithTag )
  {
    v13 = 56 * PoolWithTag;
    PoolWithTag = (ULONG_PTR)ExAllocatePoolWithTag(NonPagedPoolNx, 56 * PoolWithTag, 0x6F666E49u);
    if ( PoolWithTag )
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      v26 = *(const void **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 1256);
      memmove((void *)PoolWithTag, v26, v13);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v14 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v16 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v16);
      }
      __writecr8(v14);
      goto LABEL_4;
    }
    MmAcquireSessionPoolRundown(0LL);
    return 3221225626LL;
  }
  else
  {
LABEL_4:
    while ( 1 )
    {
      v9 = v18;
      if ( v21 >= v23 )
        break;
      if ( *(_DWORD *)v21 )
      {
        ++v20;
        v18 += 40;
        if ( v9 >= 0xFFFFFFD8 )
        {
          v17 = -1073741675;
          break;
        }
        if ( v9 + 40 > a2 )
        {
          v17 = -1073741820;
        }
        else
        {
          ++v19;
          *(_DWORD *)a1 = *(_DWORD *)v21;
          *(_DWORD *)(a1 + 4) = *(_DWORD *)(v21 + 40);
          *(_DWORD *)(a1 + 8) = *(_DWORD *)(v21 + 48);
          *(_QWORD *)(a1 + 16) = *(_QWORD *)(v21 + 32);
          *(_DWORD *)(a1 + 24) = *(_DWORD *)(v21 + 16);
          *(_DWORD *)(a1 + 28) = *(_DWORD *)(v21 + 24);
          *(_QWORD *)(a1 + 32) = *(_QWORD *)(v21 + 8);
          v10 = *(_DWORD *)(a1 + 8);
          if ( *(_DWORD *)(a1 + 4) < v10 )
            *(_DWORD *)(a1 + 4) = v10;
          v11 = *(_DWORD *)(a1 + 28);
          if ( *(_DWORD *)(a1 + 24) < v11 )
            *(_DWORD *)(a1 + 24) = v11;
          a1 += 40LL;
        }
      }
      v21 += 56LL;
      if ( v21 == v23 )
      {
        if ( v22 )
        {
          v21 = PoolWithTag;
          v23 = PoolWithTag + 56 * v22;
          v22 = 0LL;
        }
      }
    }
    MmAcquireSessionPoolRundown(0LL);
    if ( PoolWithTag )
      ExFreeHeapPool(PoolWithTag);
    *a3 = v19;
    *a4 = v20;
    return v17;
  }
}
