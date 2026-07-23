/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x14010F224
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x14010F1B8 (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     RtlRbRemoveNode @ 0x140063870 (RtlRbRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x14010DE74 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpEnvFreeVA @ 0x14010E478 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeCreate @ 0x14010F8B8 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x14010FF0C (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeFind @ 0x140110D74 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrFree @ 0x1401113F8 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140111578 (RtlpHpVaMgrRangeSplit.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // r14
  unsigned __int8 v7; // dl
  unsigned __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // r14
  KIRQL v11; // si
  _RTL_BALANCED_NODE *v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r15
  struct _KTHREAD *v18; // rdi
  unsigned __int8 v19; // r14
  unsigned int v20; // edx
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _KLOCK_ENTRY *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // edx
  struct _KPRCB *v30; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v32; // r15
  unsigned int v33; // r8d
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  _KLOCK_ENTRY *v37; // rsi
  unsigned __int8 v38; // al
  __int64 v39; // rcx
  int v40; // [rsp+30h] [rbp-39h] BYREF
  int v41; // [rsp+34h] [rbp-35h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-31h] BYREF
  __int64 v43; // [rsp+40h] [rbp-29h] BYREF
  int v44; // [rsp+48h] [rbp-21h]
  int v45; // [rsp+4Ch] [rbp-1Dh]
  __int64 v46; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v47[4]; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v48[4]; // [rsp+78h] [rbp+Fh]

  memset(v47, 0, sizeof(v47));
  v6 = *a2;
  v48[0] = 0x100000;
  v48[1] = 0x100000;
  v48[2] = 0x200000;
  v48[3] = 0x40000000;
  if ( !v6 )
    __int2c();
  v7 = *(_BYTE *)(BugCheckParameter2 + 46);
  v8 = (unsigned __int64)(*(unsigned __int16 *)(BugCheckParameter2 + 40) << 20) >> 1;
  v42 = v6;
  if ( v6 <= v8 )
  {
    v10 = v6 >> 20;
    v11 = RtlpHpAcquireLockExclusive((volatile LONG *)BugCheckParameter2, v7 & 1);
    v12 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(
                                  BugCheckParameter2,
                                  (unsigned __int16)v10,
                                  (unsigned __int16)(a3 >> 20),
                                  &v46);
    v13 = -1;
    v14 = (__int64)v12;
    if ( v12 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(BugCheckParameter2 + 8), v12);
      v17 = v46;
      if ( v46 != v14 )
      {
        *(_QWORD *)v14 = 0LL;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = 0LL;
        *(_BYTE *)v14 = 1;
        *(_BYTE *)(v14 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
        RtlpHpVaMgrRangeSplit(BugCheckParameter2, v14, (v17 - v14) >> 5);
        RtlpHpVaMgrFree(BugCheckParameter2, v14);
        v14 = v17;
      }
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v11);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        v40 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v32 = ++CurrentThread->AbAllocationRegionCount;
        v33 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v21 = !_BitScanReverse((unsigned int *)&v34, v33);
        v44 = v34;
        if ( v21 )
          goto LABEL_62;
        while ( 1 )
        {
          v35 = 1 << v34;
          v36 = v34;
          v37 = &CurrentThread->LockEntries[v36];
          v33 &= ~v35;
          if ( (v37->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v37->LockState.0 & 1) == 0
            && (*(_QWORD *)&v37->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
            && v37->LockState.SessionId == SessionId )
          {
            v37->AcquiredByte &= ~1u;
            if ( v37->LockState.0 )
              break;
          }
          v21 = !_BitScanReverse((unsigned int *)&v34, v33);
          v44 = v34;
          if ( v21 )
            goto LABEL_62;
        }
        if ( !v37 )
        {
LABEL_62:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
        }
        else
        {
          v37->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v37->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v36].TreeNode);
          v40 = v37->BoostBitmap.AllFields & 0x1FFFF;
          v37->BoostBitmap.AllFields &= 0xFFFE0000;
          v37->ThreadLocalFlags &= ~1u;
          v37->LockState.0 = 0LL;
          v38 = 1 << (((char *)v37 - (char *)CurrentThread - 800) / 96);
          if ( v32 == 1 )
            CurrentThread->AbEntrySummary |= v38;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v38);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v40);
        v21 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v21
          && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v39);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      v14 = RtlpHpVaMgrRegionAllocate(BugCheckParameter2);
      if ( !v14 )
        return 0LL;
      v11 = RtlpHpAcquireLockExclusive((volatile LONG *)BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
    }
    v15 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL)
        + ((v14 - *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 24)
                                                                                         + 24LL) << 20);
    *(_QWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_BYTE *)v14 = 1;
    *(_BYTE *)(v14 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
    if ( *(_WORD *)(v14 + 24) > (unsigned __int16)v10 )
    {
      v16 = RtlpHpVaMgrRangeSplit(BugCheckParameter2, v14, (unsigned __int16)v10);
      RtlpHpVaMgrFree(BugCheckParameter2, v16);
    }
    v43 = v15;
    if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        v30 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v30);
      }
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      v41 = 0;
      v18 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        v13 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
      --v18->SpecialApcDisable;
      v19 = ++v18->AbAllocationRegionCount;
      v20 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v21 = !_BitScanReverse((unsigned int *)&v22, v20);
        v45 = v22;
        if ( v21 )
          break;
        v23 = 1 << v22;
        v24 = v22;
        v25 = &v18->LockEntries[v24];
        v20 &= ~v23;
        if ( (v25->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v25->LockState.0 & 1) == 0
          && (*(_QWORD *)&v25->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && v25->LockState.SessionId == v13 )
        {
          v25->AcquiredByte &= ~1u;
          if ( v25->LockState.0 )
          {
            if ( v25 )
            {
              v25->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v25->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v18->LockEntries[v24].TreeNode);
              v41 = v25->BoostBitmap.AllFields & 0x1FFFF;
              v25->BoostBitmap.AllFields &= 0xFFFE0000;
              v25->ThreadLocalFlags &= ~1u;
              v25->LockState.0 = 0LL;
              v26 = ((char *)v25 - (char *)v18 - 800) / 96;
              if ( v19 == 1 )
                v18->AbEntrySummary |= 1 << v26;
              else
                _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v26);
              goto LABEL_40;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v18, BugCheckParameter2, v13, 0LL);
LABEL_40:
      --v18->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v18, BugCheckParameter2, &v41);
      v21 = v18->SpecialApcDisable++ == -1;
      if ( v21 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
        KiCheckForKernelApcDelivery(v27);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    return v43;
  }
  if ( a3 <= (unsigned int)v48[((unsigned __int64)v7 >> 1) & 3] )
    a3 = (unsigned int)v48[((unsigned __int64)v7 >> 1) & 3];
  v42 = v6 - ((a3 - 1) & (a3 + v6 - 1)) + a3 - 1;
  result = RtlpHpVaMgrAllocAligned(BugCheckParameter2, &v42);
  v43 = result;
  if ( result )
  {
    BYTE1(v47[0]) = *(_BYTE *)(BugCheckParameter2 + 44);
    v47[3] = v42 >> 20;
    LOBYTE(v47[0]) = 5;
    if ( RtlpHpVaMgrRangeCreate(BugCheckParameter2, result, v47) )
    {
      *a2 = v42;
      return v43;
    }
    RtlpHpEnvFreeVA((unsigned __int64 *)&v43, &v42, 0x8000LL);
    return 0LL;
  }
  return result;
}
