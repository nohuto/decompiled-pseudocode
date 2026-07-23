/*
 * XREFs of CcPinFileData @ 0x1400AE210
 * Callers:
 *     CcZeroDataInCache @ 0x1400E0844 (CcZeroDataInCache.c)
 *     CcPinRead @ 0x1406393D0 (CcPinRead.c)
 *     CcPinMappedData @ 0x1406395C0 (CcPinMappedData.c)
 *     CcMapData @ 0x140639A30 (CcMapData.c)
 *     CcPreparePinWrite @ 0x1406A1050 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x1406A1224 (CcMapDataCommon.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400ADFE0 (ExAcquireSharedStarveExclusive.c)
 *     CcGetBcbListHeadLargeOffset @ 0x1400AE0A0 (CcGetBcbListHeadLargeOffset.c)
 *     CcGetVirtualAddress @ 0x1400AFB80 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1400B0040 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400B1950 (ExpAcquireSharedStarveExclusive.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     CcAllocateInitializeBcb @ 0x1400CC398 (CcAllocateInitializeBcb.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x14026A7C4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14026A990 (CcReferenceFileOffset.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14031BA78 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        signed __int64 *a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        ULONG_PTR *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r15
  ULONG_PTR v13; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v16; // rcx
  int SessionId; // eax
  __int64 v18; // rcx
  bool v19; // zf
  unsigned __int8 CurrentIrql; // bl
  signed __int64 v21; // r14
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  char v24; // r15
  __int64 v25; // rdi
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  _QWORD *BcbListHeadLargeOffset; // rdi
  __int64 v30; // rdi
  __int16 v31; // ax
  unsigned int v32; // r8d
  unsigned int v33; // ecx
  ULONG_PTR v34; // rsi
  ULONG_PTR v35; // rbx
  unsigned __int8 v36; // si
  signed __int32 v37; // eax
  struct _ERESOURCE *v38; // rdi
  __int16 v39; // cx
  __int64 v40; // rdi
  struct _KTHREAD *v41; // rsi
  NTSTATUS v42; // r8d
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rdi
  unsigned int v45; // r14d
  struct _KTHREAD *v46; // rdi
  unsigned __int8 v47; // al
  __int64 v48; // rcx
  __int64 v49; // rsi
  int v50; // eax
  __int64 v51; // rcx
  __int16 SpecialApcDisable; // ax
  unsigned __int8 v53; // di
  unsigned __int8 v54; // si
  signed __int32 v55; // eax
  _QWORD *v56; // rdi
  struct _FAST_MUTEX *v57; // r15
  unsigned int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // r15
  __int64 v61; // rdx
  __int16 v62; // cx
  ULONG_PTR v63; // rcx
  __int64 v64; // rax
  __int16 v65; // dx
  __int64 v66; // rbx
  int v67; // r9d
  int v68; // ecx
  unsigned int v69; // r8d
  int v70; // r10d
  int v71; // r11d
  int v72; // esi
  __int16 v73; // r15
  __int16 v74; // ax
  int v75; // ebx
  unsigned int v76; // r14d
  unsigned int v77; // ebx
  __int64 v78; // rax
  struct _ERESOURCE *v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rax
  unsigned __int8 v82; // dl
  struct _KTHREAD *v83; // r8
  struct _KTHREAD *v84; // r9
  struct _FAST_MUTEX *v85; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // rcx
  __int64 v89; // rdx
  struct _KEVENT *v90; // rcx
  __int64 v92; // rcx
  struct _KEVENT *v93; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v95; // [rsp+30h] [rbp-C8h]
  int v96; // [rsp+34h] [rbp-C4h]
  _QWORD *P; // [rsp+38h] [rbp-C0h]
  __int64 v98; // [rsp+40h] [rbp-B8h]
  __int64 v99; // [rsp+48h] [rbp-B0h] BYREF
  int v100; // [rsp+50h] [rbp-A8h]
  int v101; // [rsp+54h] [rbp-A4h] BYREF
  unsigned __int64 v102; // [rsp+58h] [rbp-A0h]
  __int64 v103; // [rsp+60h] [rbp-98h] BYREF
  __int64 v104; // [rsp+68h] [rbp-90h]
  __int64 v105; // [rsp+70h] [rbp-88h] BYREF
  int v106; // [rsp+78h] [rbp-80h] BYREF
  NTSTATUS v107; // [rsp+7Ch] [rbp-7Ch]
  int v108; // [rsp+80h] [rbp-78h]
  int v109; // [rsp+84h] [rbp-74h] BYREF
  __int64 v110; // [rsp+88h] [rbp-70h]
  __int64 v111; // [rsp+90h] [rbp-68h]
  int v112; // [rsp+98h] [rbp-60h]
  int v113; // [rsp+9Ch] [rbp-5Ch]
  int v114; // [rsp+A0h] [rbp-58h]
  int v115; // [rsp+A4h] [rbp-54h]
  __int64 v116; // [rsp+A8h] [rbp-50h]
  __int64 v117; // [rsp+B0h] [rbp-48h]

  v10 = 0LL;
  v100 = 0;
  v99 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v98 = v11;
  v111 = v11;
  v12 = a3;
  if ( a3 + *a2 > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x10DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  *a8 = 0LL;
  if ( (a6 & 4) != 0 )
  {
    v101 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v11, *a2);
  }
  else
  {
    *a8 = CcGetVirtualAddress(v11, *a2, (unsigned int)&v99, (unsigned int)&v101, (a6 & 0x40) != 0, 0);
  }
  v13 = v11 + 280;
  v106 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v13, KeGetCurrentIrql(), 0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_6;
  if ( CurrentThread->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
    AbEntrySummary = CurrentThread->AbEntrySummary;
LABEL_6:
    _BitScanForward((unsigned int *)&v16, AbEntrySummary);
    v112 = v16;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v16);
    v10 = (__int64)&CurrentThread->LockEntries[v16];
    goto LABEL_7;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceAutoBoostEntryExhaustion(CurrentThread, v13);
LABEL_7:
  if ( v10 )
  {
    if ( v13 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[1474] + ((v13 >> 39) & 0x1FF)) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v10 + 40) = SessionId;
    *(_QWORD *)(v10 + 32) = v13 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  }
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v13, (__int64)&v106);
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v18);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v13, 0) )
    ExpAcquireFastMutexContended(v13, (PRTL_BALANCED_NODE)v10);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v13 + 48) = CurrentIrql;
  v96 = 1;
  v21 = *a2;
  v22 = HIDWORD(*a2);
  v23 = *a2 + v12;
  v104 = v23;
  v24 = 0;
  v25 = v21 + 0x80000;
  v26 = v98;
  v27 = *(_QWORD *)(v98 + 32);
  v28 = HIDWORD(v21);
  if ( v27 > 0x200000 && (LODWORD(v28) = v22, (*(_DWORD *)(v98 + 152) & 0x200) != 0) )
  {
    if ( v27 > 0x2000000 )
    {
      BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v98, v21 + 0x80000, 1);
      v26 = v98;
      goto LABEL_22;
    }
    if ( v25 < v27 )
    {
      BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v98 + 88)
                                        + 8 * ((unsigned __int64)(unsigned int)v27 >> 18)
                                        + 16 * (v25 >> 19));
      goto LABEL_22;
    }
  }
  else
  {
    LODWORD(v22) = v28;
  }
  BcbListHeadLargeOffset = (_QWORD *)(v98 + 16);
LABEL_22:
  v30 = *BcbListHeadLargeOffset - 16LL;
  v110 = v30;
  if ( (_DWORD)v22 || (v31 = *(_WORD *)v30, *(_WORD *)v30 != 765) || *(_DWORD *)(v30 + 36) )
  {
    while ( *(_WORD *)v30 == 765 && v21 < *(_QWORD *)(v30 + 32) )
    {
      v81 = *(_QWORD *)(v30 + 8);
      if ( v21 >= v81 )
      {
LABEL_32:
        v24 = 1;
        break;
      }
      if ( v23 >= v81 )
        v23 = *(_QWORD *)(v30 + 8);
      v104 = v23;
      v30 = *(_QWORD *)(v30 + 16) - 16LL;
      v110 = v30;
    }
  }
  else
  {
    v32 = v104;
    while ( v31 == 765 && (unsigned int)v21 < *(_DWORD *)(v30 + 32) )
    {
      v33 = *(_DWORD *)(v30 + 8);
      if ( (unsigned int)v21 >= v33 )
        goto LABEL_32;
      if ( v32 >= v33 )
      {
        v32 = *(_DWORD *)(v30 + 8);
        LODWORD(v104) = v32;
        v23 = v104;
      }
      v30 = *(_QWORD *)(v30 + 16) - 16LL;
      v110 = v30;
      v31 = *(_WORD *)v30;
    }
  }
  v34 = v30;
  P = (_QWORD *)v30;
  if ( v24 )
  {
    if ( (*(_DWORD *)(v26 + 152) & 0x200) == 0 )
      a4 = 1;
    if ( !*(_QWORD *)(v30 + 184) )
    {
      *a8 -= (unsigned int)(v21 - *(_DWORD *)(v30 + 8));
      v105 = *(_QWORD *)(v30 + 8);
      v103 = *(unsigned int *)(v30 + 4);
      if ( (a6 & 1) == 0 )
      {
        if ( !a4 )
        {
          if ( !ExAcquireSharedStarveExclusive((PERESOURCE)(v30 + 72), 0) )
          {
            v34 = 0LL;
            P = 0LL;
            v95 = 0;
            v56 = a8;
            goto LABEL_74;
          }
          v26 = v98;
        }
        ++*(_DWORD *)(v30 + 64);
        v85 = (struct _FAST_MUTEX *)(v26 + 280);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v26 + 280));
        v96 = 0;
        if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v30 + 4), 0LL, 0LL, *a8) )
        {
          v95 = 0;
          v56 = a8;
          goto LABEL_74;
        }
        ExAcquireFastMutex(v85);
        if ( !*(_QWORD *)(v30 + 184) )
        {
          *(_QWORD *)(v30 + 184) = *a8;
          *(_QWORD *)(v30 + 56) = v99;
          v99 = 0LL;
        }
        KeReleaseGuardedMutex(v85);
        *a8 = *(_QWORD *)(v30 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v30 + 8));
        v56 = a8;
        goto LABEL_73;
      }
      ++*(_DWORD *)(v30 + 64);
      v35 = v26 + 280;
      *(_QWORD *)(v26 + 288) = 0LL;
      v36 = *(_BYTE *)(v26 + 328);
      v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 280), 1, 0);
      if ( v37 )
        ExpReleaseFastMutexContended(v26 + 280, v37);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v36 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v36);
      KeAbPostRelease(v35);
      v96 = 0;
      if ( a4 )
      {
LABEL_47:
        if ( (a6 & 4) != 0 )
        {
          v34 = (ULONG_PTR)P;
LABEL_72:
          v56 = a8;
LABEL_73:
          v95 = 1;
LABEL_74:
          v57 = (struct _FAST_MUTEX *)v98;
          goto LABEL_75;
        }
        v40 = *a8;
        v41 = KeGetCurrentThread();
        v113 = 0;
        v42 = 0;
        v107 = 0;
        v43 = ((v40 & 0xFFF) + (unsigned __int64)(unsigned int)v103 + 4095) >> 12;
        v108 = v43;
        v44 = v40 & 0xFFFFFFFFFFFFF000uLL;
        v102 = v44;
        v45 = BYTE4(v41[1].Queue) + 4 * LODWORD(v41[1].WaitListEntry.Flink);
        while ( (_DWORD)v43 )
        {
          BYTE4(v41[1].Queue) = 1;
          v58 = v43 - 1;
          if ( (unsigned int)(v43 - 1) > LODWORD(v41[1].WaitListEntry.Flink) )
          {
            if ( v58 > 0xF )
              v58 = 15;
            LODWORD(v41[1].WaitListEntry.Flink) = v58;
          }
          v114 = 0;
          v59 = (unsigned int)((_DWORD)v43 << 12);
          v60 = (unsigned int)v59;
          v42 = MmCheckCachedPageStates(v44, v59, 0LL);
          v107 = v42;
          if ( v42 < 0 )
            break;
          v44 += v60;
          v102 = v44;
          LODWORD(v43) = 0;
          v108 = 0;
        }
        BYTE4(v41[1].Queue) = v45 & 3;
        LODWORD(v41[1].WaitListEntry.Flink) = v45 >> 2;
        if ( v42 < 0 )
          RtlRaiseStatus(v42);
        v109 = 0;
        v46 = KeGetCurrentThread();
        --v46->SpecialApcDisable;
        if ( ++v46->AbAllocationRegionCount != 1 )
          KeBugCheckEx(0x192u, (ULONG_PTR)v46, v35, KeGetCurrentIrql(), 0LL);
        v117 = 0LL;
        v47 = v46->AbEntrySummary;
        if ( !v47 )
        {
          if ( !v46->AbOrphanedEntrySummary )
          {
            v49 = 0LL;
            v116 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
              EtwTraceAutoBoostEntryExhaustion(v46, v35);
            goto LABEL_54;
          }
          v87 = v46->AbOrphanedEntrySummary;
          v46->AbOrphanedEntrySummary = 0;
          v46->AbEntrySummary |= v87;
          v47 = v46->AbEntrySummary;
        }
        _BitScanForward((unsigned int *)&v48, v47);
        v115 = v48;
        v46->AbEntrySummary = v47 & ~(1 << v48);
        v49 = (__int64)&v46->LockEntries[v48];
        v116 = v49;
LABEL_54:
        v117 = v49;
        if ( v49 )
        {
          if ( v35 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState[1474] + ((v35 >> 39) & 0x1FF)) == 1 )
            v50 = MmGetSessionIdEx((__int64)v46->ApcState.Process);
          else
            v50 = -1;
          *(_DWORD *)(v49 + 40) = v50;
          *(_QWORD *)(v49 + 32) = v35 & 0x7FFFFFFFFFFFFFFCLL;
        }
        else
        {
          _interlockedbittestandset((volatile signed __int32 *)&v46->116 + 1, 0x10u);
        }
        --v46->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v46, v35, (__int64)&v109);
        SpecialApcDisable = v46->SpecialApcDisable;
        v46->SpecialApcDisable = SpecialApcDisable + 1;
        if ( SpecialApcDisable == -1
          && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
        {
          KiCheckForKernelApcDelivery(v51);
        }
        v53 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)v35, 0) )
          ExpAcquireFastMutexContended(v35, (PRTL_BALANCED_NODE)v49);
        if ( v49 )
          *(_BYTE *)(v49 + 26) |= 1u;
        *(_QWORD *)(v35 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v35 + 48) = v53;
        if ( !P[23] )
        {
          P[23] = *a8;
          P[7] = v99;
          v99 = 0LL;
        }
        *(_QWORD *)(v35 + 8) = 0LL;
        v54 = *(_BYTE *)(v35 + 48);
        v55 = _InterlockedCompareExchange((volatile signed __int32 *)v35, 1, 0);
        if ( v55 )
          ExpReleaseFastMutexContended(v35, v55);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v54 < 2u )
        {
          v88 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v88->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v88);
        }
        __writecr8(v54);
        KeAbPostRelease(v35);
        v34 = (ULONG_PTR)P;
        *a8 = P[23] + (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)P + 2));
        goto LABEL_72;
      }
      v38 = (struct _ERESOURCE *)(v30 + 72);
      if ( (a6 & 2) != 0 )
      {
        ExAcquireResourceExclusiveLite(v38, 1u);
        goto LABEL_47;
      }
      if ( (v38->Flag & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v38, 0LL, 0LL);
      v39 = v38->Flag & 1;
      if ( !v39 )
      {
LABEL_45:
        if ( v39 )
          ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v38);
        else
          ExpAcquireSharedStarveExclusive(v38, 1LL);
        goto LABEL_47;
      }
      v82 = KeGetCurrentIrql();
      v83 = KeGetCurrentThread();
      if ( v82 > 1u )
        KeBugCheckEx(0x1C6u, 0LL, v82, 1uLL, 0LL);
      if ( (v83->ApcState.InProgressFlags & 2) == 0 )
      {
        if ( v82 || (v83->MiscFlags & 0x400) != 0 || v83->WaitBlock[3].SpareLong )
          goto LABEL_45;
LABEL_125:
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
LABEL_192:
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    }
    if ( (a6 & 1) != 0 )
    {
      ++*(_DWORD *)(v30 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v26 + 280));
      v96 = 0;
      if ( !a4 )
      {
        if ( (a6 & 2) != 0 )
        {
          ExAcquireResourceExclusiveLite((PERESOURCE)(v30 + 72), 1u);
        }
        else
        {
          if ( (*(_WORD *)(v30 + 98) & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v30 + 72, 0LL, 0LL);
          v62 = *(_WORD *)(v30 + 98) & 1;
          if ( v62 )
          {
            v61 = KeGetCurrentIrql();
            v84 = KeGetCurrentThread();
            if ( (unsigned __int8)v61 > 1u )
              KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)v61, 1uLL, 0LL);
            if ( (v84->ApcState.InProgressFlags & 2) != 0 )
              goto LABEL_192;
            if ( !(_BYTE)v61 && (v84->MiscFlags & 0x400) == 0 && !v84->WaitBlock[3].SpareLong )
              goto LABEL_125;
            v34 = v30;
          }
          LOBYTE(v61) = 1;
          v19 = v62 == 0;
          v63 = v30 + 72;
          if ( v19 )
            ExpAcquireSharedStarveExclusive(v63, v61);
          else
            ExpFastResourceLegacyAcquireSharedStarveExclusive(v63);
        }
      }
    }
    else
    {
      if ( !a4 )
      {
        if ( !ExAcquireSharedStarveExclusive((PERESOURCE)(v30 + 72), 0) )
        {
          v34 = 0LL;
          P = 0LL;
          v95 = 0;
          v56 = a8;
          goto LABEL_74;
        }
        v26 = v98;
      }
      ++*(_DWORD *)(v30 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v26 + 280));
      v96 = 0;
    }
    v64 = *(_QWORD *)(v30 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v30 + 8));
    v56 = a8;
    *a8 = v64;
    goto LABEL_73;
  }
  if ( (a6 & 8) != 0 )
  {
    v34 = 0LL;
    P = 0LL;
    v95 = 0;
    v56 = a8;
    goto LABEL_74;
  }
  v65 = v21;
  v105 = v21;
  v66 = v23 - v21;
  HIDWORD(v103) = HIDWORD(v66);
  v67 = v21 & 0xFFF;
  v68 = v66 + v67;
  LODWORD(v103) = v66 + v67;
  v69 = v67 + v101;
  v101 += v67;
  v70 = v66 + v67;
  v71 = v66 + v67;
  v72 = v66 + v67;
  v73 = v21;
  LODWORD(v102) = v21;
  if ( !a4 )
  {
    if ( (*(_DWORD *)(v98 + 152) & 4) == 0 )
      goto LABEL_114;
    LODWORD(v102) = v21;
  }
  v74 = v21;
  v75 = v66 + v67;
  v68 = v70;
  v70 = v71;
  v71 = v72;
  v65 = v21;
  if ( a5 )
  {
LABEL_114:
    v76 = 2;
    v100 = 2;
    v75 = v68;
    v74 = v65;
    if ( !v67 )
    {
      v75 = v70;
      v74 = v73;
      if ( a3 >= 0x1000 )
      {
        v76 = 3;
        v100 = 3;
        v75 = v71;
        v74 = v102;
      }
    }
    if ( (v75 & 0xFFF) == 0 )
    {
      v76 |= 4u;
      v100 = v76;
    }
    goto LABEL_94;
  }
  v76 = v100;
LABEL_94:
  v57 = (struct _FAST_MUTEX *)v98;
  if ( (*(_DWORD *)(v98 + 152) & 0x200) == 0 )
    a4 = 1;
  v77 = (v75 + 4095) & 0xFFFFF000;
  LODWORD(v103) = v77;
  *a8 -= v74 & 0xFFF;
  LODWORD(v105) = v105 & 0xFFFFF000;
  if ( v77 > v69 )
  {
    v77 = v69;
    LODWORD(v103) = v69;
  }
  v78 = CcAllocateInitializeBcb(v98, v30, &v105, &v103);
  v34 = v78;
  P = (_QWORD *)v78;
  if ( (a6 & 1) != 0 )
  {
    if ( !v78 )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v98 + 280));
      RtlRaiseStatus(-1073741670);
    }
    if ( !a4 )
    {
      v79 = (struct _ERESOURCE *)(v78 + 72);
      if ( (a6 & 2) != 0 )
      {
        if ( !ExAcquireResourceExclusiveLite(v79, 0) )
          KeBugCheckEx(0x34u, 0x201DBuLL, v34, 0LL, 0LL);
      }
      else if ( !ExAcquireSharedStarveExclusive(v79, 0) )
      {
        KeBugCheckEx(0x34u, 0x201E2uLL, v34, 0LL, 0LL);
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v98 + 280));
    v96 = 0;
    if ( (a6 & 4) == 0 )
    {
      LOBYTE(v80) = 1;
      CcMapAndRead(v77, v76, v80, *a8);
      ExAcquireFastMutex((PFAST_MUTEX)(v98 + 280));
      if ( !*(_QWORD *)(v34 + 184) )
      {
        *(_QWORD *)(v34 + 184) = *a8;
        *(_QWORD *)(v34 + 56) = v99;
        v99 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v98 + 280));
      *a8 = *(_QWORD *)(v34 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v34 + 8));
    }
    v95 = 1;
    v56 = a8;
  }
  else if ( v78 )
  {
    if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v78 + 72), 0) )
      KeBugCheckEx(0x34u, 0x20242uLL, v34, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v98 + 280));
    v96 = 0;
    if ( (unsigned __int8)CcMapAndRead(v77, v76, 0LL, *a8) )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(v98 + 280));
      if ( !*(_QWORD *)(v34 + 184) )
      {
        *(_QWORD *)(v34 + 184) = *a8;
        *(_QWORD *)(v34 + 56) = v99;
        v99 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v98 + 280));
      v56 = a8;
      *a8 = *(_QWORD *)(v34 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v34 + 8));
      v95 = 1;
    }
    else
    {
      v95 = 0;
      v56 = a8;
    }
  }
  else
  {
    v95 = 0;
    v56 = a8;
  }
LABEL_75:
  if ( (a6 & 6) == 6 && v34 && *(_QWORD *)(v34 + 184) )
  {
    v89 = *(_QWORD *)(*(_QWORD *)(v34 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v34 + 56) + 16LL)) )
    {
      v90 = *(struct _KEVENT **)(v89 + 184);
      if ( v90 )
        KeSetEvent(v90, 0, 0);
    }
    *(_QWORD *)(v34 + 184) = 0LL;
    *(_QWORD *)(v34 + 56) = 0LL;
    v34 = (ULONG_PTR)P;
  }
  if ( v96 )
    KeReleaseGuardedMutex(v57 + 5);
  if ( v99 )
  {
    v92 = *(_QWORD *)(v99 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v99 + 16)) )
    {
      v93 = *(struct _KEVENT **)(v92 + 184);
      if ( v93 )
        KeSetEvent(v93, 0, 0);
    }
    v34 = (ULONG_PTR)P;
  }
  if ( (a6 & 4) != 0 )
    CcDereferenceFileOffset(v57, *a2);
  if ( v95 )
  {
    *a7 = v34;
    *a9 = *(_QWORD *)(v34 + 32);
  }
  else
  {
    *v56 = 0LL;
    if ( v34 )
      CcUnpinFileDataEx((char *)v34, a4, 0);
  }
  return v95;
}
