/*
 * XREFs of CcLazyWriteScan @ 0x14007F194
 * Callers:
 *     CcWorkerThread @ 0x14007DD40 (CcWorkerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAllocateWorkQueueEntry @ 0x14007E504 (CcAllocateWorkQueueEntry.c)
 *     CcShouldLazyWriteCacheMap @ 0x14007F904 (CcShouldLazyWriteCacheMap.c)
 *     CcPostWorkQueue @ 0x14007FA14 (CcPostWorkQueue.c)
 *     CcScanLogHandleList @ 0x14008005C (CcScanLogHandleList.c)
 *     CcCalculatePagesToWrite @ 0x140080494 (CcCalculatePagesToWrite.c)
 *     CcRescheduleLazyWriteScan @ 0x1400E294C (CcRescheduleLazyWriteScan.c)
 *     CcAdjustThrottle @ 0x14012927C (CcAdjustThrottle.c)
 *     CcUpdateTimeOnLogHandles @ 0x14012E330 (CcUpdateTimeOnLogHandles.c)
 *     CcSetLazyWriteScanQueued @ 0x140131870 (CcSetLazyWriteScanQueued.c)
 *     CcComputeNextScanTime @ 0x140139F8C (CcComputeNextScanTime.c)
 *     CcPerfLogLoggedStreamsStats @ 0x14015B544 (CcPerfLogLoggedStreamsStats.c)
 *     CcPerfLogLazyWriteScan @ 0x14015BEAC (CcPerfLogLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     CcIncrementWriteBehindPriority @ 0x14027CA5C (CcIncrementWriteBehindPriority.c)
 *     CcPostDeferredWrites @ 0x14027D150 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcLazyWriteScan(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r13d
  int v6; // r15d
  unsigned __int64 v7; // r9
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  _QWORD **v17; // rcx
  _QWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // r8
  __int64 v29; // rdx
  char v30; // al
  int v31; // ecx
  _QWORD *v32; // rcx
  char v33; // bl
  unsigned __int8 v34; // bl
  __int64 result; // rax
  int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned __int8 v39; // r15
  int WorkQueueEntry; // eax
  KSPIN_LOCK *v41; // rcx
  unsigned __int64 v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned int v47; // ecx
  unsigned __int8 v48; // r15
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 *v51; // rax
  unsigned __int8 OldIrql; // bl
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rax
  unsigned int v56; // ecx
  _QWORD *v57; // rdx
  _QWORD *v58; // rdx
  _QWORD *v59; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v61; // bl
  struct _KPRCB *v62; // rcx
  struct _KPRCB *v63; // rcx
  struct _KPRCB *v64; // rcx
  struct _KPRCB *v65; // rcx
  char v66; // [rsp+60h] [rbp-29h]
  char v67; // [rsp+61h] [rbp-28h]
  unsigned int v68; // [rsp+64h] [rbp-25h] BYREF
  _QWORD *v69; // [rsp+68h] [rbp-21h] BYREF
  _QWORD **v70; // [rsp+70h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-11h] BYREF
  __int64 v72; // [rsp+90h] [rbp+7h] BYREF
  __int64 v73; // [rsp+98h] [rbp+Fh]
  __int64 v74; // [rsp+A0h] [rbp+17h] BYREF
  unsigned __int64 v75; // [rsp+A8h] [rbp+1Fh] BYREF
  char v76; // [rsp+F0h] [rbp+67h]
  unsigned int v77; // [rsp+100h] [rbp+77h]
  char v78; // [rsp+108h] [rbp+7Fh]

  v77 = a3;
  v69 = 0LL;
  v3 = a3;
  v70 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v74 = 0x7FFFFFFFFFFFFFFFLL;
  v78 = 0;
  v76 = 0;
  v67 = 0;
  v66 = 0;
  if ( a1 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(a1, &v68, a3, &v74);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  CcSetLazyWriteScanQueued(a1, v3, 0LL);
  v7 = *(unsigned int *)(a1 + 672);
  v8 = (__int64 *)(a1 + 600);
  v9 = *(__int64 **)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 656) / v7;
  *(_QWORD *)(a1 + 696) = v10;
  v11 = *(_QWORD *)(a1 + 664) / v7;
  *(_QWORD *)(a1 + 704) = v11;
  v12 = *v9;
  v14 = *(_QWORD *)(a1 + 600);
  if ( (unsigned int)v7 <= v13 + 1 )
  {
    v15 = *(_QWORD *)(v12 + 8064);
    v16 = *v8;
  }
  else
  {
    v15 = *(_QWORD *)(v12 + 8064) + v10 * (unsigned int)(v7 - 1);
    v16 = *v8 + v11 * (unsigned int)(v7 - 1);
  }
  *(_QWORD *)(a1 + 656) = v15;
  *(_QWORD *)(a1 + 664) = v16;
  if ( !v14 && !*(_BYTE *)(a1 + 593) )
  {
    if ( *(_QWORD *)(a1 + 744) == a1 + 744 )
    {
      *(_BYTE *)(a1 + 592) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = OldIrql;
      __writecr8(OldIrql);
      return result;
    }
    CcRescheduleLazyWriteScan(a1, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v61 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v62 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v62->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v62);
    }
    __writecr8(v61);
    return CcPostDeferredWrites(a1);
  }
  v70 = &v69;
  v17 = (_QWORD **)(a1 + 272);
  v69 = &v69;
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == v17 )
      break;
    v57 = (_QWORD *)*v18;
    if ( (_QWORD **)v18[1] != v17 || (_QWORD *)v57[1] != v18 || (*v17 = v57, v57[1] = v17, v58 = v70, *v70 != &v69) )
LABEL_86:
      __fastfail(3u);
    v18[1] = v70;
    *v18 = &v69;
    *v58 = v18;
    v70 = (_QWORD **)v18;
  }
  *(_BYTE *)(a1 + 593) = 0;
  v19 = CcCalculatePagesToWrite(a1, v3, (int)a1 + 600, (int)a1 + 624, 0);
  v20 = *(unsigned int *)(a1 + 456);
  v68 = v19;
  v21 = v19;
  CcAdjustThrottle(a1, a1 + 600, a1 + 624, v20);
  v22 = *(unsigned int *)(a1 + 304);
  *(_QWORD *)(a1 + 608) = *v8;
  v23 = *(_QWORD *)(a1 + 680);
  *(_DWORD *)(a1 + 616) = v21;
  *(_DWORD *)(a1 + 456) = v21;
  *(_DWORD *)(v23 + 8 * v22) = v21;
  *(_QWORD *)(a1 + 728) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140572410 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a2,
      v3,
      *(_DWORD *)(a1 + 456),
      *v8,
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8064LL),
      *(_QWORD *)(a1 + 624),
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 632),
      *(_QWORD *)(a1 + 640),
      *(_QWORD *)(a1 + 696),
      *(_QWORD *)(a1 + 704),
      *(unsigned int *)(a1 + 136));
  v24 = a1 + 72;
  v25 = 0LL;
  v26 = *(_QWORD *)(a1 + 72) - 136LL;
  if ( *(_QWORD *)(a1 + 72) != 136LL )
  {
    do
    {
      v27 = v26 + 136;
      if ( v26 + 136 == v24 )
        break;
      v28 = *(_QWORD *)(v26 + 96);
      v29 = v26;
      if ( v25 )
        v29 = v25;
      v73 = v29;
      v30 = CcShouldLazyWriteCacheMap(v26, v68, v28 & 0xFFFFFFFFFFFFFFF0uLL, v77);
      v31 = *(_DWORD *)(v26 + 152);
      if ( v30 )
      {
        if ( (v31 & 0x1000000) != 0 )
        {
          v67 = 1;
          *(_DWORD *)(*(_QWORD *)(v26 + 240) + 144LL) |= 1u;
          v44 = *(_QWORD *)(v26 + 240);
          v45 = *(_QWORD *)(v26 + 256);
          if ( v45 > *(_QWORD *)(v44 + 112) )
          {
            *(_QWORD *)(v44 + 112) = v45;
            if ( (xmmword_140572410 & 0x20000) != 0 )
              *(_QWORD *)(*(_QWORD *)(v26 + 240) + 128LL) = *(_QWORD *)((*(_QWORD *)(v26 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                      + 0x18);
          }
        }
        v36 = *(_DWORD *)(v26 + 152);
        v37 = *(_DWORD *)(v26 + 112);
        *(_DWORD *)(v26 + 192) = v37;
        if ( (v36 & 0x200) != 0 && v37 >= 0x40 )
        {
          if ( (v36 & 0x1000000) != 0 && (v46 = *(_QWORD *)(v26 + 240), (v47 = *(_DWORD *)(v46 + 104)) != 0) )
          {
            if ( v37 <= v47 )
              v56 = v47 - v37;
            else
              v56 = 0;
            *(_DWORD *)(v46 + 104) = v56;
            ++CcDbgSkippedReductions;
          }
          else
          {
            *(_DWORD *)(v26 + 192) = v37 >> 3;
          }
        }
        if ( !v78 )
        {
          v38 = *(_DWORD *)(v26 + 192);
          if ( v38 >= v68 )
          {
            if ( (*(_DWORD *)(v26 + 152) & 0x200) != 0 || v73 == v26 && (*(_DWORD *)(v26 + 268) & 0xF) == 0 )
            {
              v76 = 1;
            }
            else
            {
              v49 = *(_QWORD *)v24;
              v50 = *(_QWORD **)(a1 + 80);
              if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
                goto LABEL_86;
              if ( *v50 != v24 )
                goto LABEL_86;
              *v50 = v49;
              *(_QWORD *)(v49 + 8) = v50;
              v51 = *(__int64 **)(v26 + 144);
              if ( *v51 != v27 )
                goto LABEL_86;
              *(_QWORD *)v24 = v27;
              *(_QWORD *)(a1 + 80) = v51;
              *v51 = v24;
              *(_QWORD *)(v26 + 144) = v24;
            }
            v68 = 0;
            v78 = 1;
          }
          else
          {
            v68 -= v38;
          }
        }
        *(_DWORD *)(v26 + 152) |= 0x20u;
        ++*(_DWORD *)(v26 + 112);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v39 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v63 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v63->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v63);
        }
        __writecr8(v39);
        WorkQueueEntry = CcAllocateWorkQueueEntry(a1, (PSLIST_ENTRY *)&v75);
        v41 = (KSPIN_LOCK *)(a1 + 128);
        if ( WorkQueueEntry < 0 )
        {
          KeAcquireInStackQueuedSpinLock(v41, &LockHandle);
          *(_DWORD *)(v26 + 152) &= ~0x20u;
          --*(_DWORD *)(v26 + 112);
          break;
        }
        v42 = v75;
        *(_BYTE *)(v75 + 120) = 2;
        *(_QWORD *)(v42 + 16) = v26;
        KeAcquireInStackQueuedSpinLock(v41, &LockHandle);
        --*(_DWORD *)(v26 + 112);
        if ( (*(_DWORD *)(v26 + 152) & 0x10000) != 0 )
        {
          v43 = a1 + 224;
          *(_QWORD *)(v26 + 496) = v42 | 1;
        }
        else
        {
          *(_QWORD *)(v26 + 496) = v42;
          v43 = a1 + 256;
        }
        CcPostWorkQueue(v42, v43);
        v6 = 0;
        v66 = 1;
      }
      else if ( (v31 & 0x10020) == 0x10020 )
      {
        CcIncrementWriteBehindPriority(v26);
      }
      else if ( (unsigned int)++v6 >= 0x14 && (v31 & 0x820) == 0 )
      {
        ++*(_DWORD *)(v26 + 112);
        *(_DWORD *)(v26 + 152) = v31 | 0x20;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v48 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v64 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v64);
        }
        __writecr8(v48);
        v6 = 0;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
        *(_DWORD *)(v26 + 152) &= ~0x20u;
        --*(_DWORD *)(v26 + 112);
      }
      v26 = *(_QWORD *)v27 - 136LL;
      if ( v76 )
      {
        v53 = *(_QWORD *)v24;
        v54 = *(_QWORD **)(a1 + 80);
        if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
          goto LABEL_86;
        if ( *v54 != v24 )
          goto LABEL_86;
        *v54 = v53;
        *(_QWORD *)(v53 + 8) = v54;
        v55 = *(_QWORD *)v27;
        if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
          goto LABEL_86;
        *(_QWORD *)v24 = v55;
        *(_QWORD *)(a1 + 80) = v27;
        *(_QWORD *)(v55 + 8) = v24;
        *(_QWORD *)v27 = v24;
        v76 = 0;
      }
      v25 = v73;
    }
    while ( v26 != v73 );
    v3 = v77;
  }
  v32 = v69;
  v33 = v66;
  if ( v69 != &v69 )
    v33 = 1;
  while ( v32 != &v69 )
  {
    v59 = (_QWORD *)*v32;
    if ( (_QWORD **)v32[1] != &v69 || (_QWORD *)v59[1] != v32 )
      goto LABEL_86;
    v69 = (_QWORD *)*v32;
    v59[1] = &v69;
    CcPostWorkQueue(v32, a1 + 256);
    v32 = v69;
  }
  v72 = 0LL;
  if ( (_BYTE)dword_1405711AC
    || v33
    || *(_QWORD *)(a1 + 744) != a1 + 744
    || (CcComputeNextScanTime(a1, &v74, &v72), v72 != 0x7FFFFFFFFFFFFFFFLL) )
  {
    CcRescheduleLazyWriteScan(a1, &v72);
    if ( *(_BYTE *)(a1 + 140) )
      *(_BYTE *)(a1 + 140) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 140) = 1;
    *(_BYTE *)(a1 + 592) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v34 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v65 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v65->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v65);
  }
  __writecr8(v34);
  if ( v67 )
    CcUpdateTimeOnLogHandles(a1);
  if ( (xmmword_140572410 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(v3, *(unsigned int *)(a1 + 456));
  result = a1 + 744;
  if ( *(_QWORD *)result != result )
    return CcPostDeferredWrites(a1);
  return result;
}
