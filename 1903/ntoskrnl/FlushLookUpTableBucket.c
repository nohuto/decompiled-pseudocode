/*
 * XREFs of FlushLookUpTableBucket @ 0x14011362C
 * Callers:
 *     LookUpTableFlushPartial @ 0x1406BD49C (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x14078A9DC (LookUpTableFlushComplete.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     FlattenEventEntryTree @ 0x140113A34 (FlattenEventEntryTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     FlushEventEntryList @ 0x1406BD518 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v5; // rdi
  KIRQL v6; // r15
  __int64 v7; // rcx
  unsigned int v8; // r12d
  char v9; // dl
  __int64 v10; // rsi
  int SessionId; // eax
  bool v12; // zf
  const EVENT_DESCRIPTOR *v13; // r13
  unsigned int v14; // eax
  unsigned int v15; // ebp
  char v16; // al
  struct _KTHREAD *v17; // rbx
  unsigned __int8 v18; // r15
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rsi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *CurrentPrcb; // rcx
  int v30; // [rsp+80h] [rbp+8h] BYREF
  int v31; // [rsp+88h] [rbp+10h] BYREF
  int v32; // [rsp+90h] [rbp+18h]
  int v33; // [rsp+98h] [rbp+20h]

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 272;
  v30 = 0;
  v6 = 0;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 272, KeGetCurrentIrql(), 0LL);
  LOBYTE(v7) = CurrentThread->AbEntrySummary;
  v8 = -1;
  if ( !(_BYTE)v7 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v10 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5);
      goto LABEL_42;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v7) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v9 = v7;
  _BitScanForward((unsigned int *)&v7, (unsigned __int8)v7);
  v33 = v7;
  CurrentThread->AbEntrySummary = v9 & ~(1 << v7);
  v10 = (__int64)&CurrentThread->LockEntries[v7];
  if ( !v10 )
  {
LABEL_42:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_9;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_140467440[((v5 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v10 + 40) = SessionId;
  *(_QWORD *)(v10 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_9:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, &v30);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, (_RTL_BALANCED_NODE *)v10, v5);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( !*(_BYTE *)(a1 + 373) )
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v13 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v14 = FlattenEventEntryTree(v13);
  *(_DWORD *)(a1 + 256) -= v14;
  v15 = v14;
  if ( !*(_BYTE *)(a1 + 373) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 280));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v6);
  }
  v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  v31 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    v8 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  --v17->SpecialApcDisable;
  v18 = ++v17->AbAllocationRegionCount;
  v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v20, v19);
    v32 = v20;
    if ( v12 )
      break;
    v21 = 1 << v20;
    v22 = v20;
    v23 = &v17->LockEntries[v22];
    v19 &= ~v21;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && v23->LockState.SessionId == v8 )
    {
      v23->AcquiredByte &= ~1u;
      if ( v23->LockState.0 )
      {
        if ( v23 )
        {
          v23->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v23->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v17->LockEntries[v22].TreeNode);
          v24 = v23->BoostBitmap.AllFields & 0x1FFFF;
          v25 = v23->BoostBitmap.AllFields & 0xFFFE0000;
          v23->ThreadLocalFlags &= ~1u;
          v31 = v24;
          v23->BoostBitmap.AllFields = v25;
          v23->LockState.0 = 0LL;
          v26 = ((char *)v23 - (char *)v17 - 800) / 96;
          if ( v18 == 1 )
            v17->AbEntrySummary |= 1 << v26;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v26);
          goto LABEL_36;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v17, v5, v8, 0LL);
LABEL_36:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, v5, &v31);
  v12 = v17->SpecialApcDisable++ == -1;
  if ( v12 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery(1LL);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v13);
  return v15;
}
