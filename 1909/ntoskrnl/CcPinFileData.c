/*
 * XREFs of CcPinFileData @ 0x1400B4650
 * Callers:
 *     CcZeroDataInCache @ 0x1400FEBC4 (CcZeroDataInCache.c)
 *     CcPinMappedData @ 0x14064DB20 (CcPinMappedData.c)
 *     CcMapData @ 0x14064DF90 (CcMapData.c)
 *     CcPinRead @ 0x1406B84B0 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x1406C4AD0 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x1406C4C9C (CcMapDataCommon.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x14007B4B4 (CcAllocateInitializeBcb.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14007D8D0 (CcGetBcbListHeadLargeOffset.c)
 *     CcGetVirtualAddress @ 0x1400B6060 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1400B64C0 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400B7D50 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400B8A10 (ExAcquireSharedStarveExclusive.c)
 *     ExpReleaseFastMutexContended @ 0x1400C6530 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400EF620 (ExpAcquireFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x14027DDB4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14027DF7C (CcReferenceFileOffset.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x140339F74 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        ULONG_PTR *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v10; // rsi
  __int64 v11; // r13
  _QWORD *v12; // rbx
  char v13; // r15
  volatile signed __int32 *v14; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v17; // rcx
  int SessionId; // eax
  bool v19; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v21; // r12
  unsigned __int64 v22; // rsi
  unsigned int v23; // r10d
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  _QWORD *BcbListHeadLargeOffset; // rdi
  __int64 v29; // rdi
  __int16 v30; // ax
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  char v33; // al
  ULONG_PTR v34; // rsi
  __int64 v35; // rax
  _QWORD *v36; // r12
  volatile signed __int32 *v37; // rbx
  unsigned __int8 v38; // si
  unsigned __int32 v39; // eax
  ULONG_PTR v40; // rdi
  __int16 v41; // cx
  __int64 v42; // rsi
  struct _KTHREAD *v43; // rdi
  NTSTATUS v44; // r8d
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rsi
  unsigned int v47; // r12d
  struct _KTHREAD *v48; // rdi
  unsigned __int8 v49; // al
  __int64 v50; // rcx
  __int64 v51; // rsi
  int v52; // eax
  __int16 SpecialApcDisable; // ax
  unsigned __int8 v54; // di
  unsigned __int8 v55; // si
  unsigned __int32 v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int16 v62; // cx
  ULONG_PTR v63; // rcx
  __int16 v64; // cx
  __int64 v65; // rbx
  int v66; // r8d
  int v67; // edx
  unsigned int v68; // r9d
  int v69; // ebx
  __int16 v70; // ax
  unsigned int v71; // r12d
  unsigned int v72; // ebx
  char *v73; // rax
  struct _ERESOURCE *v74; // rcx
  __int64 v75; // r8
  unsigned __int8 v76; // dl
  struct _KTHREAD *v77; // r8
  struct _KTHREAD *v78; // r9
  __int64 v79; // rax
  unsigned __int8 v80; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v82; // rcx
  __int64 v83; // rdi
  struct _KEVENT *v84; // rcx
  __int64 v86; // rdi
  struct _KEVENT *v87; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v89; // [rsp+30h] [rbp-C8h]
  int v90; // [rsp+34h] [rbp-C4h]
  _QWORD *P; // [rsp+38h] [rbp-C0h]
  __int64 v92; // [rsp+40h] [rbp-B8h] BYREF
  int v93; // [rsp+48h] [rbp-B0h]
  int v94; // [rsp+4Ch] [rbp-ACh] BYREF
  __int64 v95; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v96; // [rsp+58h] [rbp-A0h]
  __int64 v97; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v98; // [rsp+68h] [rbp-90h]
  int v99; // [rsp+70h] [rbp-88h] BYREF
  NTSTATUS v100; // [rsp+74h] [rbp-84h]
  int v101; // [rsp+78h] [rbp-80h]
  int v102; // [rsp+7Ch] [rbp-7Ch] BYREF
  __int64 v103; // [rsp+80h] [rbp-78h]
  __int64 v104; // [rsp+88h] [rbp-70h]
  int v105; // [rsp+90h] [rbp-68h]
  int v106; // [rsp+94h] [rbp-64h]
  int v107; // [rsp+98h] [rbp-60h]
  int v108; // [rsp+9Ch] [rbp-5Ch]
  __int64 v109; // [rsp+A0h] [rbp-58h]
  __int64 v110; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v111; // [rsp+B0h] [rbp-48h]
  struct _KTHREAD *v112; // [rsp+B8h] [rbp-40h]
  char v113; // [rsp+100h] [rbp+8h] BYREF
  __int64 *v114; // [rsp+108h] [rbp+10h]
  unsigned int v115; // [rsp+110h] [rbp+18h]
  char v116; // [rsp+118h] [rbp+20h]

  v116 = a4;
  v115 = a3;
  v114 = a2;
  v10 = 0LL;
  v96 = 0LL;
  v93 = 0;
  v92 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v104 = v11;
  if ( *a2 + a3 > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x11EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v12 = a8;
  *a8 = 0LL;
  v13 = a6;
  if ( (a6 & 4) != 0 )
  {
    v94 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v11, *a2);
  }
  else
  {
    *v12 = CcGetVirtualAddress(v11, *a2, (unsigned int)&v92, (unsigned int)&v94, (a6 & 0x40) != 0, 0);
  }
  v14 = (volatile signed __int32 *)(v11 + 280);
  v99 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v11 + 280, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_6;
  if ( CurrentThread->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_6:
    _BitScanForward((unsigned int *)&v17, AbEntrySummary);
    v105 = v17;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
    v10 = (__int64)&CurrentThread->LockEntries[v17];
    goto LABEL_7;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceAutoBoostEntryExhaustion(CurrentThread, v11 + 280);
LABEL_7:
  if ( v10 )
  {
    if ( (unsigned __int64)v14 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1488] + (((unsigned __int64)v14 >> 39) & 0x1FF)) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v10 + 40) = SessionId;
    *(_QWORD *)(v10 + 32) = (unsigned __int64)v14 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  }
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v11 + 280, &v99);
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v14, 0) )
    ExpAcquireFastMutexContended(v11 + 280, (PRTL_BALANCED_NODE)v10);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 328) = CurrentIrql;
  v90 = 1;
  v21 = *a2;
  v22 = HIDWORD(*a2);
  v23 = v115;
  v24 = *a2 + v115;
  v96 = v24;
  v25 = v21 + 0x80000;
  v26 = *(_QWORD *)(v11 + 32);
  v27 = HIDWORD(v21);
  if ( v26 <= 0x200000 || (LODWORD(v27) = v22, (*(_DWORD *)(v11 + 152) & 0x200) == 0) )
  {
    LODWORD(v22) = v27;
    goto LABEL_159;
  }
  if ( v26 > 0x2000000 )
  {
    BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v11, v21 + 0x80000, 1);
    v23 = v115;
    goto LABEL_25;
  }
  if ( v25 >= v26 )
  {
LABEL_159:
    BcbListHeadLargeOffset = (_QWORD *)(v11 + 16);
    goto LABEL_25;
  }
  BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v11 + 88)
                                    + 8 * ((unsigned __int64)(unsigned int)v26 >> 18)
                                    + 16 * (v25 >> 19));
LABEL_25:
  v29 = *BcbListHeadLargeOffset - 16LL;
  v103 = v29;
  if ( (_DWORD)v22 || (v30 = *(_WORD *)v29, *(_WORD *)v29 != 765) || *(_DWORD *)(v29 + 36) )
  {
    while ( *(_WORD *)v29 == 765 && v21 < *(_QWORD *)(v29 + 32) )
    {
      v79 = *(_QWORD *)(v29 + 8);
      if ( v21 >= v79 )
      {
        v33 = 1;
        goto LABEL_36;
      }
      if ( v24 >= v79 )
        v24 = *(_QWORD *)(v29 + 8);
      v96 = v24;
      v29 = *(_QWORD *)(v29 + 16) - 16LL;
      v103 = v29;
    }
  }
  else
  {
    v31 = v96;
    while ( v30 == 765 && (unsigned int)v21 < *(_DWORD *)(v29 + 32) )
    {
      v32 = *(_DWORD *)(v29 + 8);
      if ( (unsigned int)v21 >= v32 )
      {
        v33 = 1;
        goto LABEL_36;
      }
      if ( v31 >= v32 )
      {
        v31 = *(_DWORD *)(v29 + 8);
        LODWORD(v96) = v31;
        v24 = v96;
      }
      v29 = *(_QWORD *)(v29 + 16) - 16LL;
      v103 = v29;
      v30 = *(_WORD *)v29;
    }
  }
  v33 = 0;
LABEL_36:
  v34 = v29;
  P = (_QWORD *)v29;
  if ( !v33 )
  {
    if ( (v13 & 8) != 0 )
    {
      v34 = 0LL;
      P = 0LL;
      v89 = 0;
      v36 = a8;
      goto LABEL_78;
    }
    v64 = v21;
    v97 = v21;
    v65 = v24 - v21;
    HIDWORD(v95) = HIDWORD(v65);
    v66 = v21 & 0xFFF;
    v67 = v66 + v65;
    LODWORD(v95) = v66 + v65;
    v68 = v66 + v94;
    v94 += v66;
    v69 = v66 + v65;
    if ( (v116 || (*(_DWORD *)(v11 + 152) & 4) != 0) && (v70 = v21, v67 = v69, !a5) )
    {
      v71 = v93;
    }
    else
    {
      v71 = 2;
      v93 = 2;
      v69 = v67;
      v70 = v64;
      if ( !v66 && v23 >= 0x1000 )
      {
        v71 = 3;
        v93 = 3;
      }
      if ( (v67 & 0xFFF) == 0 )
      {
        v71 |= 4u;
        v93 = v71;
      }
    }
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
      v116 = 1;
    v72 = (v69 + 4095) & 0xFFFFF000;
    LODWORD(v95) = v72;
    *a8 -= v70 & 0xFFF;
    LODWORD(v97) = v97 & 0xFFFFF000;
    if ( v72 > v68 )
    {
      v72 = v68;
      LODWORD(v95) = v68;
    }
    v73 = CcAllocateInitializeBcb(v11, v29, &v97, &v95);
    v34 = (ULONG_PTR)v73;
    P = v73;
    if ( (v13 & 1) != 0 )
    {
      if ( !v73 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        RtlRaiseStatus(-1073741670);
      }
      if ( !v116 )
      {
        v74 = (struct _ERESOURCE *)(v73 + 72);
        if ( (v13 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v74, 0) )
            KeBugCheckEx(0x34u, 0x201ECuLL, v34, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v74, 0) )
        {
          KeBugCheckEx(0x34u, 0x201F3uLL, v34, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v90 = 0;
      if ( (v13 & 4) == 0 )
      {
        LOBYTE(v75) = 1;
        CcMapAndRead(v72, v71, v75, *a8);
        ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
        if ( !*(_QWORD *)(v34 + 184) )
        {
          *(_QWORD *)(v34 + 184) = *a8;
          *(_QWORD *)(v34 + 56) = v92;
          v92 = 0LL;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        *a8 = *(_QWORD *)(v34 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v34 + 8));
      }
      v36 = a8;
      goto LABEL_77;
    }
    if ( !v73 )
    {
      v89 = 0;
      v36 = a8;
      goto LABEL_78;
    }
    if ( !v116 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v73 + 72), 0) )
      KeBugCheckEx(0x34u, 0x20253uLL, v34, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v90 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v72, v71, 0LL, *a8) )
    {
      v89 = 0;
      v36 = a8;
      goto LABEL_78;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
    v36 = a8;
    if ( !*(_QWORD *)(v34 + 184) )
    {
      *(_QWORD *)(v34 + 184) = *a8;
      *(_QWORD *)(v34 + 56) = v92;
      v92 = 0LL;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v58 = *(_QWORD *)(v34 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v34 + 8));
    goto LABEL_76;
  }
  if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    v116 = 1;
  if ( *(_QWORD *)(v29 + 184) )
  {
    if ( (v13 & 1) != 0 )
    {
      ++*(_DWORD *)(v29 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v90 = 0;
      if ( !v116 )
      {
        if ( (v13 & 2) != 0 )
        {
          ExAcquireResourceExclusiveLite((PERESOURCE)(v29 + 72), 1u);
        }
        else
        {
          if ( (*(_WORD *)(v29 + 98) & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v29 + 72, 0LL, 0LL);
          v62 = *(_WORD *)(v29 + 98) & 1;
          if ( v62 )
          {
            v61 = KeGetCurrentIrql();
            v78 = KeGetCurrentThread();
            if ( (unsigned __int8)v61 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v61, 1uLL, 0LL);
            if ( (v78->ApcState.InProgressFlags & 2) != 0 )
              KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
            if ( !(_BYTE)v61 && (v78->MiscFlags & 0x400) == 0 && !v78->WaitBlock[3].SpareLong )
              KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
            v34 = v29;
          }
          LOBYTE(v61) = 1;
          v19 = v62 == 0;
          v63 = v29 + 72;
          if ( v19 )
            ExpAcquireSharedStarveExclusive(v63, v61);
          else
            ExpFastResourceLegacyAcquireSharedStarveExclusive(v63);
        }
      }
    }
    else
    {
      if ( !v116 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v29 + 72), 0) )
      {
        v34 = 0LL;
        P = 0LL;
        v89 = 0;
        v36 = a8;
        goto LABEL_78;
      }
      ++*(_DWORD *)(v29 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v90 = 0;
    }
    v36 = a8;
    v57 = (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v29 + 8));
    goto LABEL_75;
  }
  v35 = (unsigned int)(v21 - *(_DWORD *)(v29 + 8));
  v36 = a8;
  *a8 -= v35;
  v97 = *(_QWORD *)(v29 + 8);
  v95 = *(unsigned int *)(v29 + 4);
  if ( (v13 & 1) == 0 )
  {
    if ( !v116 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v29 + 72), 0) )
    {
      v34 = 0LL;
      P = 0LL;
      v89 = 0;
      goto LABEL_78;
    }
    ++*(_DWORD *)(v29 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v90 = 0;
    if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v29 + 4), 0LL, 0LL, *v36) )
    {
      v89 = 0;
      goto LABEL_78;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
    if ( !*(_QWORD *)(v29 + 184) )
    {
      *(_QWORD *)(v29 + 184) = *v36;
      *(_QWORD *)(v29 + 56) = v92;
      v92 = 0LL;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v57 = (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v29 + 8));
    goto LABEL_75;
  }
  ++*(_DWORD *)(v29 + 64);
  v37 = (volatile signed __int32 *)(v11 + 280);
  *(_QWORD *)(v11 + 288) = 0LL;
  v38 = *(_BYTE *)(v11 + 328);
  v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
  if ( v39 )
    ExpReleaseFastMutexContended(v11 + 280, v39);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v38 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v38);
  KeAbPostRelease(v11 + 280);
  v90 = 0;
  if ( !v116 )
  {
    if ( (v13 & 2) != 0 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v29 + 72), 1u);
    }
    else
    {
      v40 = v29 + 72;
      if ( (*(_WORD *)(v40 + 26) & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, v40, 0LL, 0LL);
      v41 = *(_WORD *)(v40 + 26) & 1;
      if ( v41 )
      {
        v76 = KeGetCurrentIrql();
        v77 = KeGetCurrentThread();
        if ( v76 > 1u )
          KeBugCheckEx(0x1C6u, 0LL, v76, 1uLL, 0LL);
        if ( (v77->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !v76 && (v77->MiscFlags & 0x400) == 0 && !v77->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v41 )
        ExpFastResourceLegacyAcquireSharedStarveExclusive(v40);
      else
        ExpAcquireSharedStarveExclusive(v40, 1LL);
    }
  }
  if ( (v13 & 4) != 0 )
  {
    v34 = (ULONG_PTR)P;
    v36 = a8;
    goto LABEL_77;
  }
  v42 = *a8;
  v43 = KeGetCurrentThread();
  v111 = v43;
  v106 = 0;
  v44 = 0;
  v100 = 0;
  v113 = 1;
  v45 = ((v42 & 0xFFF) + (unsigned __int64)(unsigned int)v95 + 4095) >> 12;
  v101 = v45;
  v46 = v42 & 0xFFFFFFFFFFFFF000uLL;
  v98 = v46;
  v47 = BYTE4(v43[1].Queue) + 4 * LODWORD(v43[1].WaitListEntry.Flink);
  while ( (_DWORD)v45 )
  {
    BYTE4(v43[1].Queue) = 1;
    v59 = v45 - 1;
    if ( (unsigned int)(v45 - 1) > LODWORD(v43[1].WaitListEntry.Flink) )
    {
      if ( v59 > 0xF )
        v59 = 15;
      LODWORD(v43[1].WaitListEntry.Flink) = v59;
    }
    v107 = 0;
    v60 = (unsigned int)((_DWORD)v45 << 12);
    v98 = (unsigned int)v60;
    v44 = MmCheckCachedPageStates(v46, v60, 0LL, &v113);
    v100 = v44;
    if ( v44 < 0 )
      break;
    v46 += v98;
    v98 = v46;
    LODWORD(v45) = 0;
    v101 = 0;
  }
  BYTE4(v43[1].Queue) = v47 & 3;
  LODWORD(v43[1].WaitListEntry.Flink) = v47 >> 2;
  if ( v44 < 0 )
    RtlRaiseStatus(v44);
  v102 = 0;
  v48 = KeGetCurrentThread();
  --v48->SpecialApcDisable;
  if ( ++v48->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v48, v11 + 280, KeGetCurrentIrql(), 0LL);
  v110 = 0LL;
  v49 = v48->AbEntrySummary;
  if ( !v49 )
  {
    if ( !v48->AbOrphanedEntrySummary )
    {
      v51 = 0LL;
      v109 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v48, v11 + 280);
      goto LABEL_57;
    }
    v80 = v48->AbOrphanedEntrySummary;
    v48->AbOrphanedEntrySummary = 0;
    v48->AbEntrySummary |= v80;
    v49 = v48->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v50, v49);
  v108 = v50;
  v48->AbEntrySummary = v49 & ~(1 << v50);
  v51 = (__int64)&v48->LockEntries[v50];
  v109 = v51;
LABEL_57:
  v110 = v51;
  if ( v51 )
  {
    if ( (unsigned __int64)v37 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1488] + (((unsigned __int64)v37 >> 39) & 0x1FF)) == 1 )
    {
      v52 = MmGetSessionIdEx((__int64)v48->ApcState.Process);
    }
    else
    {
      v52 = -1;
    }
    *(_DWORD *)(v51 + 40) = v52;
    *(_QWORD *)(v51 + 32) = (unsigned __int64)v37 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v48->116 + 1, 0x10u);
  }
  --v48->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v48, v11 + 280, &v102);
  SpecialApcDisable = v48->SpecialApcDisable;
  v48->SpecialApcDisable = SpecialApcDisable + 1;
  if ( SpecialApcDisable == -1 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
    KiCheckForKernelApcDelivery();
  v54 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v37, 0) )
    ExpAcquireFastMutexContended(v11 + 280, (PRTL_BALANCED_NODE)v51);
  if ( v51 )
    *(_BYTE *)(v51 + 26) |= 1u;
  v112 = KeGetCurrentThread();
  *(_QWORD *)(v11 + 288) = v112;
  *(_DWORD *)(v11 + 328) = v54;
  v29 = (__int64)P;
  if ( !P[23] )
  {
    P[23] = *a8;
    P[7] = v92;
    v92 = 0LL;
  }
  *(_QWORD *)(v11 + 288) = 0LL;
  v55 = *(_BYTE *)(v11 + 328);
  v56 = _InterlockedCompareExchange(v37, 1, 0);
  if ( v56 )
    ExpReleaseFastMutexContended(v11 + 280, v56);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v55 < 2u )
  {
    v82 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v82->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v82);
  }
  __writecr8(v55);
  KeAbPostRelease(v11 + 280);
  v34 = (ULONG_PTR)P;
  v57 = (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)P + 2));
  v36 = a8;
LABEL_75:
  v58 = *(_QWORD *)(v29 + 184) + v57;
LABEL_76:
  *v36 = v58;
LABEL_77:
  v89 = 1;
LABEL_78:
  if ( (v13 & 6) == 6 && v34 && *(_QWORD *)(v34 + 184) )
  {
    v83 = *(_QWORD *)(*(_QWORD *)(v34 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v34 + 56) + 16LL)) )
    {
      v84 = *(struct _KEVENT **)(v83 + 184);
      if ( v84 )
        KeSetEvent(v84, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v83 + 544));
    }
    *(_QWORD *)(v34 + 184) = 0LL;
    *(_QWORD *)(v34 + 56) = 0LL;
    v34 = (ULONG_PTR)P;
  }
  if ( v90 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
  if ( v92 )
  {
    v86 = *(_QWORD *)(v92 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v92 + 16)) )
    {
      v87 = *(struct _KEVENT **)(v86 + 184);
      if ( v87 )
        KeSetEvent(v87, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v86 + 544));
    }
    v34 = (ULONG_PTR)P;
  }
  if ( (v13 & 4) != 0 )
    CcDereferenceFileOffset(v11, *a2);
  if ( v89 )
  {
    *a7 = v34;
    *a9 = *(_QWORD *)(v34 + 32);
  }
  else
  {
    *v36 = 0LL;
    if ( v34 )
      CcUnpinFileDataEx((char *)v34, v116, 0);
  }
  return v89;
}
