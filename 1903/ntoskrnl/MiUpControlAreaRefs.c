/*
 * XREFs of MiUpControlAreaRefs @ 0x1402BA800
 * Callers:
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiInsertChildVads @ 0x14089B5B0 (MiInsertChildVads.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiControlAreaRequiresCharge @ 0x140071220 (MiControlAreaRequiresCharge.c)
 *     MiDecrementSubsections @ 0x1400715F0 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1400716A0 (MiDecrementSubsectionViewCount.c)
 *     MiReferenceActiveSubsection @ 0x140072320 (MiReferenceActiveSubsection.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     MiLockNestedVad @ 0x14089B8A0 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14089B8BC (MiUnlockNestedVad.c)
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
  __int64 v15; // r8
  KIRQL v16; // r12
  int v17; // ecx
  __int64 v18; // r15
  __int64 *v19; // rsi
  __int64 v20; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v22; // r14
  struct _KTHREAD *v23; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v25; // r15
  unsigned int v26; // r8d
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _KLOCK_ENTRY *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // [rsp+30h] [rbp-38h]
  BOOL v34; // [rsp+34h] [rbp-34h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v36; // [rsp+48h] [rbp-20h] BYREF
  __int64 v37; // [rsp+50h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]
  int active; // [rsp+B0h] [rbp+48h]
  int v41; // [rsp+C0h] [rbp+58h] BYREF
  int v42; // [rsp+C8h] [rbp+60h]

  v33 = 0;
  v4 = **(_QWORD **)(a1 + 72);
  v5 = MiControlAreaRequiresCharge(v4, 0LL);
  if ( !v5 )
    return 3221227019LL;
  v7 = *(_QWORD *)(v4 + 64);
  v8 = *(_DWORD *)(a1 + 48);
  v34 = v7 != 0;
  if ( ((v8 & 0xF80) == 0x200 || (v8 & 0xF80) == 0x300) && v7 && (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 92));
    else
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 0xFFFFFFFF);
    v33 = 1;
  }
  v9 = (*(_DWORD *)(v4 + 56) & 0x400) == 0;
  v10 = 0LL;
  active = 0;
  v11 = 0LL;
  v42 = 0;
  BugCheckParameter2 = 0LL;
  v36 = 0LL;
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
      v42 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  if ( *(_QWORD *)(v4 + 64) )
  {
    CurrentThread = 0LL;
    v37 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)v4;
    CurrentThread = KeGetCurrentThread();
    v37 = v13;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v13 + 40, 0LL);
    v11 = (__int64 *)BugCheckParameter2;
  }
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  ++*(_QWORD *)(v4 + 40);
  v16 = v14;
  ++*(_QWORD *)(v4 + 48);
  if ( v11 )
  {
    v17 = *(_DWORD *)(v4 + 56);
    if ( (v17 & 0x20) == 0 && *(_QWORD *)(v4 + 64) )
    {
      MiGetProtoPteAddress(
        a1,
        *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
        1,
        &v36);
      v18 = 0LL;
      v19 = v11;
      while ( 1 )
      {
        if ( a2 )
        {
          active = MiReferenceActiveSubsection(v19, 8, v16);
          if ( active < 0 )
          {
            if ( v18 )
              v10 += MiDecrementSubsections((ULONG_PTR)v11, v18, 8u);
            goto LABEL_41;
          }
        }
        else
        {
          v10 += MiDecrementSubsections((ULONG_PTR)v11, (__int64)v11, 8u);
        }
        v18 = (__int64)v19;
        if ( v19 != v36 )
        {
          v19 = (__int64 *)v19[2];
          if ( v19 )
            continue;
        }
        goto LABEL_41;
      }
    }
    if ( !a2 )
    {
      if ( (v17 & 0x20) != 0 )
      {
        if ( v5 != 2 )
          goto LABEL_41;
        v20 = MiDecrementSubsectionViewCount(v11, 24LL, v15);
      }
      else
      {
        v20 = MiDecrementSubsections((ULONG_PTR)v11, (__int64)v11, 8u);
      }
      v10 = v20;
      goto LABEL_41;
    }
    active = MiReferenceActiveSubsection(v11, 8, v14);
  }
LABEL_41:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v16);
  if ( v10 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v34, v10);
  if ( !*(_QWORD *)(v4 + 64) )
  {
    v22 = v37 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v22);
    v41 = 0;
    v23 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v22) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v23->ApcState.Process);
    else
      SessionId = -1;
    --v23->SpecialApcDisable;
    v25 = ++v23->AbAllocationRegionCount;
    v26 = ((char)v23->AbEntrySummary | (char)v23->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v27, v26);
      if ( v9 )
        break;
      v28 = 1 << v27;
      v29 = v27;
      v30 = &v23->LockEntries[v29];
      v26 &= ~v28;
      if ( (v30->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v30->LockState.0 & 1) == 0
        && (*(_QWORD *)&v30->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v22 & 0x7FFFFFFFFFFFFFFCLL)
        && v30->LockState.SessionId == SessionId )
      {
        v30->AcquiredByte &= ~1u;
        if ( v30->LockState.0 )
        {
          if ( v30 )
          {
            v30->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v30->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v23->LockEntries[v29].TreeNode);
            v41 = v30->BoostBitmap.AllFields & 0x1FFFF;
            v30->BoostBitmap.AllFields &= 0xFFFE0000;
            v30->ThreadLocalFlags &= ~1u;
            v30->LockState.0 = 0LL;
            v31 = ((char *)v30 - (char *)v23 - 800) / 96;
            if ( v25 == 1 )
              v23->AbEntrySummary |= 1 << v31;
            else
              _InterlockedOr8((volatile signed __int8 *)&v23->AbOrphanedEntrySummary, 1 << v31);
            goto LABEL_67;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v23->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v23, v22, SessionId, 0LL);
LABEL_67:
    --v23->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v23, v22, &v41);
    v9 = v23->SpecialApcDisable++ == -1;
    if ( v9 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
      KiCheckForKernelApcDelivery(v32);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v42 == 1 )
    MiUnlockNestedVad(a1);
  result = (unsigned int)active;
  if ( active < 0 && v33 == 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  return result;
}
