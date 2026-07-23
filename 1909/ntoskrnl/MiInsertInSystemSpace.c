/*
 * XREFs of MiInsertInSystemSpace @ 0x140095820
 * Callers:
 *     MiMapViewInSystemSpace @ 0x140647E94 (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiControlAreaRequiresCharge @ 0x140071490 (MiControlAreaRequiresCharge.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140072590 (MiReferenceActiveSubsection.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiManageSubsectionView @ 0x1400750D0 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MiReferenceDataSubsections @ 0x1400960E8 (MiReferenceDataSubsections.c)
 *     MiRemoveFromSystemSpace @ 0x140097494 (MiRemoveFromSystemSpace.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiOffsetToProtos @ 0x1400B5C30 (MiOffsetToProtos.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnmapLargePages @ 0x140171A50 (MiUnmapLargePages.c)
 *     MiMapWithLargePages @ 0x14018D3E0 (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x14018D694 (MiGetPageTablesForLargeMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiDereferenceDataSubsections @ 0x1402DE68C (MiDereferenceDataSubsections.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReferenceFileObjectForMap @ 0x1405EB544 (MiReferenceFileObjectForMap.c)
 *     MiAddMappedPtes @ 0x140647FA0 (MiAddMappedPtes.c)
 *     MiDereferencePerSessionProtos @ 0x1406E9B08 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E9C20 (MiCreatePerSessionProtos.c)
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
  int v56; // r10d
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // r8
  unsigned __int64 v62; // rax
  unsigned __int64 PageTablesForLargeMap; // rax
  int active; // eax
  volatile LONG *v65; // rbp
  KIRQL v66; // al
  bool v67; // r8
  _QWORD *v68; // rdx
  KIRQL v69; // r12
  unsigned __int64 v70; // r8
  _QWORD *v71; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v73; // r12
  int v74; // r15d
  __int64 v75; // rdx
  __int64 v76; // rbp
  __int64 v77; // rsi
  __int64 v78; // r13
  int v79; // ebx
  __int64 v80; // r8
  unsigned __int64 v81; // rax
  int v82; // r9d
  __int64 v83; // r11
  unsigned __int64 v84; // rdx
  int v85; // [rsp+40h] [rbp-158h]
  unsigned __int64 v86; // [rsp+48h] [rbp-150h]
  unsigned int v87; // [rsp+50h] [rbp-148h] BYREF
  __int64 v88; // [rsp+58h] [rbp-140h]
  unsigned __int64 v89; // [rsp+60h] [rbp-138h]
  void *v90; // [rsp+68h] [rbp-130h]
  unsigned __int64 v91; // [rsp+70h] [rbp-128h]
  unsigned __int64 v92; // [rsp+78h] [rbp-120h]
  int v93; // [rsp+80h] [rbp-118h]
  int v94; // [rsp+84h] [rbp-114h] BYREF
  int SessionId; // [rsp+88h] [rbp-110h]
  __int64 v96; // [rsp+90h] [rbp-108h]
  int v97; // [rsp+98h] [rbp-100h]
  unsigned __int64 AnyMultiplexedVm; // [rsp+A0h] [rbp-F8h]
  unsigned __int64 v99; // [rsp+A8h] [rbp-F0h]
  __int64 v100; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v101[27]; // [rsp+C0h] [rbp-D8h] BYREF
  char v103; // [rsp+1A8h] [rbp+10h]
  __int64 v104; // [rsp+1A8h] [rbp+10h]

  memset(v101, 0, 0x90uLL);
  v9 = 0;
  v90 = &unk_140466338;
  v10 = 3;
  v91 = 0LL;
  v89 = 0LL;
  *a7 = 0LL;
  v11 = 0LL;
  v85 = 0x7FFFF;
  v103 = 0;
  v12 = 0LL;
  v92 = 0LL;
  v13 = 0LL;
  v88 = 0LL;
  v87 = 3;
  v14 = 3;
  v86 = MiSectionControlArea(a3);
  v19 = v86;
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
        MiReleasePtes((__int64)v17, v12, v92);
      else
        MiUnmapLargePages(v91, v92 << 12, 9LL);
      v19 = v86;
      v18 = v85;
      v16 = v88;
      v15 = v89;
    }
    if ( v24 == 1 )
    {
      LOBYTE(v9) = v14 < 3;
      MiDereferenceDataSubsections(v19, (_DWORD)a4, v13, v9, v10 != 2);
      v15 = v89;
      v16 = v88;
      v18 = v85;
      v19 = v86;
    }
    if ( v18 != 0x7FFFF )
    {
      MiDereferencePerSessionProtos(v19, v18);
      v15 = v89;
      v16 = v88;
    }
    if ( v15 )
      MiReturnCommit(v16, v15);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    return v23;
  }
  v96 = MiOffsetToProtos(v86, *a4, &v100);
  if ( !v96 )
  {
    v23 = -1073741801;
    v17 = &unk_140466338;
    v15 = 0LL;
    v24 = 0;
    v16 = 0LL;
LABEL_95:
    v18 = v85;
    goto LABEL_96;
  }
  if ( (_UNKNOWN *)a1 == &unk_140464660 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v21 = 640;
    v99 = 0LL;
    SessionId = -1;
    v10 = ((a6 & 8) != 0) + 3;
    if ( (a6 & 8) == 0 )
      v21 = 128;
    v93 = v21;
  }
  else
  {
    v93 = 256;
    AnyMultiplexedVm = MiGetSessionVm();
    v10 = 2;
    v99 = AnyMultiplexedVm - 256;
    v90 = (void *)(AnyMultiplexedVm - 256 + 1160);
    v14 = v87;
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  LOBYTE(v13) = (a2 & 0xFFF) != 0;
  v92 = 16 * v20;
  v13 += a2 >> 12;
  v88 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  if ( (*(_DWORD *)(v86 + 56) & 0x420) != 0 )
  {
    v24 = 0;
LABEL_10:
    v25 = MiReservePtes((__int64)v90, (unsigned __int64 *)(unsigned int)v92);
    v12 = v25;
    if ( v25 )
    {
      v91 = (__int64)(v25 << 25) >> 16;
      goto LABEL_12;
    }
    v23 = -1073741670;
    v15 = 0LL;
LABEL_94:
    v16 = v88;
    v17 = v90;
    goto LABEL_95;
  }
  v22 = MiReferenceDataSubsections(v86, (_DWORD)a4, v13, v10 != 2, (__int64)&v87);
  v14 = v87;
  v23 = v22;
  if ( v22 < 0 )
  {
    v15 = 0LL;
    v24 = 0;
    goto LABEL_94;
  }
  v24 = 1;
  v103 = 1;
  if ( v87 >= 3 )
    goto LABEL_10;
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v92, 9LL, v87, 0LL);
  v91 = PageTablesForLargeMap;
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
  v27 = MiControlAreaRequiresCharge(v86, v10);
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
    v85 = -1;
    if ( (int)MiCreatePerSessionProtos(v28, 0xFFFFFFFFLL) < 0 )
    {
      v24 = v103;
      v18 = 0x7FFFF;
      v16 = v88;
      v23 = -1073741801;
      v17 = v90;
      v15 = 0LL;
      v85 = 0x7FFFF;
LABEL_96:
      v19 = v86;
      goto LABEL_97;
    }
    v28 = v86;
  }
  v62 = *(_QWORD *)(*(_QWORD *)v28 + 48LL);
  v89 = v62;
  if ( v62 )
  {
    if ( !(unsigned int)MiChargeCommit(v88, v62, 0) )
    {
      v15 = 0LL;
      v89 = 0LL;
      v23 = -1073741523;
LABEL_93:
      v24 = v103;
      goto LABEL_94;
    }
    v28 = v86;
  }
  if ( v29 == 2 )
  {
    v96 = v28 + 128;
    active = MiReferenceActiveSubsection((__int64 *)(v28 + 128), v93 | 8u, 0x11u);
    v23 = active;
    if ( active < 0 )
    {
      v15 = v89;
      goto LABEL_93;
    }
  }
LABEL_21:
  v31 = v91;
  v11[4] = v13 << 12;
  v11[6] = v96;
  v11[3] = *a4 >> 12;
  v11[5] = v89;
  v11[11] = v31 | 2;
  *((_DWORD *)v11 + 25) = v85;
  if ( (_UNKNOWN *)a1 == &unk_140464660 )
    v32 = -1;
  else
    v32 = *(_DWORD *)(v99 + 8);
  *((_DWORD *)v11 + 24) = v32;
  v11[8] = MiReferenceFileObjectForMap(a3);
  CurrentThread = KeGetCurrentThread();
  v34 = v87;
  v104 = (__int64)CurrentThread;
  if ( v87 || (*(_DWORD *)(v86 + 56) & 0x400) != 0 )
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
    if ( (*(_DWORD *)(v86 + 56) & 0x400) == 0 )
    {
      v101[0] = v86;
      MiManageSubsectionView(v101, v11 + 9, 3);
    }
    v45 = *(_QWORD *)(a1 + 8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v45, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v45);
    v94 = 0;
    v46 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v45) == 1 )
      v47 = (unsigned int)MmGetSessionIdEx((__int64)v46->ApcState.Process);
    else
      v47 = 0xFFFFFFFFLL;
    --v46->SpecialApcDisable;
    v48 = ++v46->AbAllocationRegionCount;
    v49 = ((char)v46->AbEntrySummary | (char)v46->AbOrphanedEntrySummary) ^ 0x3F;
    v50 = !_BitScanReverse((unsigned int *)&v51, v49);
    v97 = v51;
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
      v97 = v51;
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
      v94 = v54->BoostBitmap.AllFields & 0x1FFFF;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v46, v45, &v94);
    v50 = v46->SpecialApcDisable++ == -1;
    if ( v50 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(v104);
    v34 = v87;
  }
  else
  {
    v65 = (volatile LONG *)((char *)&unk_1404646A8 + 16 * (unsigned __int8)(v31 >> 30));
    v66 = ExAcquireSpinLockExclusive(v65 + 3);
    ++*((_DWORD *)v65 + 2);
    v67 = 0;
    v68 = *(_QWORD **)v65;
    v69 = v66;
    if ( *(_QWORD *)v65 )
    {
      while ( 1 )
      {
        v70 = v68[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v91 >= v70 + v68[4] || v91 >= v70 )
        {
          v71 = (_QWORD *)v68[1];
          if ( !v71 )
          {
            v67 = 1;
            break;
          }
        }
        else
        {
          v71 = (_QWORD *)*v68;
          if ( !*v68 )
          {
            v67 = 0;
            break;
          }
        }
        v68 = v71;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)v65, (unsigned __int64)v68, v67, v11);
    ExReleaseSpinLockExclusiveFromDpcLevel(v65 + 3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v69 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v34 = v87;
    }
    __writecr8(v69);
  }
  v56 = v86;
  if ( (v11[7] & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v86 + 92));
    v34 = v87;
  }
  if ( v34 < 3 )
  {
    v73 = 0LL;
    v74 = v91;
    v75 = *(_QWORD *)(v96 + 8);
    v76 = MiLargePageSizes[v34];
    v77 = v75 + 8 * v100;
    v78 = v75 + 8LL * *(unsigned int *)(v96 + 44);
    if ( v92 )
    {
      v79 = MiGetAnyMultiplexedVm(3LL);
      do
      {
        if ( v77 == v78 )
        {
          v96 = *(_QWORD *)(v80 + 16);
          v77 = *(_QWORD *)(v96 + 8);
          v78 = v77 + 8LL * *(unsigned int *)(v96 + 44);
        }
        v81 = MI_READ_PTE_LOCK_FREE(v77);
        MiMapWithLargePages(v79, v74, v82 & (v81 >> 12), v76, v34, 4, 1);
        v80 = v96;
        v77 += 8 * v76;
        v74 += (_DWORD)v76 << 12;
        v73 += v76;
      }
      while ( v73 < v92 );
      v9 = 0;
    }
    goto LABEL_61;
  }
  if ( !v13 )
    goto LABEL_60;
  v57 = 0LL;
  do
  {
    if ( !MiPteInShadowRange(v12 + 8 * v57) )
      goto LABEL_57;
    if ( !(unsigned int)MiPteHasShadow(v59) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v58 & 1) != 0 )
      {
        v58 |= v83;
      }
LABEL_57:
      *v60 = v58;
      goto LABEL_58;
    }
    if ( !HIBYTE(word_1404658EC) && (v58 & 1) != 0 )
      v58 |= v83;
    *v60 = v58;
    MiWritePteShadow(v60, v58);
LABEL_58:
    v57 = (unsigned int)++v9;
  }
  while ( (unsigned int)v9 < v13 );
  v56 = v86;
LABEL_60:
  v9 = MiAddMappedPtes(v12, v13, v56, (_DWORD)a4, SessionId);
  if ( v9 < 0 )
  {
    v84 = v91;
    ++*(_DWORD *)(a1 + 28);
    MiRemoveFromSystemSpace(a1, v84, 0LL);
  }
  else
  {
LABEL_61:
    *a7 = v91;
  }
  return (unsigned int)v9;
}
