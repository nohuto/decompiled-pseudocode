/*
 * XREFs of RtlpHpHeapExtendContext @ 0x140136818
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x140136800 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpAllocVA @ 0x14002236C (RtlpHpAllocVA.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x140136B70 (RtlpHpAcquireReleaseLockExclusive.c)
 *     RtlpHpMetadataCommit @ 0x14019A47C (RtlpHpMetadataCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(int *a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v5; // r12d
  signed __int64 v6; // r15
  KIRQL v8; // al
  __int64 v9; // rcx
  KIRQL v10; // bl
  unsigned __int64 v11; // rdx
  __int128 v12; // xmm0
  unsigned __int64 v13; // rdi
  int v14; // eax
  bool v15; // sf
  int v16; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v18; // edx
  unsigned __int8 v19; // r15
  unsigned int v20; // r8d
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int SessionId; // edx
  unsigned __int8 v29; // r15
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *v37; // rbx
  unsigned __int8 v38; // r14
  unsigned int v39; // edx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  _KLOCK_ENTRY *v43; // rdi
  int v44; // ecx
  unsigned int v45; // edx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct _KPRCB *v48; // rcx
  size_t v49; // [rsp+38h] [rbp-40h] BYREF
  void *v50; // [rsp+40h] [rbp-38h] BYREF
  __int128 v51; // [rsp+50h] [rbp-28h] BYREF
  __int128 v52; // [rsp+60h] [rbp-18h] BYREF
  int v53; // [rsp+C0h] [rbp+48h] BYREF
  int v54; // [rsp+C8h] [rbp+50h] BYREF
  int v55; // [rsp+D0h] [rbp+58h] BYREF
  int v56; // [rsp+D8h] [rbp+60h]

  v2 = (unsigned __int64)(a1 + 56);
  RtlpHpAcquireReleaseLockExclusive((ULONG_PTR)(a1 + 56));
  v5 = -1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *((_QWORD *)a1 + 29);
        if ( (unsigned __int64)(v6 + a2) > *((_QWORD *)a1 + 30) )
          break;
        if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 29, v6 + a2, v6) )
          return v6;
      }
      v8 = RtlpHpAcquireLockExclusive((volatile LONG *)v2, *a1 & 1);
      v9 = *((_QWORD *)a1 + 29);
      v10 = v8;
      v11 = *((_QWORD *)a1 + 30);
      if ( v9 + a2 > v11 )
        break;
      if ( (*a1 & 1) != 0 )
        goto LABEL_31;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v2);
      v53 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v29 = ++CurrentThread->AbAllocationRegionCount;
      v30 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v21 = !_BitScanReverse((unsigned int *)&v31, v30);
        v56 = v31;
        if ( v21 )
          break;
        v32 = (__int64)&CurrentThread->LockEntries[v31];
        v30 &= ~(1 << v31);
        if ( (*(_BYTE *)(v32 + 26) & 1) != 0
          && (*(_DWORD *)(v32 + 32) & 1) == 0
          && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v32 + 40) == SessionId )
        {
          *(_BYTE *)(v32 + 26) &= ~1u;
          if ( *(_QWORD *)(v32 + 32) )
          {
            if ( v32 )
            {
              *(_BYTE *)(v32 + 32) |= 2u;
              if ( *(__int64 *)(v32 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
              v33 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
              v34 = *(_DWORD *)(v32 + 88) & 0xFFFE0000;
              *(_BYTE *)(v32 + 25) &= ~1u;
              v53 = v33;
              *(_DWORD *)(v32 + 88) = v34;
              *(_QWORD *)(v32 + 32) = 0LL;
              v35 = (v32 - (__int64)CurrentThread - 800) / 96;
              if ( v29 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v35;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v35);
              goto LABEL_56;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
LABEL_56:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v53);
      v21 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v21 )
      {
LABEL_27:
        if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          KiCheckForKernelApcDelivery(v27);
      }
LABEL_29:
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v12 = *(_OWORD *)a1;
    v50 = (void *)*((_QWORD *)a1 + 30);
    v13 = (v9 - v11 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v49 = v13;
    if ( (*((_BYTE *)a1 + 30) & 1) != 0 )
    {
      v51 = v12;
      v14 = RtlpHpMetadataCommit((_DWORD)a1, v11, v13, (unsigned int)&v51, 1);
    }
    else
    {
      v52 = v12;
      v14 = RtlpHpAllocVA(&v50, &v49, 0LL, 4096, 4, &v52);
      v13 = v49;
    }
    v15 = v14 < 0;
    v16 = *a1;
    if ( v15 )
      break;
    *((_QWORD *)a1 + 30) += v13;
    if ( (v16 & 1) == 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v2);
      v54 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
        v18 = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        v18 = -1;
      --CurrentThread->SpecialApcDisable;
      v19 = ++CurrentThread->AbAllocationRegionCount;
      v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v21 = !_BitScanReverse((unsigned int *)&v22, v20);
        if ( v21 )
          break;
        v23 = (__int64)&CurrentThread->LockEntries[v22];
        v20 &= ~(1 << v22);
        if ( (*(_BYTE *)(v23 + 26) & 1) != 0
          && (*(_DWORD *)(v23 + 32) & 1) == 0
          && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v23 + 40) == v18 )
        {
          *(_BYTE *)(v23 + 26) &= ~1u;
          if ( *(_QWORD *)(v23 + 32) )
          {
            if ( v23 )
            {
              *(_BYTE *)(v23 + 32) |= 2u;
              if ( *(__int64 *)(v23 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
              v24 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
              v25 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
              *(_BYTE *)(v23 + 25) &= ~1u;
              v54 = v24;
              *(_DWORD *)(v23 + 88) = v25;
              *(_QWORD *)(v23 + 32) = 0LL;
              v26 = (v23 - (__int64)CurrentThread - 800) / 96;
              if ( v19 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v26;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
              goto LABEL_26;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, v18, 0LL);
LABEL_26:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v54);
      v21 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v21 )
        goto LABEL_27;
      goto LABEL_29;
    }
LABEL_31:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v10);
  }
  v6 = 0LL;
  if ( (v16 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v48 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v48);
    }
    __writecr8(v10);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    v55 = 0;
    v37 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      v5 = MmGetSessionIdEx((__int64)v37->ApcState.Process);
    --v37->SpecialApcDisable;
    v38 = ++v37->AbAllocationRegionCount;
    v39 = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v21 = !_BitScanReverse((unsigned int *)&v40, v39);
      if ( v21 )
        goto LABEL_74;
      v41 = 1 << v40;
      v42 = v40;
      v43 = &v37->LockEntries[v42];
      v39 &= ~v41;
      if ( (v43->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v43->LockState.0 & 1) == 0
        && (*(_QWORD *)&v43->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && v43->LockState.SessionId == v5 )
      {
        v43->AcquiredByte &= ~1u;
        if ( v43->LockState.0 )
          break;
      }
    }
    if ( !v43 )
    {
LABEL_74:
      if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v37, v2, v5, 0LL);
      goto LABEL_86;
    }
    v43->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v43->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v37->LockEntries[v42].TreeNode);
    v44 = v43->BoostBitmap.AllFields & 0x1FFFF;
    v45 = v43->BoostBitmap.AllFields & 0xFFFE0000;
    v43->ThreadLocalFlags &= ~1u;
    v55 = v44;
    v43->BoostBitmap.AllFields = v45;
    v43->LockState.0 = 0LL;
    v46 = ((char *)v43 - (char *)v37 - 800) / 96;
    if ( v38 == 1 )
      v37->AbEntrySummary |= 1 << v46;
    else
      _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v46);
LABEL_86:
    --v37->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v37, v2, &v55);
    v21 = v37->SpecialApcDisable++ == -1;
    if ( v21 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
      KiCheckForKernelApcDelivery(v47);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v6;
}
