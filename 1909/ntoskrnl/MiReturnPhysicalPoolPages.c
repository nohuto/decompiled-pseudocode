/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x140110524
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x140023500 (MiReturnExcessPoolCommit.c)
 *     MiGetPoolPages @ 0x14007C1AC (MiGetPoolPages.c)
 *     MiClearNonPagedPtes @ 0x14010DDA8 (MiClearNonPagedPtes.c)
 *     MiAddExpansionNonPagedPool @ 0x140188CD4 (MiAddExpansionNonPagedPool.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiReturnPoolCharges @ 0x14011072C (MiReturnPoolCharges.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiReturnPhysicalPoolPages(__int64 a1, char a2)
{
  _QWORD *v4; // r12
  __int64 v5; // r14
  int v6; // edi
  __int64 v7; // r13
  unsigned __int8 v8; // r15
  unsigned __int64 v9; // rsi
  _SLIST_HEADER *v10; // rbx
  unsigned __int8 OldIrql; // bl
  unsigned __int64 v13; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v18[7]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+48h]
  int v20; // [rsp+C8h] [rbp+50h]
  _QWORD *v21; // [rsp+D0h] [rbp+58h]
  _QWORD *v22; // [rsp+D8h] [rbp+60h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v18, 0, 0x30uLL);
  v4 = 0LL;
  v16 = *(_QWORD *)(a1 + 40) >> 58;
  v5 = 0LL;
  v19 = 0LL;
  v20 = a2 & 2;
  v6 = a2 & 1;
  do
  {
    v7 = *(_QWORD *)a1;
    v22 = v4;
    v21 = v4;
    v8 = MiLockPageInline(a1);
    if ( !v20 )
    {
      v13 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 24) = v13 | 1;
    }
    if ( !v6 && (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
    {
      ++v5;
      v4 = (_QWORD *)a1;
      v9 = a1;
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
      *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(a1 + 32) = 0;
      if ( v21 )
        v4 = v22;
      *(_QWORD *)(a1 + 8) = -8LL;
      *(_QWORD *)a1 = v19;
      v19 = a1;
    }
    else
    {
      *(_WORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
      v9 = v19;
      ++v18[0];
      ++v18[3];
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v8);
    a1 = v7;
  }
  while ( v7 );
  if ( v5 )
  {
    v10 = &qword_140465758[11 * v16];
    KeAcquireInStackQueuedSpinLock(&v10[9].Alignment, &LockHandle);
    *v4 = v10[9].Region;
    v10[8].Region += v5;
    v10[9].Region = v9;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v15 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v15);
    }
    __writecr8(OldIrql);
  }
  return MiReturnPoolCharges(v18, (unsigned int)(2 * v6));
}
