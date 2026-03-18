/*
 * XREFs of CcFlushCachePriv @ 0x1400773D0
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140009D4C (CcZeroEndOfLastPage.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 *     MiFlushDataSection @ 0x140090130 (MiFlushDataSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400C09E0 (CcCoherencyFlushAndPurgeCache.c)
 *     CcZeroData @ 0x1400FE7B0 (CcZeroData.c)
 *     CcFlushCache @ 0x14012DBF0 (CcFlushCache.c)
 *     CcFlushCacheToLsn @ 0x14015B4D0 (CcFlushCacheToLsn.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E570 (MmSetAddressRangeModifiedEx.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MmFlushSection @ 0x140077E98 (MmFlushSection.c)
 *     CcAcquireByteRangeForWrite @ 0x1400780F0 (CcAcquireByteRangeForWrite.c)
 *     CcReleaseByteRangeFromWrite @ 0x140078FE8 (CcReleaseByteRangeFromWrite.c)
 *     CcUnmapVacbArray @ 0x14007A300 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14007A66C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcGetVirtualAddressIfMapped @ 0x14007A868 (CcGetVirtualAddressIfMapped.c)
 *     CcAmILowPriorityWriter @ 0x14007AE88 (CcAmILowPriorityWriter.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401265B0 (CcBoostLowPriorityWorkerThread.c)
 *     CcIsFatalWriteError @ 0x14012E974 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x140158B9C (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x140158C9C (CcPerfLogFlushSection.c)
 *     CcSerializeWithLazyWriter @ 0x1401BE6E4 (CcSerializeWithLazyWriter.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x14027D150 (CcPostDeferredWrites.c)
 */

void __fastcall CcFlushCachePriv(__int64 a1, void *a2, unsigned int a3, __int64 a4, char a5, _QWORD *a6)
{
  char v8; // r14
  signed __int64 *v9; // r9
  int v10; // esi
  __int64 v11; // r15
  _QWORD *v12; // r12
  int v13; // edx
  signed __int64 *v14; // rbx
  unsigned __int8 CurrentIrql; // r8
  __int64 v16; // r13
  signed __int64 *v17; // rax
  int v18; // ecx
  int v19; // ebx
  __int64 v20; // r8
  signed __int64 v21; // rcx
  signed __int64 v22; // rdx
  int v23; // eax
  int v24; // r9d
  unsigned int v25; // r14d
  signed __int64 *v26; // rsi
  int v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // r15d
  int v32; // ebx
  bool v33; // al
  signed __int64 *v34; // rdx
  unsigned int v35; // r14d
  __int64 v36; // rdi
  unsigned __int64 v37; // rbx
  int v38; // r12d
  unsigned int v39; // esi
  unsigned __int64 VirtualAddressIfMapped; // rax
  int v41; // r9d
  unsigned int v42; // ecx
  __int64 v43; // rbx
  struct _KEVENT *v44; // rcx
  unsigned int v45; // eax
  __int64 v46; // rdi
  int v47; // eax
  int v48; // ecx
  char v49; // al
  signed __int64 v50; // rbx
  unsigned int v51; // esi
  int v52; // r9d
  __int64 v53; // rcx
  signed __int64 v54; // r14
  signed __int64 v55; // rax
  int v56; // edi
  __int64 v57; // r14
  int v58; // eax
  int v59; // ecx
  int v60; // ecx
  __int64 v61; // rsi
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v63; // [rsp+28h] [rbp-D8h]
  int v64; // [rsp+28h] [rbp-D8h]
  int v65; // [rsp+38h] [rbp-C8h]
  unsigned int v66; // [rsp+40h] [rbp-C0h] BYREF
  int v67; // [rsp+44h] [rbp-BCh]
  __int64 Partition; // [rsp+48h] [rbp-B8h]
  int v69; // [rsp+50h] [rbp-B0h]
  int v70; // [rsp+54h] [rbp-ACh]
  int v71; // [rsp+58h] [rbp-A8h]
  signed __int64 *v72; // [rsp+60h] [rbp-A0h]
  unsigned int v73; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v74; // [rsp+70h] [rbp-90h]
  unsigned int v75; // [rsp+78h] [rbp-88h]
  signed __int64 v76; // [rsp+80h] [rbp-80h] BYREF
  __int64 v77; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  signed __int64 v79; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-50h]
  signed __int64 v81; // [rsp+B8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v82; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v83; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v84; // [rsp+E0h] [rbp-20h]
  __int64 v85; // [rsp+E8h] [rbp-18h]
  __int64 v86; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v87[4]; // [rsp+F8h] [rbp-8h] BYREF
  int v88; // [rsp+160h] [rbp+60h]
  void *v89; // [rsp+168h] [rbp+68h]
  int v91; // [rsp+178h] [rbp+78h]

  v91 = a4;
  v89 = a2;
  v88 = a1;
  v76 = 0LL;
  v81 = 0LL;
  v87[0] = 0LL;
  v8 = 0;
  v87[1] = 0LL;
  memset(&v82, 0, sizeof(v82));
  v9 = (signed __int64 *)a2;
  v10 = 0;
  v11 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v67 = 0;
  v75 = 0;
  v71 = 0;
  LODWORD(v74) = 0;
  v70 = 0;
  v69 = 0;
  v83 = 0LL;
  v77 = 0LL;
  Partition = 0LL;
  if ( a4 && a2 && a2 != &CcNoDelay )
    KeBugCheckEx(0x34u, 0x161BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v12 = v87;
  if ( a6 )
    v12 = a6;
  v80 = 0LL;
  v84 = v12;
  *(_DWORD *)v12 = 0;
  if ( a2 == &CcNoDelay )
  {
    v77 = v12[1];
    v9 = 0LL;
    LODWORD(v74) = 1;
    *(_DWORD *)v12 = -2147483626;
    v89 = 0LL;
  }
  else
  {
    v13 = 1;
    if ( a5 )
      v13 = 17;
    v69 = v13;
  }
  v12[1] = 0LL;
  v82.LockQueue.Next = 0LL;
  v14 = 0LL;
  if ( v9 != (signed __int64 *)&CcFlushForImageSection )
    v14 = v9;
  v82.LockQueue.Lock = &CcMasterLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v82.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock((__int64)&v82, (volatile __int64 *)&CcMasterLock);
  v16 = *(_QWORD *)(a1 + 8);
  v17 = v14;
  v72 = v14;
  if ( !v16 )
  {
    v19 = v74;
    goto LABEL_33;
  }
  Partition = CcGetPartition(v16);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Partition + 128));
  v18 = *(_DWORD *)(v16 + 152);
  v8 = 1;
  v72 = v14;
  v17 = v14;
  if ( (v18 & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)v14 & 1) == 0 )
      goto LABEL_40;
    v17 = (signed __int64 *)((unsigned __int64)v14 ^ 1);
    v72 = (signed __int64 *)((unsigned __int64)v14 ^ 1);
  }
  v19 = v74;
  if ( !(_DWORD)v74 )
  {
    if ( !v17 )
    {
LABEL_30:
      v20 = a3;
      ++*(_DWORD *)(v16 + 516);
      goto LABEL_34;
    }
    v21 = *v17;
    v22 = *(_QWORD *)(v16 + 32);
    if ( *v17 < v22 )
    {
      v20 = a3;
      if ( v21 + a3 <= v22 )
      {
        v17 = v72;
        ++*(_DWORD *)(v16 + 516);
        goto LABEL_34;
      }
      a3 = v22 - v21;
      v17 = v72;
      goto LABEL_30;
    }
LABEL_40:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_41:
    KeReleaseInStackQueuedSpinLock(&v82);
    return;
  }
  if ( (v18 & 0x10000) == 0 )
  {
LABEL_33:
    v20 = a3;
    goto LABEL_34;
  }
  v20 = a3;
  v70 = 1;
  if ( *(_DWORD *)(v16 + 516) )
    v10 = 1;
  v17 = v72;
LABEL_34:
  if ( v17 && !(_DWORD)v20 )
  {
    if ( v16 )
    {
      if ( !v19 )
        --*(_DWORD *)(v16 + 516);
    }
    if ( !v8 )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( v89 == &CcFlushForImageSection )
  {
    if ( !v16 )
      goto LABEL_49;
    if ( *(_DWORD *)(v16 + 516) >= 2u || !(unsigned __int8)CcSerializeWithLazyWriter(Partition, v16, v20) )
    {
      --*(_DWORD *)(v16 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      KeReleaseInStackQueuedSpinLock(&v82);
      v23 = -1073741740;
      goto LABEL_202;
    }
  }
  if ( v16 )
  {
    ++*(_DWORD *)(v16 + 4);
    ++*(_DWORD *)(v16 + 536);
    v11 = *(_QWORD *)((*(_QWORD *)(v16 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
LABEL_49:
  if ( v8 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeReleaseInStackQueuedSpinLock(&v82);
  v25 = 1;
  if ( v16 && (*(_DWORD *)(v16 + 152) & 0x40000000) != 0 )
    v10 = 1;
  if ( (xmmword_140572410 & 0x20000) != 0 )
    CcPerfLogFlushCache(v77, v16, (_DWORD)v72, a3, v19, v70, v10 == 1);
  if ( !v19 )
  {
    if ( !v16 )
      goto LABEL_68;
    if ( (*(_DWORD *)(v16 + 152) & 0x20) != 0 )
      CcBoostLowPriorityWorkerThread(Partition, v16);
  }
  if ( (!v16
     || (*(_BYTE *)(v11 + 6) & 0x10) != 0 && (*(_BYTE *)(v11 + 4) & 0x20) != 0
     || (*(_DWORD *)(v16 + 152) & 0x20000) != 0)
    && !v19
    || v10 )
  {
    goto LABEL_68;
  }
  if ( !v16 )
    return;
  if ( (*(_DWORD *)(v16 + 152) & 0x4000000) != 0 )
  {
LABEL_68:
    if ( (xmmword_140572410 & 0x20000) != 0 )
      CcPerfLogFlushSection(v77, v16, (_DWORD)v72, a3, v69);
    if ( v16 )
      CcUnmapVacbArray(v16, (_DWORD)v72, a3, 0, 0, 0);
    v26 = v72;
    v27 = MmFlushSection(v88, (_DWORD)v72, a3, v24, (__int64)v12, v69);
    if ( v27 >= 0 )
      goto LABEL_80;
    v28 = *(_DWORD *)v12;
    if ( v19 )
    {
      if ( v28 != -2147483626 )
      {
        v29 = v67;
        if ( *(int *)v12 < 0 )
          v29 = *(_DWORD *)v12;
        v67 = v29;
        goto LABEL_84;
      }
    }
    else if ( v28 )
    {
LABEL_80:
      v30 = v67;
      if ( *(int *)v12 < 0 )
        v30 = *(_DWORD *)v12;
      v67 = v30;
      goto LABEL_84;
    }
    *(_DWORD *)v12 = v27;
    goto LABEL_80;
  }
  v26 = v72;
LABEL_84:
  if ( !v16 )
    goto LABEL_201;
  if ( (*(_DWORD *)(v16 + 152) & 0x4000000) != 0 )
  {
    v31 = v74;
    goto LABEL_192;
  }
  if ( v26 )
    v81 = *v26;
  v31 = v74;
  if ( a3 )
    v25 = a3;
  v66 = v25;
  if ( (_DWORD)v74 )
  {
    v25 = v66;
    v80 = CcIdleDelayTick / 0xAu + MEMORY[0xFFFFF78000000320];
  }
  while ( 2 )
  {
    v32 = v70;
    if ( !*(_DWORD *)(v16 + 192) && v31 && !v70
      || !*(_QWORD *)(v16 + 8) && (*(_DWORD *)(v16 + 152) & 4) == 0 && !*(_DWORD *)(v16 + 112)
      || v71 )
    {
      goto LABEL_187;
    }
    v33 = v31 && (unsigned __int8)CcAmILowPriorityWriter(v16);
    if ( v31 && !v32 )
      v25 = 0;
    if ( !v31 || v32 )
    {
      v34 = &v81;
      if ( !v26 )
        LODWORD(v34) = 0;
    }
    else
    {
      LODWORD(v34) = 0;
    }
    LOBYTE(v65) = v33;
    if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                             v16,
                             (_DWORD)v34,
                             v25,
                             v91,
                             (__int64)&v76,
                             (__int64)&v66,
                             (__int64)&v86,
                             v65) )
    {
LABEL_187:
      v53 = Partition;
      goto LABEL_188;
    }
    v35 = v66;
    v36 = Partition;
    v37 = v66;
    v38 = v70;
    v39 = 0;
    v74 = v66;
    do
    {
      VirtualAddressIfMapped = CcGetVirtualAddressIfMapped(v16, v76 + v37 - v35, &v83, &v73);
      if ( VirtualAddressIfMapped )
      {
        v42 = v73;
        if ( v73 > v35 )
          v42 = v35;
        v73 = v42;
        v39 = ((unsigned __int8)MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v42) || v39)
           && (signed __int64)(v37 + v76) < *(_QWORD *)(v16 + 40)
           && (*(_DWORD *)(v16 + 268) & 0xF) != 0
           && v31
           && !v38
           && (*(_DWORD *)(v16 + 152) & 0x200) == 0
           && !*(_BYTE *)(v36 + 900);
        v43 = *(_QWORD *)(v83 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v83 + 16)) )
        {
          v44 = *(struct _KEVENT **)(v43 + 184);
          if ( v44 )
            KeSetEvent(v44, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v43 + 544));
        }
        v37 = v74;
      }
      else
      {
        v45 = v73;
        if ( v73 > v35 )
          v45 = v35;
        v73 = v45;
      }
      v35 -= v73;
    }
    while ( v35 );
    __addgsdword(0x5E28u, v39);
    v25 = v66;
    v46 = v80;
    v12 = v84;
    v85 = v66;
    if ( v39 )
    {
      v61 = Partition;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      *(_QWORD *)(v61 + 712) += v37 >> 12;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_152;
    }
    if ( (xmmword_140572410 & 0x20000) != 0 )
      CcPerfLogFlushSection(v77, v16, (unsigned int)&v76, v66, v69);
    v63 = v69;
    *(_DWORD *)v12 = v31 != 0 ? 0x80000016 : 0;
    v47 = MmFlushSection(v88, (unsigned int)&v76, v37, v41, (__int64)v12, v63);
    if ( v47 >= 0 )
      goto LABEL_144;
    v48 = *(_DWORD *)v12;
    if ( v31 )
    {
      if ( v48 != -2147483626 )
        goto LABEL_144;
      goto LABEL_143;
    }
    if ( !v48 )
LABEL_143:
      *(_DWORD *)v12 = v47;
LABEL_144:
    if ( *(int *)v12 >= 0 )
    {
      if ( (*(_DWORD *)(v16 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        *(_DWORD *)(v16 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      if ( v31 )
      {
        __incgsdword(0x5E2Cu);
        __addgsdword(0x5E30u, (v66 + 4095) >> 12);
        v25 = v66;
        v49 = 0;
      }
      else
      {
LABEL_179:
        v49 = 0;
      }
      goto LABEL_153;
    }
    v50 = v76;
    v79 = v76;
    v51 = v25;
    if ( !(unsigned __int8)CcIsFatalWriteError(v16) )
    {
      v71 = 1;
      goto LABEL_151;
    }
    v56 = v67;
    v57 = Partition;
    do
    {
      if ( (xmmword_140572410 & 0x20000) != 0 )
        CcPerfLogFlushSection(v77, v16, (unsigned int)&v79, 4096, v69);
      v64 = v69;
      *(_DWORD *)v12 = v31 != 0 ? 0x80000016 : 0;
      v58 = MmFlushSection(v88, (unsigned int)&v79, 4096, v52, (__int64)v12, v64);
      if ( v58 < 0 )
      {
        v59 = *(_DWORD *)v12;
        if ( !v31 )
        {
          if ( v59 )
            goto LABEL_173;
LABEL_172:
          *(_DWORD *)v12 = v58;
          goto LABEL_173;
        }
        if ( v59 == -2147483626 )
          goto LABEL_172;
      }
LABEL_173:
      if ( *(int *)v12 >= 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v57 + 128), &LockHandle);
        *(_DWORD *)(v16 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_175:
        v60 = v71;
        goto LABEL_176;
      }
      if ( (unsigned __int8)CcIsFatalWriteError(v16) )
      {
        if ( !v56 )
          v56 = *(_DWORD *)v12;
        goto LABEL_175;
      }
      v60 = 1;
      v71 = 1;
      if ( !v56 )
        v56 = *(_DWORD *)v12;
LABEL_176:
      v50 += 4096LL;
      v79 = v50;
      v51 -= 4096;
    }
    while ( v51 );
    v25 = v85;
    v67 = v56;
    v46 = v80;
    if ( !v60 )
    {
      v37 = v74;
      goto LABEL_179;
    }
LABEL_151:
    v37 = v74;
LABEL_152:
    v49 = 1;
LABEL_153:
    LOBYTE(BugCheckParameter4) = v49;
    CcReleaseByteRangeFromWrite(v16, &v76, v25, v86, BugCheckParameter4);
    v53 = Partition;
    v75 += v25;
    if ( v75 >= 0x40000 && *(_QWORD *)(Partition + 744) != Partition + 744 )
    {
      CcPostDeferredWrites(Partition);
      v53 = Partition;
      v75 = 0;
    }
    if ( !v31 || v70 || *(_QWORD *)(v53 + 744) != v53 + 744 )
    {
LABEL_161:
      v26 = v72;
      if ( v72 )
      {
        v54 = *v72;
        v55 = v37 + v76;
        v76 = v55;
        if ( v54 + a3 <= v55 )
          goto LABEL_187;
        v81 = v55;
        v25 = a3 + v54 - v55;
        v66 = v25;
      }
      continue;
    }
    break;
  }
  if ( MEMORY[0xFFFFF78000000320] <= v46 )
  {
    v25 = v66;
    goto LABEL_161;
  }
  v12[1] = 35422LL;
LABEL_188:
  if ( v75 && *(_QWORD *)(v53 + 744) != v53 + 744 )
    CcPostDeferredWrites(v53);
LABEL_192:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  CcDecrementOpenCount(v16);
  if ( !v31 )
    --*(_DWORD *)(v16 + 516);
  if ( v89 == &CcFlushForImageSection
    && *(int *)v12 >= 0
    && v67 >= 0
    && (*(_DWORD *)(v16 + 112) || *(_DWORD *)(v16 + 516)) )
  {
    v67 = -1073741740;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_201:
  v23 = v67;
  if ( v67 < 0 )
LABEL_202:
    *(_DWORD *)v12 = v23;
}
