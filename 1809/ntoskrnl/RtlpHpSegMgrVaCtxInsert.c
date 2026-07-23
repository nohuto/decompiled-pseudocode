/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x14000780C
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x14000AC04 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpQueryVA @ 0x14000A390 (RtlpHpQueryVA.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  __int16 *v3; // r14
  ULONG_PTR v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // al
  unsigned __int8 v7; // bp
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v11; // bp
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int128 v20[4]; // [rsp+30h] [rbp-48h] BYREF
  int v21; // [rsp+80h] [rbp+8h] BYREF
  int v22; // [rsp+90h] [rbp+18h]
  __int16 *v23; // [rsp+98h] [rbp+20h] BYREF

  v20[0] = *(_OWORD *)(a1 + 40);
  RtlpHpQueryVA(a2, v20, &v23, 0LL);
  v3 = v23;
  if ( *v23 < 0 )
  {
    *v23 ^= (*v23 ^ (*v23 + 1)) & 0x7FF;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), 1uLL);
    v3 = v23;
  }
  v4 = a1 + 112;
  v5 = (unsigned __int64)(unsigned __int16)*v3 >> 15;
  v6 = RtlpHpAcquireLockExclusive(a1 + 112, *(_DWORD *)(a1 + 40) & 1);
  *((_QWORD *)v3 + 1) = *(_QWORD *)(a1 + 8 * v5 + 120);
  v7 = v6;
  *(_QWORD *)(a1 + 8 * v5 + 120) = v3 + 4;
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick();
    }
    result = v7;
    __writecr8(v7);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    v21 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v11 = ++CurrentThread->AbAllocationRegionCount;
    v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v13 = !_BitScanReverse((unsigned int *)&v14, v12);
      v22 = v14;
      if ( v13 )
        goto LABEL_13;
      v15 = 1 << v14;
      v16 = v14;
      v17 = &CurrentThread->LockEntries[v16];
      v12 &= ~v15;
      if ( (v17->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v17->LockState.0 & 1) == 0
        && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
        && v17->LockState.SessionId == (_DWORD)SessionId )
      {
        v17->AcquiredByte &= ~1u;
        if ( v17->LockState.0 )
          break;
      }
    }
    if ( !v17 )
    {
LABEL_13:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, (unsigned int)SessionId, 0LL);
      goto LABEL_25;
    }
    v17->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v17->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v16].TreeNode, SessionId);
    v21 = 0;
    v21 = v17->BoostBitmap.AllFields & 0x1FFFF;
    v17->BoostBitmap.AllFields &= 0xFFFE0000;
    v17->ThreadLocalFlags &= ~1u;
    v17->LockState.0 = 0LL;
    v18 = ((char *)v17 - (char *)CurrentThread - 800) / 96;
    if ( v11 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v18;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
LABEL_25:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(CurrentThread, v4, &v21);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v19);
    return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return result;
}
