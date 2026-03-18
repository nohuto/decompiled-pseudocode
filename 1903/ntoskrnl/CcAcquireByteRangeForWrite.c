/*
 * XREFs of CcAcquireByteRangeForWrite @ 0x140077D30
 * Callers:
 *     CcFlushCachePriv @ 0x140077160 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14007B6BC (CcNotifyOfMappedWrite.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIo @ 0x14003DFB0 (PsBoostThreadIo.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     CcDeductDirtyPages @ 0x14007A234 (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     CcFindBcb @ 0x14007A780 (CcFindBcb.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14011E3C0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcFindBitmapRangeToClean @ 0x140123D4C (CcFindBitmapRangeToClean.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

bool __fastcall CcAcquireByteRangeForWrite(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6,
        __int64 *a7,
        unsigned int a8)
{
  _QWORD *v11; // r13
  int *v12; // rsi
  __int64 v13; // r15
  __int64 v14; // r10
  __int64 v15; // r9
  unsigned int v16; // r8d
  int v17; // edi
  __int64 *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r15
  char Bcb; // al
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned int v25; // ecx
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  struct _FAST_MUTEX *v28; // r15
  unsigned int v29; // ecx
  __int64 v30; // rdi
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v36; // r11
  __int64 v37; // r9
  __int64 v38; // r11
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r11
  unsigned __int64 v45; // rax
  int v46; // eax
  unsigned int v47; // ebx
  unsigned int v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  __int64 v51; // rbx
  unsigned int v52; // eax
  unsigned __int8 OldIrql; // bl
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 BitmapRangeToClean; // rax
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // r9
  unsigned __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v62; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  struct _FAST_MUTEX *Mutex; // [rsp+50h] [rbp-E8h]
  __int64 v65; // [rsp+58h] [rbp-E0h]
  int v66; // [rsp+60h] [rbp-D8h]
  __int64 v67; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v68; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v69; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v70; // [rsp+80h] [rbp-B8h]
  __int64 v71; // [rsp+A8h] [rbp-90h]
  __int64 v72; // [rsp+B8h] [rbp-80h]
  __int64 v73; // [rsp+C0h] [rbp-78h]
  __int64 v74; // [rsp+C8h] [rbp-70h] BYREF
  __int64 Partition; // [rsp+D0h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-60h] BYREF

  v73 = a1;
  v71 = 0LL;
  v66 = 0;
  v11 = 0LL;
  v69 = 0LL;
  v12 = 0LL;
  v13 = 0x7FFFFFFFFFFFFFFFLL;
  v72 = 0x7FFFFFFFFFFFFFFFLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_BYTE)a8 )
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  Partition = CcGetPartition(a1);
  *a5 = 0LL;
  *a6 = 0;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 240) + 8LL))(**(_QWORD **)(a1 + 240), *a4);
  Mutex = (struct _FAST_MUTEX *)(a1 + 280);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v14 = a1;
  v15 = *(_QWORD *)(a1 + 160);
  v68 = v15;
  v16 = a3;
  if ( !v15 || !*(_DWORD *)(v15 + 8) || !*(_DWORD *)(v15 + 4) && !a3 )
  {
    v65 = (__int64)a5;
    v70 = a8;
LABEL_7:
    v17 = a8;
    goto LABEL_8;
  }
  if ( a2 )
  {
    v65 = *a2 >> 12;
    v13 = (a3 + *a2 - 1) >> 12;
    BitmapRangeToClean = CcFindBitmapRangeToClean(v15, v65);
    v11 = (_QWORD *)BitmapRangeToClean;
    v40 = *(_QWORD *)(BitmapRangeToClean + 16);
    if ( v13 < v40 + *(unsigned int *)(BitmapRangeToClean + 24)
      || (v39 = *(unsigned int *)(BitmapRangeToClean + 28), v38 > (__int64)(v39 + v40)) )
    {
      v70 = a8;
      v16 = a3;
      goto LABEL_7;
    }
    v41 = *(_QWORD *)(BitmapRangeToClean + 40);
    if ( v13 < (__int64)(v39 + v40) )
    {
      v42 = v41 + 4 * (((unsigned __int64)(v13 - v40) >> 5) & 0x7FFFFFF);
      goto LABEL_74;
    }
  }
  else
  {
    v36 = 0LL;
    if ( !a3 )
      v36 = *(_QWORD *)(v15 + 32);
    v11 = (_QWORD *)CcFindBitmapRangeToClean(v15, v36);
    v39 = *((unsigned int *)v11 + 7);
    v40 = v11[2];
    if ( v38 > (__int64)(v39 + v40) )
      v38 = v40 + *((unsigned int *)v11 + 6);
    v41 = v11[5];
  }
  v42 = v41 + 4 * (v39 >> 5);
LABEL_74:
  v69 = v42;
  v43 = v38;
  v44 = v40 + *((unsigned int *)v11 + 6);
  if ( v43 >= v44 )
    v44 = v43;
  v65 = v44;
  v45 = (unsigned int)(v44 - *((_DWORD *)v11 + 4));
  v70 = v45;
  v12 = (int *)(v41 + 4 * (v45 >> 5));
  v17 = -1 << (v44 % 32);
  v46 = *v12;
  if ( (*v12 & v17) != 0 )
  {
LABEL_77:
    v17 = -v17;
    if ( (v46 & v17) == 0 )
    {
      do
      {
        v17 *= 2;
        ++v44;
      }
      while ( (v46 & v17) == 0 );
      v65 = v44;
    }
    if ( a2 )
    {
      v16 = a3;
      if ( v44 >= (a3 + 4095LL + *a2) >> 12 )
        goto LABEL_8;
      if ( *(_QWORD *)(v14 + 16) != v14 + 16 )
      {
        v66 = 1;
        goto LABEL_8;
      }
    }
LABEL_79:
    if ( (gCcTrace & 1) != 0 )
    {
      if ( a2 )
        v62 = *a2;
      else
        v62 = 0LL;
      v47 = a3;
      DbgPrintEx(
        0x7Fu,
        0,
        "CcAcquireByteRange (AcceptPage) [0x%I64x, 0x%x]: %p (0x%I64x) BM:%p Dirty: 0x%x\n",
        v62,
        a3,
        (const void *)v14,
        v44,
        v11,
        *((_DWORD *)v11 + 8));
      v37 = v68;
      v44 = v65;
    }
    else
    {
      v47 = a3;
    }
    while ( (v17 & *v12) != 0 )
    {
      if ( a2 && v44 + *a6 >= (unsigned int)((*a2 + 4095 + v47) >> 12) )
        break;
      if ( (unsigned __int64)v12 > v11[5] + 4 * ((unsigned __int64)*((unsigned int *)v11 + 7) >> 5) )
        KeBugCheckEx(0x34u, 0x11A8uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( !a2 && *a6 >= CcMaxLazyWritePages )
        break;
      *v12 -= v17;
      ++*a6;
      v17 *= 2;
      if ( !v17 )
      {
        ++v12;
        v17 = 1;
        if ( (unsigned __int64)v12 > v69 )
          break;
      }
    }
    v48 = *a6;
    v49 = *(_DWORD *)(v37 + 4);
    if ( *a6 < v49 )
      *(_DWORD *)(v37 + 4) = v49 - v48;
    else
      *(_DWORD *)(v37 + 4) = 0;
    v50 = *(_DWORD *)(v37 + 8);
    if ( v50 < v48 )
      KeBugCheckEx(0x34u, 0x11D7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v37 + 8) = v50 - v48;
    *((_DWORD *)v11 + 8) -= v48;
    v51 = Partition;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDeductDirtyPages(a1, *a6);
    v52 = *(_DWORD *)(v51 + 456);
    if ( v52 <= *a6 )
      *(_DWORD *)(v51 + 456) = 0;
    else
      *(_DWORD *)(v51 + 456) = v52 - *a6;
    if ( !*(_DWORD *)(a1 + 112) )
      CcInsertIntoCleanSharedCacheMapList(a1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    if ( *((_DWORD *)v11 + 8) )
    {
      if ( *((_DWORD *)v11 + 6) == (_DWORD)v70 )
        *((_DWORD *)v11 + 6) = v65 + *a6 - *((_DWORD *)v11 + 4);
      v55 = v68;
      if ( a3 )
        goto LABEL_99;
      v54 = v65 + *a6;
    }
    else
    {
      *((_DWORD *)v11 + 6) = -1;
      *((_DWORD *)v11 + 7) = 0;
      v54 = v11[2] + 0x2000LL;
      v55 = v68;
    }
    *(_QWORD *)(v55 + 32) = v54;
LABEL_99:
    if ( *(_QWORD *)(a1 + 16) == a1 + 16 )
      *(_DWORD *)(a1 + 192) = *(_DWORD *)(v55 + 4);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    *a6 <<= 12;
    *a5 = v65 << 12;
    *a7 = 0LL;
    goto LABEL_54;
  }
  v17 = -1;
  v44 &= 0xFFFFFFFFFFFFFFE0uLL;
  v57 = v69;
  while ( 1 )
  {
    ++v12;
    v44 += 32LL;
    v65 = v44;
    if ( (unsigned __int64)v12 > v57 )
      break;
LABEL_134:
    v46 = *v12;
    if ( *v12 )
      goto LABEL_77;
  }
  v16 = a3;
  if ( !a3 )
    *((_DWORD *)v11 + 7) = v70 - 1;
  do
  {
    v11 = (_QWORD *)*v11;
    if ( v11 == (_QWORD *)(v37 + 16) )
    {
      if ( a3 )
        goto LABEL_8;
      v11 = (_QWORD *)*v11;
    }
  }
  while ( !*((_DWORD *)v11 + 8) );
  v58 = *((unsigned int *)v11 + 6);
  v59 = v11[2];
  if ( v13 < (__int64)(v59 + v58) )
    goto LABEL_8;
  v60 = *((unsigned int *)v11 + 7);
  if ( v44 <= (__int64)(v60 + v59) )
  {
    v61 = v11[5];
    v12 = (int *)(v61 + 4 * (v58 >> 5));
    v69 = v61 + 4 * (v60 >> 5);
    v44 = v59 + ((unsigned int)v58 & 0xFFFFFFE0);
    v65 = v44;
    LODWORD(v70) = v58;
    v37 = v68;
    v57 = v69;
    goto LABEL_134;
  }
  v16 = a3;
LABEL_8:
  v18 = (__int64 *)(a1 + 200);
  v19 = v71;
  while ( 2 )
  {
    v20 = *(_QWORD *)(v14 + 24) - 16LL;
    v67 = v20;
    if ( (*(_DWORD *)(v14 + 152) & 0x200) != 0 )
    {
      if ( a2 )
        v18 = a2;
      if ( *v18 )
      {
        v74 = *v18 + 4096;
        Bcb = CcFindBcb(v14, v18, &v74, &v67);
        v14 = a1;
        v16 = a3;
        if ( Bcb )
        {
          v20 = v67;
        }
        else
        {
          v20 = *(_QWORD *)(v67 + 24) - 16LL;
          v67 = v20;
        }
      }
    }
    v22 = v14 + 16;
    if ( v20 + 16 != v14 + 16 )
    {
      while ( 2 )
      {
        if ( *(_WORD *)v20 != 765 )
          goto LABEL_17;
        if ( (*(_DWORD *)(v14 + 152) & 0x1000000) != 0 && a4 && *(_QWORD *)(v20 + 48) > *a4 )
        {
          v20 = *(_QWORD *)(v20 + 24) - 16LL;
          ++CcDbgLsnLargerThanHint;
          goto LABEL_19;
        }
        if ( a2 && *a2 + v16 <= *(_QWORD *)(v20 + 8) )
          goto LABEL_60;
        v24 = *a6;
        if ( (_DWORD)v24 )
        {
          v26 = a5;
          if ( !*(_BYTE *)(v20 + 2)
            || (v27 = *(_QWORD *)(v20 + 8), v27 != *a5 + v24)
            || *(_DWORD *)(v20 + 64)
            || (v27 & 0x1FFFFFF) == 0 )
          {
            v28 = Mutex;
            goto LABEL_45;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v20 + 2) )
            goto LABEL_17;
          if ( !a2 )
          {
            if ( *(_QWORD *)(v20 + 8) >= *(_QWORD *)(v14 + 200) )
              goto LABEL_29;
LABEL_17:
            v23 = *(_QWORD *)(v20 + 24);
LABEL_18:
            v20 = v23 - 16;
LABEL_19:
            v67 = v20;
            if ( v20 + 16 == v22 )
              goto LABEL_60;
            v16 = a3;
            continue;
          }
          if ( *a2 >= *(_QWORD *)(v20 + 32) )
            goto LABEL_17;
LABEL_29:
          if ( v66 )
          {
            v44 = v65;
            if ( v65 <= (unsigned int)(*(__int64 *)(v20 + 8) >> 12) )
              goto LABEL_154;
          }
        }
        break;
      }
      ++*(_DWORD *)(v20 + 64);
      KeReleaseGuardedMutex(Mutex);
      if ( (*(_DWORD *)(a1 + 152) & 0x202) == 0x200 )
      {
        if ( !ExAcquireResourceExclusiveLite((PERESOURCE)(v20 + 72), *a6 == 0) )
        {
          CcUnpinFileDataEx((PVOID)v20);
          v28 = Mutex;
          ExAcquireFastMutex(Mutex);
          goto LABEL_61;
        }
        ExAcquireFastMutex(Mutex);
        if ( *(_BYTE *)(v20 + 2) )
        {
          v14 = a1;
          if ( (*(_DWORD *)(a1 + 152) & 0x1000000) == 0 || !a4 || *(_QWORD *)(v20 + 48) <= *a4 )
            goto LABEL_36;
          ++CcDbgLsnLargerThanHint;
        }
        KeReleaseGuardedMutex(Mutex);
        CcUnpinFileDataEx((PVOID)v20);
        v28 = Mutex;
        ExAcquireFastMutex(Mutex);
        if ( *a6 )
          goto LABEL_61;
        v14 = a1;
        v23 = *(_QWORD *)(a1 + 24);
        v22 = a1 + 16;
        goto LABEL_18;
      }
      CcUnpinFileDataEx((PVOID)v20);
      ExAcquireFastMutex(Mutex);
      v14 = a1;
LABEL_36:
      v66 = 0;
      v25 = *a6;
      if ( !*a6 )
        *a5 = *(_QWORD *)(v20 + 8);
      *a7 = v20;
      *a6 = *(_DWORD *)(v20 + 4) + v25;
      if ( (*(_DWORD *)(v14 + 152) & 0x3000000) != 0 && *(_QWORD *)(v20 + 48) > v19 )
        v19 = *(_QWORD *)(v20 + 48);
      v22 = v14 + 16;
      goto LABEL_17;
    }
LABEL_60:
    v28 = Mutex;
LABEL_61:
    v26 = a5;
LABEL_45:
    if ( v66 )
    {
      v14 = a1;
      v44 = v65;
LABEL_154:
      v37 = v68;
      goto LABEL_79;
    }
    v29 = *a6;
    if ( *a6 )
    {
      v30 = a1;
      if ( !a2 )
      {
        *(_QWORD *)(a1 + 200) = *v26 + v29;
        v31 = v29 >> 12;
        v32 = *(_DWORD *)(a1 + 192);
        if ( v32 <= v31 )
          *(_DWORD *)(a1 + 192) = 0;
        else
          *(_DWORD *)(a1 + 192) = v32 - v31;
      }
    }
    else
    {
      v14 = a1;
      v18 = (__int64 *)(a1 + 200);
      if ( *(_QWORD *)(a1 + 200) && !a2 )
      {
        *v18 = 0LL;
        v16 = a3;
        continue;
      }
      v30 = a1;
    }
    break;
  }
  KeReleaseGuardedMutex(v28);
  if ( v19 )
  {
    v34 = *(_QWORD *)(v30 + 240);
    if ( (*(_DWORD *)(v30 + 152) & 0x2000000) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(v30 + 248))(v34, v19);
    else
      (*(void (__fastcall **)(_QWORD, __int64))(v34 + 8))(*(_QWORD *)v34, v19);
  }
LABEL_54:
  if ( (_BYTE)a8 )
  {
    LOBYTE(v33) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v33);
  }
  return *a6 != 0;
}
