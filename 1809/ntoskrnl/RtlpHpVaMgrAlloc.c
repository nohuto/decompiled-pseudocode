/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x14000D358
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x14000D2EC (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140009BEC (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x140009C60 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140009DF0 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x14000A318 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x14000A3F8 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpEnvFreeVA @ 0x14000D2A8 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFind @ 0x14000DCE0 (RtlpHpVaMgrRangeFind.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rdi
  unsigned __int8 v7; // dl
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // si
  _RTL_BALANCED_NODE *v11; // rax
  unsigned int SessionId; // r12d
  __int64 v13; // rdi
  struct _KTHREAD *v14; // rdi
  __int64 v15; // rdx
  unsigned __int8 v16; // r15
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rsi
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  __int64 v25; // r15
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  _KLOCK_ENTRY *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v37; // r15
  int v38; // [rsp+30h] [rbp-39h] BYREF
  int v39; // [rsp+34h] [rbp-35h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-31h] BYREF
  __int64 v41; // [rsp+40h] [rbp-29h] BYREF
  int v42; // [rsp+48h] [rbp-21h]
  int v43; // [rsp+4Ch] [rbp-1Dh]
  __int64 v44; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v45[4]; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v46[4]; // [rsp+78h] [rbp+Fh]

  v3 = *a2;
  v46[0] = 0x100000;
  v4 = a3;
  v46[1] = 0x100000;
  v46[2] = 0x200000;
  v46[3] = 0x40000000;
  if ( !v3 )
    __int2c();
  v7 = *(_BYTE *)(BugCheckParameter2 + 46);
  v8 = (unsigned __int64)(*(unsigned __int16 *)(BugCheckParameter2 + 40) << 20) >> 1;
  v40 = v3;
  if ( v3 <= v8 )
  {
    v9 = v3 >> 20;
    v10 = RtlpHpAcquireLockExclusive(BugCheckParameter2, v7 & 1);
    v11 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(
                                  BugCheckParameter2,
                                  (unsigned __int16)v9,
                                  (unsigned __int16)(v4 >> 20),
                                  &v44);
    SessionId = -1;
    v13 = (__int64)v11;
    if ( v11 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(BugCheckParameter2 + 8), v11);
      v37 = v44;
      if ( v44 != v13 )
      {
        *(_QWORD *)v13 = 0LL;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_BYTE *)v13 = 1;
        *(_BYTE *)(v13 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
        RtlpHpVaMgrRangeSplit(BugCheckParameter2, v13, (v37 - v13) >> 5);
        RtlpHpVaMgrFree(BugCheckParameter2);
        v13 = v37;
      }
LABEL_27:
      v25 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL)
          + ((v13 - *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 32LL)) >> *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 24)
                                                                                           + 88LL) << 20);
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = 0LL;
      *(_BYTE *)v13 = 1;
      *(_BYTE *)(v13 + 1) = *(_BYTE *)(BugCheckParameter2 + 44);
      if ( *(_WORD *)(v13 + 24) > (unsigned __int16)v9 )
      {
        RtlpHpVaMgrRangeSplit(BugCheckParameter2, v13, (unsigned __int16)v9);
        RtlpHpVaMgrFree(BugCheckParameter2);
      }
      v41 = v25;
      if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
        {
          _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick();
        }
        __writecr8(v10);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(BugCheckParameter2);
        v39 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        --CurrentThread->SpecialApcDisable;
        v27 = ++CurrentThread->AbAllocationRegionCount;
        LODWORD(v28) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v18 = !_BitScanReverse((unsigned int *)&v29, v28);
          v43 = v29;
          if ( v18 )
            break;
          v30 = 1 << v29;
          v31 = v29;
          v32 = &CurrentThread->LockEntries[v31];
          v28 = ~v30 & (unsigned int)v28;
          if ( (v32->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v32->LockState.0 & 1) == 0
            && (*(_QWORD *)&v32->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
            && v32->LockState.SessionId == SessionId )
          {
            v32->AcquiredByte &= ~1u;
            if ( v32->LockState.0 )
            {
              if ( v32 )
              {
                v32->CrossThreadReleasableAndBusyByte |= 2u;
                if ( (__int64)v32->LockState.LockState < 0 )
                  KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v31].TreeNode, v28);
                v39 = 0;
                v39 = v32->BoostBitmap.AllFields & 0x1FFFF;
                v32->BoostBitmap.AllFields &= 0xFFFE0000;
                v32->ThreadLocalFlags &= ~1u;
                v32->LockState.0 = 0LL;
                v33 = ((char *)v32 - (char *)CurrentThread - 800) / 96;
                if ( v27 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v33;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v33);
                goto LABEL_46;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
LABEL_46:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v39);
        v18 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v18
          && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v34);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
      return v41;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 46) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)BugCheckParameter2);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
      {
        _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick();
      }
      __writecr8(v10);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      v38 = 0;
      v14 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        v15 = (unsigned int)MmGetSessionIdEx(v14->ApcState.Process);
      else
        v15 = 0xFFFFFFFFLL;
      --v14->SpecialApcDisable;
      v16 = ++v14->AbAllocationRegionCount;
      v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
      v18 = !_BitScanReverse((unsigned int *)&v19, v17);
      v42 = v19;
      if ( v18 )
        goto LABEL_61;
      while ( 1 )
      {
        v20 = 1 << v19;
        v21 = v19;
        v22 = &v14->LockEntries[v21];
        v17 &= ~v20;
        if ( (v22->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v22->LockState.0 & 1) == 0
          && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
          && v22->LockState.SessionId == (_DWORD)v15 )
        {
          v22->AcquiredByte &= ~1u;
          if ( v22->LockState.0 )
            break;
        }
        v18 = !_BitScanReverse((unsigned int *)&v19, v17);
        v42 = v19;
        if ( v18 )
          goto LABEL_61;
      }
      if ( !v22 )
      {
LABEL_61:
        if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v14, BugCheckParameter2, (unsigned int)v15, 0LL);
      }
      else
      {
        v22->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v22->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v14->LockEntries[v21].TreeNode, v15);
        v38 = 0;
        v38 = v22->BoostBitmap.AllFields & 0x1FFFF;
        v22->BoostBitmap.AllFields &= 0xFFFE0000;
        v22->ThreadLocalFlags &= ~1u;
        v22->LockState.0 = 0LL;
        v23 = 1 << (((char *)v22 - (char *)v14 - 800) / 96);
        if ( v16 == 1 )
          v14->AbEntrySummary |= v23;
        else
          _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, v23);
      }
      --v14->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v14, BugCheckParameter2, &v38);
      v18 = v14->SpecialApcDisable++ == -1;
      if ( v18 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
        KiCheckForKernelApcDelivery(v24);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    v13 = RtlpHpVaMgrRegionAllocate(BugCheckParameter2);
    if ( v13 )
    {
      v10 = RtlpHpAcquireLockExclusive(BugCheckParameter2, *(_BYTE *)(BugCheckParameter2 + 46) & 1);
      goto LABEL_27;
    }
    return 0LL;
  }
  if ( a3 <= (unsigned int)v46[((unsigned __int64)v7 >> 1) & 3] )
    v4 = (unsigned int)v46[((unsigned __int64)v7 >> 1) & 3];
  v40 = v3 - ((v4 - 1) & (v4 + v3 - 1)) + v4 - 1;
  v41 = RtlpHpVaMgrAllocAligned(BugCheckParameter2, (int)&v40, v4);
  v35 = v41;
  if ( v41 )
  {
    memset(v45, 0, sizeof(v45));
    BYTE1(v45[0]) = *(_BYTE *)(BugCheckParameter2 + 44);
    v45[3] = v40 >> 20;
    LOBYTE(v45[0]) = 5;
    if ( RtlpHpVaMgrRangeCreate(BugCheckParameter2, v41, (__int64)v45) )
    {
      *a2 = v40;
      return v41;
    }
    RtlpHpEnvFreeVA((unsigned __int64 *)&v41, &v40, 0x8000LL);
    return 0LL;
  }
  return v35;
}
