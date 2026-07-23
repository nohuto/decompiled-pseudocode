/*
 * XREFs of RtlpHpLargeAlloc @ 0x1401102C4
 * Callers:
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeapInternal @ 0x140110BEC (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpAllocVA @ 0x14002236C (RtlpHpAllocVA.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     RtlRbInsertNodeEx @ 0x140064590 (RtlRbInsertNodeEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpHpMetadataFree @ 0x14010E33C (RtlpHpMetadataFree.c)
 *     RtlpHpFreeVA @ 0x14010E3E4 (RtlpHpFreeVA.c)
 *     RtlpHpLargeLockAcquire @ 0x14011087C (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1401108A8 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpQueryVA @ 0x1401108D8 (RtlpHpQueryVA.c)
 *     RtlpHpMetadataAlloc @ 0x140110968 (RtlpHpMetadataAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void *__fastcall RtlpHpLargeAlloc(__int64 a1, __int64 a2, size_t a3, unsigned int a4)
{
  __int128 v4; // xmm0
  void *v5; // rbx
  void *v8; // rax
  __int64 v9; // r15
  BOOL v10; // edi
  __int64 v11; // r13
  unsigned __int64 v12; // rcx
  int v13; // ebx
  unsigned __int64 v14; // rbx
  int v15; // r13d
  int v16; // ebx
  bool v17; // zf
  unsigned int v18; // edi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int8 v22; // al
  _RTL_RB_TREE *v23; // rcx
  unsigned __int8 v24; // bl
  unsigned __int64 v25; // rdx
  BOOLEAN v26; // r8
  unsigned __int64 v27; // rax
  volatile signed __int64 *v28; // r14
  unsigned int v30; // ecx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v33; // r15
  unsigned int v34; // edx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  _KLOCK_ENTRY *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  void *v42; // [rsp+38h] [rbp-D0h] BYREF
  signed __int64 v43; // [rsp+40h] [rbp-C8h] BYREF
  void *v44; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v45; // [rsp+50h] [rbp-B8h]
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v48; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v49[3]; // [rsp+70h] [rbp-98h]
  __int128 v50; // [rsp+88h] [rbp-80h] BYREF
  __int128 v51; // [rsp+98h] [rbp-70h] BYREF
  __int128 v52; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v55[9]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v56; // [rsp+178h] [rbp+70h] BYREF
  __int64 v57; // [rsp+180h] [rbp+78h]
  unsigned int v58; // [rsp+190h] [rbp+88h]

  v58 = a4;
  v57 = a2;
  v4 = *(_OWORD *)a1;
  v5 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  *(_OWORD *)&v49[1] = v4;
  v8 = (void *)RtlpHpMetadataAlloc(0x28uLL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    memset(v8, 0, 0x28uLL);
    v10 = 0;
    if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
      v10 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    while ( 1 )
    {
      v56 = 0;
      if ( v10 )
      {
        v11 = 0x200000LL;
        v12 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v30 = BYTE1(*(_QWORD *)a1) < 2u;
        v11 = 0LL;
        v56 = v30;
        v12 = a3 + (v30 << 12);
      }
      v43 = v12;
      if ( v12 < a3 )
        goto LABEL_81;
      v13 = *(_DWORD *)(a1 + 20) & 0x40000000;
      v50 = *(_OWORD *)a1;
      memset(&v55[1], 0, 0x28uLL);
      if ( v13 )
      {
        *(_QWORD *)&v55[1] = a1;
        DWORD2(v55[1]) = 64;
      }
      if ( (int)RtlpHpAllocVA(&v42, (size_t *)&v43, v11, 0x2000, v13 != 0 ? 64 : 4, &v50) < 0 )
      {
        v42 = 0LL;
LABEL_81:
        v5 = v44;
        goto LABEL_38;
      }
      v51 = *(_OWORD *)a1;
      RtlpHpQueryVA(v42, &v51, &v48, &v47);
      *v48 = a1;
      v45 = (a3 + 4095) >> 12;
      v14 = v45 << 12;
      v46 = v45 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v45 << 12, a1) )
        goto LABEL_81;
      if ( v10 )
      {
        v15 = 536875008;
        v46 = v14 - ((v14 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v15 = 4096;
        if ( (v58 & 2) != 0 )
          v15 = 1073745920;
      }
      v16 = *(_DWORD *)(a1 + 20) & 0x40000000;
      v52 = *(_OWORD *)a1;
      memset((char *)&v55[3] + 8, 0, 0x28uLL);
      if ( v16 )
      {
        *((_QWORD *)&v55[3] + 1) = a1;
        LODWORD(v55[4]) = 64;
      }
      if ( (int)RtlpHpAllocVA(&v42, (size_t *)&v46, 0LL, v15, v16 != 0 ? 64 : 4, &v52) >= 0 )
        break;
      if ( !v10 )
        goto LABEL_81;
      v10 = 0;
      v53 = *(_OWORD *)a1;
      RtlpHpFreeVA((unsigned __int64 *)&v42, (unsigned __int64 *)&v43, 0x8000LL, &v53);
      v42 = 0LL;
    }
    v17 = !v10;
    v18 = v58;
    if ( !v17 && (v58 & 2) != 0 )
      memset(v42, 0, a3);
    v19 = v45;
    *(_QWORD *)(v9 + 24) = v42;
    v20 = *(_DWORD *)(v9 + 32) & 0xFFD | (2 * (v56 | (v19 << 11)));
    *(_QWORD *)(v9 + 32) = v20;
    _BitScanForward64(&v21, v43);
    LODWORD(v44) = v21;
    *(_QWORD *)(v9 + 32) = v20 ^ (unsigned __int8)(v20 ^ (4 * v21)) & 0xFC;
    *(_WORD *)(v9 + 24) = ((_WORD)v19 << 12) - v57;
    v22 = RtlpHpLargeLockAcquire(a1, v18);
    v23 = (_RTL_RB_TREE *)(a1 + 72);
    v24 = v22;
    v25 = *(_QWORD *)(a1 + 72);
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v25 )
      v25 ^= (unsigned __int64)v23;
    v26 = 0;
    if ( v25 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)v42 < (*(_QWORD *)(v25 + 24) & 0xFFFFFFFFFFFF0000uLL) )
        {
          v27 = *(_QWORD *)v25;
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_31;
            v27 ^= v25;
          }
          if ( !v27 )
          {
LABEL_31:
            v26 = 0;
            break;
          }
        }
        else
        {
          v27 = *(_QWORD *)(v25 + 8);
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          {
            if ( !v27 )
              goto LABEL_32;
            v27 ^= v25;
          }
          if ( !v27 )
          {
LABEL_32:
            v26 = 1;
            break;
          }
        }
        v25 = v27;
      }
    }
    RtlRbInsertNodeEx(v23, (PRTL_BALANCED_NODE)v25, v26, (PRTL_BALANCED_NODE)v9);
    if ( (v18 & 1) == 0 )
    {
      v28 = (volatile signed __int64 *)(a1 + 64);
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v24 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v24);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
        v56 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v33 = ++CurrentThread->AbAllocationRegionCount;
        v34 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v17 = !_BitScanReverse((unsigned int *)&v35, v34);
          LODWORD(v45) = v35;
          if ( v17 )
            break;
          v36 = 1 << v35;
          v37 = v35;
          v38 = &CurrentThread->LockEntries[v37];
          v34 &= ~v36;
          if ( (v38->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v38->LockState.0 & 1) == 0
            && (*(_QWORD *)&v38->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v28 & 0x7FFFFFFFFFFFFFFCLL)
            && v38->LockState.SessionId == SessionId )
          {
            v38->AcquiredByte &= ~1u;
            if ( v38->LockState.0 )
            {
              if ( v38 )
              {
                v38->CrossThreadReleasableAndBusyByte |= 2u;
                if ( (__int64)v38->LockState.LockState < 0 )
                  KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v37].TreeNode);
                v56 = v38->BoostBitmap.AllFields & 0x1FFFF;
                v38->BoostBitmap.AllFields &= 0xFFFE0000;
                v38->ThreadLocalFlags &= ~1u;
                v38->LockState.0 = 0LL;
                v39 = ((char *)v38 - (char *)CurrentThread - 800) / 96;
                if ( v33 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v39;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v39);
                goto LABEL_66;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
LABEL_66:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 64, &v56);
        v17 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v17
          && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v40);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v43 / 4096);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v19);
    v5 = v42;
    v9 = 0LL;
    v42 = 0LL;
LABEL_38:
    if ( v9 )
    {
      v54 = *(_OWORD *)a1;
      RtlpHpMetadataFree(v9, &v54);
    }
  }
  if ( v42 )
  {
    v55[0] = *(_OWORD *)a1;
    RtlpHpFreeVA((unsigned __int64 *)&v42, (unsigned __int64 *)&v43, 0x8000LL, v55);
  }
  return v5;
}
