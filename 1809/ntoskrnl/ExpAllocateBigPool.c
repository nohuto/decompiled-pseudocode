/*
 * XREFs of ExpAllocateBigPool @ 0x1400E6A70
 * Callers:
 *     ExInsertPoolTag @ 0x1400E6A34 (ExInsertPoolTag.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpAddTagForBigPages @ 0x1400E7190 (ExpAddTagForBigPages.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     ExFreeHeapPages @ 0x14015B374 (ExFreeHeapPages.c)
 *     ExAllocateHeapPages @ 0x14015C990 (ExAllocateHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExDeferredFreePool @ 0x14034E7A0 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x140705040 (MiSessionPoolVector.c)
 */

__int64 __fastcall ExpAllocateBigPool(__int64 a1, int a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // r13
  char v6; // bl
  unsigned __int64 v8; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 HeapPages; // rax
  unsigned int v15; // esi
  __int64 v16; // rax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r11
  __int64 v20; // rdx
  unsigned int v21; // ebx
  unsigned int v22; // r10d
  __int64 v23; // r14
  int v24; // eax
  volatile signed __int32 *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v30; // r9
  unsigned __int64 v31; // rsi
  unsigned int v32; // ebp
  int v33; // ecx
  int v34; // r9d
  __int64 v35; // r11
  __int64 v36; // rax
  unsigned int v37; // ebx
  unsigned int v38; // r10d
  __int64 v39; // rdx
  volatile signed __int32 *v40; // r13
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // r10
  unsigned int v44; // ecx
  __int64 v45; // rbx
  struct _FAST_MUTEX *v46; // r15
  __int64 v47; // rdx
  __int64 **v48; // rax
  __int64 *v49; // rsi
  unsigned __int8 v50; // bl
  __int64 v51; // r9
  unsigned __int8 OldIrql; // si
  volatile signed __int32 v53; // r10d
  void *v54; // rcx
  int v55; // r8d
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int32 v57; // eax
  unsigned __int8 v58; // r13
  struct _KPRCB *v59; // rcx
  struct _KPRCB *v60; // rcx
  __int64 v61; // [rsp+30h] [rbp-B8h]
  __int64 v62; // [rsp+30h] [rbp-B8h]
  unsigned int v63; // [rsp+3Ch] [rbp-ACh]
  int v64; // [rsp+40h] [rbp-A8h]
  __int64 v65; // [rsp+40h] [rbp-A8h]
  __int64 v66; // [rsp+48h] [rbp-A0h]
  int v67; // [rsp+48h] [rbp-A0h]
  __int64 v69; // [rsp+50h] [rbp-98h]
  __int64 v70; // [rsp+58h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE v71; // [rsp+60h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v72; // [rsp+78h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int16 v74; // [rsp+F0h] [rbp+8h]
  unsigned int v75; // [rsp+F0h] [rbp+8h]
  char v76; // [rsp+100h] [rbp+18h]

  v5 = a4;
  v6 = 0;
  v76 = 0;
  v74 = 0;
  v8 = a3;
  v10 = 4096LL;
  if ( a1 )
  {
    if ( (a5 & 2) != 0 )
    {
      v54 = (void *)(a3 + a1);
      if ( ((unsigned __int16)v54 & 0xFFF) != 0 )
      {
        v6 = MEMORY[0xFFFFF78000000320] | 1;
        v74 = ((unsigned __int16)v54 & 0xF000) - (_WORD)v54 + 4096;
        memset(v54, MEMORY[0xFFFFF78000000320] | 1, v74);
      }
    }
    if ( (a5 & 1) != 0 )
      v8 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  if ( (v8 & 0xFFF) - 1 <= 0xFBF )
  {
    if ( v8 >= v8 + 63 )
      return 0LL;
    v11 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  else
  {
    if ( v8 >= v8 + 4095 )
      return 0LL;
    v11 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  v12 = a2 & 1;
  if ( (a2 & 0x20) != 0 && (a2 & 1) != 0 )
  {
    v13 = MiSessionPoolVector(0x140000000uLL, v10);
  }
  else
  {
    v13 = PoolVector[v12];
    if ( (a2 & 1) == 0 && (a2 & 0x200) == 0 )
      v13 += 4416LL;
  }
  if ( v11 >= 0x10000 || (ExpPoolFlags & 0x20) != 0 )
  {
    if ( v11 < v11 + 4095 )
    {
      v11 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_11;
    }
    return 0LL;
  }
LABEL_11:
  LODWORD(HeapPages) = a1;
  v15 = a2 & 0x80000261;
  v61 = a1;
  if ( !a1 )
  {
    HeapPages = ExAllocateHeapPages(v15, v11);
    v61 = HeapPages;
    if ( !HeapPages )
    {
      if ( (ExpPoolFlags & 0x100) == 0 )
        return 0LL;
      ExDeferredFreePool(v13, 0LL);
      HeapPages = ExAllocateHeapPages(v15, v11);
      v61 = HeapPages;
      if ( !HeapPages )
        return 0LL;
    }
  }
  if ( !(unsigned int)ExpAddTagForBigPages(HeapPages, v5, v11, a2, v74, v6) )
  {
    if ( !a1 )
      ExFreeHeapPages(v61, (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v5, v15);
    return 0LL;
  }
  if ( (v11 & 0xFFF) != 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      if ( (a2 & 0x20) == 0 )
      {
        if ( a2 < 0 )
        {
          LODWORD(v51) = 0;
          v76 = 0;
        }
        else if ( (unsigned __int16)KeNumberNodes <= 1u )
        {
          LODWORD(v51) = 1;
          v76 = 1;
          if ( ExpNumberOfPagedPools != 1 )
          {
            v51 = (unsigned int)(ExpPoolIndex + 1);
            if ( (unsigned int)v51 > ExpNumberOfPagedPools )
              v51 = 1LL;
            v55 = v51;
            ExpPoolIndex = v51;
            do
            {
              if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v51] + 16) )
                break;
              v51 = (unsigned int)(v51 + 1);
              if ( (unsigned int)v51 > ExpNumberOfPagedPools )
                v51 = 1LL;
            }
            while ( (_DWORD)v51 != v55 );
            v76 = v51;
          }
        }
        else
        {
          LODWORD(v51) = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
          v76 = v51;
          if ( (unsigned int)v51 < ExpNumberOfPagedPools )
          {
            LODWORD(v51) = v51 + 1;
            v76 = v51;
          }
        }
        v13 = ExpPagedPoolDescriptor[(unsigned int)v51];
        _InterlockedIncrement64((volatile signed __int64 *)(v13 + 72));
        goto LABEL_16;
      }
      v76 = 0;
    }
    else if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
    {
      v30 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
      v76 = v30;
      if ( (unsigned int)v30 >= ExpNumberOfNonPagedPools )
      {
        v30 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
        v76 = ExpNumberOfNonPagedPools - 1;
      }
      v13 = ExpNonPagedPoolDescriptor[v30];
      if ( (a2 & 0x200) == 0 )
      {
        v13 += 4416LL;
        _InterlockedIncrement64((volatile signed __int64 *)(v13 + 72));
        goto LABEL_16;
      }
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v13 + 72));
  }
  else
  {
    v76 = 0;
  }
LABEL_16:
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 80), (int)(v11 >> 12));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 88), v11);
  if ( (_DWORD)v5 == PoolHitTag )
    __debugbreak();
  v16 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v16 = EtwTracePool(3616, a2, v5, v61, v11);
  v17 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
  {
    v20 = ExpSessionPoolTrackTable;
    v18 = ExpSessionPoolTrackTableMask;
    v19 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v16) = KeGetPcr()->Prcb.Number;
    v18 = PoolTrackTableMask;
    v19 = PoolTrackTableSize;
    v20 = (__int64)*(&ExPoolTagTables + v16);
  }
  v66 = v19;
  v64 = v18;
  v70 = v20;
  v21 = v18 & ((40543 * v5) ^ ((unsigned __int64)(40543 * v5) >> 32));
  v22 = v21;
  v75 = v21;
  while ( 1 )
  {
    v23 = 56LL * v21;
    v24 = *(_DWORD *)(v23 + v20);
    v25 = (volatile signed __int32 *)(v23 + v20);
    if ( v24 == (_DWORD)v5 )
      break;
    if ( v24 )
    {
LABEL_25:
      v21 = v18 & (v21 + 1);
      if ( v21 == v22 )
      {
        ExpInsertPoolTrackerExpansion((unsigned int)v5, v11, (unsigned int)a2);
        goto LABEL_30;
      }
    }
    else
    {
      if ( v17 )
        goto LABEL_73;
      v53 = *(_DWORD *)(v23 + PoolTrackTable);
      if ( v53 )
      {
        *v25 = v53;
        v22 = v75;
      }
      else
      {
        v22 = v75;
LABEL_73:
        if ( v21 == v19 - 1 )
          goto LABEL_25;
        if ( v17 )
        {
          _InterlockedCompareExchange(v25, v5, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v71);
          if ( !*(_DWORD *)(PoolTrackTable + 56LL * v21) )
          {
            *(_DWORD *)(PoolTrackTable + 56LL * v21) = v5;
            *v25 = v5;
          }
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&v71);
          OldIrql = v71.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v71.OldIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(OldIrql);
          v20 = v70;
          v17 = a2 & 0x20;
          v18 = v64;
          v22 = v75;
          v19 = v66;
        }
      }
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v26 = 8LL;
    v27 = 10LL;
  }
  else
  {
    v26 = 2LL;
    v27 = 4LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v25[v27]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v25[v26], v11);
LABEL_30:
  v28 = v61;
  if ( (a3 & 0xFFF) != 0 && a2 < 0 )
    memset((void *)(v61 + (a3 & 0xFFFFFFFFFFFFF000uLL)), 0, 0x1000uLL);
  if ( (v11 & 0xFFF) == 0 )
    return v28;
  v31 = v61 + v11;
  *(_BYTE *)(v31 + 1) = v76;
  v32 = a2 & 0x221 | 2;
  *(_BYTE *)(v31 + 2) = 2;
  *(_BYTE *)(v31 + 3) = v32;
  *(_BYTE *)v31 = 0;
  *(_DWORD *)(v31 + 4) = 1734439494;
  *(_QWORD *)(v31 + 16) = v11;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 88), 0x20uLL);
  if ( PoolHitTag == 1734439494 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, v32, 1734439494, v61 + v11, 32LL);
  v33 = v32 & 0x20;
  if ( (v32 & 0x20) != 0 )
  {
    v36 = ExpSessionPoolTrackTable;
    v34 = ExpSessionPoolTrackTableMask;
    v35 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    v34 = PoolTrackTableMask;
    v35 = PoolTrackTableSize;
    v36 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
    v33 = v32 & 0x20;
  }
  v65 = v35;
  v37 = v34 & 0x81B0A40E;
  v67 = v34;
  v38 = v34 & 0x81B0A40E;
  v63 = v34 & 0x81B0A40E;
  v62 = v36;
  while ( 1 )
  {
    v39 = 56LL * v37;
    v69 = v39;
    v40 = (volatile signed __int32 *)(v36 + v39);
    v41 = *(_DWORD *)(v36 + v39);
    if ( v41 == 1734439494 )
      break;
    if ( v41 )
      goto LABEL_129;
    if ( !v33 )
    {
      v57 = *(_DWORD *)(v39 + PoolTrackTable);
      if ( v57 )
      {
        *v40 = v57;
        v36 = v62;
        continue;
      }
    }
    if ( v37 == v35 - 1 )
    {
LABEL_129:
      v36 = v62;
      v37 = v34 & (v37 + 1);
      if ( v37 == v38 )
      {
        ExpInsertPoolTrackerExpansion(1734439494LL, 32LL, v32);
        goto LABEL_54;
      }
    }
    else if ( v33 )
    {
      _InterlockedCompareExchange(v40, 1734439494, 0);
      v36 = v62;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v72);
      if ( !*(_DWORD *)(PoolTrackTable + v69) )
      {
        *(_DWORD *)(PoolTrackTable + v69) = 1734439494;
        *v40 = 1734439494;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v72);
      v58 = v72.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v72.OldIrql < 2u )
      {
        v59 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v59->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v59);
      }
      __writecr8(v58);
      v33 = v32 & 0x20;
      v34 = v67;
      v36 = v62;
      v38 = v63;
      v35 = v65;
    }
  }
  if ( (v32 & 1) != 0 )
  {
    v42 = 8LL;
    v43 = 10LL;
  }
  else
  {
    v42 = 2LL;
    v43 = 4LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v40[v43]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v40[v42], 0x20uLL);
LABEL_54:
  *(_BYTE *)(v31 + 35) = 0;
  *(_BYTE *)(v31 + 32) = 2;
  *(_DWORD *)(v31 + 36) = 1701147206;
  v44 = (4096 - (((_WORD)v11 + 32) & 0xFFFu)) >> 4;
  *(_BYTE *)(v31 + 34) = v44;
  *(_BYTE *)(v31 + 33) = v76;
  v45 = v13 + 16 * (v44 - 1 + 20LL);
  v46 = (struct _FAST_MUTEX *)(v13 + 8);
  if ( (_DWORD)v12 )
  {
    ExAcquireFastMutex(v46);
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  }
  else
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v46, &LockHandle);
  }
  v48 = *(__int64 ***)(v45 + 8);
  v49 = (__int64 *)(v31 + 48);
  if ( *v48 != (__int64 *)v45 )
    __fastfail(3u);
  *v49 = v45;
  v49[1] = (__int64)v48;
  *v48 = v49;
  *(_QWORD *)(v45 + 8) = v49;
  if ( (_DWORD)v12 )
  {
    LOBYTE(v47) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v47);
    KeReleaseGuardedMutex(v46);
  }
  else
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v50 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v60 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v60->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v60);
    }
    __writecr8(v50);
  }
  return v28;
}
