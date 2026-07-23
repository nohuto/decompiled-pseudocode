/*
 * XREFs of MiRemoveFromSystemSpace @ 0x1400A8C3C
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x14066EBA0 (MmUnmapViewInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14066FFB0 (MiUnmapImageInSystemSpace.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiManageSubsectionView @ 0x140074E60 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiUnmapLargePages @ 0x140171360 (MiUnmapLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiDereferencePerSessionProtos @ 0x1406E88BC (MiDereferencePerSessionProtos.c)
 */

void __fastcall MiRemoveFromSystemSpace(_QWORD *a1, ULONG_PTR a2, int a3)
{
  _QWORD *v4; // rbp
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v6; // r14
  _QWORD *v7; // rdx
  unsigned int SessionId; // r12d
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  KIRQL v11; // di
  __int64 i; // rbx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // r13
  __int64 v18; // r15
  unsigned __int64 v19; // rbp
  struct _KTHREAD *v20; // rdi
  unsigned int v21; // edx
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  void *v29; // rcx
  volatile LONG *v30; // rdi
  KIRQL v31; // al
  KIRQL v32; // bp
  unsigned __int64 v33; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 AnyMultiplexedVm; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v36; // [rsp+40h] [rbp-E8h]
  __int64 v37; // [rsp+48h] [rbp-E0h]
  __int64 v38[27]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int8 v40; // [rsp+138h] [rbp+10h]
  int v42; // [rsp+148h] [rbp+20h] BYREF

  v4 = a1;
  memset(v38, 0, 0x90uLL);
  CurrentThread = KeGetCurrentThread();
  v37 = (__int64)CurrentThread;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v4 == (_QWORD *)&unk_140464960 )
  {
    v36 = 0LL;
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
  }
  else
  {
    AnyMultiplexedVm = MiGetSessionVm();
    v36 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  }
  SessionId = -1;
  if ( (a2 & 0x3FFFFFFF) == 0 && v4 == v7 )
  {
    v30 = (volatile LONG *)((char *)&unk_1404649A8 + 16 * (unsigned __int8)(a2 >> 30));
    v31 = ExAcquireSpinLockExclusive(v30 + 3);
    i = *(_QWORD *)v30;
    v32 = v31;
    while ( i )
    {
      v33 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 >= v33 + *(_QWORD *)(i + 32) )
      {
        i = *(_QWORD *)(i + 8);
      }
      else
      {
        if ( a2 >= v33 )
        {
          RtlAvlRemoveNode((unsigned __int64 *)v30, (unsigned __int64 *)i);
          --*((_DWORD *)v30 + 2);
          break;
        }
        i = *(_QWORD *)i;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v30 + 3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v32);
    if ( i )
    {
      v17 = *(void **)(i + 64);
      v18 = **(_QWORD **)(i + 48);
      goto LABEL_28;
    }
    v4 = a1;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v4[1], 0LL);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v11 = v10;
  for ( i = v4[2]; ; i = *(_QWORD *)i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v13 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v13 + *(_QWORD *)(i + 32) )
        break;
      i = *(_QWORD *)(i + 8);
    }
    if ( a2 >= v13 )
      break;
  }
  --*((_DWORD *)v4 + 6);
  RtlAvlRemoveNode(v4 + 2, (unsigned __int64 *)i);
  LOBYTE(v14) = v11;
  MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v14, v15, v16);
  v17 = *(void **)(i + 64);
  v18 = **(_QWORD **)(i + 48);
  v38[0] = v18;
  MiManageSubsectionView(v38, (_QWORD *)(i + 72), 4);
  v19 = v4[1];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v19);
  v42 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v19) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  --v20->SpecialApcDisable;
  v40 = ++v20->AbAllocationRegionCount;
  v21 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v22 = !_BitScanReverse((unsigned int *)&v23, v21);
    if ( v22 )
      break;
    v24 = (__int64)&v20->LockEntries[v23];
    v21 &= ~(1 << v23);
    if ( (*(_BYTE *)(v24 + 26) & 1) != 0
      && (*(_DWORD *)(v24 + 32) & 1) == 0
      && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v19 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v24 + 40) == SessionId )
    {
      *(_BYTE *)(v24 + 26) &= ~1u;
      if ( *(_QWORD *)(v24 + 32) )
      {
        if ( v24 )
        {
          *(_BYTE *)(v24 + 32) |= 2u;
          if ( *(__int64 *)(v24 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
          v42 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
          *(_DWORD *)(v24 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v24 + 25) &= ~1u;
          *(_QWORD *)(v24 + 32) = 0LL;
          v25 = (v24 - (__int64)v20 - 800) / 96;
          if ( v40 == 1 )
            v20->AbEntrySummary |= 1 << v25;
          else
            _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v25);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v20, v19, SessionId, 0LL);
LABEL_24:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, v19, &v42);
  v22 = v20->SpecialApcDisable++ == -1;
  if ( v22 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v26);
  KiLeaveGuardedRegionUnsafe(v37);
LABEL_28:
  if ( v17 )
    ObfDereferenceObject(v17);
  if ( (*(_DWORD *)(i + 56) & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v18 + 92), 0xFFFFFFFF);
  if ( a3 == 1 )
    MiRemoveMappedPtes(i, AnyMultiplexedVm);
  v27 = *(unsigned int *)(i + 100);
  if ( (_DWORD)v27 != 0x7FFFF )
    MiDereferencePerSessionProtos(v18, v27);
  v28 = ((*(_QWORD *)(i + 32) >> 12) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (*(_BYTE *)(i + 56) & 0x18) == 0x18 )
  {
    if ( a1 == (_QWORD *)&unk_140464960 )
      v29 = &unk_140466638;
    else
      v29 = (void *)(v36 + 1160);
    MiReleasePtes((__int64)v29, v6, v28);
  }
  else
  {
    MiUnmapLargePages(*(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL, v28 << 12, 9LL);
  }
  ExFreePoolWithTag((PVOID)i, 0);
}
