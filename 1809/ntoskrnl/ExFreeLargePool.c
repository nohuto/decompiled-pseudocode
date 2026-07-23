/*
 * XREFs of ExFreeLargePool @ 0x14009AD10
 * Callers:
 *     MmFreeContiguousMemory @ 0x140123090 (MmFreeContiguousMemory.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x14000E644 (ExGetHeapFromVA.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MmIsNonPagedPoolNx @ 0x14009B388 (MmIsNonPagedPoolNx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpFreePoolChecks @ 0x14009D6BC (ExpFreePoolChecks.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140107700 (ExpRemovePoolTrackerExpansion.c)
 *     MiFreePoolPages @ 0x140161200 (MiFreePoolPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     VerifierFreeTrackedPool @ 0x1402BA60C (VerifierFreeTrackedPool.c)
 *     MiSessionPoolVector @ 0x140705040 (MiSessionPoolVector.c)
 */

void __fastcall ExFreeLargePool(ULONG_PTR BugCheckParameter3, unsigned int *a2, ULONG_PTR *a3, int a4)
{
  ULONG_PTR v4; // r13
  __int64 v6; // rdi
  KIRQL v7; // r15
  __int64 v8; // r9
  volatile signed __int32 *v9; // r11
  unsigned __int64 v10; // r10
  int v11; // esi
  unsigned int v12; // r8d
  __int64 v13; // rdx
  unsigned int *v14; // rsi
  ULONG_PTR v15; // rbx
  int v16; // r14d
  int v17; // r14d
  __int64 v18; // rsi
  int v19; // r11d
  int v20; // r10d
  __int64 v21; // r9
  unsigned int v22; // edx
  __int64 v23; // r8
  int v24; // eax
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  ULONG_PTR v28; // r15
  unsigned __int64 v29; // r14
  unsigned int v30; // r15d
  ULONG_PTR v31; // rax
  ULONG_PTR BugCheckParameter4; // rcx
  int IsNonPagedPoolNx; // eax
  unsigned int v34; // r11d
  int v35; // r9d
  __int64 v36; // r10
  unsigned int v37; // ecx
  __int64 v38; // r8
  int v39; // eax
  _DWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  struct _FAST_MUTEX *v43; // rcx
  __int64 v44; // r8
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int8 OldIrql; // si
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 *v51; // rcx
  int v52; // r11d
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE *v54; // r9
  unsigned int i; // eax
  int v56; // eax
  struct _KPRCB *v57; // rcx
  __int128 *HeapFromVA; // rax
  int v59; // [rsp+30h] [rbp-68h]
  ULONG_PTR v60; // [rsp+38h] [rbp-60h]
  ULONG_PTR v61; // [rsp+38h] [rbp-60h]
  int v62; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int8 v66; // [rsp+B8h] [rbp+20h]

  v4 = a4;
  v62 = a4 & 1;
  v6 = PoolVector[a4 & 1];
  if ( a4 == 33 )
  {
    v6 = MiSessionPoolVector();
  }
  else if ( (a4 & 1) == 0 && !(unsigned int)MmIsNonPagedPoolNx(BugCheckParameter3) )
  {
    v6 += 4416LL;
  }
  v7 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( (v4 & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(qword_14043B080 + 8248);
    v9 = (volatile signed __int32 *)(qword_14043B080 + 8120);
    v10 = *(_QWORD *)(qword_14043B080 + 8256);
  }
  else
  {
    v8 = PoolBigPageTable;
    v9 = &ExpPoolBigEntriesInUse;
    v10 = PoolBigPageTableSize;
  }
  v60 = 0LL;
LABEL_8:
  v11 = 1;
  v12 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter3 >> 12)) >> 32) ^ (40543
                                                                                       * (BugCheckParameter3 >> 12))) & (v10 - 1);
  while ( *(_QWORD *)(v8 + 24LL * v12) != BugCheckParameter3 )
  {
    if ( ++v12 >= v10 )
    {
      if ( !v11 )
      {
LABEL_95:
        if ( (v4 & 0x21) != 0
          || v8 != PoolBigPageTable
          || (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) == -1
          || (v8 = *(_QWORD *)(qword_14043B080 + 8248),
              v9 = (volatile signed __int32 *)(qword_14043B080 + 8120),
              v10 = *(_QWORD *)(qword_14043B080 + 8256),
              !v8)
          || !v10 )
        {
          KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter3, v4, 0LL);
        }
        goto LABEL_8;
      }
      v12 = 0;
      v11 = 0;
    }
  }
  v13 = v8 + 24LL * v12;
  if ( !v13 )
    goto LABEL_95;
  v14 = a2;
  v15 = *(_QWORD *)(v13 + 16);
  v16 = *(_DWORD *)(v13 + 12) >> 8;
  *a2 = *(_DWORD *)(v13 + 8);
  v17 = v16 & 0xFFF;
  if ( a3 )
    *a3 = v15;
  if ( v8 != PoolBigPageTable || *(_DWORD *)(v13 + 8) == 1819242320 )
  {
    v66 = 0;
    LOWORD(v59) = 0;
  }
  else
  {
    v59 = *(_DWORD *)(v13 + 12) >> 20;
    v14 = a2;
    v66 = *(_BYTE *)(v13 + 12);
  }
  _InterlockedDecrement(v9);
  _InterlockedIncrement64((volatile signed __int64 *)v13);
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  if ( (v17 & 0x21) == 0x20 )
    LODWORD(v4) = v17;
  v18 = *v14;
  if ( (_DWORD)v18 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3618, v4, v18, BugCheckParameter3, v15);
  v19 = v4 & 0x20;
  if ( (v4 & 0x20) != 0 )
  {
    v21 = ExpSessionPoolTrackTable;
    v20 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v20 = PoolTrackTableMask;
    v21 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v22 = v20 & ((40543 * v18) ^ ((unsigned __int64)(40543 * v18) >> 32));
  while ( 1 )
  {
    v23 = 56LL * v22;
    v24 = *(_DWORD *)(v23 + v21);
    v25 = (_DWORD *)(v23 + v21);
    if ( v24 == (_DWORD)v18 )
      break;
    if ( v24 || v19 )
      goto LABEL_44;
    v52 = *(_DWORD *)(v23 + PoolTrackTable);
    if ( v52 )
    {
      *v25 = v52;
      v19 = v4 & 0x20;
    }
    else
    {
      v19 = v4 & 0x20;
LABEL_44:
      v22 = v20 & (v22 + 1);
      if ( v22 == (v20 & ((40543 * (int)v18) ^ ((unsigned __int64)(40543 * v18) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion((unsigned int)v18, v15, (unsigned int)v4);
        v19 = v4 & 0x20;
        goto LABEL_30;
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v26 = 8LL;
    v27 = 12LL;
  }
  else
  {
    v26 = 2LL;
    v27 = 6LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v25[v27]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v25[v26], -(__int64)v15);
LABEL_30:
  if ( (v17 & 0x40) != 0 )
  {
    VerifierFreeTrackedPool(BugCheckParameter3);
    v19 = v4 & 0x20;
  }
  LOBYTE(v28) = 0;
  if ( (v15 & 0xFFF) == 0 )
  {
    if ( v66 )
    {
      v54 = (_BYTE *)(BugCheckParameter3 + v15 - (unsigned __int16)v59);
      for ( i = 0; i < (unsigned __int16)v59; ++i )
      {
        if ( *v54 != v66 )
          KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter3, (ULONG_PTR)v54, v66);
        ++v54;
      }
    }
    goto LABEL_34;
  }
  v31 = *(_QWORD *)(v15 + BugCheckParameter3 + 16);
  BugCheckParameter4 = v15 + BugCheckParameter3;
  v60 = v15 + BugCheckParameter3;
  if ( v31 != v15 )
    KeBugCheckEx(0x19u, 0x21uLL, BugCheckParameter3, v15, v31);
  v28 = *(unsigned __int8 *)(BugCheckParameter4 + 1);
  if ( v62 )
  {
    if ( v19 )
      goto LABEL_106;
    v6 = ExpPagedPoolDescriptor[v28];
    v34 = ExpNumberOfPagedPools + 1;
  }
  else
  {
    if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
    {
      v6 = ExpNonPagedPoolDescriptor[v28];
      IsNonPagedPoolNx = MmIsNonPagedPoolNx(BugCheckParameter4);
      BugCheckParameter4 = v15 + BugCheckParameter3;
      if ( !IsNonPagedPoolNx )
        v6 += 4416LL;
      goto LABEL_51;
    }
LABEL_106:
    v34 = 1;
  }
LABEL_51:
  if ( (unsigned int)v28 >= v34 )
    KeBugCheckEx(0x19u, 0x24uLL, v28, v34, BugCheckParameter4);
LABEL_34:
  ExpFreePoolChecks(BugCheckParameter3);
  v29 = v15;
  if ( (v15 & 0xFFF) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 152), 0x20uLL);
    if ( PoolHitTag == 1734439494 )
      __debugbreak();
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      EtwTracePool(3618, v4, 1734439494, v60, 32LL);
    if ( (v4 & 0x20) != 0 )
    {
      v36 = ExpSessionPoolTrackTable;
      v35 = ExpSessionPoolTrackTableMask;
    }
    else
    {
      v35 = PoolTrackTableMask;
      v36 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
    }
    v37 = v35 & 0x81B0A40E;
    while ( 1 )
    {
      v38 = 56LL * v37;
      v39 = *(_DWORD *)(v36 + v38);
      v40 = (_DWORD *)(v36 + v38);
      if ( v39 == 1734439494 )
        break;
      if ( v39 || (v4 & 0x20) != 0 || (v56 = *(_DWORD *)(PoolTrackTable + 56LL * v37)) == 0 )
      {
        v37 = v35 & (v37 + 1);
        if ( v37 == (v35 & 0x81B0A40E) )
        {
          ExpRemovePoolTrackerExpansion(1734439494LL, 32LL, (unsigned int)v4);
          goto LABEL_64;
        }
      }
      else
      {
        *v40 = v56;
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v41 = 8LL;
      v42 = 12LL;
    }
    else
    {
      v41 = 2LL;
      v42 = 6LL;
    }
    _InterlockedIncrement64((volatile signed __int64 *)&v40[v42]);
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v40[v41], 0xFFFFFFFFFFFFFFE0uLL);
LABEL_64:
    v61 = v60 + 32;
    v43 = (struct _FAST_MUTEX *)(v6 + 8);
    if ( v62 )
    {
      ExAcquireFastMutex(v43);
      PsBoostThreadIo(KeGetCurrentThread(), 0LL);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v43, &LockHandle);
    }
    v44 = v61;
    v45 = *(unsigned __int16 *)(v61 + 2);
    v46 = v61 + 16LL * (unsigned __int8)v45;
    if ( !BYTE1(v45) )
    {
      if ( (_BYTE)v45 != 1 )
      {
        v45 = *(_QWORD *)(v61 + 24);
        v47 = *(_QWORD *)(v61 + 16);
        if ( *(_QWORD *)(v47 + 8) != v61 + 16 || *(_QWORD *)v45 != v61 + 16 )
          goto LABEL_119;
        *(_QWORD *)v45 = v47;
        *(_QWORD *)(v47 + 8) = v45;
      }
      v44 = v46;
    }
    if ( (v44 & 0xFFF) == 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
      goto LABEL_74;
    }
    v49 = v44 & 0xFFFFFFFFFFFFF000uLL;
    *(_WORD *)(v49 + 2) = (unsigned __int8)(v44 >> 4);
    *(_BYTE *)v49 = 0;
    *(_BYTE *)(v49 + 1) = v28;
    *(_DWORD *)(v49 + 4) = 1701147206;
    *(_BYTE *)v44 = v44 >> 4;
    v45 = (v44 & 0xFFFFFFFFFFFFF000uLL) + 16;
    v50 = v6 + 16 * ((unsigned int)(unsigned __int8)*(_WORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 2) - 1 + 20LL);
    v51 = *(unsigned __int64 **)(v50 + 8);
    if ( *v51 == v50 )
    {
      *(_QWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x10) = v50;
      v15 &= 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = v51;
      *v51 = v45;
      *(_QWORD *)(v50 + 8) = v45;
LABEL_74:
      if ( v62 )
      {
        LOBYTE(v45) = 1;
        PsBoostThreadIo(KeGetCurrentThread(), v45);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 8));
      }
      else
      {
        KxReleaseQueuedSpinLock(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v57 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v57);
        }
        __writecr8(OldIrql);
      }
      goto LABEL_35;
    }
LABEL_119:
    __fastfail(3u);
  }
LABEL_35:
  if ( v15 )
  {
    if ( !a3 )
    {
      v30 = *a2;
      if ( (unsigned int)ExpHeapBackedPoolEnabledState >= 2
        && (HeapFromVA = (__int128 *)ExGetHeapFromVA(BugCheckParameter3)) != 0LL )
      {
        RtlpHpFreeHeap(HeapFromVA, BugCheckParameter3, 0);
      }
      else
      {
        MiFreePoolPages(BugCheckParameter3, (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL, v30);
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 144), (int)(v15 >> 12));
  }
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 128));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 152), v29);
}
