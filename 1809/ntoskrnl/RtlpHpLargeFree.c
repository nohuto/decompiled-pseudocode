/*
 * XREFs of RtlpHpLargeFree @ 0x140007D8C
 * Callers:
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpMetadataFree @ 0x1400080A4 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1400081A8 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquire @ 0x1400097B4 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpFreeVA @ 0x14000D214 (RtlpHpFreeVA.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int128 *a1, __int64 a2, unsigned int a3)
{
  char v3; // di
  unsigned __int8 v5; // r14
  _RTL_BALANCED_NODE *Metadata; // rax
  __int64 v7; // rbx
  int v8; // edi
  _RTL_BALANCED_NODE *v9; // r12
  volatile signed __int64 *v10; // r15
  _RTL_BALANCED_NODE *v11; // rax
  char v12; // cl
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 SessionId; // rdx
  int v17; // r8d
  unsigned int v18; // r8d
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  volatile signed __int64 *v26; // r15
  struct _KTHREAD *v27; // rdi
  __int64 v28; // rdx
  unsigned __int8 v29; // r12
  unsigned int v30; // r8d
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  _KLOCK_ENTRY *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v38[3]; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-30h] BYREF
  __int128 v40; // [rsp+50h] [rbp-20h] BYREF
  __int128 v41; // [rsp+60h] [rbp-10h] BYREF
  __int64 v42; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+C8h] [rbp+58h]

  v42 = a2;
  v3 = a3;
  v5 = RtlpHpLargeLockAcquire(a1, a3);
  Metadata = (_RTL_BALANCED_NODE *)RtlpHpLargeAllocGetMetadata(a1, v42);
  v7 = 0LL;
  v8 = v3 & 1;
  v9 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)((char *)a1 + 72), Metadata);
    if ( !v8 )
    {
      v10 = (volatile signed __int64 *)(a1 + 4);
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 16);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
        {
          _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick();
        }
        __writecr8(v5);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 4);
        v38[0] = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 4) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        ++CurrentThread->AbAllocationRegionCount;
        v17 = (char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary;
        AbAllocationRegionCount = CurrentThread->AbAllocationRegionCount;
        v18 = v17 ^ 0x3F;
        while ( 1 )
        {
          v19 = !_BitScanReverse((unsigned int *)&v20, v18);
          v38[2] = v20;
          if ( v19 )
            break;
          v21 = 1 << v20;
          v22 = v20;
          v23 = &CurrentThread->LockEntries[v22];
          v18 &= ~v21;
          if ( (v23->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v23->LockState.0 & 1) == 0
            && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v10 & 0x7FFFFFFFFFFFFFFCLL)
            && v23->LockState.SessionId == (_DWORD)SessionId )
          {
            v23->AcquiredByte &= ~1u;
            if ( v23->LockState.0 )
            {
              if ( v23 )
              {
                v23->CrossThreadReleasableAndBusyByte |= 2u;
                if ( (__int64)v23->LockState.LockState < 0 )
                  KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v22].TreeNode, SessionId);
                v38[0] = 0;
                v38[0] = v23->BoostBitmap.AllFields & 0x1FFFF;
                v23->BoostBitmap.AllFields &= 0xFFFE0000;
                v23->ThreadLocalFlags &= ~1u;
                v23->LockState.0 = 0LL;
                v24 = ((char *)v23 - (char *)CurrentThread - 800) / 96;
                if ( AbAllocationRegionCount == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v24;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v24);
                goto LABEL_24;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)(a1 + 4), (unsigned int)SessionId, 0LL);
LABEL_24:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(CurrentThread, a1 + 4, v38);
        v19 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v19
          && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v25);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
    v11 = v9[1].Children[1];
    v12 = (unsigned __int8)v11 >> 2;
    v40 = *a1;
    v13 = ((((unsigned __int64)v11 >> 12) + (((unsigned __int64)v11 >> 1) & 1)) << 12) - 1;
    v39 = (1LL << v12) - (((1LL << v12) - 1) & ((1LL << v12) + v13)) + v13;
    RtlpHpFreeVA(&v42, &v39, 0x8000LL, &v40);
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 12, -((unsigned __int64)v9[1].Children[1] >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 11, -(__int64)(v39 >> 12));
    v41 = *a1;
    RtlpHpMetadataFree(v9, &v41);
    return v39;
  }
  else
  {
    if ( !v8 )
    {
      v26 = (volatile signed __int64 *)(a1 + 4);
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)a1 + 16);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
        {
          _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick();
        }
        __writecr8(v5);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 4);
        v37 = 0;
        v27 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 4) == 1 )
          v28 = (unsigned int)MmGetSessionIdEx(v27->ApcState.Process);
        else
          v28 = 0xFFFFFFFFLL;
        --v27->SpecialApcDisable;
        v29 = ++v27->AbAllocationRegionCount;
        v30 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v19 = !_BitScanReverse((unsigned int *)&v31, v30);
          v38[1] = v31;
          if ( v19 )
            goto LABEL_40;
          v32 = 1 << v31;
          v33 = v31;
          v34 = &v27->LockEntries[v33];
          v30 &= ~v32;
          if ( (v34->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v34->LockState.0 & 1) == 0
            && (*(_QWORD *)&v34->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v26 & 0x7FFFFFFFFFFFFFFCLL)
            && v34->LockState.SessionId == (_DWORD)v28 )
          {
            v34->AcquiredByte &= ~1u;
            if ( v34->LockState.0 )
              break;
          }
        }
        if ( !v34 )
        {
LABEL_40:
          if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v27, (ULONG_PTR)(a1 + 4), (unsigned int)v28, 0LL);
          goto LABEL_52;
        }
        v34->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v34->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v27->LockEntries[v33].TreeNode, v28);
        v37 = 0;
        v37 = v34->BoostBitmap.AllFields & 0x1FFFF;
        v34->BoostBitmap.AllFields &= 0xFFFE0000;
        v34->ThreadLocalFlags &= ~1u;
        v34->LockState.0 = 0LL;
        v35 = ((char *)v34 - (char *)v27 - 800) / 96;
        if ( v29 == 1 )
          v27->AbEntrySummary |= 1 << v35;
        else
          _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v35);
LABEL_52:
        --v27->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v27, a1 + 4, &v37);
        v19 = v27->SpecialApcDisable++ == -1;
        if ( v19 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
          KiCheckForKernelApcDelivery(v36);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
    RtlpLogHeapFailure(8, (_DWORD)a1, v42, 0, 0LL, 0LL);
  }
  return v7;
}
