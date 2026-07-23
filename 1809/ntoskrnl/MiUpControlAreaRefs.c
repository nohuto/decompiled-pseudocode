/*
 * XREFs of MiUpControlAreaRefs @ 0x1402A3640
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiInsertChildVads @ 0x14085F950 (MiInsertChildVads.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsections @ 0x140079400 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794B0 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaRequiresCharge @ 0x140079E58 (MiControlAreaRequiresCharge.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiLockNestedVad @ 0x14085FC40 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14085FC5C (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiUpControlAreaRefs(__int64 a1, int a2)
{
  __int64 v4; // rbx
  int v5; // esi
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // ecx
  bool v9; // zf
  __int64 v10; // r14
  __int64 *v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  KIRQL v14; // al
  KIRQL v15; // r12
  int v16; // ecx
  __int64 v17; // r15
  __int64 *v18; // rsi
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v21; // r14
  struct _KTHREAD *v22; // rdi
  __int64 SessionId; // rdx
  unsigned __int8 v24; // r15
  unsigned int v25; // r8d
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // [rsp+30h] [rbp-38h]
  BOOL v33; // [rsp+34h] [rbp-34h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-20h] BYREF
  __int64 v36; // [rsp+50h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]
  int v38; // [rsp+B0h] [rbp+48h] BYREF
  int v39; // [rsp+B8h] [rbp+50h]
  int active; // [rsp+C0h] [rbp+58h]
  int v41; // [rsp+C8h] [rbp+60h]

  v39 = a2;
  v32 = 0;
  v4 = **(_QWORD **)(a1 + 72);
  v5 = MiControlAreaRequiresCharge(v4);
  if ( !v5 )
    return 3221227019LL;
  v7 = *(_QWORD *)(v4 + 64);
  v8 = *(_DWORD *)(a1 + 48);
  v33 = v7 != 0;
  if ( ((v8 & 0xF8) == 0x20 || (v8 & 0xF8) == 0x30) && v7 && (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 92));
    else
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 0xFFFFFFFF);
    v32 = 1;
  }
  v9 = (*(_DWORD *)(v4 + 56) & 0x400) == 0;
  v10 = 0LL;
  active = 0;
  v11 = 0LL;
  v41 = 0;
  BugCheckParameter2 = 0LL;
  v35 = 0LL;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    MiLockNestedVad(a1);
    if ( !*(_QWORD *)(v4 + 64) || (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
    {
      v11 = (__int64 *)(v4 + 128);
      BugCheckParameter2 = v4 + 128;
    }
    else
    {
      MiGetProtoPteAddress(a1, v12, 0, &BugCheckParameter2);
      v11 = (__int64 *)BugCheckParameter2;
    }
    if ( v11 )
      v41 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  if ( *(_QWORD *)(v4 + 64) )
  {
    CurrentThread = 0LL;
    v36 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)v4;
    CurrentThread = KeGetCurrentThread();
    v36 = v13;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v13 + 40, 0LL);
    v11 = (__int64 *)BugCheckParameter2;
  }
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  ++*(_QWORD *)(v4 + 40);
  v15 = v14;
  ++*(_QWORD *)(v4 + 48);
  if ( v11 )
  {
    v16 = *(_DWORD *)(v4 + 56);
    if ( (v16 & 0x20) == 0 && *(_QWORD *)(v4 + 64) )
    {
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
        1,
        &v35);
      v17 = 0LL;
      v18 = v11;
      while ( 1 )
      {
        if ( v39 )
        {
          active = MiReferenceActiveSubsection(v18, 8, v15);
          if ( active < 0 )
          {
            if ( v17 )
              v10 += MiDecrementSubsections((ULONG_PTR)v11, v17, 8u);
            goto LABEL_41;
          }
        }
        else
        {
          v10 += MiDecrementSubsections((ULONG_PTR)v11, (__int64)v11, 8u);
        }
        v17 = (__int64)v18;
        if ( v18 != v35 )
        {
          v18 = (__int64 *)v18[2];
          if ( v18 )
            continue;
        }
        goto LABEL_41;
      }
    }
    if ( !a2 )
    {
      if ( (v16 & 0x20) != 0 )
      {
        if ( v5 != 2 )
          goto LABEL_41;
        v19 = MiDecrementSubsectionViewCount(v11, 24);
      }
      else
      {
        v19 = MiDecrementSubsections((ULONG_PTR)v11, (__int64)v11, 8u);
      }
      v10 = v19;
      goto LABEL_41;
    }
    active = MiReferenceActiveSubsection(v11, 8, v14);
  }
LABEL_41:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v15);
  if ( v10 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v33, v10);
  if ( !*(_QWORD *)(v4 + 64) )
  {
    v21 = v36 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v21);
    v38 = 0;
    v22 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v21) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v22->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v22->SpecialApcDisable;
    v24 = ++v22->AbAllocationRegionCount;
    v25 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v26, v25);
      if ( v9 )
        break;
      v27 = 1 << v26;
      v28 = v26;
      v29 = &v22->LockEntries[v28];
      v25 &= ~v27;
      if ( (v29->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v29->LockState.0 & 1) == 0
        && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v21 & 0x7FFFFFFFFFFFFFFCLL)
        && v29->LockState.SessionId == (_DWORD)SessionId )
      {
        v29->AcquiredByte &= ~1u;
        if ( v29->LockState.0 )
        {
          if ( v29 )
          {
            v29->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v29->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v22->LockEntries[v28].TreeNode, SessionId);
            v38 = 0;
            v38 = v29->BoostBitmap.AllFields & 0x1FFFF;
            v29->BoostBitmap.AllFields &= 0xFFFE0000;
            v29->ThreadLocalFlags &= ~1u;
            v29->LockState.0 = 0LL;
            v30 = ((char *)v29 - (char *)v22 - 800) / 96;
            if ( v24 == 1 )
              v22->AbEntrySummary |= 1 << v30;
            else
              _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v30);
            goto LABEL_67;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v22, v21, (unsigned int)SessionId, 0LL);
LABEL_67:
    --v22->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v22, v21, (__int64)&v38);
    v9 = v22->SpecialApcDisable++ == -1;
    if ( v9 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
      KiCheckForKernelApcDelivery(v31);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v41 == 1 )
    MiUnlockNestedVad(a1);
  result = (unsigned int)active;
  if ( active < 0 && v32 == 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  return result;
}
