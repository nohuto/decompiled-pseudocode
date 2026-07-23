/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x140008234
 * Callers:
 *     RtlpHpFreeVA @ 0x14000D214 (RtlpHpFreeVA.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpVaMgrRangeFree @ 0x140008544 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140009BEC (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x140009C60 (RtlpHpVaMgrFree.c)
 *     RtlSparseArrayElementAllocated @ 0x14000CB98 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpEnvFreeVA @ 0x14000D2A8 (RtlpHpEnvFreeVA.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MmFreePoolMemory @ 0x14007BD48 (MmFreePoolMemory.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlSparseArrayElementFindCapped @ 0x1402FE1D0 (RtlSparseArrayElementFindCapped.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxFree(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // rsi
  _BYTE *v8; // rax
  _BYTE *v9; // rbx
  unsigned __int8 v10; // dl
  ULONG_PTR v11; // rdi
  _BYTE *v12; // rdx
  __int64 result; // rax
  unsigned __int8 v14; // cl
  _BYTE *v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  _BYTE *v18; // rsi
  unsigned __int8 v19; // bp
  __int64 v20; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v23; // bp
  unsigned int v24; // r8d
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 Capped; // rbx
  int v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+68h] [rbp+10h]

  v3 = a1 + 16;
  v5 = *a3 >> 20;
  v8 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v9 = v8;
  if ( !v8 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               v3,
               (*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL,
               ~((*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL));
    result = RtlpHpEnvFreeVA(a2, a3, 0x8000LL);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return result;
  }
  v10 = *v8;
  v11 = 48LL * (unsigned __int8)v8[1] + a1 + 112;
  if ( (*v8 & 4) != 0 )
  {
    *v8 = v10 & 0xFE;
    v12 = v8;
    return RtlpHpVaMgrRangeFree(v11, v12);
  }
  v14 = *(_BYTE *)(v11 + 46);
  if ( (v14 & 6u) < 4 )
  {
    MmFreePoolMemory(a2, a3, 0x4000LL);
    v10 = *v9;
    v14 = *(_BYTE *)(v11 + 46);
  }
  v15 = v9;
  if ( (v10 & 2) != 0 )
  {
    v18 = v9;
    do
      v9 -= 32;
    while ( (*v9 & 2) != 0 );
    v14 = *(_BYTE *)(v11 + 46);
  }
  else
  {
    if ( ((v14 >> 4) & (unsigned __int8)~(v10 >> 2) & 1) == 0 )
    {
      v16 = (v10 & 4) != 0 ? *((_QWORD *)v9 + 3) : *((unsigned __int16 *)v9 + 12);
      if ( v5 != v16 )
        __int2c();
    }
    if ( (v10 & 4) != 0 )
      v17 = *((_QWORD *)v9 + 3);
    else
      v17 = *((unsigned __int16 *)v9 + 12);
    if ( v5 < v17 )
      v18 = &v9[32 * v5];
    else
      v18 = 0LL;
  }
  v19 = RtlpHpAcquireLockExclusive(v11, v14 & 1);
  if ( v18 )
    RtlpHpVaMgrRangeSplit(v11, v9, (v18 - v9) >> 5);
  v20 = RtlpHpVaMgrFree(v11, v15);
  if ( (*(_BYTE *)(v11 + 46) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v11);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
    {
      _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick();
    }
    result = v19;
    __writecr8(v19);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
    v33 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v11) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v23 = ++CurrentThread->AbAllocationRegionCount;
    v24 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v25 = !_BitScanReverse((unsigned int *)&v26, v24);
      v34 = v26;
      if ( v25 )
        break;
      v27 = 1 << v26;
      v28 = v26;
      v29 = &CurrentThread->LockEntries[v28];
      v24 &= ~v27;
      if ( (v29->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v29->LockState.0 & 1) == 0
        && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v11 & 0x7FFFFFFFFFFFFFFCLL)
        && v29->LockState.SessionId == (_DWORD)SessionId )
      {
        v29->AcquiredByte &= ~1u;
        if ( v29->LockState.0 )
        {
          if ( v29 )
          {
            v29->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v29->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v28].TreeNode, SessionId);
            v33 = 0;
            v33 = v29->BoostBitmap.AllFields & 0x1FFFF;
            v29->BoostBitmap.AllFields &= 0xFFFE0000;
            v29->ThreadLocalFlags &= ~1u;
            v29->LockState.0 = 0LL;
            v30 = ((char *)v29 - (char *)CurrentThread - 800) / 96;
            if ( v23 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v30;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v30);
            goto LABEL_37;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v11, (unsigned int)SessionId, 0LL);
LABEL_37:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(CurrentThread, v11, &v33);
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v31);
    result = KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  if ( v20 )
  {
    v12 = (_BYTE *)v20;
    return RtlpHpVaMgrRangeFree(v11, v12);
  }
  return result;
}
