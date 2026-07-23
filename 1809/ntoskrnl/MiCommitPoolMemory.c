/*
 * XREFs of MiCommitPoolMemory @ 0x1400994D0
 * Callers:
 *     MmAllocatePoolMemory @ 0x140099080 (MmAllocatePoolMemory.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x140023984 (MiReturnPoolCharges.c)
 *     MiReturnPhysicalPoolPages @ 0x140025380 (MiReturnPhysicalPoolPages.c)
 *     MiLockAndIncrementShareCount @ 0x140026D44 (MiLockAndIncrementShareCount.c)
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     MiGetLargePageChain @ 0x140028A18 (MiGetLargePageChain.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiFlushTbAsNeeded @ 0x140097F10 (MiFlushTbAsNeeded.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiAssignNonPagedPoolPtes @ 0x140099220 (MiAssignNonPagedPoolPtes.c)
 *     MiIsPoolPteInUse @ 0x14009A018 (MiIsPoolPteInUse.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiGetPoolPages @ 0x1400CB2A0 (MiGetPoolPages.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140103D50 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiObtainPoolCharges @ 0x140109864 (MiObtainPoolCharges.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiWriteTopLevelPxe @ 0x140170A50 (MiWriteTopLevelPxe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCountSystemPool @ 0x1401B4F60 (MiCountSystemPool.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402A9508 (MiLogPerfMemoryRangeEvent.c)
 *     MiFreeLargePageChain @ 0x1402CCA1C (MiFreeLargePageChain.c)
 */

__int64 __fastcall MiCommitPoolMemory(ULONG_PTR *a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
  ULONG_PTR v5; // rsi
  char v6; // di
  unsigned int v7; // r12d
  unsigned int v8; // r8d
  int v9; // edi
  unsigned int ProtectionMask; // eax
  char v11; // r8
  unsigned int v12; // r9d
  ULONG_PTR v13; // r11
  int v14; // ecx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r13
  unsigned __int16 *v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // r12
  unsigned int v22; // eax
  int v23; // ebx
  unsigned int v24; // ecx
  unsigned __int64 v26; // r12
  __int64 CurrentIrql; // r14
  unsigned __int64 v28; // r15
  struct _KPRCB *v29; // rcx
  unsigned __int8 v30; // dl
  unsigned __int64 v31; // rsi
  __int64 v32; // r9
  __int64 v33; // r10
  unsigned __int64 v34; // r8
  unsigned __int64 valid; // rax
  char v36; // al
  int v37; // ecx
  struct _KPRCB *v38; // rcx
  unsigned __int8 v39; // dl
  unsigned __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r11
  __int64 v45; // rdx
  char v46; // r11
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rbx
  _QWORD *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // r9
  ULONG_PTR v52; // r9
  unsigned __int64 *v53; // r8
  unsigned __int64 v54; // rsi
  unsigned __int64 ValidPte; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 ContainingPageTable; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v63; // rdi
  _SLIST_HEADER *v64; // rbx
  unsigned __int64 v65; // rsi
  unsigned __int64 Alignment; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v68; // rcx
  unsigned __int64 *PoolPages; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v70; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v71; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v72; // [rsp+48h] [rbp-B8h]
  unsigned int v73; // [rsp+50h] [rbp-B0h]
  int v74; // [rsp+54h] [rbp-ACh]
  unsigned __int16 *v75; // [rsp+58h] [rbp-A8h]
  __int64 v76; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v77; // [rsp+68h] [rbp-98h]
  unsigned int v78; // [rsp+70h] [rbp-90h]
  unsigned __int64 v79; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v80; // [rsp+80h] [rbp-80h]
  unsigned __int64 v81; // [rsp+88h] [rbp-78h]
  unsigned __int64 v82; // [rsp+90h] [rbp-70h]
  __int64 v83; // [rsp+98h] [rbp-68h]
  __int64 v84; // [rsp+A0h] [rbp-60h]
  __int64 v85; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v86[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v87; // [rsp+C8h] [rbp-38h]
  __int64 v88; // [rsp+D0h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v90[4]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v92; // [rsp+158h] [rbp+58h]
  unsigned int v93; // [rsp+160h] [rbp+60h]
  signed int v94; // [rsp+170h] [rbp+70h]

  v5 = *a1;
  v6 = a3;
  v7 = a3 & 0xFFFFFF80;
  memset(v86, 0, sizeof(v86));
  v8 = a5 & 0xFFFFFFDF;
  v87 = 0LL;
  v88 = 0LL;
  v9 = v6 & 0x7F;
  v93 = v7;
  if ( (a5 & 1) != 0 )
    v8 = a5;
  v78 = v8;
  ProtectionMask = MiMakeProtectionMask(a4);
  v70 = ProtectionMask;
  if ( ProtectionMask > 0x18 || (v14 = 16777298, !_bittest(&v14, ProtectionMask)) )
    KeBugCheckEx(0x1Au, 0x5300uLL, v5, v13, v12);
  v92 = 0;
  v15 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v71 = (((v5 + v13 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v75 = (unsigned __int16 *)&unk_14043C690;
  v16 = ((v5 + v13 - 1) >> 18) & 0x3FFFFFF8;
  v77 = -1LL;
  v17 = (v5 >> 18) & 0x3FFFFFF8;
  v85 = ((__int64)(v71 - v15) >> 3) + 1;
  v81 = 0LL;
  PoolPages = 0LL;
  v83 = 0LL;
  v74 = v11 & 1;
  v18 = 0LL;
  v72 = v85;
  v94 = 5;
  v73 = 0;
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 0x20) != 0 )
    {
      v94 = 1;
      v73 = 2;
      v19 = (unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    }
    else
    {
      v19 = (unsigned __int16 *)&unk_14043C360;
      v94 = 6;
    }
    v20 = v19[87];
    v75 = v19;
    v83 = *(_QWORD *)(qword_14043B808 + 8 * v20);
    if ( (unsigned int)MiChargeCommit(v83, ((__int64)(v71 - v15) >> 3) + 1, 1u) )
    {
      v80 = 0LL;
LABEL_19:
      v24 = 0;
      goto LABEL_20;
    }
    return 3221225626LL;
  }
  if ( (v7 & 0x20000000) == 0 )
  {
    PoolPages = (unsigned __int64 *)MiGetPoolPages(v7, (unsigned int)(v9 - 1), ((__int64)(v71 - v15) >> 3) + 1);
    if ( PoolPages )
    {
      v19 = (unsigned __int16 *)&unk_14043C690;
      v80 = PoolPages[5] >> 58;
      goto LABEL_19;
    }
    return 3221225626LL;
  }
  v21 = ((((unsigned int)v16 - v17) >> 3) + 1) << 9;
  v72 = v21;
  if ( !(unsigned int)MiObtainPoolCharges(v21, 0LL) )
    return 3221225626LL;
  PoolPages = MiGetLargePageChain(v9 - 1, v21);
  if ( !PoolPages )
  {
    v22 = v93;
    v23 = -1073741670;
    goto LABEL_145;
  }
  v19 = (unsigned __int16 *)&unk_14043C690;
  v24 = 2;
  v92 = 2;
  v80 = PoolPages[5] >> 58;
LABEL_20:
  v26 = 0LL;
  if ( v17 != v16 && !(unsigned int)MiMakeZeroedPageTablesEx(v15, v71, v24, v94) )
    goto LABEL_22;
  CurrentIrql = KeGetCurrentIrql();
  v76 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  MiLockWorkingSetShared((__int64)v19);
  if ( v15 > v71 )
  {
LABEL_117:
    MiUnlockWorkingSetShared((__int64)v19, 2u);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8((unsigned __int8)CurrentIrql);
    v63 = v81;
    v64 = &qword_14043B118[25 * v80];
    if ( v81 && v81 > v64[16].Region )
    {
      v65 = v77;
    }
    else
    {
      v65 = v77;
      if ( v77 == -1LL || v77 >= v64[16].Alignment )
      {
LABEL_139:
        v22 = v93;
        if ( (v93 & 0x20000000) == 0 )
        {
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
            MiLogPerfMemoryRangeEvent(*a1, 0LL, 11LL, v85);
          v22 = v93;
        }
        v23 = 0;
        goto LABEL_144;
      }
    }
    KeAcquireInStackQueuedSpinLock(&v64[19].Alignment, &LockHandle);
    Alignment = v64[16].Alignment;
    if ( v65 < Alignment || !Alignment )
      v64[16].Alignment = v65;
    if ( v63 > v64[16].Region )
      v64[16].Region = v63;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v68 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v68->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v68);
    }
    __writecr8(OldIrql);
    goto LABEL_139;
  }
  v84 = 0LL;
  while ( 1 )
  {
    v28 = v81;
    if ( v26 )
      MiUnlockPageTableInternal(v19, v26);
    if ( (unsigned __int8)CurrentIrql < 2u && (MiWorkingSetIsContended((__int64)v19) || KeShouldYieldProcessor()) )
    {
      MiUnlockWorkingSetShared((__int64)v19, 2u);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v29);
      }
      __writecr8((unsigned __int8)CurrentIrql);
      v30 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LOBYTE(CurrentIrql) = v30;
      v76 = v30;
      MiLockWorkingSetShared((__int64)v19);
    }
    v79 = 0LL;
    v31 = (__int64)((v15 << 25) - v84) >> 16;
    if ( !(unsigned int)MiFastLockLeafPageTable((__int64)v19, v31, 0) )
      break;
    MiFillPteHierarchy(v31, v90);
    v26 = v90[v33];
    v82 = v26;
    v34 = v90[(int)v33 - 1];
    v79 = v34;
    if ( !v26 )
      break;
    if ( (_DWORD)v33 != 1 )
    {
      if ( (_DWORD)v33 != 2 )
        goto LABEL_56;
      goto LABEL_50;
    }
LABEL_67:
    v37 = v93 & 0x20000000;
    if ( (v93 & 0x20000000) != 0 )
      KeBugCheckEx(0x1Au, 0x5301uLL, v31, 0LL, 0LL);
LABEL_68:
    v40 = v71;
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v71 )
      v40 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v41 = ((__int64)(v40 - v15) >> 3) + 1;
    if ( !v74 )
    {
      v49 = (_QWORD *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( !v37 )
      {
        v18 += MiAssignNonPagedPoolPtes(v31, v41, &PoolPages);
LABEL_112:
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        goto LABEL_113;
      }
      MI_READ_PTE_LOCK_FREE(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v50 = MiSwizzleInvalidPte(768LL);
      if ( v51 != v50 && (unsigned int)MiIsPoolPteInUse(v51) )
        KeBugCheckEx(0x1Au, 0x5304uLL, v31, v52, 0LL);
      v53 = PoolPages;
      v18 += 512LL;
      PoolPages = (unsigned __int64 *)*PoolPages;
      v54 = (__int64)(v53 + 0xB000000000LL) / 48;
      MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v54, 0x200uLL, 1, 1);
      ValidPte = MiMakeValidPte(0LL, v54, v70 | 0xA4000000);
      if ( (unsigned __int64)v49 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v49 > 0xFFFFF6FB7DBEDFFFuLL )
      {
        if ( MiPteInShadowRange(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
        {
          if ( (unsigned int)MiPteHasShadow(v57, v56) )
          {
            if ( !HIBYTE(word_14043B26C) && (v56 & 1) != 0 )
              v56 |= 0x8000000000000000uLL;
            *v49 = v56;
            MiWritePteShadow(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            goto LABEL_106;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v56 & 1) != 0 )
          {
            v56 |= 0x8000000000000000uLL;
          }
        }
        *v49 = v56;
      }
      else
      {
        MiWriteTopLevelPxe(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, ValidPte);
      }
LABEL_106:
      ContainingPageTable = MiGetContainingPageTable(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiLockAndIncrementShareCount(ContainingPageTable);
      MiInitializeLargeNonPagedPoolLeafFrames(v15, v54);
      v59 = v77;
      if ( v54 < v77 )
        v59 = v54;
      v77 = v59;
      v60 = v54 + 511;
      v61 = v54 | 0x1FF;
      if ( v60 <= v28 )
        v61 = v28;
      v81 = v61;
      goto LABEL_112;
    }
    MiFlushTbAsNeeded(v15, v41, v73, 1LL);
    MiSwizzleInvalidPte(32LL * (v70 & 0x1F));
    if ( v15 > v40 )
      goto LABEL_87;
    do
    {
      v42 = MI_READ_PTE_LOCK_FREE(v15);
      if ( (unsigned int)MiIsPoolPteInUse(v42) )
        goto LABEL_85;
      v45 = v44;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(v43, v44) )
        {
          if ( !HIBYTE(word_14043B26C) && (v46 & 1) != 0 )
            v45 |= 0x8000000000000000uLL;
          *(_QWORD *)v15 = v45;
          MiWritePteShadow(v15);
          goto LABEL_84;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v46 & 1) != 0 )
        {
          v45 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v15 = v45;
LABEL_84:
      ++v18;
LABEL_85:
      v15 += 8LL;
    }
    while ( v15 <= v40 );
    v26 = v82;
LABEL_87:
    v47 = v15;
    v48 = v15 - 8;
    if ( v40 == v71 )
      v48 = v47;
    v15 = (v48 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_113:
    LOBYTE(CurrentIrql) = v76;
    v19 = v75;
LABEL_114:
    if ( v15 > v71 )
    {
      if ( v26 )
        MiUnlockPageTableInternal(v19, v26);
      goto LABEL_117;
    }
  }
  valid = MiLockLowestValidPageTable((__int64)v19, v15, &v79, v32);
  v34 = v79;
  v26 = valid;
  v82 = valid;
  if ( v79 == v15 )
    goto LABEL_67;
  if ( v79 != ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    goto LABEL_56;
LABEL_50:
  v36 = MI_READ_PTE_LOCK_FREE(v34);
  if ( (v36 & 1) != 0 )
  {
    if ( v36 < 0 )
      KeBugCheckEx(0x1Au, 0x5302uLL, v31, 0LL, 0LL);
    v37 = v93 & 0x20000000;
    if ( (v93 & 0x20000000) != 0 )
      KeBugCheckEx(0x1Au, 0x5303uLL, v31, 0LL, 0LL);
  }
  else
  {
    v37 = v93 & 0x20000000;
  }
  if ( v37 )
    goto LABEL_68;
LABEL_56:
  MiUnlockPageTableInternal(v19, v26);
  MiUnlockWorkingSetShared((__int64)v19, 2u);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
  {
    v38 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v38);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( (unsigned int)MiMakeZeroedPageTablesEx(v15, v71, v92, v94) )
  {
    v39 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v39 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LOBYTE(CurrentIrql) = v39;
    v76 = v39;
    MiLockWorkingSetShared((__int64)v19);
    v26 = 0LL;
    goto LABEL_114;
  }
LABEL_22:
  v22 = v93;
  v23 = -1073741670;
LABEL_144:
  v21 = v72;
LABEL_145:
  if ( v74 )
  {
    if ( v18 != v21 )
      MiReturnCommit(v83, v21 - v18);
  }
  else if ( (v22 & 0x20000000) != 0 )
  {
    if ( PoolPages )
      MiFreeLargePageChain(PoolPages);
    if ( v18 != v21 )
    {
      v87 = v21 - v18;
      v86[0] = v21 - v18;
      MiReturnPoolCharges(v86, 0);
    }
  }
  else if ( PoolPages )
  {
    MiReturnPhysicalPoolPages((unsigned __int64)PoolPages, 0);
  }
  if ( (unsigned int)ExpHeapBackedPoolEnabledState >= 2 && v23 >= 0 )
    MiCountSystemPool(v78, v18, 1LL);
  return (unsigned int)v23;
}
