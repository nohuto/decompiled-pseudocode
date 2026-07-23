/*
 * XREFs of CcLazyWriteScan @ 0x1400D57DC
 * Callers:
 *     CcWorkerThread @ 0x14007F2D0 (CcWorkerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScanLogHandleList @ 0x14007EBD8 (CcScanLogHandleList.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     CcShouldLazyWriteCacheMap @ 0x1400D5F64 (CcShouldLazyWriteCacheMap.c)
 *     CcPostWorkQueue @ 0x1400D6078 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1400D63AC (CcAllocateWorkQueueEntry.c)
 *     CcSetLazyWriteScanQueued @ 0x1400D74F0 (CcSetLazyWriteScanQueued.c)
 *     CcAdjustThrottle @ 0x1400D75D4 (CcAdjustThrottle.c)
 *     CcCalculatePagesToWrite @ 0x1400D7774 (CcCalculatePagesToWrite.c)
 *     CcRescheduleLazyWriteScan @ 0x1400D784C (CcRescheduleLazyWriteScan.c)
 *     CcUpdateTimeOnLogHandles @ 0x14012C090 (CcUpdateTimeOnLogHandles.c)
 *     CcComputeNextScanTime @ 0x14013750C (CcComputeNextScanTime.c)
 *     CcPerfLogLoggedStreamsStats @ 0x14018C2B4 (CcPerfLogLoggedStreamsStats.c)
 *     CcPerfLogLazyWriteScan @ 0x14018DCCC (CcPerfLogLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CcPostDeferredWrites @ 0x140269BA0 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcLazyWriteScan(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // r12d
  int v6; // r13d
  unsigned __int64 v7; // r9
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rtt
  unsigned __int64 v12; // r11
  __int64 v13; // rax
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
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  char v30; // al
  __int64 v31; // r8
  int v32; // ecx
  _QWORD *v33; // rcx
  char v34; // bl
  unsigned __int8 v35; // bl
  __int64 result; // rax
  int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned __int8 v40; // r14
  int v41; // eax
  KSPIN_LOCK *v42; // rcx
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned int v48; // ecx
  unsigned __int8 v49; // r14
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rax
  __int64 *v54; // r12
  __int64 v55; // r14
  unsigned __int8 OldIrql; // bl
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rax
  unsigned int v60; // ecx
  _QWORD *v61; // rdx
  _QWORD *v62; // rdx
  _QWORD *v63; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v65; // bl
  struct _KPRCB *v66; // rcx
  struct _KPRCB *v67; // rcx
  unsigned __int64 v68; // rcx
  __int64 v69; // rdx
  _QWORD *v70; // rax
  unsigned __int64 *v71; // rdx
  _QWORD *v72; // rax
  __int64 *v73; // rcx
  __int64 v74; // rcx
  struct _KPRCB *v75; // rcx
  struct _KPRCB *v76; // rcx
  char v77; // [rsp+60h] [rbp-49h]
  char v78; // [rsp+61h] [rbp-48h]
  unsigned int v79; // [rsp+64h] [rbp-45h] BYREF
  __int64 v80; // [rsp+68h] [rbp-41h]
  _QWORD *v81; // [rsp+70h] [rbp-39h] BYREF
  _QWORD **v82; // [rsp+78h] [rbp-31h]
  __int64 v83; // [rsp+80h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-21h] BYREF
  __int64 v85; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v87; // [rsp+B0h] [rbp+7h] BYREF
  volatile signed __int64 *v88[9]; // [rsp+B8h] [rbp+Fh] BYREF
  char v89; // [rsp+110h] [rbp+67h]
  char v91; // [rsp+128h] [rbp+7Fh]

  v86 = 0x7FFFFFFFFFFFFFFFLL;
  v3 = a3;
  v91 = 0;
  v89 = 0;
  v6 = 0;
  v78 = 0;
  v77 = 0;
  if ( a1 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(a1, &v79, a3, &v86);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  CcSetLazyWriteScanQueued(a1, v3, 0LL);
  v7 = *(unsigned int *)(a1 + 672);
  v8 = (__int64 *)(a1 + 600);
  v9 = *(__int64 **)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 656) / v7;
  *(_QWORD *)(a1 + 696) = v10;
  v11 = *(_QWORD *)(a1 + 664);
  *(_QWORD *)(a1 + 704) = v11 / v7;
  v12 = v11 / v7;
  v13 = *v9;
  v14 = *(_QWORD *)(a1 + 600);
  if ( (unsigned int)v7 <= 1 )
  {
    v15 = *(_QWORD *)(v13 + 7296);
    v16 = *v8;
  }
  else
  {
    v15 = *(_QWORD *)(v13 + 7296) + v10 * (unsigned int)(v7 - 1);
    v16 = *v8 + v12 * (unsigned int)(v7 - 1);
  }
  *(_QWORD *)(a1 + 656) = v15;
  *(_QWORD *)(a1 + 664) = v16;
  if ( !v14 && !*(_BYTE *)(a1 + 593) )
  {
    if ( *(_QWORD *)(a1 + 744) == a1 + 744 )
    {
      *(_BYTE *)(a1 + 592) = 0;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v65 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v66 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v66->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v66);
    }
    __writecr8(v65);
    return CcPostDeferredWrites(a1);
  }
  v82 = &v81;
  v17 = (_QWORD **)(a1 + 272);
  v81 = &v81;
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == v17 )
      break;
    v61 = (_QWORD *)*v18;
    if ( (_QWORD **)v18[1] != v17 || (_QWORD *)v61[1] != v18 || (*v17 = v61, v61[1] = v17, v62 = v82, *v82 != &v81) )
LABEL_88:
      __fastfail(3u);
    v18[1] = v82;
    *v18 = &v81;
    *v62 = v18;
    v82 = (_QWORD **)v18;
  }
  *(_BYTE *)(a1 + 593) = 0;
  v19 = CcCalculatePagesToWrite(a1, v3, (int)a1 + 600, (int)a1 + 624, 0);
  v20 = *(unsigned int *)(a1 + 456);
  v79 = v19;
  v21 = v19;
  CcAdjustThrottle(a1, a1 + 600, a1 + 624, v20);
  v22 = *(unsigned int *)(a1 + 304);
  *(_QWORD *)(a1 + 608) = *v8;
  v23 = *(_QWORD *)(a1 + 680);
  *(_DWORD *)(a1 + 616) = v21;
  *(_DWORD *)(a1 + 456) = v21;
  *(_DWORD *)(v23 + 8 * v22) = v21;
  *(_QWORD *)(a1 + 728) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140542350 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a2,
      v3,
      *(_DWORD *)(a1 + 456),
      *v8,
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 7296LL),
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
    while ( 1 )
    {
      v27 = v26 + 136;
      v83 = v26 + 136;
      v28 = v25;
      if ( v26 + 136 == v24 )
      {
LABEL_19:
        v3 = a3;
        goto LABEL_20;
      }
      v25 = v26;
      if ( v28 )
        v25 = v28;
      v29 = *(_QWORD *)(v26 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
      v80 = v25;
      v30 = CcShouldLazyWriteCacheMap(v26, v79, v29, a3);
      v32 = *(_DWORD *)(v26 + 152);
      if ( v30 )
      {
        if ( (v32 & 0x1000000) != 0 )
        {
          v78 = 1;
          *(_DWORD *)(*(_QWORD *)(v26 + 240) + 144LL) |= 1u;
          v45 = *(_QWORD *)(v26 + 240);
          v46 = *(_QWORD *)(v26 + 256);
          if ( v46 > *(_QWORD *)(v45 + 112) )
          {
            *(_QWORD *)(v45 + 112) = v46;
            if ( (xmmword_140542350 & 0x20000) != 0 )
              *(_QWORD *)(*(_QWORD *)(v26 + 240) + 128LL) = *(_QWORD *)((*(_QWORD *)(v26 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                      + 0x18);
          }
        }
        v37 = *(_DWORD *)(v26 + 152);
        v38 = *(_DWORD *)(v26 + 112);
        *(_DWORD *)(v26 + 192) = v38;
        if ( (v37 & 0x200) != 0 && v38 >= 0x40 )
        {
          if ( (v37 & 0x1000000) != 0 && (v47 = *(_QWORD *)(v26 + 240), (v48 = *(_DWORD *)(v47 + 104)) != 0) )
          {
            if ( v38 <= v48 )
              v60 = v48 - v38;
            else
              v60 = 0;
            *(_DWORD *)(v47 + 104) = v60;
            ++CcDbgSkippedReductions;
          }
          else
          {
            *(_DWORD *)(v26 + 192) = v38 >> 3;
          }
        }
        if ( !v91 )
        {
          v39 = *(_DWORD *)(v26 + 192);
          if ( v39 >= v79 )
          {
            if ( (*(_DWORD *)(v26 + 152) & 0x200) != 0 || v25 == v26 && (*(_DWORD *)(v26 + 268) & 0xF) == 0 )
            {
              v89 = 1;
            }
            else
            {
              v50 = *(_QWORD *)v24;
              v51 = *(_QWORD **)(a1 + 80);
              if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
                goto LABEL_88;
              if ( *v51 != v24 )
                goto LABEL_88;
              *v51 = v50;
              *(_QWORD *)(v50 + 8) = v51;
              v52 = *(__int64 **)(v26 + 144);
              if ( *v52 != v27 )
                goto LABEL_88;
              *(_QWORD *)v24 = v27;
              *(_QWORD *)(a1 + 80) = v52;
              *v52 = v24;
              *(_QWORD *)(v26 + 144) = v24;
            }
            v79 = 0;
            v91 = 1;
          }
          else
          {
            v79 -= v39;
          }
        }
        *(_DWORD *)(v26 + 152) |= 0x20u;
        ++*(_DWORD *)(v26 + 112);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v40 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v67 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v67->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v67);
        }
        __writecr8(v40);
        v41 = CcAllocateWorkQueueEntry(a1, &v87);
        v42 = (KSPIN_LOCK *)(a1 + 128);
        if ( v41 < 0 )
        {
          KeAcquireInStackQueuedSpinLock(v42, &LockHandle);
          *(_DWORD *)(v26 + 152) &= ~0x20u;
          --*(_DWORD *)(v26 + 112);
          v3 = a3;
          goto LABEL_20;
        }
        v43 = v87;
        *(_BYTE *)(v87 + 120) = 2;
        *(_QWORD *)(v43 + 16) = v26;
        KeAcquireInStackQueuedSpinLock(v42, &LockHandle);
        --*(_DWORD *)(v26 + 112);
        if ( (*(_DWORD *)(v26 + 152) & 0x10000) != 0 )
        {
          v44 = a1 + 224;
          *(_QWORD *)(v26 + 496) = v43 | 1;
        }
        else
        {
          *(_QWORD *)(v26 + 496) = v43;
          v44 = a1 + 256;
        }
        CcPostWorkQueue(v43, v44);
        v77 = 1;
        v6 = 0;
        goto LABEL_43;
      }
      if ( (v32 & 0x10020) == 0x10020 )
        break;
      if ( (unsigned int)++v6 >= 0x14 && (v32 & 0x820) == 0 )
      {
        ++*(_DWORD *)(v26 + 112);
        *(_DWORD *)(v26 + 152) = v32 | 0x20;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v49 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v75 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v75->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v75);
        }
        __writecr8(v49);
        v6 = 0;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
        *(_DWORD *)(v26 + 152) &= ~0x20u;
        --*(_DWORD *)(v26 + 112);
LABEL_43:
        v25 = v80;
      }
      v26 = *(_QWORD *)v27 - 136LL;
      if ( v89 )
      {
        v57 = *(_QWORD *)v24;
        v58 = *(_QWORD **)(a1 + 80);
        if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
          goto LABEL_88;
        if ( *v58 != v24 )
          goto LABEL_88;
        *v58 = v57;
        *(_QWORD *)(v57 + 8) = v58;
        v59 = *(_QWORD *)v27;
        if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
          goto LABEL_88;
        *(_QWORD *)v24 = v59;
        *(_QWORD *)(a1 + 80) = v27;
        *(_QWORD *)(v59 + 8) = v24;
        v89 = 0;
        *(_QWORD *)v27 = v24;
      }
      if ( v26 == v25 )
        goto LABEL_19;
    }
    v53 = *(_QWORD *)(v26 + 496);
    v54 = 0LL;
    v55 = *(_QWORD *)(v26 + 528);
    if ( v53 && (v53 & 1) == 0 )
    {
      v88[0] = 0LL;
      v88[1] = (volatile signed __int64 *)(v55 + 192);
      KxAcquireQueuedSpinLock((__int64)v88, (volatile __int64 *)(v55 + 192), v31);
      v68 = *(_QWORD *)(v26 + 496);
      if ( v68 )
      {
        *(_QWORD *)(v26 + 496) = v68 | 1;
        v69 = *(_QWORD *)v68;
        v70 = *(_QWORD **)(v68 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v68 + 8LL) != v68 )
          goto LABEL_88;
        if ( *v70 != v68 )
          goto LABEL_88;
        *v70 = v69;
        *(_QWORD *)(v69 + 8) = v70;
        *(_QWORD *)(v68 + 8) = 0LL;
        *(_QWORD *)v68 = 0LL;
        v71 = *(unsigned __int64 **)(v55 + 232);
        if ( *v71 != v55 + 224 )
          goto LABEL_88;
        *(_QWORD *)v68 = v55 + 224;
        *(_QWORD *)(v68 + 8) = v71;
        *v71 = v68;
        *(_QWORD *)(v55 + 232) = v68;
        if ( !*(_BYTE *)(v55 + 312) )
        {
          v72 = (_QWORD *)(v55 + 208);
          v73 = *(__int64 **)(v55 + 208);
          if ( v73 != (__int64 *)(v55 + 208) )
          {
            v54 = *(__int64 **)(v55 + 208);
            v74 = *v73;
            if ( (_QWORD *)v54[1] != v72 || *(__int64 **)(v74 + 8) != v54 )
              goto LABEL_88;
            *v72 = v74;
            *(_QWORD *)(v74 + 8) = v72;
            ++*(_DWORD *)(v55 + 204);
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v55 + 904)) <= 1 )
              __fastfail(0xEu);
          }
        }
        KxReleaseQueuedSpinLock(v88);
        if ( v54 )
        {
          *v54 = 0LL;
          ExQueueWorkItemToPartition(v54, 0, 0xFFFFFFFF, *(_QWORD *)(v55 + 8));
        }
      }
      else
      {
        KxReleaseQueuedSpinLock(v88);
      }
    }
    v27 = v83;
    goto LABEL_43;
  }
LABEL_20:
  v33 = v81;
  v34 = v77;
  if ( v81 != &v81 )
    v34 = 1;
  while ( v33 != &v81 )
  {
    v63 = (_QWORD *)*v33;
    if ( (_QWORD **)v33[1] != &v81 || (_QWORD *)v63[1] != v33 )
      goto LABEL_88;
    v81 = (_QWORD *)*v33;
    v63[1] = &v81;
    CcPostWorkQueue(v33, a1 + 256);
    v33 = v81;
  }
  v85 = 0LL;
  if ( (_BYTE)dword_14054119C
    || v34
    || *(_QWORD *)(a1 + 744) != a1 + 744
    || (CcComputeNextScanTime(a1, &v86, &v85), v85 != 0x7FFFFFFFFFFFFFFFLL) )
  {
    CcRescheduleLazyWriteScan(a1, &v85);
    if ( *(_BYTE *)(a1 + 140) )
      *(_BYTE *)(a1 + 140) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 140) = 1;
    *(_BYTE *)(a1 + 592) = 0;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v35 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v76 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v76->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v76);
  }
  __writecr8(v35);
  if ( v78 )
    CcUpdateTimeOnLogHandles(a1);
  if ( (xmmword_140542350 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(v3, *(unsigned int *)(a1 + 456));
  result = a1 + 744;
  if ( *(_QWORD *)result != result )
    return CcPostDeferredWrites(a1);
  return result;
}
