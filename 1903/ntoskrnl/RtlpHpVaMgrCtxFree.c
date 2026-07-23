/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x14010E80C
 * Callers:
 *     RtlpHpFreeVA @ 0x14010E3E4 (RtlpHpFreeVA.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 *     RtlSparseArrayElementAllocated @ 0x14001FEAC (RtlSparseArrayElementAllocated.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpHpVaMgrRangeFree @ 0x14010E37C (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpEnvFreeVA @ 0x14010E478 (RtlpHpEnvFreeVA.c)
 *     MmFreePoolMemory @ 0x14010E4BC (MmFreePoolMemory.c)
 *     RtlpHpVaMgrFree @ 0x1401113F8 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140111578 (RtlpHpVaMgrRangeSplit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlSparseArrayElementFindCapped @ 0x14031BEF8 (RtlSparseArrayElementFindCapped.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxFree(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  unsigned __int8 v9; // dl
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int8 v13; // cl
  _BYTE *v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  _BYTE *v17; // rsi
  KIRQL v18; // bp
  __int64 v19; // r14
  __int64 Capped; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v23; // bp
  unsigned int v24; // r8d
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+68h] [rbp+10h]

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~((__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    result = RtlpHpEnvFreeVA(a2, a3, 0x8000LL);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return result;
  }
  v9 = *v7;
  v10 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    *v7 = v9 & 0xFE;
    v11 = (__int64)v7;
    return RtlpHpVaMgrRangeFree(v10, v11);
  }
  v13 = *(_BYTE *)(v10 + 46);
  if ( (v13 & 6u) < 4 )
  {
    MmFreePoolMemory(a2, a3);
    v9 = *v8;
    v13 = *(_BYTE *)(v10 + 46);
  }
  v14 = v8;
  if ( (v9 & 2) != 0 )
  {
    v17 = v8;
    do
      v8 -= 32;
    while ( (*v8 & 2) != 0 );
    v13 = *(_BYTE *)(v10 + 46);
  }
  else
  {
    if ( ((v13 >> 4) & (unsigned __int8)~(v9 >> 2) & 1) == 0 )
    {
      v15 = (v9 & 4) != 0 ? *((_QWORD *)v8 + 3) : *((unsigned __int16 *)v8 + 12);
      if ( v6 != v15 )
        __int2c();
    }
    if ( (v9 & 4) != 0 )
      v16 = *((_QWORD *)v8 + 3);
    else
      v16 = *((unsigned __int16 *)v8 + 12);
    if ( v6 < v16 )
      v17 = &v8[32 * v6];
    else
      v17 = 0LL;
  }
  v18 = RtlpHpAcquireLockExclusive((volatile LONG *)v10, v13 & 1);
  if ( v17 )
    RtlpHpVaMgrRangeSplit(v10, v8, (v17 - v8) >> 5);
  v19 = RtlpHpVaMgrFree(v10, v14);
  if ( (*(_BYTE *)(v10 + 46) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v10);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v18;
    __writecr8(v18);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    v33 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v10) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v23 = ++CurrentThread->AbAllocationRegionCount;
    v24 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v25 = !_BitScanReverse((unsigned int *)&v26, v24);
      v34 = v26;
      if ( v25 )
        goto LABEL_39;
      v27 = 1 << v26;
      v28 = v26;
      v29 = &CurrentThread->LockEntries[v28];
      v24 &= ~v27;
      if ( (v29->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v29->LockState.0 & 1) == 0
        && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v10 & 0x7FFFFFFFFFFFFFFCLL)
        && v29->LockState.SessionId == SessionId )
      {
        v29->AcquiredByte &= ~1u;
        if ( v29->LockState.0 )
          break;
      }
    }
    if ( !v29 )
    {
LABEL_39:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v10, SessionId, 0LL);
      goto LABEL_51;
    }
    v29->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v29->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v28].TreeNode);
    v33 = v29->BoostBitmap.AllFields & 0x1FFFF;
    v29->BoostBitmap.AllFields &= 0xFFFE0000;
    v29->ThreadLocalFlags &= ~1u;
    v29->LockState.0 = 0LL;
    v30 = ((char *)v29 - (char *)CurrentThread - 800) / 96;
    if ( v23 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v30;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v30);
LABEL_51:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v10, &v33);
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v31);
    result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v19 )
  {
    v11 = v19;
    return RtlpHpVaMgrRangeFree(v10, v11);
  }
  return result;
}
