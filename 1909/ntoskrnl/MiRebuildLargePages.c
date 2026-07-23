/*
 * XREFs of MiRebuildLargePages @ 0x140169760
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400BAE48 (MiNodeLargeFreeZeroPages.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     MiNodeFreeZeroPages @ 0x1400DBD74 (MiNodeFreeZeroPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNodeStandbyPageCount @ 0x1402D9A5C (MiGetNodeStandbyPageCount.c)
 *     MiRebuildLargePage @ 0x1402E8A58 (MiRebuildLargePage.c)
 */

void __fastcall MiRebuildLargePages(unsigned __int64 a1)
{
  unsigned __int64 v1; // r13
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned int i; // edx
  int v11; // edx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 *v13; // r15
  PRTL_BALANCED_NODE v14; // rax
  unsigned int v15; // ebp
  unsigned __int64 v16; // r11
  __int64 v17; // r8
  __int64 NodeStandbyPageCount; // rax
  __int64 v19; // r11
  int v20; // r8d
  unsigned __int64 v21; // rdx
  char v22; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v24; // rdi
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp+8h]
  char v29; // [rsp+88h] [rbp+10h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v28 = a1 >> 53;
  v1 = 16 * (a1 | 0xFFE0000000000000uLL);
  v2 = *(_QWORD *)(v1 + 0x10) + 1984 * (a1 >> 53);
  v3 = *(_QWORD *)(v2 + 1808);
  v29 = *(_BYTE *)(v2 + 851);
  v4 = v3 / 0xC8;
  if ( v3 / 0xC8 >= (-(__int64)(v29 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000 )
  {
    v5 = MiNodeLargeFreeZeroPages((_QWORD *)v2, 4u, 2);
    v6 = v5;
    if ( v5 < v4 )
    {
      v7 = MmNumberOfChannels;
      v8 = v4 - v5;
      v9 = 0LL;
      for ( i = 0; i < v7; i = v11 + 1 )
        v9 += MiNodeFreeZeroPages((_QWORD *)v2, i, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LockHandle.LockQueue.Next = 0LL;
      v13 = (unsigned __int64 *)(v2 + 1952);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v2 + 1952);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v2 + 1952));
      v14 = KeAbPreAcquire(v2, 0LL, 0);
      if ( v14 )
        BYTE2(v14[1].Left) |= 1u;
      if ( v9 >= v8 )
        goto LABEL_24;
      if ( v6 < 0x400 )
      {
        v15 = MmNumberOfChannels;
        v16 = 0LL;
        v17 = 0LL;
        if ( MmNumberOfChannels )
        {
          do
          {
            NodeStandbyPageCount = MiGetNodeStandbyPageCount(v1, (unsigned int)v28, v17);
            v16 = NodeStandbyPageCount + v19;
            v17 = (unsigned int)(v20 + 1);
          }
          while ( (unsigned int)v17 < v15 );
          v13 = (unsigned __int64 *)(v2 + 1952);
        }
        if ( v3 < 0x5000A )
          v21 = 0x8000LL;
        else
          v21 = v3 / 0xA;
        if ( v16 > v21 )
          v9 += (v16 - v21) / 0xC8;
      }
      if ( v9 >= v8 )
      {
LABEL_24:
        *(_BYTE *)(v2 + 851) = 0;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        v24 = MiRebuildLargePage(v1, (unsigned int)v28, v9);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = v13;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v13);
        if ( v24 )
        {
          v22 = 8;
        }
        else
        {
          if ( v29 )
            *(_BYTE *)(v2 + 851) = 1;
          v25 = *(_BYTE *)(v2 + 850);
          if ( v25 >= 0x80u )
            v22 = -1;
          else
            v22 = 2 * v25;
        }
      }
      else
      {
        v22 = 8;
      }
      *(_BYTE *)(v2 + 850) = v22;
      *(_BYTE *)(v2 + 848) = v22;
      *(_BYTE *)(v2 + 849) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v26 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v26);
      }
      __writecr8(CurrentIrql);
      KeAbPostRelease(v2);
    }
  }
  PsDereferencePartition(*(_QWORD *)(v1 + 168));
}
