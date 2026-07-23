/*
 * XREFs of CcFlushCachePriv @ 0x14001EA90
 * Callers:
 *     CcZeroEndOfLastPage @ 0x14001C250 (CcZeroEndOfLastPage.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 *     MiFlushDataSection @ 0x140092FE8 (MiFlushDataSection.c)
 *     CcZeroData @ 0x1400E0CA0 (CcZeroData.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400E9670 (CcCoherencyFlushAndPurgeCache.c)
 *     CcFlushCache @ 0x14012A620 (CcFlushCache.c)
 *     CcFlushCacheToLsn @ 0x140160530 (CcFlushCacheToLsn.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     CcGetVirtualAddressIfMapped @ 0x14002037C (CcGetVirtualAddressIfMapped.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400207F4 (CcReleaseByteRangeFromWrite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140021AC0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcAmILowPriorityWriter @ 0x140021B3C (CcAmILowPriorityWriter.c)
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086770 (MmSetAddressRangeModifiedEx.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140107FD0 (CcBoostLowPriorityWorkerThread.c)
 *     CcIsFatalWriteError @ 0x14012DA80 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x140187504 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x140187600 (CcPerfLogFlushSection.c)
 *     CcSerializeWithLazyWriter @ 0x1401B2EE4 (CcSerializeWithLazyWriter.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x140269BA0 (CcPostDeferredWrites.c)
 */

void __fastcall CcFlushCachePriv(__int64 a1, void *a2, unsigned int a3, __int64 a4, char a5, char *a6)
{
  char v6; // r14
  int v8; // esi
  __int64 v9; // r15
  char *v10; // r12
  int v11; // ecx
  signed __int64 *v12; // rbx
  unsigned __int8 CurrentIrql; // r8
  __int64 v14; // r13
  signed __int64 *v15; // rax
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // r8
  signed __int64 v19; // rcx
  signed __int64 v20; // rdx
  int v21; // eax
  int v22; // r9d
  unsigned int v23; // r14d
  signed __int64 *v24; // rsi
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // r15d
  int v30; // ebx
  bool v31; // al
  signed __int64 *v32; // rdx
  unsigned int v33; // esi
  __int64 v34; // rdi
  unsigned int v35; // ebx
  int v36; // r12d
  __int64 v37; // r14
  __int64 VirtualAddressIfMapped; // rax
  int v39; // r9d
  unsigned int v40; // ecx
  __int64 v41; // rdx
  struct _KEVENT *v42; // rcx
  unsigned int v43; // eax
  __int64 v44; // rdi
  int v45; // r8d
  int v46; // eax
  int v47; // ecx
  char v48; // al
  signed __int64 v49; // rbx
  unsigned int v50; // esi
  int v51; // r9d
  int v52; // edi
  __int64 v53; // r14
  int v54; // eax
  int v55; // ecx
  int v56; // ecx
  __int64 v57; // rbx
  __int64 v58; // rcx
  signed __int64 v59; // rax
  signed __int64 v60; // r14
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v62; // [rsp+28h] [rbp-D8h]
  int v63; // [rsp+28h] [rbp-D8h]
  int v64; // [rsp+38h] [rbp-C8h]
  unsigned int v65; // [rsp+40h] [rbp-C0h] BYREF
  int v66; // [rsp+44h] [rbp-BCh]
  __int64 Partition; // [rsp+48h] [rbp-B8h]
  int v68; // [rsp+50h] [rbp-B0h]
  int v69; // [rsp+54h] [rbp-ACh]
  int v70; // [rsp+58h] [rbp-A8h]
  signed __int64 *v71; // [rsp+60h] [rbp-A0h]
  unsigned int v72; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v73; // [rsp+70h] [rbp-90h]
  unsigned int v74; // [rsp+78h] [rbp-88h]
  signed __int64 v75; // [rsp+80h] [rbp-80h] BYREF
  __int64 v76; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  signed __int64 v78; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h]
  __int64 v80; // [rsp+B8h] [rbp-48h] BYREF
  signed __int64 v81; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v82; // [rsp+C8h] [rbp-38h] BYREF
  char *v83; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+E8h] [rbp-18h]
  __int64 v85; // [rsp+F0h] [rbp-10h] BYREF
  char v86; // [rsp+F8h] [rbp-8h] BYREF
  int v87; // [rsp+160h] [rbp+60h]
  void *v88; // [rsp+168h] [rbp+68h]
  int v90; // [rsp+178h] [rbp+78h]

  v90 = a4;
  v88 = a2;
  v87 = a1;
  v6 = 0;
  v66 = 0;
  v74 = 0;
  v70 = 0;
  v8 = 0;
  LODWORD(v73) = 0;
  v9 = 0LL;
  v69 = 0;
  v68 = 0;
  v80 = 0LL;
  v76 = 0LL;
  Partition = 0LL;
  if ( a4 && a2 && a2 != &CcNoDelay )
    KeBugCheckEx(0x34u, 0x160AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = &v86;
  if ( a6 )
    v10 = a6;
  v79 = 0LL;
  v83 = v10;
  *(_DWORD *)v10 = 0;
  if ( a2 == &CcNoDelay )
  {
    a2 = 0LL;
    v76 = *((_QWORD *)v10 + 1);
    LODWORD(v73) = 1;
    v88 = 0LL;
    *(_DWORD *)v10 = -2147483626;
  }
  else
  {
    v11 = 1;
    if ( a5 )
      v11 = 17;
    v68 = v11;
  }
  *((_QWORD *)v10 + 1) = 0LL;
  v82.LockQueue.Next = 0LL;
  v12 = 0LL;
  if ( a2 != &CcFlushForImageSection )
    v12 = (signed __int64 *)a2;
  v82.LockQueue.Lock = &CcMasterLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v82.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock(&v82);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = v12;
  v71 = v12;
  if ( !v14 )
  {
    v17 = v73;
    goto LABEL_33;
  }
  Partition = CcGetPartition(v14);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock(&LockHandle);
  v16 = *(_DWORD *)(v14 + 152);
  v6 = 1;
  v71 = v12;
  v15 = v12;
  if ( (v16 & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)v12 & 1) == 0 )
      goto LABEL_40;
    v15 = (signed __int64 *)((unsigned __int64)v12 ^ 1);
    v71 = (signed __int64 *)((unsigned __int64)v12 ^ 1);
  }
  v17 = v73;
  if ( !(_DWORD)v73 )
  {
    if ( !v15 )
    {
LABEL_30:
      v18 = a3;
      ++*(_DWORD *)(v14 + 516);
      goto LABEL_34;
    }
    v19 = *v15;
    v20 = *(_QWORD *)(v14 + 32);
    if ( *v15 < v20 )
    {
      v18 = a3;
      if ( v19 + a3 <= v20 )
      {
        v15 = v71;
        ++*(_DWORD *)(v14 + 516);
        goto LABEL_34;
      }
      a3 = v20 - v19;
      v15 = v71;
      goto LABEL_30;
    }
LABEL_40:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_41:
    KeReleaseInStackQueuedSpinLock(&v82);
    return;
  }
  if ( (v16 & 0x10000) == 0 )
  {
LABEL_33:
    v18 = a3;
    goto LABEL_34;
  }
  v18 = a3;
  v69 = 1;
  if ( *(_DWORD *)(v14 + 516) )
    v8 = 1;
  v15 = v71;
LABEL_34:
  if ( v15 && !(_DWORD)v18 )
  {
    if ( v14 )
    {
      if ( !v17 )
        --*(_DWORD *)(v14 + 516);
    }
    if ( !v6 )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( v88 == &CcFlushForImageSection )
  {
    if ( !v14 )
      goto LABEL_49;
    if ( *(_DWORD *)(v14 + 516) >= 2u || !(unsigned __int8)CcSerializeWithLazyWriter(Partition, v14, v18) )
    {
      --*(_DWORD *)(v14 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      KeReleaseInStackQueuedSpinLock(&v82);
      v21 = -1073741740;
      goto LABEL_198;
    }
  }
  if ( v14 )
  {
    ++*(_DWORD *)(v14 + 4);
    ++*(_DWORD *)(v14 + 536);
    v9 = *(_QWORD *)((*(_QWORD *)(v14 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
LABEL_49:
  if ( v6 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeReleaseInStackQueuedSpinLock(&v82);
  v23 = 1;
  if ( v14 && (*(_DWORD *)(v14 + 152) & 0x40000000) != 0 )
    v8 = 1;
  if ( (xmmword_140542350 & 0x20000) != 0 )
    CcPerfLogFlushCache(v76, v14, (_DWORD)v71, a3, v17, v69, v8 == 1);
  if ( !v17 )
  {
    if ( !v14 )
      goto LABEL_68;
    if ( (*(_DWORD *)(v14 + 152) & 0x20) != 0 )
      CcBoostLowPriorityWorkerThread(Partition, v14);
  }
  if ( (!v14
     || (*(_BYTE *)(v9 + 6) & 0x10) != 0 && (*(_BYTE *)(v9 + 4) & 0x20) != 0
     || (*(_DWORD *)(v14 + 152) & 0x20000) != 0)
    && !v17
    || v8 )
  {
    goto LABEL_68;
  }
  if ( !v14 )
    return;
  if ( (*(_DWORD *)(v14 + 152) & 0x4000000) != 0 )
  {
LABEL_68:
    if ( (xmmword_140542350 & 0x20000) != 0 )
      CcPerfLogFlushSection(v76, v14, (_DWORD)v71, a3, v68);
    if ( v14 )
      CcUnmapVacbArray(v14, (_DWORD)v71, a3, 0, 0, 0);
    v24 = v71;
    v25 = MmFlushSection(v87, (_DWORD)v71, a3, v22, (__int64)v10, v68);
    if ( v25 >= 0 )
      goto LABEL_80;
    v26 = *(_DWORD *)v10;
    if ( v17 )
    {
      if ( v26 != -2147483626 )
      {
        v27 = v66;
        if ( *(int *)v10 < 0 )
          v27 = *(_DWORD *)v10;
        v66 = v27;
        goto LABEL_84;
      }
    }
    else if ( v26 )
    {
LABEL_80:
      v28 = v66;
      if ( *(int *)v10 < 0 )
        v28 = *(_DWORD *)v10;
      v66 = v28;
      goto LABEL_84;
    }
    *(_DWORD *)v10 = v25;
    goto LABEL_80;
  }
  v24 = v71;
LABEL_84:
  if ( !v14 )
    goto LABEL_197;
  if ( (*(_DWORD *)(v14 + 152) & 0x4000000) != 0 )
  {
    v29 = v73;
    goto LABEL_188;
  }
  if ( v24 )
    v81 = *v24;
  v29 = v73;
  if ( a3 )
    v23 = a3;
  v65 = v23;
  if ( (_DWORD)v73 )
  {
    v23 = v65;
    v79 = CcIdleDelayTick / 0xAu + MEMORY[0xFFFFF78000000320];
  }
  while ( 2 )
  {
    v30 = v69;
    if ( !*(_DWORD *)(v14 + 192) && v29 && !v69
      || !*(_QWORD *)(v14 + 8) && (*(_DWORD *)(v14 + 152) & 4) == 0 && !*(_DWORD *)(v14 + 112)
      || v70 )
    {
      goto LABEL_183;
    }
    v31 = v29 && (unsigned __int8)CcAmILowPriorityWriter(v14);
    if ( v29 && !v30 )
      v23 = 0;
    if ( !v29 || v30 )
    {
      v32 = &v81;
      if ( !v24 )
        LODWORD(v32) = 0;
    }
    else
    {
      LODWORD(v32) = 0;
    }
    LOBYTE(v64) = v31;
    if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                             v14,
                             (_DWORD)v32,
                             v23,
                             v90,
                             (__int64)&v75,
                             (__int64)&v65,
                             (__int64)&v85,
                             v64) )
    {
LABEL_183:
      v58 = Partition;
      goto LABEL_184;
    }
    v33 = v65;
    v34 = Partition;
    v35 = 0;
    v36 = v69;
    v37 = v65;
    v73 = v65;
    do
    {
      VirtualAddressIfMapped = CcGetVirtualAddressIfMapped(v14, v75 + v37 - v33, &v80, &v72);
      if ( VirtualAddressIfMapped )
      {
        v40 = v72;
        if ( v72 > v33 )
          v40 = v33;
        v72 = v40;
        v35 = ((unsigned __int8)MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v40) || v35)
           && v37 + v75 < *(_QWORD *)(v14 + 40)
           && (*(_DWORD *)(v14 + 268) & 0xF) != 0
           && v29
           && !v36
           && (*(_DWORD *)(v14 + 152) & 0x200) == 0
           && !*(_BYTE *)(v34 + 900);
        v41 = *(_QWORD *)(v80 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v80 + 16)) )
        {
          v42 = *(struct _KEVENT **)(v41 + 184);
          if ( v42 )
            KeSetEvent(v42, 0, 0);
        }
      }
      else
      {
        v43 = v72;
        if ( v72 > v33 )
          v43 = v33;
        v72 = v43;
      }
      v33 -= v72;
    }
    while ( v33 );
    __addgsdword(0x5E28u, v35);
    v23 = v65;
    v44 = v79;
    v10 = v83;
    v84 = v65;
    if ( v35 )
    {
      v57 = Partition;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      *(_QWORD *)(v57 + 712) += v73 >> 12;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_170;
    }
    if ( (xmmword_140542350 & 0x20000) != 0 )
      CcPerfLogFlushSection(v76, v14, (unsigned int)&v75, v65, v68);
    v45 = v73;
    v62 = v68;
    *(_DWORD *)v10 = v29 != 0 ? 0x80000016 : 0;
    v46 = MmFlushSection(v87, (unsigned int)&v75, v45, v39, (__int64)v10, v62);
    if ( v46 >= 0 )
      goto LABEL_142;
    v47 = *(_DWORD *)v10;
    if ( v29 )
    {
      if ( v47 != -2147483626 )
        goto LABEL_142;
      goto LABEL_141;
    }
    if ( !v47 )
LABEL_141:
      *(_DWORD *)v10 = v46;
LABEL_142:
    if ( *(int *)v10 >= 0 )
    {
      if ( (*(_DWORD *)(v14 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        *(_DWORD *)(v14 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      if ( v29 )
      {
        __incgsdword(0x5E2Cu);
        __addgsdword(0x5E30u, (v65 + 4095) >> 12);
        v23 = v65;
        v48 = 0;
      }
      else
      {
LABEL_163:
        v48 = 0;
      }
      goto LABEL_171;
    }
    v49 = v75;
    v78 = v75;
    v50 = v23;
    if ( !(unsigned __int8)CcIsFatalWriteError(v14) )
    {
      v70 = 1;
      goto LABEL_170;
    }
    v52 = v66;
    v53 = Partition;
    do
    {
      if ( (xmmword_140542350 & 0x20000) != 0 )
        CcPerfLogFlushSection(v76, v14, (unsigned int)&v78, 4096, v68);
      v63 = v68;
      *(_DWORD *)v10 = v29 != 0 ? 0x80000016 : 0;
      v54 = MmFlushSection(v87, (unsigned int)&v78, 4096, v51, (__int64)v10, v63);
      if ( v54 < 0 )
      {
        v55 = *(_DWORD *)v10;
        if ( !v29 )
        {
          if ( v55 )
            goto LABEL_158;
LABEL_157:
          *(_DWORD *)v10 = v54;
          goto LABEL_158;
        }
        if ( v55 == -2147483626 )
          goto LABEL_157;
      }
LABEL_158:
      if ( *(int *)v10 >= 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v53 + 128), &LockHandle);
        *(_DWORD *)(v14 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_160:
        v56 = v70;
        goto LABEL_161;
      }
      if ( (unsigned __int8)CcIsFatalWriteError(v14) )
      {
        if ( !v52 )
          v52 = *(_DWORD *)v10;
        goto LABEL_160;
      }
      v56 = 1;
      v70 = 1;
      if ( !v52 )
        v52 = *(_DWORD *)v10;
LABEL_161:
      v49 += 4096LL;
      v78 = v49;
      v50 -= 4096;
    }
    while ( v50 );
    v23 = v84;
    v66 = v52;
    v44 = v79;
    if ( !v56 )
      goto LABEL_163;
LABEL_170:
    v48 = 1;
LABEL_171:
    LOBYTE(BugCheckParameter4) = v48;
    CcReleaseByteRangeFromWrite(v14, &v75, v23, v85, BugCheckParameter4);
    v58 = Partition;
    v74 += v23;
    if ( v74 >= 0x40000 && *(_QWORD *)(Partition + 744) != Partition + 744 )
    {
      CcPostDeferredWrites(Partition);
      v58 = Partition;
      v74 = 0;
    }
    if ( !v29 || v69 || *(_QWORD *)(v58 + 744) != v58 + 744 )
    {
LABEL_179:
      v24 = v71;
      if ( v71 )
      {
        v59 = v73 + v75;
        v60 = *v71;
        v75 = v59;
        if ( v60 + a3 <= v59 )
          goto LABEL_183;
        v81 = v59;
        v23 = a3 + v60 - v59;
        v65 = v23;
      }
      continue;
    }
    break;
  }
  if ( MEMORY[0xFFFFF78000000320] <= v44 )
  {
    v23 = v65;
    goto LABEL_179;
  }
  *((_QWORD *)v10 + 1) = 35422LL;
LABEL_184:
  if ( v74 && *(_QWORD *)(v58 + 744) != v58 + 744 )
    CcPostDeferredWrites(v58);
LABEL_188:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  CcDecrementOpenCount(v14);
  if ( !v29 )
    --*(_DWORD *)(v14 + 516);
  if ( v88 == &CcFlushForImageSection
    && *(int *)v10 >= 0
    && v66 >= 0
    && (*(_DWORD *)(v14 + 112) || *(_DWORD *)(v14 + 516)) )
  {
    v66 = -1073741740;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_197:
  v21 = v66;
  if ( v66 < 0 )
LABEL_198:
    *(_DWORD *)v10 = v21;
}
