/*
 * XREFs of MiInsertInSystemSpace @ 0x1400A82A0
 * Callers:
 *     MiMapViewInSystemSpace @ 0x14066E434 (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiControlAreaRequiresCharge @ 0x140071220 (MiControlAreaRequiresCharge.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140072320 (MiReferenceActiveSubsection.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiManageSubsectionView @ 0x140074E60 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiReferenceDataSubsections @ 0x1400A8B68 (MiReferenceDataSubsections.c)
 *     MiRemoveFromSystemSpace @ 0x1400A8C3C (MiRemoveFromSystemSpace.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiOffsetToProtos @ 0x1400D5DB0 (MiOffsetToProtos.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiUnmapLargePages @ 0x140171360 (MiUnmapLargePages.c)
 *     MiMapWithLargePages @ 0x14018CB60 (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x14018CE14 (MiGetPageTablesForLargeMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiDereferenceDataSubsections @ 0x1402DE92C (MiDereferenceDataSubsections.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReferenceFileObjectForMap @ 0x1405EAD74 (MiReferenceFileObjectForMap.c)
 *     MiAddMappedPtes @ 0x14066E540 (MiAddMappedPtes.c)
 *     MiDereferencePerSessionProtos @ 0x1406E88BC (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E89D4 (MiCreatePerSessionProtos.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  int v9; // ebx
  unsigned int v10; // r12d
  _QWORD *v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned int v14; // r13d
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // r10
  unsigned int v18; // r11d
  unsigned __int64 v19; // rcx
  unsigned int v20; // edi
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // edi
  char v24; // bp
  ULONG_PTR v25; // rax
  _QWORD *PoolWithTag; // rax
  int v27; // eax
  unsigned __int64 v28; // r11
  int v29; // edi
  int v30; // eax
  unsigned __int64 v31; // r12
  int v32; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v34; // edi
  __int64 v35; // r13
  LONG *SharedVm; // rdi
  KIRQL v37; // al
  bool v38; // r8
  KIRQL v39; // bp
  _QWORD *v40; // r10
  unsigned __int64 v41; // rdx
  _QWORD *v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // r12
  struct _KTHREAD *v46; // rbp
  ULONG_PTR v47; // r9
  unsigned __int8 v48; // r13
  unsigned int v49; // edx
  bool v50; // zf
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _KLOCK_ENTRY *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // r10d
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // r8
  unsigned __int64 v63; // rax
  unsigned __int64 PageTablesForLargeMap; // rax
  int active; // eax
  volatile LONG *v66; // rbp
  KIRQL v67; // al
  bool v68; // r8
  _QWORD *v69; // rdx
  KIRQL v70; // r12
  unsigned __int64 v71; // r8
  _QWORD *v72; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v74; // r12
  int v75; // r15d
  __int64 v76; // rdx
  __int64 v77; // rbp
  __int64 v78; // rsi
  __int64 v79; // r13
  unsigned int v80; // ebx
  __int64 v81; // r8
  unsigned __int64 v82; // rax
  int v83; // r9d
  __int64 v84; // r11
  unsigned __int64 v85; // rdx
  int v86; // [rsp+40h] [rbp-158h]
  unsigned __int64 v87; // [rsp+48h] [rbp-150h]
  unsigned int v88; // [rsp+50h] [rbp-148h] BYREF
  __int64 v89; // [rsp+58h] [rbp-140h]
  unsigned __int64 v90; // [rsp+60h] [rbp-138h]
  void *v91; // [rsp+68h] [rbp-130h]
  unsigned __int64 v92; // [rsp+70h] [rbp-128h]
  unsigned __int64 v93; // [rsp+78h] [rbp-120h]
  int v94; // [rsp+80h] [rbp-118h]
  int v95; // [rsp+84h] [rbp-114h] BYREF
  int SessionId; // [rsp+88h] [rbp-110h]
  __int64 v97; // [rsp+90h] [rbp-108h]
  int v98; // [rsp+98h] [rbp-100h]
  __int64 AnyMultiplexedVm; // [rsp+A0h] [rbp-F8h]
  __int64 v100; // [rsp+A8h] [rbp-F0h]
  __int64 v101; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v102[27]; // [rsp+C0h] [rbp-D8h] BYREF
  char v104; // [rsp+1A8h] [rbp+10h]
  __int64 v105; // [rsp+1A8h] [rbp+10h]

  memset(v102, 0, 0x90uLL);
  v9 = 0;
  v91 = &unk_140466638;
  v10 = 3;
  v92 = 0LL;
  v90 = 0LL;
  *a7 = 0LL;
  v11 = 0LL;
  v86 = 0x7FFFF;
  v104 = 0;
  v12 = 0LL;
  v93 = 0LL;
  v13 = 0LL;
  v89 = 0LL;
  v88 = 3;
  v14 = 3;
  v87 = MiSectionControlArea(a3);
  v19 = v87;
  v20 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v20 >= 0x10000 )
  {
    v23 = -1073741793;
    v24 = 0;
LABEL_97:
    ++*(_DWORD *)(a1 + 28);
    if ( v12 )
    {
      if ( v14 >= 3 )
        MiReleasePtes((__int64)v17, v12, v93);
      else
        MiUnmapLargePages(v92, v93 << 12, 9LL);
      v19 = v87;
      v18 = v86;
      v16 = v89;
      v15 = v90;
    }
    if ( v24 == 1 )
    {
      LOBYTE(v9) = v14 < 3;
      MiDereferenceDataSubsections(v19, (_DWORD)a4, v13, v9, v10 != 2);
      v15 = v90;
      v16 = v89;
      v18 = v86;
      v19 = v87;
    }
    if ( v18 != 0x7FFFF )
    {
      MiDereferencePerSessionProtos(v19, v18);
      v15 = v90;
      v16 = v89;
    }
    if ( v15 )
      MiReturnCommit(v16, v15);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    return v23;
  }
  v97 = MiOffsetToProtos(v87, *a4, &v101);
  if ( !v97 )
  {
    v23 = -1073741801;
    v17 = &unk_140466638;
    v15 = 0LL;
    v24 = 0;
    v16 = 0LL;
LABEL_95:
    v18 = v86;
    goto LABEL_96;
  }
  if ( (_UNKNOWN *)a1 == &unk_140464960 )
  {
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
    v21 = 640;
    v100 = 0LL;
    SessionId = -1;
    v10 = ((a6 & 8) != 0) + 3;
    if ( (a6 & 8) == 0 )
      v21 = 128;
    v94 = v21;
  }
  else
  {
    v94 = 256;
    AnyMultiplexedVm = MiGetSessionVm();
    v10 = 2;
    v100 = AnyMultiplexedVm - 256;
    v91 = (void *)(AnyMultiplexedVm - 256 + 1160);
    v14 = v88;
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  LOBYTE(v13) = (a2 & 0xFFF) != 0;
  v93 = 16 * v20;
  v13 += a2 >> 12;
  v89 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  if ( (*(_DWORD *)(v87 + 56) & 0x420) != 0 )
  {
    v24 = 0;
LABEL_10:
    v25 = MiReservePtes((__int64)v91, (unsigned __int64 *)(unsigned int)v93);
    v12 = v25;
    if ( v25 )
    {
      v92 = (__int64)(v25 << 25) >> 16;
      goto LABEL_12;
    }
    v23 = -1073741670;
    v15 = 0LL;
LABEL_94:
    v16 = v89;
    v17 = v91;
    goto LABEL_95;
  }
  v22 = MiReferenceDataSubsections(v87, (_DWORD)a4, v13, v10 != 2, (__int64)&v88);
  v14 = v88;
  v23 = v22;
  if ( v22 < 0 )
  {
    v15 = 0LL;
    v24 = 0;
    goto LABEL_94;
  }
  v24 = 1;
  v104 = 1;
  if ( v88 >= 3 )
    goto LABEL_10;
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v93, 9LL, v88, 0LL);
  v92 = PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
  {
    v23 = -1073741670;
    v15 = 0LL;
    goto LABEL_94;
  }
  v12 = ((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_12:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x7756694Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v23 = -1073741670;
    v15 = 0LL;
    goto LABEL_94;
  }
  memset(PoolWithTag, 0, 0x68uLL);
  *((_DWORD *)v11 + 14) ^= (*((_DWORD *)v11 + 14) ^ (8 * v14)) & 0x18;
  v27 = MiControlAreaRequiresCharge(v87, v10);
  v29 = v27;
  if ( !v27 )
  {
    v23 = -1073740277;
    v15 = 0LL;
    goto LABEL_94;
  }
  if ( v27 == 2 )
    *((_DWORD *)v11 + 14) |= 4u;
  if ( (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
    *((_DWORD *)v11 + 14) |= 1u;
  if ( (a5 & 1) != 0 )
    *((_DWORD *)v11 + 14) |= 2u;
  v30 = *(_DWORD *)(v28 + 56);
  if ( (v30 & 0x20) == 0 )
    goto LABEL_21;
  if ( (v30 & 0x4000000) != 0 )
  {
    v86 = -1;
    if ( (int)MiCreatePerSessionProtos(v28, 0xFFFFFFFFLL) < 0 )
    {
      v24 = v104;
      v18 = 0x7FFFF;
      v16 = v89;
      v23 = -1073741801;
      v17 = v91;
      v15 = 0LL;
      v86 = 0x7FFFF;
LABEL_96:
      v19 = v87;
      goto LABEL_97;
    }
    v28 = v87;
  }
  v63 = *(_QWORD *)(*(_QWORD *)v28 + 48LL);
  v90 = v63;
  if ( v63 )
  {
    if ( !(unsigned int)MiChargeCommit(v89, v63, 0) )
    {
      v15 = 0LL;
      v90 = 0LL;
      v23 = -1073741523;
LABEL_93:
      v24 = v104;
      goto LABEL_94;
    }
    v28 = v87;
  }
  if ( v29 == 2 )
  {
    v97 = v28 + 128;
    active = MiReferenceActiveSubsection((__int64 *)(v28 + 128), v94 | 8u, 0x11u);
    v23 = active;
    if ( active < 0 )
    {
      v15 = v90;
      goto LABEL_93;
    }
  }
LABEL_21:
  v31 = v92;
  v11[4] = v13 << 12;
  v11[6] = v97;
  v11[3] = *a4 >> 12;
  v11[5] = v90;
  v11[11] = v31 | 2;
  *((_DWORD *)v11 + 25) = v86;
  if ( (_UNKNOWN *)a1 == &unk_140464960 )
    v32 = -1;
  else
    v32 = *(_DWORD *)(v100 + 8);
  *((_DWORD *)v11 + 24) = v32;
  v11[8] = MiReferenceFileObjectForMap(a3);
  CurrentThread = KeGetCurrentThread();
  v34 = v88;
  v105 = (__int64)CurrentThread;
  if ( v88 || (*(_DWORD *)(v87 + 56) & 0x400) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
    v35 = AnyMultiplexedVm;
    SharedVm = MiGetSharedVm(AnyMultiplexedVm);
    v37 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v38 = 0;
    v39 = v37;
    ++*(_DWORD *)(a1 + 24);
    v40 = *(_QWORD **)(a1 + 16);
    if ( v40 )
    {
      while ( 1 )
      {
        v41 = v40[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v31 < v41 + v40[4] && v31 < v41 )
        {
          v42 = (_QWORD *)*v40;
          if ( !*v40 )
          {
            v38 = 0;
            break;
          }
        }
        else
        {
          v42 = (_QWORD *)v40[1];
          if ( !v42 )
          {
            v38 = 1;
            break;
          }
        }
        v40 = v42;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 16), (unsigned __int64)v40, v38, v11);
    MiUnlockWorkingSetExclusive(v35, v39, v43, v44);
    if ( (*(_DWORD *)(v87 + 56) & 0x400) == 0 )
    {
      v102[0] = v87;
      MiManageSubsectionView(v102, v11 + 9, 3);
    }
    v45 = *(_QWORD *)(a1 + 8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v45, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v45);
    v95 = 0;
    v46 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v45) == 1 )
      v47 = (unsigned int)MmGetSessionIdEx((__int64)v46->ApcState.Process);
    else
      v47 = 0xFFFFFFFFLL;
    --v46->SpecialApcDisable;
    v48 = ++v46->AbAllocationRegionCount;
    v49 = ((char)v46->AbEntrySummary | (char)v46->AbOrphanedEntrySummary) ^ 0x3F;
    v50 = !_BitScanReverse((unsigned int *)&v51, v49);
    v98 = v51;
    if ( v50 )
      goto LABEL_76;
    while ( 1 )
    {
      v52 = 1 << v51;
      v53 = v51;
      v54 = &v46->LockEntries[v53];
      v49 &= ~v52;
      if ( (v54->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v54->LockState.0 & 1) == 0
        && (*(_QWORD *)&v54->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v45 & 0x7FFFFFFFFFFFFFFCLL)
        && v54->LockState.SessionId == (_DWORD)v47 )
      {
        v54->AcquiredByte &= ~1u;
        if ( v54->LockState.0 )
          break;
      }
      v50 = !_BitScanReverse((unsigned int *)&v51, v49);
      v98 = v51;
      if ( v50 )
        goto LABEL_76;
    }
    if ( !v54 )
    {
LABEL_76:
      if ( (*((_DWORD *)&v46->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v46, v45, v47, 0LL);
    }
    else
    {
      v54->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v54->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v46->LockEntries[v53].TreeNode);
      v95 = v54->BoostBitmap.AllFields & 0x1FFFF;
      v54->BoostBitmap.AllFields &= 0xFFFE0000;
      v54->ThreadLocalFlags &= ~1u;
      v54->LockState.0 = 0LL;
      v55 = ((char *)v54 - (char *)v46 - 800) / 96;
      if ( v48 == 1 )
        v46->AbEntrySummary |= 1 << v55;
      else
        _InterlockedOr8((volatile signed __int8 *)&v46->AbOrphanedEntrySummary, 1 << v55);
    }
    --v46->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v46, v45, &v95);
    v50 = v46->SpecialApcDisable++ == -1;
    if ( v50 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
      KiCheckForKernelApcDelivery(v56);
    KiLeaveGuardedRegionUnsafe(v105);
    v34 = v88;
  }
  else
  {
    v66 = (volatile LONG *)((char *)&unk_1404649A8 + 16 * (unsigned __int8)(v31 >> 30));
    v67 = ExAcquireSpinLockExclusive(v66 + 3);
    ++*((_DWORD *)v66 + 2);
    v68 = 0;
    v69 = *(_QWORD **)v66;
    v70 = v67;
    if ( *(_QWORD *)v66 )
    {
      while ( 1 )
      {
        v71 = v69[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v92 >= v71 + v69[4] || v92 >= v71 )
        {
          v72 = (_QWORD *)v69[1];
          if ( !v72 )
          {
            v68 = 1;
            break;
          }
        }
        else
        {
          v72 = (_QWORD *)*v69;
          if ( !*v69 )
          {
            v68 = 0;
            break;
          }
        }
        v69 = v72;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)v66, (unsigned __int64)v69, v68, v11);
    ExReleaseSpinLockExclusiveFromDpcLevel(v66 + 3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v70 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v34 = v88;
    }
    __writecr8(v70);
  }
  v57 = v87;
  if ( (v11[7] & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v87 + 92));
    v34 = v88;
  }
  if ( v34 < 3 )
  {
    v74 = 0LL;
    v75 = v92;
    v76 = *(_QWORD *)(v97 + 8);
    v77 = MiLargePageSizes[v34];
    v78 = v76 + 8 * v101;
    v79 = v76 + 8LL * *(unsigned int *)(v97 + 44);
    if ( v93 )
    {
      v80 = (unsigned int)MiGetAnyMultiplexedVm(3);
      do
      {
        if ( v78 == v79 )
        {
          v97 = *(_QWORD *)(v81 + 16);
          v78 = *(_QWORD *)(v97 + 8);
          v79 = v78 + 8LL * *(unsigned int *)(v97 + 44);
        }
        v82 = MI_READ_PTE_LOCK_FREE(v78);
        MiMapWithLargePages(v80, v75, v83 & (v82 >> 12), v77, v34, 4, 1);
        v81 = v97;
        v78 += 8 * v77;
        v75 += (_DWORD)v77 << 12;
        v74 += v77;
      }
      while ( v74 < v93 );
      v9 = 0;
    }
    goto LABEL_61;
  }
  if ( !v13 )
    goto LABEL_60;
  v58 = 0LL;
  do
  {
    if ( !MiPteInShadowRange(v12 + 8 * v58) )
      goto LABEL_57;
    if ( !(unsigned int)MiPteHasShadow(v60) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v59 & 1) != 0 )
      {
        v59 |= v84;
      }
LABEL_57:
      *v61 = v59;
      goto LABEL_58;
    }
    if ( !HIBYTE(word_140465BEC) && (v59 & 1) != 0 )
      v59 |= v84;
    *v61 = v59;
    MiWritePteShadow(v61, v59);
LABEL_58:
    v58 = (unsigned int)++v9;
  }
  while ( (unsigned int)v9 < v13 );
  v57 = v87;
LABEL_60:
  v9 = MiAddMappedPtes(v12, v13, v57, (_DWORD)a4, SessionId);
  if ( v9 < 0 )
  {
    v85 = v92;
    ++*(_DWORD *)(a1 + 28);
    MiRemoveFromSystemSpace(a1, v85, 0LL);
  }
  else
  {
LABEL_61:
    *a7 = v92;
  }
  return (unsigned int)v9;
}
