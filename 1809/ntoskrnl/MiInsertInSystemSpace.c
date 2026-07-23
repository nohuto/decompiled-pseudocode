/*
 * XREFs of MiInsertInSystemSpace @ 0x1400273C0
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1405E03F4 (MiMapViewInSystemSpace.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiReferenceDataSubsections @ 0x140026658 (MiReferenceDataSubsections.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x140079E58 (MiControlAreaRequiresCharge.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiManageSubsectionView @ 0x1400ADBC0 (MiManageSubsectionView.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiMapWithLargePages @ 0x1401835A0 (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x140183864 (MiGetPageTablesForLargeMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiDereferenceDataSubsections @ 0x1402C4BE8 (MiDereferenceDataSubsections.c)
 *     MiUnmapLargePages @ 0x1402C5D94 (MiUnmapLargePages.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiAddMappedPtes @ 0x1405E0500 (MiAddMappedPtes.c)
 *     MiReferenceFileObjectForMap @ 0x1405F5598 (MiReferenceFileObjectForMap.c)
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406CA368 (MiCreatePerSessionProtos.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  int v7; // edi
  unsigned int v8; // r12d
  char *v10; // r15
  __int64 v11; // r14
  unsigned __int64 v12; // rsi
  unsigned int v13; // r13d
  __int64 v14; // r8
  void *v15; // r9
  int v16; // r10d
  __int64 v17; // r11
  __int64 v18; // rcx
  unsigned int v19; // ebx
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // ebx
  char v23; // bp
  __int64 v24; // rax
  char *PoolWithTag; // rax
  int v26; // eax
  _DWORD *v27; // r11
  int v28; // ebx
  int v29; // eax
  unsigned __int64 v30; // r12
  int v31; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v33; // ebx
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 SharedVm; // rbx
  KIRQL v37; // al
  unsigned __int64 v38; // r8
  KIRQL v39; // bp
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  ULONG_PTR v42; // r12
  struct _KTHREAD *v43; // rbp
  ULONG_PTR v44; // r9
  BOOL v45; // r13d
  __int64 v46; // rdx
  bool v47; // zf
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  _KLOCK_ENTRY *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  _KPROCESS *Process; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // r11
  __int64 v57; // rdx
  __int64 *v58; // r8
  __int64 v60; // rax
  unsigned __int64 PageTablesForLargeMap; // rax
  int active; // eax
  volatile LONG *v63; // rbp
  KIRQL v64; // al
  unsigned __int64 v65; // r8
  _QWORD *v66; // rdx
  KIRQL v67; // r12
  _QWORD *v68; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v70; // r12
  int v71; // r15d
  __int64 v72; // rdx
  __int64 v73; // rbp
  __int64 v74; // rsi
  __int64 v75; // r13
  int v76; // edi
  __int64 v77; // r8
  unsigned __int64 v78; // rax
  int v79; // r9d
  ULONG_PTR v80; // rdx
  int v81; // [rsp+40h] [rbp-158h]
  __int64 v82; // [rsp+48h] [rbp-150h]
  unsigned int v83; // [rsp+50h] [rbp-148h] BYREF
  __int64 v84; // [rsp+58h] [rbp-140h]
  __int64 v85; // [rsp+60h] [rbp-138h]
  void *v86; // [rsp+68h] [rbp-130h]
  unsigned __int64 v87; // [rsp+70h] [rbp-128h]
  int v88; // [rsp+78h] [rbp-120h] BYREF
  unsigned __int64 v89; // [rsp+80h] [rbp-118h]
  int v90; // [rsp+88h] [rbp-110h]
  int SessionId; // [rsp+8Ch] [rbp-10Ch]
  __int64 v92; // [rsp+90h] [rbp-108h]
  int v93; // [rsp+98h] [rbp-100h]
  __int64 AnyMultiplexedVm; // [rsp+A0h] [rbp-F8h]
  __int64 v95; // [rsp+A8h] [rbp-F0h]
  __int64 v96; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v97[27]; // [rsp+C0h] [rbp-D8h] BYREF
  char v99; // [rsp+1A8h] [rbp+10h]
  struct _KTHREAD *v100; // [rsp+1A8h] [rbp+10h]

  v7 = 0;
  v86 = &unk_14043BC78;
  v87 = 0LL;
  v8 = 3;
  v85 = 0LL;
  *a7 = 0LL;
  v81 = 0x7FFFF;
  v99 = 0;
  v10 = 0LL;
  v89 = 0LL;
  v84 = 0LL;
  v11 = 0LL;
  v83 = 3;
  v12 = 0LL;
  v13 = 3;
  v82 = MiSectionControlArea(a3, a2, 0LL);
  v18 = v82;
  v19 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v19 >= 0x10000 )
  {
    v22 = -1073741793;
    v23 = 0;
LABEL_98:
    ++*(_DWORD *)(a1 + 28);
    if ( v11 )
    {
      if ( v13 >= 3 )
        MiReleasePtes(v15, v11, (unsigned int)v89);
      else
        MiUnmapLargePages(v87, v89 << 12, 9LL);
      v18 = v82;
      v17 = v84;
      v16 = v81;
      v14 = v85;
    }
    if ( v23 == 1 )
    {
      LOBYTE(v7) = v13 < 3;
      MiDereferenceDataSubsections(v18, (_DWORD)a4, v12, v7, v8 != 2);
      v14 = v85;
      v16 = v81;
      v17 = v84;
      v18 = v82;
    }
    if ( v16 != 0x7FFFF )
    {
      MiDereferencePerSessionProtos(v18);
      v14 = v85;
      v17 = v84;
    }
    if ( v14 )
      MiReturnCommit(v17, v14);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    return v22;
  }
  v92 = MiOffsetToProtos(v82, *a4, &v96);
  if ( !v92 )
  {
    v22 = -1073741801;
    v15 = &unk_14043BC78;
    v14 = 0LL;
    v23 = 0;
    v17 = 0LL;
LABEL_96:
    v16 = v81;
    goto LABEL_97;
  }
  if ( (_UNKNOWN *)a1 == &unk_14043A000 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v20 = 640;
    v95 = 0LL;
    SessionId = -1;
    v8 = ((a6 & 8) != 0) + 3;
    if ( (a6 & 8) == 0 )
      v20 = 128;
    v90 = v20;
  }
  else
  {
    v90 = 256;
    AnyMultiplexedVm = MiGetSessionVm(1LL);
    v8 = 2;
    v95 = AnyMultiplexedVm - 3008;
    v86 = (void *)(AnyMultiplexedVm - 3008 + 8136);
    v13 = v83;
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  }
  LOBYTE(v12) = (a2 & 0xFFF) != 0;
  v89 = 16 * v19;
  v12 += a2 >> 12;
  v84 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  if ( (*(_DWORD *)(v82 + 56) & 0x420) != 0 )
  {
    v23 = 0;
LABEL_10:
    v24 = MiReservePtes(v86, (unsigned int)v89);
    v11 = v24;
    if ( v24 )
    {
      v87 = v24 << 25 >> 16;
      goto LABEL_12;
    }
    v22 = -1073741670;
    v14 = 0LL;
LABEL_95:
    v15 = v86;
    v17 = v84;
    goto LABEL_96;
  }
  v21 = MiReferenceDataSubsections(v82, a4, v12, v8 != 2, &v83);
  v13 = v83;
  v22 = v21;
  if ( v21 < 0 )
  {
    v14 = 0LL;
    v23 = 0;
    goto LABEL_95;
  }
  v23 = 1;
  v99 = 1;
  if ( v83 >= 3 )
    goto LABEL_10;
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v89, 9LL, v83);
  v87 = PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
  {
    v22 = -1073741670;
    v14 = 0LL;
    goto LABEL_95;
  }
  v11 = ((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_12:
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x7756694Du);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v22 = -1073741670;
    v14 = 0LL;
    goto LABEL_95;
  }
  memset(PoolWithTag, 0, 0x68uLL);
  *((_DWORD *)v10 + 14) ^= (*((_DWORD *)v10 + 14) ^ (8 * v13)) & 0x18;
  v26 = MiControlAreaRequiresCharge(v82, v8);
  v28 = v26;
  if ( !v26 )
  {
    v22 = -1073740277;
    v14 = 0LL;
    goto LABEL_95;
  }
  if ( v26 == 2 )
    *((_DWORD *)v10 + 14) |= 4u;
  if ( (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
    *((_DWORD *)v10 + 14) |= 1u;
  if ( (a5 & 1) != 0 )
    *((_DWORD *)v10 + 14) |= 2u;
  v29 = v27[14];
  if ( (v29 & 0x20) == 0 )
    goto LABEL_21;
  if ( (v29 & 0x4000000) != 0 )
  {
    v81 = -1;
    if ( (int)MiCreatePerSessionProtos(v27, 0xFFFFFFFFLL) < 0 )
    {
      v23 = v99;
      v16 = 0x7FFFF;
      v15 = v86;
      v22 = -1073741801;
      v17 = v84;
      v14 = 0LL;
      v81 = 0x7FFFF;
LABEL_97:
      v18 = v82;
      goto LABEL_98;
    }
    v27 = (_DWORD *)v82;
  }
  v60 = *(_QWORD *)(*(_QWORD *)v27 + 48LL);
  v85 = v60;
  if ( v60 )
  {
    if ( !(unsigned int)MiChargeCommit(v84, v60, 0LL) )
    {
      v14 = 0LL;
      v85 = 0LL;
      v22 = -1073741523;
LABEL_94:
      v23 = v99;
      goto LABEL_95;
    }
    v27 = (_DWORD *)v82;
  }
  if ( v28 == 2 )
  {
    v92 = (__int64)(v27 + 32);
    active = MiReferenceActiveSubsection((ULONG_PTR)(v27 + 32));
    v22 = active;
    if ( active < 0 )
    {
      v14 = v85;
      goto LABEL_94;
    }
  }
LABEL_21:
  v30 = v87;
  *((_QWORD *)v10 + 4) = v12 << 12;
  *((_QWORD *)v10 + 6) = v92;
  *((_QWORD *)v10 + 3) = (unsigned __int64)*a4 >> 12;
  *((_QWORD *)v10 + 5) = v85;
  *((_QWORD *)v10 + 11) = v30 | 2;
  *((_DWORD *)v10 + 25) = v81;
  if ( (_UNKNOWN *)a1 == &unk_14043A000 )
    v31 = -1;
  else
    v31 = *(_DWORD *)(v95 + 8);
  *((_DWORD *)v10 + 24) = v31;
  *((_QWORD *)v10 + 8) = MiReferenceFileObjectForMap(a3);
  CurrentThread = KeGetCurrentThread();
  v33 = v83;
  v100 = CurrentThread;
  if ( v83 || (*(_DWORD *)(v82 + 56) & 0x400) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
    v34 = AnyMultiplexedVm;
    SharedVm = MiGetSharedVm(AnyMultiplexedVm, v35);
    v37 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    LOBYTE(v38) = 0;
    v39 = v37;
    ++*(_DWORD *)(a1 + 24);
    v40 = *(_QWORD **)(a1 + 16);
    if ( v40 )
    {
      while ( 1 )
      {
        v38 = v40[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v30 >= v38 + v40[4] || v30 >= v38 )
        {
          v41 = (_QWORD *)v40[1];
          if ( !v41 )
          {
            LOBYTE(v38) = 1;
            break;
          }
        }
        else
        {
          v41 = (_QWORD *)*v40;
          if ( !*v40 )
          {
            LOBYTE(v38) = 0;
            break;
          }
        }
        v40 = v41;
      }
    }
    RtlAvlInsertNodeEx(a1 + 16, v40, v38, v10);
    MiUnlockWorkingSetExclusive(v34, v39);
    if ( (*(_DWORD *)(v82 + 56) & 0x400) == 0 )
    {
      v97[0] = v82;
      MiManageSubsectionView(v97, v10 + 72, 3LL);
    }
    v42 = *(_QWORD *)(a1 + 8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v42, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v42);
    v88 = 0;
    v43 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v42) == 1 )
      v44 = (unsigned int)MmGetSessionIdEx(v43->ApcState.Process);
    else
      v44 = 0xFFFFFFFFLL;
    --v43->SpecialApcDisable;
    v45 = ++v43->AbAllocationRegionCount == 1;
    LODWORD(v46) = ((char)v43->AbEntrySummary | (char)v43->AbOrphanedEntrySummary) ^ 0x3F;
    v47 = !_BitScanReverse((unsigned int *)&v48, v46);
    v93 = v48;
    if ( v47 )
      goto LABEL_77;
    while ( 1 )
    {
      v49 = 1 << v48;
      v50 = v48;
      v51 = &v43->LockEntries[v50];
      v46 = ~v49 & (unsigned int)v46;
      if ( (v51->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v51->LockState.0 & 1) == 0
        && (*(_QWORD *)&v51->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v42 & 0x7FFFFFFFFFFFFFFCLL)
        && v51->LockState.SessionId == (_DWORD)v44 )
      {
        v51->AcquiredByte &= ~1u;
        if ( v51->LockState.0 )
          break;
      }
      v47 = !_BitScanReverse((unsigned int *)&v48, v46);
      v93 = v48;
      if ( v47 )
        goto LABEL_77;
    }
    if ( !v51 )
    {
LABEL_77:
      if ( (*((_DWORD *)&v43->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v43, v42, v44, 0LL);
    }
    else
    {
      v51->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v51->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v43->LockEntries[v50].TreeNode, v46);
      v88 = 0;
      v88 = v51->BoostBitmap.AllFields & 0x1FFFF;
      v51->BoostBitmap.AllFields &= 0xFFFE0000;
      v51->ThreadLocalFlags &= ~1u;
      v51->LockState.0 = 0LL;
      v52 = ((char *)v51 - (char *)v43 - 800) / 96;
      if ( v45 )
        v43->AbEntrySummary |= 1 << v52;
      else
        _InterlockedOr8((volatile signed __int8 *)&v43->AbOrphanedEntrySummary, 1 << v52);
    }
    --v43->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v43, v42, &v88);
    v47 = v43->SpecialApcDisable++ == -1;
    if ( v47 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v43->ApcState.ApcListHead[0].Flink != &v43->152 )
      KiCheckForKernelApcDelivery(v53);
    KiLeaveGuardedRegionUnsafe(v100);
    v33 = v83;
  }
  else
  {
    v63 = (volatile LONG *)((char *)&unk_14043A050 + 16 * (unsigned __int8)(v30 >> 30));
    v64 = ExAcquireSpinLockExclusive(v63 + 3);
    ++*((_DWORD *)v63 + 2);
    LOBYTE(v65) = 0;
    v66 = *(_QWORD **)v63;
    v67 = v64;
    if ( *(_QWORD *)v63 )
    {
      while ( 1 )
      {
        v65 = v66[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v87 >= v65 + v66[4] || v87 >= v65 )
        {
          v68 = (_QWORD *)v66[1];
          if ( !v68 )
          {
            LOBYTE(v65) = 1;
            break;
          }
        }
        else
        {
          v68 = (_QWORD *)*v66;
          if ( !*v66 )
          {
            LOBYTE(v65) = 0;
            break;
          }
        }
        v66 = v68;
      }
    }
    RtlAvlInsertNodeEx(v63, v66, v65, v10);
    ExReleaseSpinLockExclusiveFromDpcLevel(v63 + 3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v67 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v33 = v83;
    }
    __writecr8(v67);
  }
  Process = (_KPROCESS *)v82;
  if ( (*((_DWORD *)v10 + 14) & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v82 + 92));
    v33 = v83;
  }
  if ( v33 < 3 )
  {
    v70 = 0LL;
    v71 = v87;
    v72 = *(_QWORD *)(v92 + 8);
    v73 = MiLargePageSizes[v33];
    v74 = v72 + 8 * v96;
    v75 = v72 + 8LL * *(unsigned int *)(v92 + 44);
    if ( v89 )
    {
      v76 = MiGetAnyMultiplexedVm(3LL);
      do
      {
        if ( v74 == v75 )
        {
          v92 = *(_QWORD *)(v77 + 16);
          v74 = *(_QWORD *)(v92 + 8);
          v75 = v74 + 8LL * *(unsigned int *)(v92 + 44);
        }
        v78 = MI_READ_PTE_LOCK_FREE(v74);
        MiMapWithLargePages(v76, v71, v79 & (v78 >> 12), v73, v33, 4, 1);
        v77 = v92;
        v74 += 8 * v73;
        v71 += (_DWORD)v73 << 12;
        v70 += v73;
      }
      while ( v70 < v89 );
      v7 = 0;
    }
    goto LABEL_64;
  }
  if ( !v12 )
    goto LABEL_63;
  v55 = 0LL;
  v56 = 0xFFFFF6FB7DBED000uLL;
  do
  {
    v57 = ZeroPte;
    v58 = (__int64 *)(v11 + 8 * v55);
    if ( (unsigned __int64)v58 < v56 || (unsigned __int64)v58 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_60;
    if ( !(unsigned int)MiPteHasShadow(Process, ZeroPte) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (v57 & 1) != 0 )
        v57 |= 0x8000000000000000uLL;
LABEL_60:
      *v58 = v57;
      goto LABEL_61;
    }
    if ( !HIBYTE(word_14043B26C) && (v57 & 1) != 0 )
      v57 |= 0x8000000000000000uLL;
    *v58 = v57;
    MiWritePteShadow(v58);
LABEL_61:
    v55 = (unsigned int)++v7;
  }
  while ( (unsigned int)v7 < v12 );
  LODWORD(Process) = v82;
LABEL_63:
  v7 = MiAddMappedPtes(v11, v12, (_DWORD)Process, (_DWORD)a4, SessionId);
  if ( v7 < 0 )
  {
    v80 = v87;
    ++*(_DWORD *)(a1 + 28);
    MiRemoveFromSystemSpace((_QWORD *)a1, v80, 0);
  }
  else
  {
LABEL_64:
    *a7 = v87;
  }
  return (unsigned int)v7;
}
