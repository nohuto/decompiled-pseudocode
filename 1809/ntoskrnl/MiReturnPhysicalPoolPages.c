/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x140025380
 * Callers:
 *     MiClearNonPagedPtes @ 0x1400282C4 (MiClearNonPagedPtes.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     MiGetPoolPages @ 0x1400CB2A0 (MiGetPoolPages.c)
 *     MiAddExpansionNonPagedPool @ 0x14017FB0C (MiAddExpansionNonPagedPool.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x140023984 (MiReturnPoolCharges.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __fastcall MiReturnPhysicalPoolPages(unsigned __int64 a1, char a2)
{
  int v4; // r13d
  unsigned __int64 v5; // r9
  unsigned __int64 *v6; // rdi
  __int64 v7; // r8
  int v8; // r14d
  unsigned __int64 v9; // rsi
  unsigned __int64 *v10; // r12
  unsigned __int64 *v11; // r15
  unsigned __int8 CurrentIrql; // bp
  char v13; // al
  _SLIST_HEADER *v14; // rbx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v20[15]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+8h]
  int v22; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+D0h] [rbp+18h]
  unsigned __int64 *v24; // [rsp+D8h] [rbp+20h]

  memset(v20, 0, 0x28uLL);
  v4 = a2 & 2;
  v18 = *(_QWORD *)(a1 + 40) >> 58;
  v5 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v6 = 0LL;
  v21 = 0LL;
  v7 = 0LL;
  v8 = a2 & 1;
  while ( 1 )
  {
    v9 = *(_QWORD *)a1;
    v10 = v6;
    v11 = v6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v22 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v22);
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
      v7 = v21;
      v5 = v23;
    }
    if ( !v4 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
      *(_WORD *)(a1 + 32) = 1;
    }
    if ( !v8 && (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
    {
      ++v7;
      v13 = *(_BYTE *)(a1 + 34) & 0xFD;
      v23 = a1;
      v21 = v7;
      *(_BYTE *)(a1 + 34) = v13 | 5;
      v6 = (unsigned __int64 *)a1;
      *(_WORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(a1 + 8) = -8LL;
      *(_QWORD *)a1 = v5;
      if ( v11 )
        v6 = v10;
      v24 = v6;
    }
    else
    {
      *(_WORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48);
      ++v20[0];
      ++v20[3];
      v6 = v24;
      v7 = v21;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v7 = v21;
    }
    __writecr8(CurrentIrql);
    a1 = v9;
    if ( !v9 )
      break;
    v5 = v23;
  }
  if ( v7 )
  {
    v14 = &qword_14043B118[25 * v18];
    KeAcquireInStackQueuedSpinLock(&v14[19].Alignment, &LockHandle);
    *v6 = v14[19].Region;
    v14[19].Region = v23;
    v14[18].Region += v21;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v17);
    }
    __writecr8(OldIrql);
  }
  MiReturnPoolCharges(v20, 2 * v8);
}
