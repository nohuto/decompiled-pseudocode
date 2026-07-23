/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x14005F820
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x1400620A0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x140062F20 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkDecommit @ 0x14010B63C (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400477F0 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // rcx
  ULONG_PTR v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // edi
  struct _KTHREAD *v19; // rsi
  unsigned int SessionId; // r8d
  unsigned __int8 v21; // bp
  unsigned int v22; // edx
  bool v23; // zf
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  _KLOCK_ENTRY *v27; // rbx
  __int64 v28; // rdx
  struct _KTHREAD *CurrentThread; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v31; // [rsp+34h] [rbp-54h]
  unsigned __int8 v32; // [rsp+48h] [rbp-40h]
  int v33; // [rsp+90h] [rbp+8h] BYREF
  int v34; // [rsp+98h] [rbp+10h]

  v6 = a4;
  _BitScanForward64(&v7, a3);
  _BitScanReverse64(&v9, a3);
  v10 = a2 + 24;
  v31 = v9 - v7 + 1;
  v11 = v31 << 12;
  v12 = a2 + (unsigned int)((_DWORD)v7 << 12);
  v13 = ((1LL << v31) - 1) << v7;
  if ( *(_DWORD *)(a1 + 8) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive((volatile signed __int32 *)v10, CurrentIrql);
    v32 = CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v32 = 0;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v10, 0LL);
  }
  v15 = a1 ^ *(_QWORD *)(a1 + 128);
  if ( !a5 )
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 160)))(v15, v12, v11);
    *(_QWORD *)(a2 + 16) &= ~v13;
    v16 = -(int)v6;
LABEL_8:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v16);
    v17 = 0;
    goto LABEL_9;
  }
  v17 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
          v15,
          v12,
          v11);
  if ( v17 >= 0 )
  {
    *(_QWORD *)(a2 + 16) |= v13;
    v16 = v6;
    goto LABEL_8;
  }
LABEL_9:
  if ( *(_DWORD *)(a1 + 8) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v10);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v32);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    v33 = 0;
    v19 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v10) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v19->ApcState.Process);
    else
      SessionId = -1;
    --v19->SpecialApcDisable;
    v21 = ++v19->AbAllocationRegionCount;
    v22 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
    v23 = !_BitScanReverse((unsigned int *)&v24, v22);
    v34 = v24;
    if ( v23 )
      goto LABEL_35;
    while ( 1 )
    {
      v25 = 1 << v24;
      v26 = v24;
      v27 = &v19->LockEntries[v26];
      v22 &= ~v25;
      if ( (v27->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v27->LockState.0 & 1) == 0
        && (*(_QWORD *)&v27->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v10 & 0x7FFFFFFFFFFFFFFCLL)
        && v27->LockState.SessionId == SessionId )
      {
        v27->AcquiredByte &= ~1u;
        if ( v27->LockState.0 )
          break;
      }
      v23 = !_BitScanReverse((unsigned int *)&v24, v22);
      v34 = v24;
      if ( v23 )
        goto LABEL_35;
    }
    if ( !v27 )
    {
LABEL_35:
      if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v19, v10, SessionId, 0LL);
    }
    else
    {
      v27->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v27->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v19->LockEntries[v26].TreeNode);
      v33 = v27->BoostBitmap.AllFields & 0x1FFFF;
      v27->BoostBitmap.AllFields &= 0xFFFE0000;
      v27->ThreadLocalFlags &= ~1u;
      v27->LockState.0 = 0LL;
      v28 = ((char *)v27 - (char *)v19 - 800) / 96;
      if ( v21 == 1 )
        v19->AbEntrySummary |= 1 << v28;
      else
        _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v28);
    }
    --v19->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v19, v10, &v33);
    v23 = v19->SpecialApcDisable++ == -1;
    if ( v23 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v17;
}
