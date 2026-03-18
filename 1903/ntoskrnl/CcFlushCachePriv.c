/*
 * XREFs of CcFlushCachePriv @ 0x140077160
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140009CBC (CcZeroEndOfLastPage.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400E0B60 (CcCoherencyFlushAndPurgeCache.c)
 *     MiFlushDataSection @ 0x1400E2D3C (MiFlushDataSection.c)
 *     CcZeroData @ 0x1400FC620 (CcZeroData.c)
 *     CcFlushCache @ 0x14012D1A0 (CcFlushCache.c)
 *     CcFlushCacheToLsn @ 0x14015AE30 (CcFlushCacheToLsn.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MmFlushSection @ 0x140077AD0 (MmFlushSection.c)
 *     CcAcquireByteRangeForWrite @ 0x140077D30 (CcAcquireByteRangeForWrite.c)
 *     CcReleaseByteRangeFromWrite @ 0x140078C28 (CcReleaseByteRangeFromWrite.c)
 *     CcUnmapVacbArray @ 0x140079F40 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14007A2AC (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     CcGetVirtualAddressIfMapped @ 0x14007A4A8 (CcGetVirtualAddressIfMapped.c)
 *     CcAmILowPriorityWriter @ 0x14007AA88 (CcAmILowPriorityWriter.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140125F40 (CcBoostLowPriorityWorkerThread.c)
 *     CcIsFatalWriteError @ 0x14012E024 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1401584FC (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1401585FC (CcPerfLogFlushSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x14027D3F0 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcFlushCachePriv(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, char a5, unsigned int *a6)
{
  unsigned __int64 v6; // r13
  char v8; // bl
  int v9; // r12d
  int v10; // r15d
  __int64 v11; // r14
  unsigned int *v12; // rcx
  __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // r8
  __int64 v15; // rsi
  int v16; // ecx
  unsigned int v17; // r8d
  int v18; // r9d
  unsigned __int8 v19; // bl
  __int64 result; // rax
  int v21; // ebx
  unsigned int *v22; // r14
  int v23; // r15d
  int v24; // eax
  unsigned int v25; // r15d
  bool v26; // al
  unsigned int v27; // r8d
  signed __int64 *v28; // rdx
  __int64 v29; // rdi
  unsigned int v30; // r15d
  unsigned int v31; // ebx
  unsigned __int64 v32; // r13
  unsigned __int64 VirtualAddressIfMapped; // rax
  int v34; // r9d
  unsigned int v35; // ecx
  __int64 v36; // r14
  __int64 v37; // rdi
  char v38; // al
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  signed __int64 v42; // rax
  unsigned __int8 v43; // bl
  __int64 v44; // rcx
  signed __int64 v45; // rdx
  struct _KEVENT *v46; // rcx
  unsigned int v47; // eax
  unsigned __int8 v48; // bl
  __int64 v49; // rbx
  unsigned __int8 v50; // bl
  unsigned __int8 OldIrql; // bl
  signed __int64 v52; // rbx
  unsigned int v53; // r15d
  int v54; // r9d
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v56; // rcx
  struct _KPRCB *v57; // rcx
  __int64 v58; // r13
  int v59; // edi
  unsigned __int8 v60; // r14
  struct _KPRCB *v61; // rcx
  int v62; // ecx
  struct _KPRCB *v63; // rcx
  struct _KPRCB *v64; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v66; // [rsp+38h] [rbp-C8h]
  unsigned int v67; // [rsp+40h] [rbp-C0h] BYREF
  int v68; // [rsp+44h] [rbp-BCh]
  __int64 Partition; // [rsp+48h] [rbp-B8h]
  unsigned int v70; // [rsp+50h] [rbp-B0h]
  int v71; // [rsp+54h] [rbp-ACh]
  unsigned int v72; // [rsp+58h] [rbp-A8h] BYREF
  int v73; // [rsp+5Ch] [rbp-A4h]
  unsigned int v74; // [rsp+60h] [rbp-A0h]
  signed __int64 v75; // [rsp+68h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  int v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  unsigned int *v79; // [rsp+98h] [rbp-68h]
  signed __int64 v80; // [rsp+A0h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v81; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-40h]
  signed __int64 v83; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v84; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v85; // [rsp+D8h] [rbp-28h]
  __int64 v86; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v87[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v88; // [rsp+150h] [rbp+50h]
  __int64 *v89; // [rsp+158h] [rbp+58h]
  int v91; // [rsp+168h] [rbp+68h]

  v91 = a4;
  v88 = a1;
  v6 = (unsigned __int64)a2;
  v8 = 0;
  v75 = 0LL;
  v83 = 0LL;
  v9 = 0;
  v87[0] = 0LL;
  v10 = 0;
  v87[1] = 0LL;
  v11 = 0LL;
  v74 = 0;
  v70 = 0;
  v73 = 0;
  v77 = 0;
  v71 = 0;
  v68 = 0;
  v84 = 0LL;
  v78 = 0LL;
  Partition = 0LL;
  memset(&v81, 0, sizeof(v81));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a4 && a2 && a2 != (_QWORD *)&CcNoDelay )
    KeBugCheckEx(0x34u, 0x15CCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v12 = (unsigned int *)v87;
  v13 = 0LL;
  if ( a6 )
    v12 = a6;
  v79 = v12;
  *v12 = 0;
  if ( a2 == (_QWORD *)&CcNoDelay )
  {
    v9 = 1;
    v78 = *((_QWORD *)v12 + 1);
    v6 = 0LL;
    *v12 = -2147483626;
  }
  else
  {
    v68 = 1;
    if ( a5 )
      v68 = 17;
  }
  v89 = (__int64 *)v6;
  v81.LockQueue.Lock = &CcMasterLock;
  v77 = v9;
  *((_QWORD *)v12 + 1) = 0LL;
  v81.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v81.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock((__int64)&v81, (volatile __int64 *)&CcMasterLock);
  v15 = *(_QWORD *)(a1 + 8);
  if ( !v15 )
    goto LABEL_12;
  Partition = CcGetPartition(v15);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Partition + 128));
  v16 = *(_DWORD *)(v15 + 152);
  v8 = 1;
  if ( (v16 & 0x2000) != 0 )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_144;
    v6 ^= 1uLL;
    v89 = (__int64 *)v6;
  }
  if ( !v9 )
  {
    if ( !v6 )
      goto LABEL_128;
    v44 = *(_QWORD *)v6;
    v45 = *(_QWORD *)(v15 + 32);
    if ( *(_QWORD *)v6 < v45 )
    {
      v17 = a3;
      if ( v44 + a3 <= v45 )
      {
LABEL_107:
        ++*(_DWORD *)(v15 + 516);
        goto LABEL_13;
      }
      a3 = v45 - v44;
LABEL_128:
      v17 = a3;
      goto LABEL_107;
    }
LABEL_144:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_145:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v81);
    OldIrql = v81.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v81.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
    return result;
  }
  if ( (v16 & 0x10000) == 0 )
  {
LABEL_12:
    v17 = a3;
    goto LABEL_13;
  }
  v17 = a3;
  v71 = 1;
  if ( *(_DWORD *)(v15 + 516) )
    v10 = 1;
LABEL_13:
  if ( v6 && !v17 )
  {
    if ( v15 && !v9 )
      --*(_DWORD *)(v15 + 516);
    if ( !v8 )
      goto LABEL_145;
    goto LABEL_144;
  }
  if ( v15 )
  {
    ++*(_DWORD *)(v15 + 4);
    ++*(_DWORD *)(v15 + 536);
    v11 = *(_QWORD *)((*(_QWORD *)(v15 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
  if ( v8 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v81);
  v19 = v81.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v81.OldIrql < 2u )
  {
    v56 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v56->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v56);
  }
  __writecr8(v19);
  if ( v15 && (*(_DWORD *)(v15 + 152) & 0x40000000) != 0 )
    v10 = 1;
  result = (unsigned int)xmmword_140572410;
  v21 = v71;
  if ( (xmmword_140572410 & 0x20000) != 0 )
    result = CcPerfLogFlushCache(v78, v15, v6, a3, v9, v71, v10 == 1);
  if ( !v9 )
  {
    if ( !v15 )
      goto LABEL_115;
    result = *(unsigned int *)(v15 + 152);
    if ( (result & 0x20) != 0 )
      result = CcBoostLowPriorityWorkerThread(Partition, v15);
  }
  if ( (v15
     && ((*(_BYTE *)(v11 + 6) & 0x10) == 0 || (*(_BYTE *)(v11 + 4) & 0x20) == 0)
     && (*(_DWORD *)(v15 + 152) & 0x20000) == 0
     || v9)
    && !v10 )
  {
    if ( !v15 )
      return result;
    if ( (*(_DWORD *)(v15 + 152) & 0x4000000) == 0 )
    {
      v22 = v79;
      v23 = a3;
      goto LABEL_35;
    }
  }
LABEL_115:
  v23 = a3;
  if ( (xmmword_140572410 & 0x20000) != 0 )
    CcPerfLogFlushSection(v78, v15, v6, a3, v68);
  if ( v15 )
    CcUnmapVacbArray(v15, v6, a3, 0, 0, 0);
  v22 = v79;
  MmFlushSection(v88, v6, a3, v18, (__int64)v79, v68);
  result = *v22;
  if ( (int)result < 0 )
  {
    v74 = *v22;
    goto LABEL_36;
  }
LABEL_35:
  result = 0LL;
LABEL_36:
  if ( !v15 )
    goto LABEL_96;
  if ( (*(_DWORD *)(v15 + 152) & 0x4000000) != 0 )
    goto LABEL_92;
  if ( v6 )
    v83 = *(_QWORD *)v6;
  v24 = 1;
  if ( v23 )
    v24 = v23;
  v67 = v24;
  if ( v9 )
    v13 = CcIdleDelayTick / 0xAu + MEMORY[0xFFFFF78000000320];
  v25 = v70;
  v82 = v13;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v15 + 192) && v9 && !v21
      || !*(_QWORD *)(v15 + 8) && (*(_DWORD *)(v15 + 152) & 4) == 0 && !*(_DWORD *)(v15 + 112)
      || v73 )
    {
      goto LABEL_90;
    }
    v26 = v9 && (unsigned __int8)CcAmILowPriorityWriter(v15);
    v27 = !v9 || v21 ? v67 : 0;
    if ( !v9 || v21 )
    {
      v28 = &v83;
      if ( !v89 )
        LODWORD(v28) = 0;
    }
    else
    {
      LODWORD(v28) = 0;
    }
    LOBYTE(v66) = v26;
    if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                             v15,
                             (_DWORD)v28,
                             v27,
                             v91,
                             (__int64)&v75,
                             (__int64)&v67,
                             (__int64)&v86,
                             v66) )
    {
LABEL_90:
      v40 = Partition;
      goto LABEL_91;
    }
    v29 = Partition;
    v30 = 0;
    v31 = v67;
    v32 = v67;
    v85 = v67;
    do
    {
      VirtualAddressIfMapped = CcGetVirtualAddressIfMapped(v15, v75 + v32 - v31, &v84, &v72);
      if ( VirtualAddressIfMapped )
      {
        v35 = v72;
        if ( v72 > v31 )
        {
          v35 = v31;
          v72 = v31;
        }
        v30 = ((unsigned __int8)MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v35) || v30)
           && (signed __int64)(v32 + v75) < *(_QWORD *)(v15 + 40)
           && (*(_DWORD *)(v15 + 268) & 0xF) != 0
           && v9
           && !v71
           && (*(_DWORD *)(v15 + 152) & 0x200) == 0
           && !*(_BYTE *)(v29 + 900);
        v36 = *(_QWORD *)(v84 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v84 + 16)) )
        {
          v46 = *(struct _KEVENT **)(v36 + 184);
          if ( v46 )
            KeSetEvent(v46, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v36 + 544));
        }
      }
      else
      {
        v47 = v72;
        if ( v72 > v31 )
          v47 = v31;
        v72 = v47;
      }
      v31 -= v72;
    }
    while ( v31 );
    __addgsdword(0x5E28u, v30);
    v37 = v82;
    if ( v30 )
    {
      v49 = Partition;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      *(_QWORD *)(v49 + 712) += v32 >> 12;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v50 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v63 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v63->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v63);
      }
      __writecr8(v50);
      v22 = v79;
LABEL_143:
      v38 = 1;
      goto LABEL_79;
    }
    if ( (xmmword_140572410 & 0x20000) != 0 )
      CcPerfLogFlushSection(v78, v15, (unsigned int)&v75, v67, v68);
    v22 = v79;
    MmFlushSection(v88, (unsigned int)&v75, v32, v34, (__int64)v79, v68);
    if ( (*v22 & 0x80000000) == 0 )
    {
      if ( (*(_DWORD *)(v15 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        *(_DWORD *)(v15 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v48 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v57 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v57);
        }
        __writecr8(v48);
      }
      if ( v9 )
      {
        __incgsdword(0x5E2Cu);
        __addgsdword(0x5E30u, (v67 + 4095) >> 12);
      }
LABEL_78:
      v38 = 0;
      goto LABEL_79;
    }
    v52 = v75;
    v53 = v67;
    v80 = v75;
    if ( (unsigned __int8)CcIsFatalWriteError(v15) )
    {
      v58 = Partition;
      v59 = v68;
      do
      {
        if ( (xmmword_140572410 & 0x20000) != 0 )
          CcPerfLogFlushSection(v78, v15, (unsigned int)&v80, 4096, v59);
        MmFlushSection(v88, (unsigned int)&v80, 4096, v54, (__int64)v22, v59);
        if ( (*v22 & 0x80000000) != 0 )
        {
          if ( (unsigned __int8)CcIsFatalWriteError(v15) )
          {
            v62 = v73;
            v74 = *v22;
          }
          else
          {
            v62 = 1;
            v73 = 1;
          }
        }
        else
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v58 + 128), &LockHandle);
          *(_DWORD *)(v15 + 152) |= 0x400u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v60 = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v61 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v61->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v61);
            v52 = v80;
          }
          __writecr8(v60);
          v22 = v79;
          v62 = v73;
        }
        v52 += 4096LL;
        v80 = v52;
        v53 -= 4096;
      }
      while ( v53 );
      v37 = v82;
      v9 = v77;
      v32 = v85;
      if ( !v62 )
        goto LABEL_78;
      goto LABEL_143;
    }
    v73 = 1;
    v38 = 1;
LABEL_79:
    LOBYTE(BugCheckParameter4) = v38;
    CcReleaseByteRangeFromWrite(v15, &v75, v67, v86, BugCheckParameter4);
    v39 = v67 + v70;
    v40 = Partition;
    v70 = v39;
    if ( v39 >= 0x40000 )
    {
      if ( *(_QWORD *)(Partition + 744) == Partition + 744 )
      {
        v25 = v70;
      }
      else
      {
        CcPostDeferredWrites(Partition);
        v40 = Partition;
        v25 = 0;
        v70 = 0;
      }
    }
    else
    {
      v25 = v39;
    }
    v21 = v71;
    if ( v9 )
    {
      if ( !v71 && *(_QWORD *)(v40 + 744) == v40 + 744 && MEMORY[0xFFFFF78000000320] > v37 )
        break;
    }
    if ( v89 )
    {
      v41 = *v89;
      v42 = v32 + v75;
      v75 = v42;
      if ( v41 + a3 <= v42 )
        goto LABEL_90;
      v83 = v42;
      v67 = a3 + v41 - v42;
    }
  }
  *((_QWORD *)v22 + 1) = 35422LL;
LABEL_91:
  if ( v25 && *(_QWORD *)(v40 + 744) != v40 + 744 )
    CcPostDeferredWrites(v40);
LABEL_92:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  CcDecrementOpenCount(v15);
  if ( !v9 )
    --*(_DWORD *)(v15 + 516);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v43 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v64 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v64);
  }
  __writecr8(v43);
  result = v74;
LABEL_96:
  if ( (int)result < 0 )
    *v22 = result;
  return result;
}
