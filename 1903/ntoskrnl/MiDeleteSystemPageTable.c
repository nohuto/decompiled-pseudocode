/*
 * XREFs of MiDeleteSystemPageTable @ 0x140122490
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiEvictPageTableLock @ 0x14005E164 (MiEvictPageTableLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiAddSystemPageTableToList @ 0x14012266C (MiAddSystemPageTableToList.c)
 *     MiReplicatePteChange @ 0x14017E240 (MiReplicatePteChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemoryUlong @ 0x1401CC270 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiDeleteSystemPageTable(__int64 a1, unsigned __int64 a2, signed int a3)
{
  __int64 v3; // r13
  __int64 v6; // r14
  char v8; // bp
  int v9; // r12d
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v15; // r9
  unsigned __int64 LeafVa; // rax
  BOOL v17; // esi
  __int64 v18; // rdx
  int v19; // r8d
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 160);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(v3 + 16);
  v26 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = v26;
  if ( (v26 & 1) == 0 )
    return 0LL;
  v9 = 0;
  v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFLL;
  v12 = 0xFFFFF68000000000uLL;
  if ( v8 >= 0 )
  {
    v13 = 48 * v10 - 0x58000000000LL;
    if ( a3 <= ((*(unsigned __int8 *)(a1 + 2) >> 2) & 7) )
    {
      v15 = 0LL;
    }
    else
    {
      if ( (*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) != v11
        || *(_WORD *)(v13 + 32) != (_WORD)v11
        || RtlCompareMemoryUlong((PVOID)((__int64)(a2 << 25) >> 16), 0x1000uLL, 0) != 4096 )
      {
        return 0LL;
      }
      v15 = 1LL;
    }
    if ( a3 >= 1 )
    {
      if ( !(unsigned int)MiEvictPageTableLock(*(_QWORD *)(a1 + 16), a2, ZeroPte, v15) )
        return 0LL;
      v9 = 1;
    }
    MiAddSystemPageTableToList(v3 + 8, v13, v12, v15, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
  }
  if ( a3 >= 1 && v8 < 0 )
  {
    MiInsertLargeTbFlushEntry(v6, a3, a2);
  }
  else
  {
    MiInsertTbFlushEntry(v6, (__int64)(a2 << 25) >> 16, 1LL, 0);
    if ( a3 == 1 )
    {
      LeafVa = MiGetLeafVa(a2);
      MiInsertTbFlushEntry(v6, LeafVa, 512LL, 0);
    }
  }
  if ( !v9 )
  {
    v17 = MiPteInShadowRange(a2);
    if ( a3 == 3 )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v18 = ZeroPte;
      v19 = 0;
      if ( v17 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v19 = 1;
          if ( HIBYTE(word_140465BEC) )
            goto LABEL_30;
LABEL_28:
          if ( (v18 & 1) != 0 )
            v18 |= 0x8000000000000000uLL;
          goto LABEL_30;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          goto LABEL_28;
      }
LABEL_30:
      *(_QWORD *)a2 = v18;
      if ( v19 )
        MiWritePteShadow(a2);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      goto LABEL_38;
    }
    v23 = ZeroPte;
    v24 = 0;
    if ( v17 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v24 = 1;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_46;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
      {
        goto LABEL_46;
      }
      if ( (v23 & 1) != 0 )
        v23 |= 0x8000000000000000uLL;
    }
LABEL_46:
    *(_QWORD *)a2 = v23;
    if ( v24 )
      MiWritePteShadow(a2);
  }
  if ( a3 == 3 )
  {
LABEL_38:
    v22 = MiGetLeafVa(a2);
    MiReplicatePteChange(
      ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  return 0LL;
}
