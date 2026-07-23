/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x14001F590
 * Callers:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14007D950 (CcNotifyOfMappedWrite.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     CcDeductDirtyPages @ 0x14002124C (CcDeductDirtyPages.c)
 *     CcFindBcb @ 0x1400212D0 (CcFindBcb.c)
 *     CcFindBitmapRangeToClean @ 0x140023088 (CcFindBitmapRangeToClean.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14011BA6C (CcInsertIntoCleanSharedCacheMapList.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

bool __fastcall CcAcquireByteRangeForWrite(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        int a8)
{
  __int64 v10; // r13
  __int64 BitmapRangeToClean; // r12
  int *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r9
  int v15; // edi
  __int64 *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // r10
  char Bcb; // al
  __int64 v21; // rcx
  __int64 v22; // r13
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // r11d
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v33; // ecx
  __int64 v34; // r10
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r10
  unsigned int v43; // r8d
  int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rbx
  unsigned int v50; // eax
  unsigned int v51; // eax
  __int64 v52; // rdx
  unsigned __int8 OldIrql; // bl
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // r9
  unsigned __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v62; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v64; // [rsp+50h] [rbp-F8h]
  int v65; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v66; // [rsp+60h] [rbp-E8h]
  struct _FAST_MUTEX *Mutex; // [rsp+68h] [rbp-E0h]
  __int64 v68; // [rsp+70h] [rbp-D8h]
  int v69; // [rsp+78h] [rbp-D0h]
  __int64 v70[5]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-A0h]
  __int64 v72; // [rsp+B0h] [rbp-98h]
  __int64 Partition; // [rsp+B8h] [rbp-90h]
  unsigned int *v74; // [rsp+C0h] [rbp-88h]
  __int64 v75; // [rsp+D0h] [rbp-78h]
  __int64 v76[3]; // [rsp+E0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F8h] [rbp-50h] BYREF

  v10 = a1;
  v74 = a6;
  v72 = a1;
  v71 = 0LL;
  v65 = 0;
  BitmapRangeToClean = 0LL;
  v66 = 0LL;
  v12 = 0LL;
  v13 = 0x7FFFFFFFFFFFFFFFLL;
  v75 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (_BYTE)a8 )
    PsBoostThreadIo(KeGetCurrentThread(), 0LL);
  Partition = CcGetPartition(v10);
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v10 + 240) + 8LL))(**(_QWORD **)(v10 + 240), *a4);
  Mutex = (struct _FAST_MUTEX *)(v10 + 280);
  ExAcquireFastMutex((PFAST_MUTEX)(v10 + 280));
  v14 = *(_QWORD *)(v10 + 160);
  v68 = v14;
  if ( !v14 || !*(_DWORD *)(v14 + 8) || !*(_DWORD *)(v14 + 4) && !a3 )
  {
    v64 = (__int64)a5;
    v69 = a8;
LABEL_7:
    v15 = a8;
    goto LABEL_8;
  }
  if ( !a2 )
  {
    v34 = 0LL;
    if ( !a3 )
      v34 = *(_QWORD *)(v14 + 32);
    BitmapRangeToClean = CcFindBitmapRangeToClean(v14, v34);
    v37 = *(unsigned int *)(BitmapRangeToClean + 28);
    v38 = *(_QWORD *)(BitmapRangeToClean + 16);
    if ( v36 > (__int64)(v37 + v38) )
      v36 = v38 + *(unsigned int *)(BitmapRangeToClean + 24);
    v39 = *(_QWORD *)(BitmapRangeToClean + 40);
LABEL_70:
    v40 = v39 + 4 * (v37 >> 5);
    goto LABEL_71;
  }
  v64 = *a2 >> 12;
  v13 = (a3 + *a2 - 1) >> 12;
  v55 = CcFindBitmapRangeToClean(v14, v64);
  BitmapRangeToClean = v55;
  v38 = *(_QWORD *)(v55 + 16);
  if ( v13 < v38 + *(unsigned int *)(v55 + 24) || (v37 = *(unsigned int *)(v55 + 28), v36 > (__int64)(v37 + v38)) )
  {
    v69 = a8;
    goto LABEL_7;
  }
  v39 = *(_QWORD *)(v55 + 40);
  v35 = v68;
  if ( v13 >= (__int64)(v37 + v38) )
    goto LABEL_70;
  v40 = v39 + 4 * (((unsigned __int64)(v13 - v38) >> 5) & 0x7FFFFFF);
LABEL_71:
  v66 = v40;
  v41 = v36;
  v42 = v38 + *(unsigned int *)(BitmapRangeToClean + 24);
  if ( v41 >= v42 )
    v42 = v41;
  v64 = v42;
  v43 = v42 - *(_DWORD *)(BitmapRangeToClean + 16);
  v69 = v43;
  v12 = (int *)(v39 + 4 * ((unsigned __int64)v43 >> 5));
  v15 = -1 << (v42 % 32);
  v44 = *v12;
  if ( (*v12 & v15) == 0 )
  {
    v15 = -1;
    v42 &= 0xFFFFFFFFFFFFFFE0uLL;
    v57 = v66;
    do
    {
      ++v12;
      v42 += 32LL;
      v64 = v42;
      if ( (unsigned __int64)v12 > v57 )
      {
        if ( !v26 )
          *(_DWORD *)(BitmapRangeToClean + 28) = v43 - 1;
        do
        {
          BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
          if ( BitmapRangeToClean == v35 + 16 )
          {
            if ( v26 )
              goto LABEL_8;
            BitmapRangeToClean = *(_QWORD *)BitmapRangeToClean;
          }
        }
        while ( !*(_DWORD *)(BitmapRangeToClean + 32) );
        v58 = *(unsigned int *)(BitmapRangeToClean + 24);
        v59 = *(_QWORD *)(BitmapRangeToClean + 16);
        if ( v13 < (__int64)(v59 + v58) )
          goto LABEL_8;
        v60 = *(unsigned int *)(BitmapRangeToClean + 28);
        if ( v42 > (__int64)(v60 + v59) )
          goto LABEL_8;
        v61 = *(_QWORD *)(BitmapRangeToClean + 40);
        v12 = (int *)(v61 + 4 * (v58 >> 5));
        v66 = v61 + 4 * (v60 >> 5);
        v42 = v59 + ((unsigned int)v58 & 0xFFFFFFE0);
        v64 = v42;
        v43 = *(_DWORD *)(BitmapRangeToClean + 24);
        v69 = v43;
        v35 = v68;
        v57 = v66;
      }
      v44 = *v12;
    }
    while ( !*v12 );
  }
  v15 = -v15;
  if ( (v44 & v15) == 0 )
  {
    do
    {
      v15 *= 2;
      ++v42;
    }
    while ( (v44 & v15) == 0 );
    v64 = v42;
  }
  if ( !a2 )
  {
LABEL_76:
    if ( (gCcTrace & 1) != 0 )
    {
      if ( a2 )
        v62 = *a2;
      else
        v62 = 0LL;
      DbgPrintEx(
        0x7Fu,
        0,
        "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
        v62,
        v26,
        (const void *)v10,
        v42,
        (const void *)BitmapRangeToClean,
        *(_DWORD *)(BitmapRangeToClean + 32));
      v42 = v64;
      v26 = a3;
    }
    while ( (v15 & *v12) != 0 )
    {
      if ( a2 && v42 + *a6 >= (unsigned int)((*a2 + 4095 + v26) >> 12) )
        break;
      if ( (unsigned __int64)v12 > *(_QWORD *)(BitmapRangeToClean + 40)
                                 + 4 * ((unsigned __int64)*(unsigned int *)(BitmapRangeToClean + 28) >> 5) )
        KeBugCheckEx(0x34u, 0x119DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( !a2 && *a6 >= CcMaxLazyWritePages )
        break;
      *v12 -= v15;
      ++*a6;
      v15 *= 2;
      if ( !v15 )
      {
        ++v12;
        v15 = 1;
        if ( (unsigned __int64)v12 > v66 )
          break;
      }
    }
    v45 = *a6;
    v46 = *(_DWORD *)(v68 + 4);
    if ( *a6 < v46 )
      v47 = v46 - v45;
    else
      v47 = 0;
    *(_DWORD *)(v68 + 4) = v47;
    v48 = *(_DWORD *)(v68 + 8);
    if ( v48 < v45 )
      KeBugCheckEx(0x34u, 0x11CCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v68 + 8) = v48 - v45;
    *(_DWORD *)(BitmapRangeToClean + 32) -= v45;
    v49 = Partition;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDeductDirtyPages(v10, *a6);
    v50 = *(_DWORD *)(v49 + 456);
    if ( v50 <= *a6 )
      v51 = 0;
    else
      v51 = v50 - *a6;
    *(_DWORD *)(v49 + 456) = v51;
    if ( !*(_DWORD *)(v10 + 112) )
      CcInsertIntoCleanSharedCacheMapList(v10);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v52);
    }
    __writecr8(OldIrql);
    if ( *(_DWORD *)(BitmapRangeToClean + 32) )
    {
      v56 = *v74;
      if ( *(_DWORD *)(BitmapRangeToClean + 24) == v69 )
        *(_DWORD *)(BitmapRangeToClean + 24) = v56 + v64 - *(_DWORD *)(BitmapRangeToClean + 16);
      if ( a3 )
        goto LABEL_95;
      v54 = v64 + v56;
    }
    else
    {
      *(_DWORD *)(BitmapRangeToClean + 24) = -1;
      *(_DWORD *)(BitmapRangeToClean + 28) = 0;
      v54 = *(_QWORD *)(BitmapRangeToClean + 16) + 0x2000LL;
    }
    *(_QWORD *)(v68 + 32) = v54;
LABEL_95:
    if ( *(_QWORD *)(v10 + 16) == v10 + 16 )
      *(_DWORD *)(v10 + 192) = *(_DWORD *)(v68 + 4);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 280));
    *a6 <<= 12;
    *a5 = v64 << 12;
    *a7 = 0LL;
    goto LABEL_37;
  }
  if ( v42 < (v26 + *a2 + 4095) >> 12 )
  {
    if ( *(_QWORD *)(v10 + 16) == v10 + 16 )
      goto LABEL_76;
    v65 = 1;
  }
LABEL_8:
  v16 = (__int64 *)(v72 + 200);
  v17 = v71;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v10 + 24) - 16LL;
    v70[0] = v18;
    v19 = a1;
    if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    {
      if ( a2 )
        v16 = a2;
      if ( *v16 )
      {
        v76[0] = *v16 + 4096;
        Bcb = CcFindBcb(a1, v16, v76, v70);
        v19 = a1;
        if ( Bcb )
        {
          v18 = v70[0];
        }
        else
        {
          v18 = *(_QWORD *)(v70[0] + 24) - 16LL;
          v70[0] = v18;
        }
      }
    }
    v21 = v19 + 16;
    if ( v18 + 16 != v19 + 16 )
    {
      while ( 1 )
      {
        if ( *(_WORD *)v18 != 765 )
          goto LABEL_17;
        if ( (*(_DWORD *)(v19 + 152) & 0x1000000) != 0 && a4 && *(_QWORD *)(v18 + 48) > *a4 )
        {
          v22 = *(_QWORD *)(v18 + 24);
          ++CcDbgLsnLargerThanHint;
          goto LABEL_18;
        }
        if ( a2 )
        {
          v26 = a3;
          if ( *a2 + a3 <= *(_QWORD *)(v18 + 8) )
          {
            v23 = a5;
            goto LABEL_28;
          }
        }
        v24 = *a6;
        if ( (_DWORD)v24 )
        {
          v23 = a5;
          if ( !*(_BYTE *)(v18 + 2) )
            goto LABEL_27;
          v25 = *(_QWORD *)(v18 + 8);
          if ( v25 != *a5 + v24 || *(_DWORD *)(v18 + 64) || (v25 & 0x1FFFFFF) == 0 )
            goto LABEL_27;
        }
        else
        {
          if ( !*(_BYTE *)(v18 + 2) )
            goto LABEL_17;
          if ( a2 )
          {
            if ( *a2 >= *(_QWORD *)(v18 + 32) )
              goto LABEL_17;
          }
          else if ( *(_QWORD *)(v18 + 8) < *(_QWORD *)(v19 + 200) )
          {
            goto LABEL_17;
          }
          if ( v65 )
          {
            v42 = v64;
            if ( v64 <= (unsigned int)(*(__int64 *)(v18 + 8) >> 12) )
            {
              v26 = a3;
              goto LABEL_148;
            }
          }
        }
        ++*(_DWORD *)(v18 + 64);
        KeReleaseGuardedMutex(Mutex);
        if ( (*(_DWORD *)(a1 + 152) & 0x202) != 0x200 )
          break;
        if ( !ExAcquireResourceExclusiveLite((PERESOURCE)(v18 + 72), *a6 == 0) )
        {
          CcUnpinFileDataEx((PVOID)v18);
          ExAcquireFastMutex(Mutex);
          goto LABEL_19;
        }
        ExAcquireFastMutex(Mutex);
        if ( *(_BYTE *)(v18 + 2) )
        {
          v19 = a1;
          if ( (*(_DWORD *)(a1 + 152) & 0x1000000) == 0 || !a4 || *(_QWORD *)(v18 + 48) <= *a4 )
            goto LABEL_50;
          ++CcDbgLsnLargerThanHint;
        }
        KeReleaseGuardedMutex(Mutex);
        CcUnpinFileDataEx((PVOID)v18);
        ExAcquireFastMutex(Mutex);
        if ( *a6 )
          goto LABEL_19;
        v19 = a1;
        v22 = *(_QWORD *)(a1 + 24);
        v21 = a1 + 16;
LABEL_18:
        v18 = v22 - 16;
        v70[0] = v18;
        if ( v18 + 16 == v21 )
          goto LABEL_19;
      }
      CcUnpinFileDataEx((PVOID)v18);
      ExAcquireFastMutex(Mutex);
      v19 = a1;
LABEL_50:
      v65 = 0;
      v33 = *a6;
      if ( !*a6 )
        *a5 = *(_QWORD *)(v18 + 8);
      *a7 = v18;
      *a6 = *(_DWORD *)(v18 + 4) + v33;
      if ( (*(_DWORD *)(v19 + 152) & 0x3000000) != 0 && *(_QWORD *)(v18 + 48) > v17 )
        v17 = *(_QWORD *)(v18 + 48);
      v21 = v19 + 16;
LABEL_17:
      v22 = *(_QWORD *)(v18 + 24);
      goto LABEL_18;
    }
LABEL_19:
    v23 = a5;
LABEL_27:
    v26 = a3;
LABEL_28:
    if ( v65 )
    {
      v42 = v64;
LABEL_148:
      v10 = a1;
      goto LABEL_76;
    }
    v27 = *a6;
    v10 = a1;
    if ( *a6 )
      break;
    v16 = (__int64 *)(a1 + 200);
    if ( !*(_QWORD *)(a1 + 200) || a2 )
      goto LABEL_33;
    *v16 = 0LL;
  }
  if ( !a2 )
  {
    *(_QWORD *)(a1 + 200) = *v23 + v27;
    v28 = v27 >> 12;
    v29 = *(_DWORD *)(a1 + 192);
    if ( v29 <= v28 )
      *(_DWORD *)(a1 + 192) = 0;
    else
      *(_DWORD *)(a1 + 192) = v29 - v28;
  }
LABEL_33:
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  if ( v17 )
  {
    v31 = *(_QWORD *)(v72 + 240);
    if ( (*(_DWORD *)(a1 + 152) & 0x2000000) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(a1 + 248))(v31, v17);
    else
      (*(void (__fastcall **)(_QWORD, __int64))(v31 + 8))(*(_QWORD *)v31, v17);
  }
LABEL_37:
  if ( (_BYTE)a8 )
  {
    LOBYTE(v30) = 1;
    PsBoostThreadIo(KeGetCurrentThread(), v30);
  }
  return *a6 != 0;
}
