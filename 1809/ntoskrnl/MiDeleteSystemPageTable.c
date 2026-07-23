/*
 * XREFs of MiDeleteSystemPageTable @ 0x14011F0C0
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiEvictPageTableLock @ 0x1400982E0 (MiEvictPageTableLock.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiAddSystemPageTableToList @ 0x14011F298 (MiAddSystemPageTableToList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x140175014 (MiReplicatePteChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlCompareMemoryUlong @ 0x1401C5DB0 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiDeleteSystemPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v6; // r15
  char v8; // bp
  int v9; // r12d
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v15; // r9
  unsigned __int64 LeafVa; // rax
  __int64 v17; // rcx
  BOOL v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r8d
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(v3 + 16);
  v28 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = v28;
  if ( (v28 & 1) == 0 )
    return 0LL;
  v9 = 0;
  v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFLL;
  v12 = 0xFFFFF68000000000uLL;
  if ( v8 >= 0 )
  {
    v13 = 48 * v10 - 0x58000000000LL;
    if ( a3 <= *(unsigned __int8 *)(a1 + 10) )
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
      if ( !(unsigned int)MiEvictPageTableLock(*(_QWORD *)(a1 + 24), a2, ZeroPte, v15) )
        return 0LL;
      v9 = 1;
    }
    MiAddSystemPageTableToList(v3 + 8, v13, v12, v15, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
  }
  if ( a3 >= 1 && v8 < 0 )
  {
    MiInsertLargeTbFlushEntry(v6, (unsigned int)a3, a2);
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
    v18 = MiPteInShadowRange(a2);
    if ( a3 == 3 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
      v20 = ZeroPte;
      v21 = 0;
      if ( v18 )
      {
        if ( (unsigned int)MiPteHasShadow(v19, ZeroPte) )
        {
          v21 = 1;
          if ( HIBYTE(word_14043B26C) )
            goto LABEL_30;
LABEL_28:
          if ( (v20 & 1) != 0 )
            v20 |= 0x8000000000000000uLL;
          goto LABEL_30;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          goto LABEL_28;
      }
LABEL_30:
      *(_QWORD *)a2 = v20;
      if ( v21 )
        MiWritePteShadow(a2);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
    v25 = ZeroPte;
    v26 = 0;
    if ( v18 )
    {
      if ( (unsigned int)MiPteHasShadow(v17, ZeroPte) )
      {
        v26 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_46;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
      {
        goto LABEL_46;
      }
      if ( (v25 & 1) != 0 )
        v25 |= 0x8000000000000000uLL;
    }
LABEL_46:
    *(_QWORD *)a2 = v25;
    if ( v26 )
      MiWritePteShadow(a2);
  }
  if ( a3 == 3 )
  {
LABEL_38:
    v24 = MiGetLeafVa(a2);
    MiReplicatePteChange(
      ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  return 0LL;
}
