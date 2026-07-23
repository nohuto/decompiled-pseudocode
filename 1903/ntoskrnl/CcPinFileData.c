/*
 * XREFs of CcPinFileData @ 0x1400D47D0
 * Callers:
 *     CcZeroDataInCache @ 0x1400FCA34 (CcZeroDataInCache.c)
 *     CcPinMappedData @ 0x140687950 (CcPinMappedData.c)
 *     CcMapData @ 0x140687DC0 (CcMapData.c)
 *     CcPinRead @ 0x1406BCE70 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x1406C68B0 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x1406C6A7C (CcMapDataCommon.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x14007B0B4 (CcAllocateInitializeBcb.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14007D4D0 (CcGetBcbListHeadLargeOffset.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14009E6F0 (ExpReleaseFastMutexContended.c)
 *     CcGetVirtualAddress @ 0x1400D61E0 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1400D6640 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400D7ED0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400D8B90 (ExAcquireSharedStarveExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x14027E054 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14027E21C (CcReferenceFileOffset.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14033A514 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
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
  __int64 v19; // rcx
  bool v20; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v22; // r12
  unsigned __int64 v23; // rsi
  unsigned int v24; // r10d
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  _QWORD *BcbListHeadLargeOffset; // rdi
  __int64 v30; // rdi
  __int16 v31; // ax
  unsigned int v32; // r8d
  unsigned int v33; // ecx
  char v34; // al
  ULONG_PTR v35; // rsi
  __int64 v36; // rax
  _QWORD *v37; // r12
  volatile signed __int32 *v38; // rbx
  unsigned __int8 v39; // si
  signed __int32 v40; // eax
  ULONG_PTR v41; // rdi
  __int16 v42; // cx
  __int64 v43; // rsi
  struct _KTHREAD *v44; // rdi
  NTSTATUS v45; // r8d
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rsi
  unsigned int v48; // r12d
  struct _KTHREAD *v49; // rdi
  unsigned __int8 v50; // al
  __int64 v51; // rcx
  __int64 v52; // rsi
  int v53; // eax
  __int64 v54; // rcx
  __int16 SpecialApcDisable; // ax
  unsigned __int8 v56; // di
  unsigned __int8 v57; // si
  signed __int32 v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int16 v64; // cx
  ULONG_PTR v65; // rcx
  __int16 v66; // cx
  __int64 v67; // rbx
  int v68; // r8d
  int v69; // edx
  unsigned int v70; // r9d
  int v71; // ebx
  __int16 v72; // ax
  unsigned int v73; // r12d
  unsigned int v74; // ebx
  char *v75; // rax
  struct _ERESOURCE *v76; // rcx
  __int64 v77; // r8
  unsigned __int8 v78; // dl
  struct _KTHREAD *v79; // r8
  struct _KTHREAD *v80; // r9
  __int64 v81; // rax
  unsigned __int8 v82; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v84; // rcx
  __int64 v85; // rdi
  struct _KEVENT *v86; // rcx
  __int64 v88; // rdi
  struct _KEVENT *v89; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v91; // [rsp+30h] [rbp-C8h]
  int v92; // [rsp+34h] [rbp-C4h]
  _QWORD *P; // [rsp+38h] [rbp-C0h]
  __int64 v94; // [rsp+40h] [rbp-B8h] BYREF
  int v95; // [rsp+48h] [rbp-B0h]
  int v96; // [rsp+4Ch] [rbp-ACh] BYREF
  __int64 v97; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v98; // [rsp+58h] [rbp-A0h]
  __int64 v99; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v100; // [rsp+68h] [rbp-90h]
  int v101; // [rsp+70h] [rbp-88h] BYREF
  NTSTATUS v102; // [rsp+74h] [rbp-84h]
  int v103; // [rsp+78h] [rbp-80h]
  int v104; // [rsp+7Ch] [rbp-7Ch] BYREF
  __int64 v105; // [rsp+80h] [rbp-78h]
  __int64 v106; // [rsp+88h] [rbp-70h]
  int v107; // [rsp+90h] [rbp-68h]
  int v108; // [rsp+94h] [rbp-64h]
  int v109; // [rsp+98h] [rbp-60h]
  int v110; // [rsp+9Ch] [rbp-5Ch]
  __int64 v111; // [rsp+A0h] [rbp-58h]
  __int64 v112; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v113; // [rsp+B0h] [rbp-48h]
  struct _KTHREAD *v114; // [rsp+B8h] [rbp-40h]
  char v115; // [rsp+100h] [rbp+8h] BYREF
  __int64 *v116; // [rsp+108h] [rbp+10h]
  unsigned int v117; // [rsp+110h] [rbp+18h]
  char v118; // [rsp+118h] [rbp+20h]

  v118 = a4;
  v117 = a3;
  v116 = a2;
  v10 = 0LL;
  v98 = 0LL;
  v95 = 0;
  v94 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v106 = v11;
  if ( *a2 + a3 > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x118uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v12 = a8;
  *a8 = 0LL;
  v13 = a6;
  if ( (a6 & 4) != 0 )
  {
    v96 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v11, *a2);
  }
  else
  {
    *v12 = CcGetVirtualAddress(v11, *a2, (unsigned int)&v94, (unsigned int)&v96, (a6 & 0x40) != 0, 0);
  }
  v14 = (volatile signed __int32 *)(v11 + 280);
  v101 = 0;
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
    v107 = v17;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v11 + 280, &v101);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v19);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v14, 0) )
    ExpAcquireFastMutexContended(v11 + 280, (PRTL_BALANCED_NODE)v10);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 328) = CurrentIrql;
  v92 = 1;
  v22 = *a2;
  v23 = HIDWORD(*a2);
  v24 = v117;
  v25 = *a2 + v117;
  v98 = v25;
  v26 = v22 + 0x80000;
  v27 = *(_QWORD *)(v11 + 32);
  v28 = HIDWORD(v22);
  if ( v27 <= 0x200000 || (LODWORD(v28) = v23, (*(_DWORD *)(v11 + 152) & 0x200) == 0) )
  {
    LODWORD(v23) = v28;
    goto LABEL_159;
  }
  if ( v27 > 0x2000000 )
  {
    BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v11, v22 + 0x80000, 1);
    v24 = v117;
    goto LABEL_25;
  }
  if ( v26 >= v27 )
  {
LABEL_159:
    BcbListHeadLargeOffset = (_QWORD *)(v11 + 16);
    goto LABEL_25;
  }
  BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v11 + 88)
                                    + 8 * ((unsigned __int64)(unsigned int)v27 >> 18)
                                    + 16 * (v26 >> 19));
LABEL_25:
  v30 = *BcbListHeadLargeOffset - 16LL;
  v105 = v30;
  if ( (_DWORD)v23 || (v31 = *(_WORD *)v30, *(_WORD *)v30 != 765) || *(_DWORD *)(v30 + 36) )
  {
    while ( *(_WORD *)v30 == 765 && v22 < *(_QWORD *)(v30 + 32) )
    {
      v81 = *(_QWORD *)(v30 + 8);
      if ( v22 >= v81 )
      {
        v34 = 1;
        goto LABEL_36;
      }
      if ( v25 >= v81 )
        v25 = *(_QWORD *)(v30 + 8);
      v98 = v25;
      v30 = *(_QWORD *)(v30 + 16) - 16LL;
      v105 = v30;
    }
  }
  else
  {
    v32 = v98;
    while ( v31 == 765 && (unsigned int)v22 < *(_DWORD *)(v30 + 32) )
    {
      v33 = *(_DWORD *)(v30 + 8);
      if ( (unsigned int)v22 >= v33 )
      {
        v34 = 1;
        goto LABEL_36;
      }
      if ( v32 >= v33 )
      {
        v32 = *(_DWORD *)(v30 + 8);
        LODWORD(v98) = v32;
        v25 = v98;
      }
      v30 = *(_QWORD *)(v30 + 16) - 16LL;
      v105 = v30;
      v31 = *(_WORD *)v30;
    }
  }
  v34 = 0;
LABEL_36:
  v35 = v30;
  P = (_QWORD *)v30;
  if ( !v34 )
  {
    if ( (v13 & 8) != 0 )
    {
      v35 = 0LL;
      P = 0LL;
      v91 = 0;
      v37 = a8;
      goto LABEL_78;
    }
    v66 = v22;
    v99 = v22;
    v67 = v25 - v22;
    HIDWORD(v97) = HIDWORD(v67);
    v68 = v22 & 0xFFF;
    v69 = v68 + v67;
    LODWORD(v97) = v68 + v67;
    v70 = v68 + v96;
    v96 += v68;
    v71 = v68 + v67;
    if ( (v118 || (*(_DWORD *)(v11 + 152) & 4) != 0) && (v72 = v22, v69 = v71, !a5) )
    {
      v73 = v95;
    }
    else
    {
      v73 = 2;
      v95 = 2;
      v71 = v69;
      v72 = v66;
      if ( !v68 && v24 >= 0x1000 )
      {
        v73 = 3;
        v95 = 3;
      }
      if ( (v69 & 0xFFF) == 0 )
      {
        v73 |= 4u;
        v95 = v73;
      }
    }
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
      v118 = 1;
    v74 = (v71 + 4095) & 0xFFFFF000;
    LODWORD(v97) = v74;
    *a8 -= v72 & 0xFFF;
    LODWORD(v99) = v99 & 0xFFFFF000;
    if ( v74 > v70 )
    {
      v74 = v70;
      LODWORD(v97) = v70;
    }
    v75 = CcAllocateInitializeBcb(v11, v30, &v99, &v97);
    v35 = (ULONG_PTR)v75;
    P = v75;
    if ( (v13 & 1) != 0 )
    {
      if ( !v75 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        RtlRaiseStatus(-1073741670);
      }
      if ( !v118 )
      {
        v76 = (struct _ERESOURCE *)(v75 + 72);
        if ( (v13 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v76, 0) )
            KeBugCheckEx(0x34u, 0x201E6uLL, v35, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v76, 0) )
        {
          KeBugCheckEx(0x34u, 0x201EDuLL, v35, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v92 = 0;
      if ( (v13 & 4) == 0 )
      {
        LOBYTE(v77) = 1;
        CcMapAndRead(v74, v73, v77, *a8);
        ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
        if ( !*(_QWORD *)(v35 + 184) )
        {
          *(_QWORD *)(v35 + 184) = *a8;
          *(_QWORD *)(v35 + 56) = v94;
          v94 = 0LL;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        *a8 = *(_QWORD *)(v35 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v35 + 8));
      }
      v37 = a8;
      goto LABEL_77;
    }
    if ( !v75 )
    {
      v91 = 0;
      v37 = a8;
      goto LABEL_78;
    }
    if ( !v118 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v75 + 72), 0) )
      KeBugCheckEx(0x34u, 0x2024DuLL, v35, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v92 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v74, v73, 0LL, *a8) )
    {
      v91 = 0;
      v37 = a8;
      goto LABEL_78;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
    v37 = a8;
    if ( !*(_QWORD *)(v35 + 184) )
    {
      *(_QWORD *)(v35 + 184) = *a8;
      *(_QWORD *)(v35 + 56) = v94;
      v94 = 0LL;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v60 = *(_QWORD *)(v35 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v35 + 8));
    goto LABEL_76;
  }
  if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    v118 = 1;
  if ( *(_QWORD *)(v30 + 184) )
  {
    if ( (v13 & 1) != 0 )
    {
      ++*(_DWORD *)(v30 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v92 = 0;
      if ( !v118 )
      {
        if ( (v13 & 2) != 0 )
        {
          ExAcquireResourceExclusiveLite((PERESOURCE)(v30 + 72), 1u);
        }
        else
        {
          if ( (*(_WORD *)(v30 + 98) & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v30 + 72, 0LL, 0LL);
          v64 = *(_WORD *)(v30 + 98) & 1;
          if ( v64 )
          {
            v63 = KeGetCurrentIrql();
            v80 = KeGetCurrentThread();
            if ( (unsigned __int8)v63 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v63, 1uLL, 0LL);
            if ( (v80->ApcState.InProgressFlags & 2) != 0 )
              KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
            if ( !(_BYTE)v63 && (v80->MiscFlags & 0x400) == 0 && !v80->WaitBlock[3].SpareLong )
              KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
            v35 = v30;
          }
          LOBYTE(v63) = 1;
          v20 = v64 == 0;
          v65 = v30 + 72;
          if ( v20 )
            ExpAcquireSharedStarveExclusive(v65, v63);
          else
            ExpFastResourceLegacyAcquireSharedStarveExclusive(v65);
        }
      }
    }
    else
    {
      if ( !v118 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v30 + 72), 0) )
      {
        v35 = 0LL;
        P = 0LL;
        v91 = 0;
        v37 = a8;
        goto LABEL_78;
      }
      ++*(_DWORD *)(v30 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v92 = 0;
    }
    v37 = a8;
    v59 = (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v30 + 8));
    goto LABEL_75;
  }
  v36 = (unsigned int)(v22 - *(_DWORD *)(v30 + 8));
  v37 = a8;
  *a8 -= v36;
  v99 = *(_QWORD *)(v30 + 8);
  v97 = *(unsigned int *)(v30 + 4);
  if ( (v13 & 1) == 0 )
  {
    if ( !v118 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v30 + 72), 0) )
    {
      v35 = 0LL;
      P = 0LL;
      v91 = 0;
      goto LABEL_78;
    }
    ++*(_DWORD *)(v30 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v92 = 0;
    if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v30 + 4), 0LL, 0LL, *v37) )
    {
      v91 = 0;
      goto LABEL_78;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
    if ( !*(_QWORD *)(v30 + 184) )
    {
      *(_QWORD *)(v30 + 184) = *v37;
      *(_QWORD *)(v30 + 56) = v94;
      v94 = 0LL;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v59 = (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v30 + 8));
    goto LABEL_75;
  }
  ++*(_DWORD *)(v30 + 64);
  v38 = (volatile signed __int32 *)(v11 + 280);
  *(_QWORD *)(v11 + 288) = 0LL;
  v39 = *(_BYTE *)(v11 + 328);
  v40 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
  if ( v40 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(v11 + 280), v40);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v39 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v39);
  KeAbPostRelease(v11 + 280);
  v92 = 0;
  if ( !v118 )
  {
    if ( (v13 & 2) != 0 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v30 + 72), 1u);
    }
    else
    {
      v41 = v30 + 72;
      if ( (*(_WORD *)(v41 + 26) & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, v41, 0LL, 0LL);
      v42 = *(_WORD *)(v41 + 26) & 1;
      if ( v42 )
      {
        v78 = KeGetCurrentIrql();
        v79 = KeGetCurrentThread();
        if ( v78 > 1u )
          KeBugCheckEx(0x1C6u, 0LL, v78, 1uLL, 0LL);
        if ( (v79->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !v78 && (v79->MiscFlags & 0x400) == 0 && !v79->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v42 )
        ExpFastResourceLegacyAcquireSharedStarveExclusive(v41);
      else
        ExpAcquireSharedStarveExclusive(v41, 1LL);
    }
  }
  if ( (v13 & 4) != 0 )
  {
    v35 = (ULONG_PTR)P;
    v37 = a8;
    goto LABEL_77;
  }
  v43 = *a8;
  v44 = KeGetCurrentThread();
  v113 = v44;
  v108 = 0;
  v45 = 0;
  v102 = 0;
  v115 = 1;
  v46 = ((v43 & 0xFFF) + (unsigned __int64)(unsigned int)v97 + 4095) >> 12;
  v103 = v46;
  v47 = v43 & 0xFFFFFFFFFFFFF000uLL;
  v100 = v47;
  v48 = BYTE4(v44[1].Queue) + 4 * LODWORD(v44[1].WaitListEntry.Flink);
  while ( (_DWORD)v46 )
  {
    BYTE4(v44[1].Queue) = 1;
    v61 = v46 - 1;
    if ( (unsigned int)(v46 - 1) > LODWORD(v44[1].WaitListEntry.Flink) )
    {
      if ( v61 > 0xF )
        v61 = 15;
      LODWORD(v44[1].WaitListEntry.Flink) = v61;
    }
    v109 = 0;
    v62 = (unsigned int)((_DWORD)v46 << 12);
    v100 = (unsigned int)v62;
    v45 = MmCheckCachedPageStates(v47, v62, 0LL, &v115);
    v102 = v45;
    if ( v45 < 0 )
      break;
    v47 += v100;
    v100 = v47;
    LODWORD(v46) = 0;
    v103 = 0;
  }
  BYTE4(v44[1].Queue) = v48 & 3;
  LODWORD(v44[1].WaitListEntry.Flink) = v48 >> 2;
  if ( v45 < 0 )
    RtlRaiseStatus(v45);
  v104 = 0;
  v49 = KeGetCurrentThread();
  --v49->SpecialApcDisable;
  if ( ++v49->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v49, v11 + 280, KeGetCurrentIrql(), 0LL);
  v112 = 0LL;
  v50 = v49->AbEntrySummary;
  if ( !v50 )
  {
    if ( !v49->AbOrphanedEntrySummary )
    {
      v52 = 0LL;
      v111 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v49, v11 + 280);
      goto LABEL_57;
    }
    v82 = v49->AbOrphanedEntrySummary;
    v49->AbOrphanedEntrySummary = 0;
    v49->AbEntrySummary |= v82;
    v50 = v49->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v51, v50);
  v110 = v51;
  v49->AbEntrySummary = v50 & ~(1 << v51);
  v52 = (__int64)&v49->LockEntries[v51];
  v111 = v52;
LABEL_57:
  v112 = v52;
  if ( v52 )
  {
    if ( (unsigned __int64)v38 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1488] + (((unsigned __int64)v38 >> 39) & 0x1FF)) == 1 )
    {
      v53 = MmGetSessionIdEx((__int64)v49->ApcState.Process);
    }
    else
    {
      v53 = -1;
    }
    *(_DWORD *)(v52 + 40) = v53;
    *(_QWORD *)(v52 + 32) = (unsigned __int64)v38 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v49->116 + 1, 0x10u);
  }
  --v49->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v49, v11 + 280, &v104);
  SpecialApcDisable = v49->SpecialApcDisable;
  v49->SpecialApcDisable = SpecialApcDisable + 1;
  if ( SpecialApcDisable == -1 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
    KiCheckForKernelApcDelivery(v54);
  v56 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v38, 0) )
    ExpAcquireFastMutexContended(v11 + 280, (PRTL_BALANCED_NODE)v52);
  if ( v52 )
    *(_BYTE *)(v52 + 26) |= 1u;
  v114 = KeGetCurrentThread();
  *(_QWORD *)(v11 + 288) = v114;
  *(_DWORD *)(v11 + 328) = v56;
  v30 = (__int64)P;
  if ( !P[23] )
  {
    P[23] = *a8;
    P[7] = v94;
    v94 = 0LL;
  }
  *(_QWORD *)(v11 + 288) = 0LL;
  v57 = *(_BYTE *)(v11 + 328);
  v58 = _InterlockedCompareExchange(v38, 1, 0);
  if ( v58 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(v11 + 280), v58);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v57 < 2u )
  {
    v84 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v84->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v84);
  }
  __writecr8(v57);
  KeAbPostRelease(v11 + 280);
  v35 = (ULONG_PTR)P;
  v59 = (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)P + 2));
  v37 = a8;
LABEL_75:
  v60 = *(_QWORD *)(v30 + 184) + v59;
LABEL_76:
  *v37 = v60;
LABEL_77:
  v91 = 1;
LABEL_78:
  if ( (v13 & 6) == 6 && v35 && *(_QWORD *)(v35 + 184) )
  {
    v85 = *(_QWORD *)(*(_QWORD *)(v35 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v35 + 56) + 16LL)) )
    {
      v86 = *(struct _KEVENT **)(v85 + 184);
      if ( v86 )
        KeSetEvent(v86, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v85 + 544));
    }
    *(_QWORD *)(v35 + 184) = 0LL;
    *(_QWORD *)(v35 + 56) = 0LL;
    v35 = (ULONG_PTR)P;
  }
  if ( v92 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
  if ( v94 )
  {
    v88 = *(_QWORD *)(v94 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v94 + 16)) )
    {
      v89 = *(struct _KEVENT **)(v88 + 184);
      if ( v89 )
        KeSetEvent(v89, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v88 + 544));
    }
    v35 = (ULONG_PTR)P;
  }
  if ( (v13 & 4) != 0 )
    CcDereferenceFileOffset(v11, *a2);
  if ( v91 )
  {
    *a7 = v35;
    *a9 = *(_QWORD *)(v35 + 32);
  }
  else
  {
    *v37 = 0LL;
    if ( v35 )
      CcUnpinFileDataEx((char *)v35, v118, 0);
  }
  return v91;
}
