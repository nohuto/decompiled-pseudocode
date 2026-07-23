/*
 * XREFs of RtlpHpHeapExtendContext @ 0x1401363A8
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x140136390 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAllocVA @ 0x14000CE68 (RtlpHpAllocVA.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpMetadataCommit @ 0x14019224C (RtlpHpMetadataCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(int *a1, __int64 a2)
{
  int v2; // eax
  ULONG_PTR v3; // rdi
  __int64 v5; // rsi
  volatile LONG *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v8; // al
  unsigned int v9; // r13d
  signed __int64 v10; // r12
  KIRQL v12; // bl
  KIRQL v13; // al
  unsigned __int64 v14; // rdx
  KIRQL v15; // bl
  __int64 v16; // rax
  __int128 v17; // xmm0
  unsigned __int64 v18; // rsi
  int v19; // eax
  bool v20; // sf
  int v21; // eax
  struct _KTHREAD *v22; // rbx
  __int64 v23; // rdx
  unsigned __int8 v24; // r12
  unsigned int v25; // r8d
  bool v26; // zf
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _KLOCK_ENTRY *v30; // rsi
  int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 SessionId; // rdx
  unsigned __int8 v37; // r12
  unsigned int v38; // r8d
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  _KLOCK_ENTRY *v42; // rsi
  int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // rdx
  struct _KPRCB *v46; // rcx
  struct _KPRCB *v47; // rcx
  struct _KTHREAD *v48; // rbx
  unsigned __int8 v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _KLOCK_ENTRY *v54; // rsi
  int v55; // ecx
  unsigned int v56; // edx
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct _KPRCB *v59; // rcx
  size_t v60; // [rsp+40h] [rbp-29h] BYREF
  void *v61; // [rsp+48h] [rbp-21h] BYREF
  __int128 v62; // [rsp+60h] [rbp-9h] BYREF
  __int128 v63[5]; // [rsp+70h] [rbp+7h] BYREF
  int v64; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v65; // [rsp+D8h] [rbp+6Fh]
  int v66; // [rsp+E0h] [rbp+77h] BYREF
  int v67; // [rsp+E8h] [rbp+7Fh] BYREF

  v65 = a2;
  v2 = *a1;
  v3 = (ULONG_PTR)(a1 + 56);
  v5 = a2;
  v6 = a1 + 56;
  if ( (v2 & 1) != 0 )
  {
    v12 = ExAcquireSpinLockExclusive(v6);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v12);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v9 = -1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *((_QWORD *)a1 + 29);
        if ( (unsigned __int64)(v10 + v5) > *((_QWORD *)a1 + 30) )
          break;
        if ( v10 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 29, v10 + v5, v10) )
          return v10;
      }
      v13 = RtlpHpAcquireLockExclusive((volatile LONG *)v3, *a1 & 1);
      v14 = *((_QWORD *)a1 + 30);
      v15 = v13;
      v16 = *((_QWORD *)a1 + 29);
      if ( v16 + v5 > v14 )
        break;
      if ( (*a1 & 1) == 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v3);
        v64 = 0;
        v22 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)v22->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v22->SpecialApcDisable;
        v37 = ++v22->AbAllocationRegionCount;
        v38 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
        v26 = !_BitScanReverse((unsigned int *)&v39, v38);
        if ( v26 )
          goto LABEL_66;
        while ( 1 )
        {
          v40 = 1 << v39;
          v41 = v39;
          v42 = &v22->LockEntries[v41];
          v38 &= ~v40;
          if ( (v42->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v42->LockState.0 & 1) == 0
            && (*(_QWORD *)&v42->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
            && v42->LockState.SessionId == (_DWORD)SessionId )
          {
            v42->AcquiredByte &= ~1u;
            if ( v42->LockState.0 )
              break;
          }
          v26 = !_BitScanReverse((unsigned int *)&v39, v38);
          if ( v26 )
            goto LABEL_66;
        }
        if ( !v42 )
        {
LABEL_66:
          if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v22, v3, (unsigned int)SessionId, 0LL);
        }
        else
        {
          v42->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v42->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v22->LockEntries[v41].TreeNode, SessionId);
          v43 = v42->BoostBitmap.AllFields & 0x1FFFF;
          v44 = v42->BoostBitmap.AllFields & 0xFFFE0000;
          v42->ThreadLocalFlags &= ~1u;
          v64 = v43;
          v42->BoostBitmap.AllFields = v44;
          v42->LockState.0 = 0LL;
          v45 = ((char *)v42 - (char *)v22 - 800) / 96;
          if ( v37 == 1 )
            v22->AbEntrySummary |= 1 << v45;
          else
            _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v45);
        }
        --v22->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v22, v3, (__int64)&v64);
        v26 = v22->SpecialApcDisable++ == -1;
        if ( !v26 )
          goto LABEL_33;
LABEL_31:
        if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
          KiCheckForKernelApcDelivery(v34);
LABEL_33:
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        goto LABEL_34;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
      {
        v46 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v46);
      }
      __writecr8(v15);
    }
    v17 = *(_OWORD *)a1;
    v61 = (void *)*((_QWORD *)a1 + 30);
    v18 = (v16 - v14 + 4095 + v5) & 0xFFFFFFFFFFFFF000uLL;
    v60 = v18;
    if ( (*((_BYTE *)a1 + 30) & 1) != 0 )
    {
      v62 = v17;
      v19 = RtlpHpMetadataCommit((_DWORD)a1, v14, v18, (unsigned int)&v62, 1);
    }
    else
    {
      v63[0] = v17;
      v19 = RtlpHpAllocVA(&v61, &v60, 0LL, 4096, 4, v63);
      v18 = v60;
    }
    v20 = v19 < 0;
    v21 = *a1;
    if ( v20 )
      break;
    *((_QWORD *)a1 + 30) += v18;
    if ( (v21 & 1) == 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v3);
      v66 = 0;
      v22 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
        v23 = (unsigned int)MmGetSessionIdEx((__int64)v22->ApcState.Process);
      else
        v23 = 0xFFFFFFFFLL;
      --v22->SpecialApcDisable;
      v24 = ++v22->AbAllocationRegionCount;
      v25 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
      v26 = !_BitScanReverse((unsigned int *)&v27, v25);
      if ( v26 )
        goto LABEL_39;
      while ( 1 )
      {
        v28 = 1 << v27;
        v29 = v27;
        v30 = &v22->LockEntries[v29];
        v25 &= ~v28;
        if ( (v30->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v30->LockState.0 & 1) == 0
          && (*(_QWORD *)&v30->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
          && v30->LockState.SessionId == (_DWORD)v23 )
        {
          v30->AcquiredByte &= ~1u;
          if ( v30->LockState.0 )
            break;
        }
        v26 = !_BitScanReverse((unsigned int *)&v27, v25);
        if ( v26 )
          goto LABEL_39;
      }
      if ( !v30 )
      {
LABEL_39:
        if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v22, v3, (unsigned int)v23, 0LL);
      }
      else
      {
        v30->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v30->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v22->LockEntries[v29].TreeNode, v23);
        v31 = v30->BoostBitmap.AllFields & 0x1FFFF;
        v32 = v30->BoostBitmap.AllFields & 0xFFFE0000;
        v30->ThreadLocalFlags &= ~1u;
        v66 = v31;
        v30->BoostBitmap.AllFields = v32;
        v30->LockState.0 = 0LL;
        v33 = ((char *)v30 - (char *)v22 - 800) / 96;
        if ( v24 == 1 )
          v22->AbEntrySummary |= 1 << v33;
        else
          _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v33);
      }
      --v22->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v22, v3, (__int64)&v66);
      v26 = v22->SpecialApcDisable++ == -1;
      if ( !v26 )
        goto LABEL_33;
      goto LABEL_31;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
    {
      v47 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v47);
    }
    __writecr8(v15);
LABEL_34:
    v5 = v65;
  }
  v10 = 0LL;
  if ( (v21 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
    {
      v59 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v59->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v59);
    }
    __writecr8(v15);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    v67 = 0;
    v48 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      v9 = MmGetSessionIdEx((__int64)v48->ApcState.Process);
    --v48->SpecialApcDisable;
    v49 = ++v48->AbAllocationRegionCount;
    LODWORD(v50) = ((char)v48->AbEntrySummary | (char)v48->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v26 = !_BitScanReverse((unsigned int *)&v51, v50);
      if ( v26 )
        break;
      v52 = 1 << v51;
      v53 = v51;
      v54 = &v48->LockEntries[v53];
      v50 = ~v52 & (unsigned int)v50;
      if ( (v54->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v54->LockState.0 & 1) == 0
        && (*(_QWORD *)&v54->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
        && v54->LockState.SessionId == v9 )
      {
        v54->AcquiredByte &= ~1u;
        if ( v54->LockState.0 )
        {
          if ( v54 )
          {
            v54->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v54->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v48->LockEntries[v53].TreeNode, v50);
            v55 = v54->BoostBitmap.AllFields & 0x1FFFF;
            v56 = v54->BoostBitmap.AllFields & 0xFFFE0000;
            v54->ThreadLocalFlags &= ~1u;
            v67 = v55;
            v54->BoostBitmap.AllFields = v56;
            v54->LockState.0 = 0LL;
            v57 = ((char *)v54 - (char *)v48 - 800) / 96;
            if ( v49 == 1 )
              v48->AbEntrySummary |= 1 << v57;
            else
              _InterlockedOr8((volatile signed __int8 *)&v48->AbOrphanedEntrySummary, 1 << v57);
            goto LABEL_100;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v48->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v48, v3, v9, 0LL);
LABEL_100:
    --v48->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v48, v3, (__int64)&v67);
    v26 = v48->SpecialApcDisable++ == -1;
    if ( v26 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
      KiCheckForKernelApcDelivery(v58);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v10;
}
