/*
 * XREFs of MiAddPartitionHugeRange @ 0x1402C1AAC
 * Callers:
 *     MiHotAddHugeRange @ 0x1408898B0 (MiHotAddHugeRange.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x1400733B0 (RtlSetBitsEx.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInsertHugeRangeInList @ 0x1402C27AC (MiInsertHugeRangeInList.c)
 *     MiInitializePartitionHugeIoSpace @ 0x140889958 (MiInitializePartitionHugeIoSpace.c)
 */

__int64 __fastcall MiAddPartitionHugeRange(KSPIN_LOCK *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  ULONG_PTR v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r10
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  bool v18; // zf
  bool i; // zf
  unsigned __int8 v20; // r13
  struct _KPRCB *v21; // rcx
  unsigned __int64 *v22; // r13
  unsigned __int8 v23; // bl
  struct _KPRCB *v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  result = MiInitializePartitionHugeIoSpace(a1, a2);
  if ( (int)result < 0 )
    return result;
  v7 = *(_QWORD *)(a2 + 24);
  v8 = (v7 >> 18) & 0x3FFFF;
  v9 = *(_QWORD *)(a2 + 32) >> 18;
  v10 = ((MiPageToNode(v7, 0) & 0x3F) << 51) | 0x40100000C0000LL;
  KeAcquireInStackQueuedSpinLock(&qword_1404661C0, &LockHandle);
  v11 = v9 & 0x3FFFF;
  v12 = v8 + v11 - 1;
  if ( v12 >= qword_1404661A0 )
    goto LABEL_6;
  if ( v11 > 1 )
  {
    v15 = (__int64 *)(qword_1404661A8 + 8 * (v8 >> 6));
    v16 = *v15;
    v17 = qword_1404661A8 + 8 * (v12 >> 6);
    if ( v15 != (__int64 *)v17 )
    {
      for ( i = (v16 & (-1LL << v8)) == 0; i; i = *v15 == 0 )
      {
        if ( ++v15 == (__int64 *)v17 )
        {
          v18 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v12) & *v15) == 0;
          goto LABEL_20;
        }
      }
      goto LABEL_6;
    }
    v18 = (v16 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v11) << v8)) == 0;
LABEL_20:
    if ( !v18 )
    {
LABEL_6:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(OldIrql);
      return 3221225496LL;
    }
  }
  else if ( v11 != 1 || _bittest64((const signed __int64 *)qword_1404661A8, v8) )
  {
    goto LABEL_6;
  }
  RtlSetBitsEx((__int64)&qword_1404661A0, v8, v11);
  memset64((void *)(qword_1404661B0 + 8 * v8), v10, v11);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v20 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v21);
  }
  __writecr8(v20);
  if ( a3 == 3 )
    v10 ^= (v10 ^ ((unsigned __int64)*(unsigned __int16 *)a1 << 40)) & 0x7FF0000000000LL;
  v22 = (unsigned __int64 *)(qword_1404661B0 + 8 * v8);
  if ( a3 == 3 )
    KeAcquireInStackQueuedSpinLock(a1 + 508, &LockHandle);
  do
  {
    if ( a3 == 3 )
    {
      *v22 = v10;
      ++a1[52];
    }
    else
    {
      MiInsertHugeRangeInList(v8, a3 == 1, a1);
    }
    ++v22;
    v8 ^= ((unsigned int)v8 ^ ((_DWORD)v8 + 1)) & 0x3FFFF;
    --v11;
  }
  while ( v11 );
  if ( a3 == 3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v23 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v24 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v24);
    }
    __writecr8(v23);
  }
  return 0LL;
}
