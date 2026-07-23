/*
 * XREFs of MiDeletePartialVad @ 0x140025850
 * Callers:
 *     MiFreeVadRange @ 0x140025674 (MiFreeVadRange.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiDrainSystemAccessLog @ 0x14000FF28 (MiDrainSystemAccessLog.c)
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiAdvanceVadView @ 0x140025614 (MiAdvanceVadView.c)
 *     MiClearVadBits @ 0x140025F60 (MiClearVadBits.c)
 *     MiCaptureDeleteHierarchy @ 0x140026044 (MiCaptureDeleteHierarchy.c)
 *     MiDeleteVirtualAddresses @ 0x140026134 (MiDeleteVirtualAddresses.c)
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiFinishVadDeletion @ 0x140067760 (MiFinishVadDeletion.c)
 *     MiDecrementSubsections @ 0x140079400 (MiDecrementSubsections.c)
 *     MiReturnFullProcessCharges @ 0x14007FF00 (MiReturnFullProcessCharges.c)
 *     MiComputePageCommitment @ 0x140083940 (MiComputePageCommitment.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400901D0 (PsReturnProcessPagedPoolQuota.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     MiManageSubsectionView @ 0x1400ADBC0 (MiManageSubsectionView.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCountSharedPages @ 0x14010ACF0 (MiCountSharedPages.c)
 *     MiInsertVad @ 0x1401101EC (MiInsertVad.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiUpControlAreaRefs @ 0x1402A3640 (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x1402C5080 (MiReInsertPlaceholderVad.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiReturnPageTablePageCommitment @ 0x1405ED380 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405F18A0 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     MiResidentPagesForSpan @ 0x1406C45D0 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x1406CBC64 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x1406D1E70 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x1408504F4 (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x14085D918 (MiCreatePlaceholderStorage.c)
 *     MiLockNestedVad @ 0x14085FC40 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14085FC5C (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiDeletePartialVad(
        _QWORD *BugCheckParameter4,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  bool v10; // r13
  int v11; // r12d
  int v12; // eax
  SIZE_T v13; // r14
  int v14; // ecx
  int v15; // r15d
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  __int64 SharedVm; // rbx
  KIRQL v23; // al
  __int64 v24; // rbx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  _QWORD *v28; // r14
  _QWORD *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 j; // r15
  ULONG_PTR v37; // r13
  struct _KTHREAD *v38; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v40; // r15
  __int64 v41; // rdx
  bool v42; // zf
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  _KLOCK_ENTRY *v46; // r14
  unsigned __int8 v47; // al
  __int64 v48; // rcx
  __int64 v49; // r12
  __int64 v50; // rbx
  unsigned __int64 v51; // rbx
  ULONG_PTR v52; // rbx
  _QWORD *i; // rax
  __int64 v55; // rbx
  int v56; // r9d
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // rax
  __int64 v59; // rbx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  _QWORD *v62; // rcx
  __int64 m; // r14
  _QWORD *k; // rax
  __int64 *v65; // rax
  __int64 v66; // rdx
  PVOID PoolWithTag; // rax
  int PlaceholderStorage; // ebx
  __int64 v69; // rax
  unsigned int v70; // edx
  char v71; // al
  __int64 v72; // r14
  __int64 v73; // r14
  unsigned int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // rbx
  unsigned __int64 v80; // r15
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rcx
  __int64 v83; // rdx
  int v84; // r9d
  __int64 v85; // rax
  unsigned __int64 v86; // rcx
  __int64 v87; // rax
  unsigned __int64 v88; // r15
  __int64 v89; // r13
  unsigned __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rbx
  KIRQL v93; // al
  unsigned __int64 v94; // r8
  int v95; // ecx
  unsigned int v96; // edx
  __int64 v97; // rcx
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rbx
  __int64 v100; // r8
  __int64 v101; // r13
  __int64 v102; // rdi
  BOOL v103; // r15d
  KIRQL v104; // si
  __int64 v105; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _KPROCESS *Process; // [rsp+48h] [rbp-81h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-79h] BYREF
  __int64 v109; // [rsp+58h] [rbp-71h] BYREF
  __int64 v110; // [rsp+60h] [rbp-69h]
  int v111; // [rsp+68h] [rbp-61h] BYREF
  unsigned __int16 *v112; // [rsp+70h] [rbp-59h]
  unsigned int v113; // [rsp+78h] [rbp-51h]
  __int64 v114; // [rsp+80h] [rbp-49h]
  _BYTE v115[4]; // [rsp+88h] [rbp-41h] BYREF
  int v116; // [rsp+8Ch] [rbp-3Dh]
  unsigned __int64 v117; // [rsp+90h] [rbp-39h]
  unsigned __int64 v118; // [rsp+98h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-29h]
  __int64 v120; // [rsp+A8h] [rbp-21h]
  _QWORD v121[13]; // [rsp+B0h] [rbp-19h] BYREF
  KIRQL v122; // [rsp+128h] [rbp+5Fh]

  v5 = a2;
  memset(v121, 0, 0x28uLL);
  BugCheckParameter2 = 0LL;
  v109 = 0LL;
  v114 = 0LL;
  v8 = (a3 - v5 + 1) >> 12;
  v9 = 0LL;
  v117 = v8;
  v10 = 0;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  v113 = 0;
  Process = CurrentThread->ApcState.Process;
  v112 = &Process[1].IdealNode[12];
  v12 = *((_DWORD *)BugCheckParameter4 + 12);
  if ( (v12 & 0x4000) != 0 )
  {
    v13 = 64LL;
    v110 = 64LL;
    v14 = 8;
    if ( (v12 & 7) != 6 )
      v14 = 0;
    v113 = v14;
  }
  else
  {
    v65 = (__int64 *)BugCheckParameter4[9];
    v13 = 136LL;
    v110 = 136LL;
    v66 = *v65;
    v114 = v66;
    if ( *(_QWORD *)(v66 + 64) )
    {
      if ( (__int64)BugCheckParameter4[15] < 0 )
        return 3221225505LL;
      v10 = (*(_DWORD *)(v66 + 56) & 0x420) == 0;
    }
  }
  LOBYTE(v5) = 15;
  v118 = v5;
  v15 = 2147483645;
  if ( a4 == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x46646156u);
    v9 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memmove(PoolWithTag, BugCheckParameter4, v13);
    *(_DWORD *)(v9 + 36) = 0;
    *(_QWORD *)(v9 + 56) = 0LL;
    *(_QWORD *)(v9 + 16) = -2LL;
    v69 = *((unsigned int *)BugCheckParameter4 + 13);
    LODWORD(v69) = v69 & 0x7FFFFFFF;
    v70 = *(_DWORD *)(v9 + 52) & 0x80000000;
    if ( (v69 | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      v71 = 15;
      v70 |= 0x7FFFFFFDu;
    }
    else
    {
      v71 = 0;
    }
    *(_DWORD *)(v9 + 52) = v70;
    *(_BYTE *)(v9 + 34) = v71;
    *(_QWORD *)(v9 + 40) = 0LL;
    v72 = ((a3 + 1) >> 12)
        - (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32));
    if ( (*(_BYTE *)(v9 + 48) & 7) == 6 && !(unsigned int)MiCreateRotateView(v9) )
    {
      PlaceholderStorage = -1073741670;
LABEL_107:
      MiFreeRotateView(v9);
      MiFreePlaceholderStorage(v9);
      ExFreePoolWithTag((PVOID)v9, 0);
      return (unsigned int)PlaceholderStorage;
    }
    if ( MiLocateVadEvent(BugCheckParameter4, 128LL) )
    {
      PlaceholderStorage = MiCreatePlaceholderStorage(v9);
      if ( PlaceholderStorage < 0 )
        goto LABEL_107;
    }
    MiLockNestedVad(v9);
    MiAdvanceVadView(v9, v72);
    MiUnlockNestedVad(v9);
    v73 = v110;
    if ( v110 != 64 )
    {
      v74 = *(_DWORD *)(v9 + 64) & 0xFDFFFFFF;
      v75 = v114;
      *(_QWORD *)(v9 + 120) = 0LL;
      *(_DWORD *)(v9 + 64) = v74;
      PlaceholderStorage = MiInsertSharedCommitNode(v75, Process, 0LL);
      if ( PlaceholderStorage < 0 )
        goto LABEL_107;
      v11 = 1;
    }
    PlaceholderStorage = MiInsertVadCharges(v9, Process);
    if ( PlaceholderStorage >= 0 )
    {
      v76 = *(_QWORD *)&Process[1].IdealGlobalNode;
      if ( v73 == 64 )
      {
        if ( (*(_DWORD *)(v9 + 48) & 0x40000) != 0 )
          ++*(_QWORD *)(v76 + 376);
      }
      else
      {
        if ( *(_QWORD *)(v9 + 128) )
        {
          ObfReferenceObjectWithTag(*(PVOID *)(v9 + 128), 0x746C6644u);
        }
        else if ( (*(_DWORD *)(v9 + 48) & 0x40000) != 0 )
        {
          ++*(_QWORD *)(v76 + 384);
        }
        MiUpControlAreaRefs(v9, 1LL);
      }
      goto LABEL_6;
    }
    if ( v11 )
      MiRemoveSharedCommitNode(v114, Process, 0LL);
    goto LABEL_107;
  }
LABEL_6:
  v120 = 0LL;
  if ( (BugCheckParameter4[6] & 7) != 7 )
  {
    v16 = 74;
    if ( _bittest(&v16, BugCheckParameter4[6] & 7) )
      v120 = MiResidentPagesForSpan(
               (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                               + 32) << 32)) << 12,
               ((*((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                                + 33) << 32)) << 12) | 0xFFF,
               0LL);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v18 = *((unsigned int *)BugCheckParameter4 + 13);
  LODWORD(v18) = v18 & 0x7FFFFFFF;
  v19 = v18 | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31);
  if ( v19 == 0x7FFFFFFFDLL || !v19 )
  {
    v20 = 0LL;
    if ( v19 != 0x7FFFFFFFDLL )
      v20 = v19;
    v21 = 0LL;
    v19 = v20;
    SharedVm = MiGetSharedVm(v112, v17);
    v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    goto LABEL_14;
  }
  if ( v110 != 64 )
  {
    v21 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
        - MiCountSharedPages(
            BugCheckParameter4,
            ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
        + 1;
    v78 = MiGetSharedVm(v112, v77);
    v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v78);
    *(_DWORD *)(v78 + 4) = 0;
LABEL_14:
    v122 = v23;
    goto LABEL_15;
  }
  v55 = MiGetSharedVm(v112, v17);
  LOBYTE(v56) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v55);
  *(_DWORD *)(v55 + 4) = 0;
  v122 = v56;
  v21 = MiComputePageCommitment(a2, a3, (_DWORD)BugCheckParameter4, v56, 4, 0LL);
LABEL_15:
  if ( a4 != 1 )
  {
    v57 = v19 - v21;
    if ( a4 == 2 )
    {
      if ( (*((_DWORD *)BugCheckParameter4 + 13) & 0x7FFFFFFF | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                                   + 34) << 31)) == 0x7FFFFFFFDLL )
      {
        LOBYTE(v58) = v118;
      }
      else
      {
        v58 = v57 >> 31;
        v15 = v57 & 0x7FFFFFFF;
      }
      v59 = v110;
      v27 = v15 | *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000;
      *((_DWORD *)BugCheckParameter4 + 13) = v27;
      *((_BYTE *)BugCheckParameter4 + 34) = v58;
      if ( v59 != 64 && v10 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          *((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32),
          0LL,
          &v109);
        v109 = *(_QWORD *)(v109 + 16);
      }
      v60 = (a2 - 1) >> 44;
      v61 = (a2 - 1) >> 12;
      *((_DWORD *)BugCheckParameter4 + 7) = v61;
      *((_BYTE *)BugCheckParameter4 + 33) = v60;
      if ( v59 != 64 && v10 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          (unsigned int)v61 | ((unsigned __int64)(unsigned __int8)v60 << 32),
          0LL,
          &BugCheckParameter2);
        BugCheckParameter2 = *(_QWORD *)(BugCheckParameter2 + 16);
        MiAdvanceVadView((__int64)BugCheckParameter4, 0LL);
      }
      v28 = 0LL;
      goto LABEL_77;
    }
    v79 = v110;
    if ( v110 != 64 && v10 )
    {
      MiGetProtoPteAddress(
        BugCheckParameter4,
        *((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32),
        0LL,
        &v109);
      v109 = *(_QWORD *)(v109 + 16);
    }
    v80 = a2 - 1;
    v81 = (a2 - 1) >> 12;
    v82 = (a2 - 1) >> 44;
    *((_DWORD *)BugCheckParameter4 + 7) = v81;
    *((_BYTE *)BugCheckParameter4 + 33) = v82;
    if ( v79 != 64 && v10 )
    {
      MiGetProtoPteAddress(
        BugCheckParameter4,
        (unsigned int)v81 | ((unsigned __int64)(unsigned __int8)v82 << 32),
        0LL,
        &BugCheckParameter2);
      BugCheckParameter2 = *(_QWORD *)(BugCheckParameter2 + 16);
      MiAdvanceVadView((__int64)BugCheckParameter4, 0LL);
    }
    v117 += (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
          - (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
          + 1;
    MiInsertVad(v9, Process, 2LL);
    v85 = *((unsigned int *)BugCheckParameter4 + 13);
    LODWORD(v85) = v85 & 0x7FFFFFFF;
    v86 = v85 | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31);
    v87 = 0x7FFFFFFFDLL;
    if ( v86 != 0x7FFFFFFFDLL )
    {
      if ( v79 != 64 )
      {
        v89 = (__int64)v112;
        LOBYTE(v83) = v122;
        MiUnlockWorkingSetExclusive(v112, v83);
        v90 = 8
            * ((*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                               + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v88 = ((__int64)(((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v90) >> 3)
            - MiCountSharedPages(BugCheckParameter4, v90, ((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v92 = MiGetSharedVm(v89, v91);
        v93 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v92);
        *(_DWORD *)(v92 + 4) = 0;
        v122 = v93;
        goto LABEL_139;
      }
      LOBYTE(v84) = v122;
      v87 = MiComputePageCommitment(
              *((_DWORD *)BugCheckParameter4 + 6) << 12,
              v80,
              (_DWORD)BugCheckParameter4,
              v84,
              4,
              0LL);
    }
    v88 = v87;
LABEL_139:
    v94 = v88 >> 31;
    v95 = v88 & 0x7FFFFFFF | *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000;
    *((_DWORD *)BugCheckParameter4 + 13) = v95;
    *((_BYTE *)BugCheckParameter4 + 34) = v88 >> 31;
    v96 = *(_DWORD *)(v9 + 52) & 0x80000000;
    if ( (((unsigned __int64)(unsigned __int8)(v88 >> 31) << 31) | v95 & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
    {
      v27 = v88 & 0x7FFFFFFF | v96;
    }
    else
    {
      v94 = (v57 - v88) >> 31;
      v27 = ((_DWORD)v57 - (_DWORD)v88) & 0x7FFFFFFF | v96;
    }
    *(_DWORD *)(v9 + 52) = v27;
    v28 = (_QWORD *)v9;
    *(_BYTE *)(v9 + 34) = v94;
LABEL_77:
    v29 = BugCheckParameter4;
    goto LABEL_21;
  }
  v24 = v110;
  if ( v110 != 64 && v10 )
    MiGetProtoPteAddress(
      BugCheckParameter4,
      *((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32),
      0LL,
      &BugCheckParameter2);
  v25 = v19 - v21;
  if ( (*((_DWORD *)BugCheckParameter4 + 13) & 0x7FFFFFFF | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                               + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    LOBYTE(v26) = v118;
  }
  else
  {
    v26 = v25 >> 31;
    v15 = v25 & 0x7FFFFFFF;
  }
  *((_DWORD *)BugCheckParameter4 + 13) = *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000 | v15;
  *((_BYTE *)BugCheckParameter4 + 34) = v26;
  MiAdvanceVadView(
    (__int64)BugCheckParameter4,
    ((a3 + 1) >> 12)
  - (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)));
  if ( v24 != 64 && v10 )
    MiGetProtoPteAddress(
      BugCheckParameter4,
      *((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32),
      0LL,
      &v109);
  v28 = BugCheckParameter4;
  v29 = 0LL;
LABEL_21:
  LOBYTE(v27) = v122;
  MiUnlockWorkingSetExclusive(v112, v27);
  MiDeleteVirtualAddresses(a2, a3, v113, v121);
  v31 = MiGetSharedVm(v112, v30);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v31);
  *(_DWORD *)(v31 + 4) = 0;
  if ( BugCheckParameter2 )
    MiDrainSystemAccessLog((__int64)v112, v32);
  LOBYTE(v33) = v122;
  MiCaptureDeleteHierarchy(a2, a3, v33, v115);
  LOBYTE(v34) = v122;
  MiUnlockWorkingSetExclusive(v112, v34);
  if ( !v29 )
  {
    v29 = (_QWORD *)*BugCheckParameter4;
    v35 = BugCheckParameter4;
    if ( *BugCheckParameter4 )
    {
      for ( i = (_QWORD *)v29[1]; i; i = (_QWORD *)i[1] )
        v29 = i;
    }
    else
    {
      for ( j = BugCheckParameter4[2]; ; j = v29[2] )
      {
        v29 = (_QWORD *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v29 || (_QWORD *)v29[1] == v35 )
          break;
        v35 = v29;
      }
    }
  }
  if ( !v28 )
  {
    v28 = (_QWORD *)BugCheckParameter4[1];
    v62 = BugCheckParameter4;
    if ( v28 )
    {
      for ( k = (_QWORD *)*v28; k; k = (_QWORD *)*k )
        v28 = k;
    }
    else
    {
      for ( m = BugCheckParameter4[2]; ; m = v28[2] )
      {
        v28 = (_QWORD *)(m & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v28 || (_QWORD *)*v28 == v62 )
          break;
        v62 = v28;
      }
    }
  }
  if ( !a5 )
    MiClearVadBits(a2, a3, v29, v28);
  MiReturnPageTablePageCommitment(
    a2,
    a3,
    (_DWORD)Process,
    (_DWORD)v29,
    (__int64)v28,
    (__int64)BugCheckParameter4,
    (__int64)v115);
  v37 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[8]);
  v111 = 0;
  v38 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&Process[1].Affinity.Bitmap[8]) == 1 )
    SessionId = MmGetSessionIdEx(v38->ApcState.Process);
  else
    SessionId = -1;
  --v38->SpecialApcDisable;
  v40 = ++v38->AbAllocationRegionCount;
  LODWORD(v41) = ((char)v38->AbEntrySummary | (char)v38->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v42 = !_BitScanReverse((unsigned int *)&v43, v41);
    v116 = v43;
    if ( v42 )
      break;
    v44 = 1 << v43;
    v45 = v43;
    v46 = &v38->LockEntries[v45];
    v41 = ~v44 & (unsigned int)v41;
    if ( (v46->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v46->LockState.0 & 1) == 0
      && (*(_QWORD *)&v46->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v37 & 0x7FFFFFFFFFFFFFFCLL)
      && v46->LockState.SessionId == SessionId )
    {
      v46->AcquiredByte &= ~1u;
      if ( v46->LockState.0 )
      {
        if ( v46 )
        {
          v46->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v46->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v38->LockEntries[v45].TreeNode, v41);
          v111 = 0;
          v111 = v46->BoostBitmap.AllFields & 0x1FFFF;
          v46->BoostBitmap.AllFields &= 0xFFFE0000;
          v46->ThreadLocalFlags &= ~1u;
          v46->LockState.0 = 0LL;
          v47 = 1 << (((char *)v46 - (char *)v38 - 800) / 96);
          if ( v40 == 1 )
            v38->AbEntrySummary |= v47;
          else
            _InterlockedOr8((volatile signed __int8 *)&v38->AbOrphanedEntrySummary, v47);
          goto LABEL_47;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v38->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v38, v37, SessionId, 0LL);
LABEL_47:
  --v38->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v38, v37, &v111);
  v42 = v38->SpecialApcDisable++ == -1;
  if ( v42 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
    KiCheckForKernelApcDelivery(v48);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( a5 )
  {
    MiReInsertPlaceholderVad(a5);
    MiUnlockNestedVad(a5);
  }
  if ( v9 && (*(_DWORD *)(v9 + 48) & 0x4000) == 0 )
  {
    v97 = *(_QWORD *)(v9 + 72);
    *(_QWORD *)(v9 + 112) = (unsigned __int64)Process | 1;
    MiManageSubsectionView(v97, v9 + 96, 3LL);
  }
  v49 = v21 - v121[2];
  v50 = v49 - v121[1];
  if ( v49 )
    MiReturnFullProcessCharges(Process, v49);
  if ( v50 )
    MiReturnCommit(*(_QWORD *)(qword_14043B808 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3)), v50);
  if ( v110 != 64 )
    PsReturnProcessPagedPoolQuota(Process, 8 * v117);
  v51 = v120;
  if ( v120 )
  {
    v98 = MiResidentPagesForSpan(
            (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)) << 12,
            ((*((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32)) << 12) | 0xFFF,
            0LL);
    if ( v98 < v51 )
    {
      v99 = v51 - v98;
      v100 = *(_QWORD *)(qword_14043B808 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
      if ( (ULONG_PTR *)v100 == &MiSystemPartition )
        MiReturnResidentAvailable(v99);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v100 + 7360), v99);
    }
  }
  MiFinishVadDeletion(BugCheckParameter4, 0LL);
  v52 = BugCheckParameter2;
  if ( BugCheckParameter2 && BugCheckParameter2 != v109 )
  {
    v101 = v114;
    v102 = 0LL;
    v103 = *(_QWORD *)(v114 + 64) != 0LL;
    v104 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v114 + 72));
    do
    {
      v105 = MiDecrementSubsections(v52);
      v52 = *(_QWORD *)(v52 + 16);
      v102 += v105;
    }
    while ( v52 != v109 );
    BugCheckParameter2 = v52;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v101 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v104 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v104);
    if ( v102 )
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v101 + 60) & 0x3FF)),
        v103,
        v102);
  }
  return 0LL;
}
