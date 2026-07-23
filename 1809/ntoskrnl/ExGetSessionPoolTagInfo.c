/*
 * XREFs of ExGetSessionPoolTagInfo @ 0x14011A2A4
 * Callers:
 *     ExGetAttachedSessionPoolTagInfo @ 0x14069F94C (ExGetAttachedSessionPoolTagInfo.c)
 *     EtwpPoolRunDown @ 0x1408C02F4 (EtwpPoolRunDown.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmAcquireSessionPoolRundown @ 0x14069F9F8 (MmAcquireSessionPoolRundown.c)
 */

__int64 __fastcall ExGetSessionPoolTagInfo(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int64 PoolWithTag; // rdi
  unsigned __int8 OldIrql; // si
  size_t v9; // rsi
  unsigned __int8 v10; // si
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-78h]
  unsigned int v18; // [rsp+24h] [rbp-74h]
  int v19; // [rsp+28h] [rbp-70h]
  int v20; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v21; // [rsp+30h] [rbp-68h]
  unsigned __int64 v22; // [rsp+38h] [rbp-60h]
  unsigned __int64 v23; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  const void *v26; // [rsp+68h] [rbp-30h]

  v18 = 0;
  v20 = 0;
  v19 = 0;
  v17 = 0;
  if ( !(unsigned int)MmAcquireSessionPoolRundown(1LL) )
    return 3221225738LL;
  v21 = ExpSessionPoolTrackTable;
  v23 = ExpSessionPoolTrackTable + 56 * ExpSessionPoolTrackTableSize;
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  PoolWithTag = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8240);
  v22 = PoolWithTag;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
    v9 = 56 * PoolWithTag;
    PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(NonPagedPoolNx, 56 * PoolWithTag, 0x6F666E49u);
    if ( PoolWithTag )
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      v26 = *(const void **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8232);
      memmove((void *)PoolWithTag, v26, v9);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v10 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v16 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v16);
      }
      __writecr8(v10);
      goto LABEL_7;
    }
    MmAcquireSessionPoolRundown(0LL);
    return 3221225626LL;
  }
  else
  {
LABEL_7:
    while ( 1 )
    {
      v11 = v18;
      if ( v21 >= v23 )
        break;
      if ( *(_DWORD *)v21 )
      {
        ++v20;
        v18 += 40;
        if ( v11 >= 0xFFFFFFD8 )
        {
          v17 = -1073741675;
          break;
        }
        if ( v11 + 40 > a2 )
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
          v12 = *(_DWORD *)(a1 + 8);
          if ( *(_DWORD *)(a1 + 4) < v12 )
            *(_DWORD *)(a1 + 4) = v12;
          v13 = *(_DWORD *)(a1 + 28);
          if ( *(_DWORD *)(a1 + 24) < v13 )
            *(_DWORD *)(a1 + 24) = v13;
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
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
    *a3 = v19;
    *a4 = v20;
    return v17;
  }
}
