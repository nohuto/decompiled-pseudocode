/*
 * XREFs of RtlpHpLargeFree @ 0x14010D6C0
 * Callers:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpMetadataFree @ 0x14010DA2C (RtlpHpMetadataFree.c)
 *     RtlpHpFreeVA @ 0x14010DAD4 (RtlpHpFreeVA.c)
 *     RtlpHpLargeLockAcquire @ 0x14010FF6C (RtlpHpLargeLockAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r14
  char v4; // r15
  __int64 v5; // r12
  unsigned __int8 v6; // al
  __int64 v7; // rbx
  _RTL_RB_TREE *v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // r15d
  __m128i v14; // xmm0
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  char v17; // cl
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // r14
  unsigned int SessionId; // edx
  unsigned __int8 v22; // r13
  unsigned int v23; // r8d
  bool v24; // zf
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  _KLOCK_ENTRY *v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  volatile signed __int64 *v31; // r15
  struct _KTHREAD *v32; // rdi
  unsigned int v33; // edx
  unsigned __int8 v34; // r13
  unsigned int v35; // r8d
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  _KLOCK_ENTRY *v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct _KPRCB *v42; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD v44[4]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-30h] BYREF
  __m128i v46; // [rsp+50h] [rbp-20h] BYREF
  __m128i v47; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v49; // [rsp+B8h] [rbp+48h] BYREF
  int v50; // [rsp+C8h] [rbp+58h] BYREF

  v49 = a2;
  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = RtlpHpLargeLockAcquire(a1, a3);
  v7 = 0LL;
  v8 = (_RTL_RB_TREE *)(v5 + 72);
  v9 = *(_QWORD *)(v5 + 72);
  v10 = v6;
  if ( (*(_BYTE *)(v5 + 80) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= (unsigned __int64)v8;
    else
      v9 = 0LL;
  }
  while ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( v3 >= v11 )
    {
      if ( v3 <= v11 )
        goto LABEL_16;
      v12 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v12 = *(_QWORD *)v9;
    }
    if ( (*(_BYTE *)(v5 + 80) & 1) != 0 && v12 )
      v9 ^= v12;
    else
      v9 = v12;
  }
  v9 = 0LL;
LABEL_16:
  v13 = v4 & 1;
  if ( v9 )
  {
    RtlRbRemoveNode(v8, (PRTL_BALANCED_NODE)v9);
    if ( !v13 )
    {
      v14 = *(__m128i *)v5;
      v15 = v5 + 64;
      if ( (_mm_cvtsi128_si32(v14) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v15);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v10);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v15);
        v44[0] = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v22 = ++CurrentThread->AbAllocationRegionCount;
        v23 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v24 = !_BitScanReverse((unsigned int *)&v25, v23);
          v44[2] = v25;
          if ( v24 )
            break;
          v26 = 1 << v25;
          v27 = v25;
          v28 = &CurrentThread->LockEntries[v27];
          v23 &= ~v26;
          if ( (v28->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v28->LockState.0 & 1) == 0
            && (*(_QWORD *)&v28->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
            && v28->LockState.SessionId == SessionId )
          {
            v28->AcquiredByte &= ~1u;
            if ( v28->LockState.0 )
            {
              if ( v28 )
              {
                v28->CrossThreadReleasableAndBusyByte |= 2u;
                if ( (__int64)v28->LockState.LockState < 0 )
                  KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v27].TreeNode);
                v44[0] = v28->BoostBitmap.AllFields & 0x1FFFF;
                v28->BoostBitmap.AllFields &= 0xFFFE0000;
                v28->ThreadLocalFlags &= ~1u;
                v28->LockState.0 = 0LL;
                v29 = ((char *)v28 - (char *)CurrentThread - 800) / 96;
                if ( v22 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v29;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v29);
                goto LABEL_41;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v15, SessionId, 0LL);
LABEL_41:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v15, v44);
        v24 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v24
          && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v30);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      v5 = a1;
    }
    v16 = *(_QWORD *)(v9 + 32);
    v17 = (unsigned __int8)v16 >> 2;
    v46 = *(__m128i *)v5;
    v18 = (((v16 >> 12) + ((v16 >> 1) & 1)) << 12) - 1;
    v45 = (1LL << v17) - (((1LL << v17) - 1) & ((1LL << v17) + v18)) + v18;
    RtlpHpFreeVA(&v49, &v45, 0x8000LL, &v46);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 96), -(*(_QWORD *)(v9 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 88), -(__int64)(v45 >> 12));
    v47 = *(__m128i *)v5;
    RtlpHpMetadataFree(v9, &v47);
    return v45;
  }
  else
  {
    if ( !v13 )
    {
      v31 = (volatile signed __int64 *)(v5 + 64);
      if ( (*(_DWORD *)v5 & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 64));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
        {
          v42 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v42);
          LODWORD(v3) = v49;
        }
        __writecr8(v10);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 64));
        v50 = 0;
        v32 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 64) == 1 )
          v33 = MmGetSessionIdEx((__int64)v32->ApcState.Process);
        else
          v33 = -1;
        --v32->SpecialApcDisable;
        v34 = ++v32->AbAllocationRegionCount;
        v35 = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v24 = !_BitScanReverse((unsigned int *)&v36, v35);
          v44[1] = v36;
          if ( v24 )
            goto LABEL_57;
          v37 = 1 << v36;
          v38 = v36;
          v39 = &v32->LockEntries[v38];
          v35 &= ~v37;
          if ( (v39->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v39->LockState.0 & 1) == 0
            && (*(_QWORD *)&v39->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v31 & 0x7FFFFFFFFFFFFFFCLL)
            && v39->LockState.SessionId == v33 )
          {
            v39->AcquiredByte &= ~1u;
            if ( v39->LockState.0 )
              break;
          }
        }
        if ( !v39 )
        {
LABEL_57:
          if ( (*((_DWORD *)&v32->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v32, v5 + 64, v33, 0LL);
          goto LABEL_69;
        }
        v39->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v39->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v32->LockEntries[v38].TreeNode);
        v50 = v39->BoostBitmap.AllFields & 0x1FFFF;
        v39->BoostBitmap.AllFields &= 0xFFFE0000;
        v39->ThreadLocalFlags &= ~1u;
        v39->LockState.0 = 0LL;
        v40 = ((char *)v39 - (char *)v32 - 800) / 96;
        if ( v34 == 1 )
          v32->AbEntrySummary |= 1 << v40;
        else
          _InterlockedOr8((volatile signed __int8 *)&v32->AbOrphanedEntrySummary, 1 << v40);
LABEL_69:
        --v32->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v32, v5 + 64, &v50);
        v24 = v32->SpecialApcDisable++ == -1;
        if ( v24 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
          KiCheckForKernelApcDelivery(v41);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        LODWORD(v3) = v49;
      }
    }
    RtlpLogHeapFailure(8, v5, v3, 0, 0LL, 0LL);
  }
  return v7;
}
