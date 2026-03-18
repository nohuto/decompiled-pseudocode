/*
 * XREFs of MiCheckZeroFreeRebalance @ 0x140109140
 * Callers:
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x140080598 (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x1400C5438 (PsReferencePartitionSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNodeStandbyPageCount @ 0x1402D9A5C (MiGetNodeStandbyPageCount.c)
 */

unsigned __int64 __fastcall MiCheckZeroFreeRebalance(__int64 a1, unsigned int a2)
{
  int v3; // ebp
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 result; // rax
  __int64 v16; // r9
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  v5 = a2 >> byte_14046574D;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 16) + 1984LL * (unsigned int)v5;
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v6 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(a2 >> byte_14046574E);
  v8 = 0LL;
  v9 = 0LL;
  v10 = v6;
  do
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
    {
      v10 = v6;
      v11 = *(_QWORD *)(v7 + 8 * (v9 + 2LL * v6) + 1848);
    }
    else
    {
      v11 = *(_QWORD *)(v7 + 8 * v9 + 1760);
    }
    v12 = v8 + v11;
    if ( v6 == 4 )
    {
      v13 = *(_QWORD *)(v7 + 8 * v9);
      v14 = *(_QWORD *)(v7 + 8 * v9 + 272);
    }
    else
    {
      v13 = *(_QWORD *)(v7 + 8 * (v10 + 4 * v9) + 16) + *(_QWORD *)(v7 + 8 * (v10 + 4 * v9) + 80);
      v14 = *(_QWORD *)(v7 + 8 * (v10 + 4 * v9) + 288) + *(_QWORD *)(v7 + 8 * (v10 + 4 * v9) + 352);
    }
    result = (v14 + (v13 << 9)) << 9;
    if ( v6 == 4 )
    {
      v16 = *(_QWORD *)(v7 + 8 * v9 + 544);
      v10 = 4LL;
    }
    else
    {
      v16 = *(_QWORD *)(v7 + 8 * (v10 + 4 * v9) + 560) + *(_QWORD *)(v7 + 8 * (v10 + 4 * v9) + 624);
    }
    ++v9;
    v8 = v12 + result + 16 * v16;
  }
  while ( v9 <= 1 );
  if ( v8 < 0x200 )
  {
    result = MiGetNodeStandbyPageCount(a1, v5, v6);
    if ( result >= 0x1000 && !*(_QWORD *)(a1 + 7344) )
    {
      result = *(unsigned int *)(a1 + 4);
      if ( (result & 1) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140465E40, &LockHandle);
        if ( !*(_QWORD *)(a1 + 7344)
          && (*(_DWORD *)(a1 + 4) & 1) == 0
          && PsReferencePartitionSafe(*(_QWORD *)(a1 + 168)) )
        {
          *(_QWORD *)(a1 + 7328) = 0LL;
          *(_QWORD *)(a1 + 7344) = MiRebalanceZeroFreeLists;
          v3 = 1;
          *(_QWORD *)(a1 + 7352) = a1;
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
        if ( v3 == 1 )
          return ExQueueWorkItemToPartition((_QWORD *)(a1 + 7328), 1, 0xFFFFFFFF, *(_QWORD *)(a1 + 168));
      }
    }
  }
  return result;
}
