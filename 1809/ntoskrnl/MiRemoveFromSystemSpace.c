/*
 * XREFs of MiRemoveFromSystemSpace @ 0x140026F90
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1405E0390 (MmUnmapViewInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140651A4C (MiUnmapImageInSystemSpace.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiManageSubsectionView @ 0x1400ADBC0 (MiManageSubsectionView.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiUnmapLargePages @ 0x1402C5D94 (MiUnmapLargePages.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 */

void __fastcall MiRemoveFromSystemSpace(_QWORD *a1, ULONG_PTR a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v5; // r14
  __int64 v6; // rbp
  _QWORD *v7; // rdx
  unsigned int SessionId; // r12d
  __int64 v9; // rdx
  __int64 SharedVm; // rbx
  KIRQL v11; // al
  KIRQL v12; // di
  _QWORD *i; // rbx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  void *v16; // r13
  __int64 v17; // r15
  ULONG_PTR v18; // r14
  struct _KTHREAD *v19; // rdi
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  void *v27; // rcx
  volatile LONG *v28; // rdi
  KIRQL v29; // al
  KIRQL v30; // r14
  unsigned __int64 v31; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 AnyMultiplexedVm; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v34; // [rsp+40h] [rbp-E8h]
  struct _KTHREAD *v35; // [rsp+48h] [rbp-E0h]
  __int64 v36[27]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int8 v38; // [rsp+138h] [rbp+10h]
  int v40; // [rsp+148h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  v5 = a1;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a1 == (_QWORD *)&unk_14043A000 )
  {
    v34 = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  }
  else
  {
    AnyMultiplexedVm = MiGetSessionVm();
    v34 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  }
  SessionId = -1;
  if ( (a2 & 0x3FFFFFFF) == 0 && v5 == v7 )
  {
    v28 = (volatile LONG *)((char *)&unk_14043A050 + 16 * (unsigned __int8)(a2 >> 30));
    v29 = ExAcquireSpinLockExclusive(v28 + 3);
    i = *(_QWORD **)v28;
    v30 = v29;
    while ( i )
    {
      v31 = i[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 >= v31 + i[4] )
      {
        i = (_QWORD *)i[1];
      }
      else
      {
        if ( a2 >= v31 )
        {
          RtlAvlRemoveNode(v28, i);
          --*((_DWORD *)v28 + 2);
          break;
        }
        i = (_QWORD *)*i;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v28 + 3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v30);
    if ( i )
    {
      v16 = (void *)i[8];
      v17 = *(_QWORD *)i[6];
      goto LABEL_30;
    }
    v5 = a1;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v5[1], 0LL);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm, v9);
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v12 = v11;
  for ( i = (_QWORD *)v5[2]; ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v14 = i[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v14 + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( a2 >= v14 )
      break;
  }
  --*((_DWORD *)v5 + 6);
  RtlAvlRemoveNode(v5 + 2, i);
  LOBYTE(v15) = v12;
  MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v15);
  v16 = (void *)i[8];
  v17 = *(_QWORD *)i[6];
  v36[0] = v17;
  MiManageSubsectionView(v36, i + 9, 4LL);
  v18 = v5[1];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v18);
  v40 = 0;
  v19 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v18) == 1 )
    SessionId = MmGetSessionIdEx(v19->ApcState.Process);
  --v19->SpecialApcDisable;
  v38 = ++v19->AbAllocationRegionCount;
  LODWORD(v20) = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v21 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v21 )
      break;
    v23 = (__int64)&v19->LockEntries[v22];
    v20 = ~(1 << v22) & (unsigned int)v20;
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v18 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == SessionId )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
      {
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23, v20);
          v40 = 0;
          v40 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
          *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          *(_QWORD *)(v23 + 32) = 0LL;
          v24 = (v23 - (__int64)v19 - 800) / 96;
          if ( v38 == 1 )
            v19->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_26;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v19, v18, SessionId, 0LL);
LABEL_26:
  --v19->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v19, v18, &v40);
  v21 = v19->SpecialApcDisable++ == -1;
  if ( v21 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery(v25);
  KiLeaveGuardedRegionUnsafe(v35);
LABEL_30:
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( (i[7] & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v17 + 92), 0xFFFFFFFF);
  if ( a3 == 1 )
    MiRemoveMappedPtes(i, AnyMultiplexedVm);
  if ( *((_DWORD *)i + 25) != 0x7FFFF )
    MiDereferencePerSessionProtos(v17);
  v26 = ((i[4] >> 12) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (i[7] & 0x18) == 0x18 )
  {
    if ( a1 == (_QWORD *)&unk_14043A000 )
      v27 = &unk_14043BC78;
    else
      v27 = (void *)(v34 + 8136);
    MiReleasePtes(v27, v6, (unsigned int)v26);
  }
  else
  {
    MiUnmapLargePages(i[11] & 0xFFFFFFFFFFFFF000uLL, v26 << 12, 9LL);
  }
  ExFreePoolWithTag(i, 0);
}
