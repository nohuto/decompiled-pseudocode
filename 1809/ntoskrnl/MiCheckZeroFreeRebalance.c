/*
 * XREFs of MiCheckZeroFreeRebalance @ 0x14010C5C0
 * Callers:
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     PsReferencePartitionSafe @ 0x140090C28 (PsReferencePartitionSafe.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNodeStandbyPageCount @ 0x1402C05A0 (MiGetNodeStandbyPageCount.c)
 */

unsigned __int64 __fastcall MiCheckZeroFreeRebalance(__int64 a1, unsigned int a2)
{
  int v3; // esi
  unsigned int v4; // r11d
  unsigned int v5; // ebp
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = a2 >> byte_14043B109;
  v6 = *(_QWORD *)(a1 + 16) + 1984LL * (a2 >> byte_14043B109);
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v4 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(a2 >> byte_14043B10A);
  v7 = 0LL;
  v8 = 0LL;
  v9 = v4;
  do
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
    {
      v9 = v4;
      v10 = *(_QWORD *)(v6 + 8 * (v8 + 2LL * v4) + 1824);
    }
    else
    {
      v10 = *(_QWORD *)(v6 + 8 * v8 + 1760);
    }
    v11 = v7 + v10;
    if ( v4 == 4 )
    {
      v12 = *(_QWORD *)(v6 + 8 * v8);
      v13 = *(_QWORD *)(v6 + 8 * v8 + 272);
    }
    else
    {
      v12 = *(_QWORD *)(v6 + 8 * (v9 + 4 * v8) + 16) + *(_QWORD *)(v6 + 8 * (v9 + 4 * v8) + 80);
      v13 = *(_QWORD *)(v6 + 8 * (v9 + 4 * v8) + 288) + *(_QWORD *)(v6 + 8 * (v9 + 4 * v8) + 352);
    }
    result = (v13 + (v12 << 9)) << 9;
    if ( v4 == 4 )
    {
      v15 = *(_QWORD *)(v6 + 8 * v8 + 544);
      v9 = 4LL;
    }
    else
    {
      v15 = *(_QWORD *)(v6 + 8 * (v9 + 4 * v8) + 560) + *(_QWORD *)(v6 + 8 * (v9 + 4 * v8) + 624);
    }
    ++v8;
    v7 = v11 + result + 16 * v15;
  }
  while ( v8 <= 1 );
  if ( v7 < 0x200 )
  {
    result = MiGetNodeStandbyPageCount(a1, v5, v4, v9);
    if ( result >= 0x1000 && !*(_QWORD *)(a1 + 6576) )
    {
      result = *(unsigned int *)(a1 + 4);
      if ( (result & 1) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_14043B7C0, &LockHandle);
        if ( !*(_QWORD *)(a1 + 6576)
          && (*(_DWORD *)(a1 + 4) & 1) == 0
          && PsReferencePartitionSafe(*(_QWORD *)(a1 + 168)) )
        {
          *(_QWORD *)(a1 + 6560) = 0LL;
          *(_QWORD *)(a1 + 6576) = MiRebalanceZeroFreeLists;
          v3 = 1;
          *(_QWORD *)(a1 + 6584) = a1;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
          return ExQueueWorkItemToPartition((__int64 *)(a1 + 6560), 1, 0xFFFFFFFF, *(_QWORD *)(a1 + 168));
      }
    }
  }
  return result;
}
