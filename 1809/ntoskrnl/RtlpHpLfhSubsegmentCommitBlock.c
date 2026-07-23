/*
 * XREFs of RtlpHpLfhSubsegmentCommitBlock @ 0x1402FD508
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1402FD820 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402FDDF0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCommitBlock(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  unsigned int SessionId; // r12d
  int v8; // r15d
  char v10; // cl
  unsigned int v11; // r15d
  int v12; // r13d
  unsigned __int64 v13; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v15; // r15
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v25; // [rsp+40h] [rbp-10h] BYREF
  int v26; // [rsp+44h] [rbp-Ch]
  int v27; // [rsp+48h] [rbp-8h]
  unsigned __int8 v28; // [rsp+98h] [rbp+48h] BYREF
  int v29; // [rsp+A8h] [rbp+58h] BYREF

  v28 = -1;
  v6 = (unsigned __int16)qword_14040F0E8 ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)((unsigned int)a2 >> 12);
  SessionId = -1;
  v8 = RtlpHpLfhSubsegmentIncBlockCounts(a1, a2, a3, v6, (__int64)&v25, 0, (__int64)&v28);
  if ( v8 == -1 )
    return 0LL;
  v10 = *(_BYTE *)(a2 + 44);
  v11 = v8 << v10;
  v12 = v25 << v10;
  v26 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
          *(_QWORD *)a1,
          a2 + v11,
          (unsigned int)(v25 << v10));
  if ( v26 >= 0 )
  {
    RtlpHpLfhSubsegmentIncBlockCounts(a1, a2, v11, v12, (__int64)&v25, 1, (__int64)&v28);
    return 0LL;
  }
  RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, a3, v6);
  v13 = a2 + 24;
  if ( *(_BYTE *)(a1 + 57) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v13);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v28);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13);
    v29 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v13) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    --CurrentThread->SpecialApcDisable;
    v15 = ++CurrentThread->AbAllocationRegionCount;
    LODWORD(v16) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v21, v16);
      v27 = v21;
      if ( v20 )
        goto LABEL_17;
      v17 = 1 << v21;
      v18 = v21;
      v19 = &CurrentThread->LockEntries[v18];
      v16 = ~v17 & (unsigned int)v16;
      if ( (v19->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v19->LockState.0 & 1) == 0
        && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
        && v19->LockState.SessionId == SessionId )
      {
        v19->AcquiredByte &= ~1u;
        if ( v19->LockState.0 )
          break;
      }
    }
    if ( !v19 )
    {
LABEL_17:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v13, SessionId, 0LL);
      goto LABEL_24;
    }
    v19->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v19->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v18].TreeNode, v16);
    v29 = 0;
    v29 = v19->BoostBitmap.AllFields & 0x1FFFF;
    v19->BoostBitmap.AllFields &= 0xFFFE0000;
    v19->ThreadLocalFlags &= ~1u;
    v19->LockState.0 = 0LL;
    v22 = ((char *)v19 - (char *)CurrentThread - 800) / 96;
    if ( v15 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v22;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v22);
LABEL_24:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v13, (__int64)&v29);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v23);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v26;
}
