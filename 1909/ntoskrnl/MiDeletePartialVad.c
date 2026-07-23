/*
 * XREFs of MiDeletePartialVad @ 0x1400E74B8
 * Callers:
 *     MiFreeVadRange @ 0x1400E71E8 (MiFreeVadRange.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     MiReturnFullProcessCharges @ 0x14001FD90 (MiReturnFullProcessCharges.c)
 *     MiComputePageCommitment @ 0x1400210F0 (MiComputePageCommitment.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MiFinishVadDeletion @ 0x140056BF0 (MiFinishVadDeletion.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     PsReturnProcessPagedPoolQuota @ 0x14005B130 (PsReturnProcessPagedPoolQuota.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     MiDecrementSubsections @ 0x140071860 (MiDecrementSubsections.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiManageSubsectionView @ 0x1400750D0 (MiManageSubsectionView.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiClearVadBits @ 0x1400E7BF8 (MiClearVadBits.c)
 *     MiCaptureDeleteHierarchy @ 0x1400E7ECC (MiCaptureDeleteHierarchy.c)
 *     MiDeleteVirtualAddresses @ 0x1400E7FBC (MiDeleteVirtualAddresses.c)
 *     MiLocateLockedVadEvent @ 0x1400E8428 (MiLocateLockedVadEvent.c)
 *     MiAdvanceVadView @ 0x1400E8444 (MiAdvanceVadView.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     MiCountSharedPages @ 0x140105ED0 (MiCountSharedPages.c)
 *     MiDrainSystemAccessLog @ 0x14012FE58 (MiDrainSystemAccessLog.c)
 *     MiInsertVad @ 0x14015AE70 (MiInsertVad.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiUpControlAreaRefs @ 0x1402BA560 (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x1402DEB20 (MiReInsertPlaceholderVad.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReturnPageTablePageCommitment @ 0x1406073C0 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveSharedCommitNode @ 0x14060A200 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x14060A470 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     MiResidentPagesForSpan @ 0x1406E43E0 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x1406EB1B8 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x1406F1C80 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x14088AA44 (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x140898A4C (MiCreatePlaceholderStorage.c)
 *     MiLockNestedVad @ 0x14089B0C0 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14089B0DC (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiDeletePartialVad(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  bool v8; // r13
  unsigned __int64 v9; // rax
  unsigned int *v10; // rsi
  int v11; // r12d
  int v12; // eax
  SIZE_T v13; // r14
  int v14; // ecx
  int v15; // r15d
  int v16; // ecx
  __int64 v17; // r14
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  LONG *v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rbx
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r9
  _QWORD *v28; // r14
  unsigned __int64 v29; // r15
  LONG *v30; // rbx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rcx
  ULONG_PTR v36; // r13
  struct _KTHREAD *v37; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v39; // r15
  unsigned int v40; // edx
  bool v41; // zf
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  _KLOCK_ENTRY *v45; // r14
  unsigned __int8 v46; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r12
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rbx
  ULONG_PTR v52; // rbx
  __int64 i; // r15
  LONG *SharedVm; // rbx
  __int16 v56; // r9
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // rax
  __int64 v59; // rbx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  _QWORD *v62; // rcx
  __int64 k; // r14
  _QWORD *j; // rax
  __int64 *v65; // rax
  __int64 v66; // rdx
  unsigned int *PoolWithTag; // rax
  int PlaceholderStorage; // ebx
  __int64 v69; // rax
  unsigned int v70; // edx
  char v71; // al
  unsigned __int64 v72; // r14
  __int64 v73; // r14
  unsigned int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rcx
  LONG *v77; // rbx
  KIRQL v78; // al
  __int64 v79; // rbx
  unsigned __int64 v80; // r15
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  __int64 v87; // rax
  unsigned __int64 v88; // r15
  __int64 v89; // r13
  unsigned __int64 v90; // rbx
  LONG *v91; // rbx
  KIRQL v92; // al
  int v93; // ecx
  unsigned int v94; // edx
  __int64 *v95; // rcx
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rbx
  __int64 v98; // r8
  __int64 v99; // r13
  __int64 v100; // rdi
  BOOL v101; // r15d
  KIRQL v102; // si
  __int64 v103; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 Process; // [rsp+48h] [rbp-A1h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-99h] BYREF
  __int64 v107; // [rsp+58h] [rbp-91h] BYREF
  __int64 v108; // [rsp+60h] [rbp-89h]
  __int64 v109; // [rsp+68h] [rbp-81h]
  unsigned int v110; // [rsp+70h] [rbp-79h]
  int v111; // [rsp+74h] [rbp-75h] BYREF
  int v112; // [rsp+78h] [rbp-71h] BYREF
  __int64 v113; // [rsp+80h] [rbp-69h]
  int v114; // [rsp+88h] [rbp-61h]
  unsigned __int64 v115; // [rsp+90h] [rbp-59h]
  unsigned __int64 v116; // [rsp+98h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-49h]
  __int64 v118; // [rsp+A8h] [rbp-41h]
  __int64 v119; // [rsp+B0h] [rbp-39h]
  __int64 v120; // [rsp+B8h] [rbp-31h]
  _QWORD v121[15]; // [rsp+C0h] [rbp-29h] BYREF
  KIRQL v122; // [rsp+148h] [rbp+5Fh]

  v6 = a2;
  v111 = 0;
  memset(v121, 0, 0x30uLL);
  BugCheckParameter2 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v8 = 0;
  v107 = 0LL;
  v113 = 0LL;
  v110 = 0;
  v9 = (a3 - v6 + 1) >> 12;
  v10 = 0LL;
  v115 = v9;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v109 = Process + 1280;
  v12 = *((_DWORD *)a1 + 12);
  if ( (v12 & 0x100000) != 0 )
  {
    v13 = 64LL;
    v108 = 64LL;
    v14 = 8;
    if ( (v12 & 0x70) != 0x40 )
      v14 = 0;
    v110 = v14;
  }
  else
  {
    v65 = (__int64 *)a1[9];
    v13 = 136LL;
    v108 = 136LL;
    v66 = *v65;
    v113 = v66;
    if ( *(_QWORD *)(v66 + 64) )
    {
      if ( (__int64)a1[15] < 0 )
        return 3221225505LL;
      v8 = (*(_DWORD *)(v66 + 56) & 0x420) == 0;
    }
  }
  LOBYTE(v6) = 15;
  v116 = v6;
  v15 = 2147483645;
  if ( a4 == 3 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x46646156u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memmove(PoolWithTag, a1, v13);
    v10[9] = 0;
    *((_QWORD *)v10 + 7) = 0LL;
    *((_QWORD *)v10 + 2) = -2LL;
    v69 = *((unsigned int *)a1 + 13);
    LODWORD(v69) = v69 & 0x7FFFFFFF;
    v70 = v10[13] & 0x80000000;
    if ( (v69 | ((unsigned __int64)*((unsigned __int8 *)a1 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      v71 = 15;
      v70 |= 0x7FFFFFFDu;
    }
    else
    {
      v71 = 0;
    }
    v10[13] = v70;
    *((_BYTE *)v10 + 34) = v71;
    *((_QWORD *)v10 + 5) = 0LL;
    v72 = ((a3 + 1) >> 12) - (*((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32));
    if ( (v10[12] & 0x70) == 0x40 && !(unsigned int)MiCreateRotateView(v10) )
    {
      PlaceholderStorage = -1073741670;
LABEL_105:
      MiFreeRotateView(v10);
      MiFreePlaceholderStorage(v10);
      ExFreePoolWithTag(v10, 0);
      return (unsigned int)PlaceholderStorage;
    }
    if ( MiLocateLockedVadEvent(a1, 128LL) )
    {
      PlaceholderStorage = MiCreatePlaceholderStorage(v10);
      if ( PlaceholderStorage < 0 )
        goto LABEL_105;
    }
    MiLockNestedVad(v10);
    MiAdvanceVadView(v10, v72);
    MiUnlockNestedVad(v10);
    v73 = v108;
    if ( v108 != 64 )
    {
      v74 = v10[16] & 0xFDFFFFFF;
      v75 = v113;
      *((_QWORD *)v10 + 15) = 0LL;
      v10[16] = v74;
      PlaceholderStorage = MiInsertSharedCommitNode(v75, Process, 0LL);
      if ( PlaceholderStorage < 0 )
        goto LABEL_105;
      v11 = 1;
    }
    PlaceholderStorage = MiInsertVadCharges(v10, Process);
    if ( PlaceholderStorage >= 0 )
    {
      v76 = *(_QWORD *)(Process + 1296);
      if ( v73 == 64 )
      {
        if ( MiVadPageSizes[(v10[12] >> 18) & 3] == 16 )
          ++*(_QWORD *)(v76 + 424);
      }
      else
      {
        if ( *((_QWORD *)v10 + 16) )
        {
          ObfReferenceObjectWithTag(*((PVOID *)v10 + 16), 0x746C6644u);
        }
        else if ( MiVadPageSizes[(v10[12] >> 18) & 3] == 16 )
        {
          ++*(_QWORD *)(v76 + 432);
        }
        MiUpControlAreaRefs(v10, 1LL);
      }
      goto LABEL_6;
    }
    if ( v11 )
      MiRemoveSharedCommitNode(v113, Process, 0LL);
    goto LABEL_105;
  }
LABEL_6:
  v16 = *((_DWORD *)a1 + 12);
  v118 = 0LL;
  if ( (v16 & 0x70) == 0x10 || (v16 & 0x70) == 0x40 || (v16 & 0x70) == 0x30 )
    v118 = MiResidentPagesForSpan(
             (*((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32)) << 12,
             ((*((unsigned int *)a1 + 7) | ((unsigned __int64)*((unsigned __int8 *)a1 + 33) << 32)) << 12) | 0xFFF,
             0LL);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(Process + 888, 0LL);
  v17 = *((unsigned int *)a1 + 13);
  LODWORD(v17) = v17 & 0x7FFFFFFF;
  v18 = ((unsigned __int64)*((unsigned __int8 *)a1 + 34) << 31) | v17;
  if ( v18 != 0x7FFFFFFFDLL && v18 )
  {
    if ( v108 == 64 )
    {
      SharedVm = MiGetSharedVm(v109);
      LOBYTE(v56) = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v122 = v56;
      v20 = MiComputePageCommitment(a2, a3, (__int64)a1, v56, 4, 0LL);
    }
    else
    {
      v20 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
          - MiCountSharedPages(
              a1,
              ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
          + 1;
      v77 = MiGetSharedVm(v109);
      v78 = ExAcquireSpinLockExclusive(v77);
      v77[1] = 0;
      v122 = v78;
    }
  }
  else
  {
    v19 = 0LL;
    if ( v18 != 0x7FFFFFFFDLL )
      v19 = v18;
    v20 = 0LL;
    v18 = v19;
    v21 = MiGetSharedVm(v109);
    v122 = ExAcquireSpinLockExclusive(v21);
    v21[1] = 0;
  }
  v22 = 1LL;
  if ( a4 != 1 )
  {
    v57 = v18 - v20;
    if ( a4 == 2 )
    {
      v27 = 0x7FFFFFFFLL;
      v26 = *((_DWORD *)a1 + 13) & 0x80000000;
      if ( (((unsigned __int64)*((unsigned __int8 *)a1 + 34) << 31) | *((_DWORD *)a1 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
      {
        LOBYTE(v58) = v116;
      }
      else
      {
        v58 = v57 >> 31;
        v15 = v57 & 0x7FFFFFFF;
      }
      v59 = v108;
      *((_DWORD *)a1 + 13) = v26 | v15;
      *((_BYTE *)a1 + 34) = v58;
      if ( v59 != 64 && v8 )
      {
        MiGetProtoPteAddress(
          (__int64)a1,
          *((unsigned int *)a1 + 7) | ((unsigned __int64)*((unsigned __int8 *)a1 + 33) << 32),
          0,
          &v107);
        v22 = 1LL;
        v107 = *(_QWORD *)(v107 + 16);
      }
      v60 = (a2 - 1) >> 44;
      v61 = (a2 - 1) >> 12;
      *((_DWORD *)a1 + 7) = v61;
      *((_BYTE *)a1 + 33) = v60;
      if ( v59 != 64 && v8 )
      {
        MiGetProtoPteAddress(
          (__int64)a1,
          (unsigned int)v61 | ((unsigned __int64)(unsigned __int8)v60 << 32),
          0,
          &BugCheckParameter2);
        BugCheckParameter2 = *(_QWORD *)(BugCheckParameter2 + 16);
        MiAdvanceVadView(a1, 0LL);
      }
      v28 = 0LL;
      goto LABEL_73;
    }
    v79 = v108;
    if ( v108 != 64 && v8 )
    {
      MiGetProtoPteAddress(
        (__int64)a1,
        *((unsigned int *)a1 + 7) | ((unsigned __int64)*((unsigned __int8 *)a1 + 33) << 32),
        0,
        &v107);
      v107 = *(_QWORD *)(v107 + 16);
    }
    v80 = a2 - 1;
    v81 = (a2 - 1) >> 12;
    v82 = (a2 - 1) >> 44;
    *((_DWORD *)a1 + 7) = v81;
    *((_BYTE *)a1 + 33) = v82;
    if ( v79 != 64 && v8 )
    {
      MiGetProtoPteAddress(
        (__int64)a1,
        (unsigned int)v81 | ((unsigned __int64)(unsigned __int8)v82 << 32),
        0,
        &BugCheckParameter2);
      BugCheckParameter2 = *(_QWORD *)(BugCheckParameter2 + 16);
      MiAdvanceVadView(a1, 0LL);
    }
    v115 += (v10[7] | ((unsigned __int64)*((unsigned __int8 *)v10 + 33) << 32))
          - (v10[6] | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32))
          + 1;
    MiInsertVad(v10, Process, 2LL);
    v86 = *((unsigned int *)a1 + 13);
    LODWORD(v86) = v86 & 0x7FFFFFFF;
    v87 = 0x7FFFFFFFDLL;
    if ( (((unsigned __int64)*((unsigned __int8 *)a1 + 34) << 31) | v86) != 0x7FFFFFFFDLL )
    {
      if ( v79 != 64 )
      {
        v89 = v109;
        LOBYTE(v83) = v122;
        MiUnlockWorkingSetExclusive(v109, v83, v84, v85);
        v90 = 8
            * ((*((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v88 = ((__int64)(((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v90) >> 3)
            - MiCountSharedPages(a1, v90, ((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v91 = MiGetSharedVm(v89);
        v92 = ExAcquireSpinLockExclusive(v91);
        v91[1] = 0;
        v122 = v92;
        goto LABEL_138;
      }
      LOBYTE(v85) = v122;
      v87 = MiComputePageCommitment(
              (*((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32)) << 12,
              v80,
              (__int64)a1,
              v85,
              4,
              0LL);
    }
    v88 = v87;
LABEL_138:
    v27 = v88 & 0x7FFFFFFF;
    v93 = v27 | *((_DWORD *)a1 + 13) & 0x80000000;
    *((_DWORD *)a1 + 13) = v93;
    v22 = v88 >> 31;
    *((_BYTE *)a1 + 34) = v88 >> 31;
    v94 = v10[13] & 0x80000000;
    if ( (((unsigned __int64)(unsigned __int8)(v88 >> 31) << 31) | v93 & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
    {
      v26 = (unsigned int)v27 | v94;
    }
    else
    {
      v22 = (v57 - v88) >> 31;
      v26 = ((_DWORD)v57 - (_DWORD)v88) & 0x7FFFFFFF | v94;
    }
    v10[13] = v26;
    v28 = v10;
    *((_BYTE *)v10 + 34) = v22;
LABEL_73:
    v29 = (unsigned __int64)a1;
    goto LABEL_20;
  }
  v23 = v108;
  if ( v108 != 64 && v8 )
    MiGetProtoPteAddress(
      (__int64)a1,
      *((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32),
      0,
      &BugCheckParameter2);
  v24 = v18 - v20;
  if ( (((unsigned __int64)*((unsigned __int8 *)a1 + 34) << 31) | *((_DWORD *)a1 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
  {
    LOBYTE(v25) = v116;
  }
  else
  {
    v25 = v24 >> 31;
    v15 = v24 & 0x7FFFFFFF;
  }
  *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 13) & 0x80000000 | v15;
  *((_BYTE *)a1 + 34) = v25;
  MiAdvanceVadView(
    a1,
    ((a3 + 1) >> 12) - (*((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32)));
  if ( v23 != 64 && v8 )
    MiGetProtoPteAddress(
      (__int64)a1,
      *((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32),
      0,
      &v107);
  v28 = a1;
  v29 = 0LL;
LABEL_20:
  LOBYTE(v26) = v122;
  MiUnlockWorkingSetExclusive(v109, v26, v22, v27);
  MiDeleteVirtualAddresses(a2, a3, v110, v121);
  v30 = MiGetSharedVm(v109);
  ExAcquireSpinLockExclusive(v30);
  v30[1] = 0;
  if ( BugCheckParameter2 )
    MiDrainSystemAccessLog(v109);
  LOBYTE(v31) = v122;
  MiCaptureDeleteHierarchy(a2, a3, v31, &v111);
  LOBYTE(v32) = v122;
  MiUnlockWorkingSetExclusive(v109, v32, v33, v34);
  if ( !v29 )
  {
    v29 = *a1;
    v35 = a1;
    if ( *a1 )
    {
      for ( ; *(_QWORD *)(v29 + 8); v29 = *(_QWORD *)(v29 + 8) )
        ;
    }
    else
    {
      for ( i = a1[2]; ; i = *(_QWORD *)(v29 + 16) )
      {
        v29 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v29 || *(_QWORD **)(v29 + 8) == v35 )
          break;
        v35 = (_QWORD *)v29;
      }
    }
  }
  if ( !v28 )
  {
    v28 = (_QWORD *)a1[1];
    v62 = a1;
    if ( v28 )
    {
      for ( j = (_QWORD *)*v28; j; j = (_QWORD *)*j )
        v28 = j;
    }
    else
    {
      for ( k = a1[2]; ; k = v28[2] )
      {
        v28 = (_QWORD *)(k & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v28 || (_QWORD *)*v28 == v62 )
          break;
        v62 = v28;
      }
    }
  }
  if ( !a5 )
    MiClearVadBits(a2, a3, v29, v28);
  MiReturnPageTablePageCommitment(a2, a3, Process, v29, (__int64)v28, (__int64)a1, (__int64)&v111);
  v36 = Process + 888;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 888), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 888));
  v112 = 0;
  v37 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(Process + 888) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v37->ApcState.Process);
  else
    SessionId = -1;
  --v37->SpecialApcDisable;
  v39 = ++v37->AbAllocationRegionCount;
  v40 = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v41 = !_BitScanReverse((unsigned int *)&v42, v40);
    v114 = v42;
    if ( v41 )
      break;
    v43 = 1 << v42;
    v44 = v42;
    v45 = &v37->LockEntries[v44];
    v40 &= ~v43;
    if ( (v45->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v45->LockState.0 & 1) == 0
      && (*(_QWORD *)&v45->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v36 & 0x7FFFFFFFFFFFFFFCLL)
      && v45->LockState.SessionId == SessionId )
    {
      v45->AcquiredByte &= ~1u;
      if ( v45->LockState.0 )
      {
        if ( v45 )
        {
          v45->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v45->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v37->LockEntries[v44].TreeNode);
          v112 = v45->BoostBitmap.AllFields & 0x1FFFF;
          v45->BoostBitmap.AllFields &= 0xFFFE0000;
          v45->ThreadLocalFlags &= ~1u;
          v45->LockState.0 = 0LL;
          v46 = 1 << (((char *)v45 - (char *)v37 - 800) / 96);
          if ( v39 == 1 )
            v37->AbEntrySummary |= v46;
          else
            _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, v46);
          goto LABEL_45;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v37, v36, SessionId, 0LL);
LABEL_45:
  --v37->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v37, v36, &v112);
  v41 = v37->SpecialApcDisable++ == -1;
  if ( v41 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
    KiCheckForKernelApcDelivery(v48, v47);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( a5 )
  {
    MiReInsertPlaceholderVad(a5);
    MiUnlockNestedVad(a5);
  }
  if ( v10 && (v10[12] & 0x100000) == 0 )
  {
    v95 = (__int64 *)*((_QWORD *)v10 + 9);
    *((_QWORD *)v10 + 14) = Process | 1;
    MiManageSubsectionView(v95, (_QWORD *)v10 + 12, 3);
  }
  v49 = v20 - v121[2];
  v50 = v49 - v121[1];
  v120 = v49 - v121[1];
  if ( v49 )
    MiReturnFullProcessCharges(Process, v49);
  if ( v50 )
    MiReturnCommit(*(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(Process + 1454)), v50);
  if ( v108 != 64 )
    PsReturnProcessPagedPoolQuota((struct _KPROCESS *)Process, 8 * v115);
  v51 = v118;
  if ( v118 )
  {
    v96 = MiResidentPagesForSpan(
            (*((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32)) << 12,
            ((*((unsigned int *)a1 + 7) | ((unsigned __int64)*((unsigned __int8 *)a1 + 33) << 32)) << 12) | 0xFFF,
            0LL);
    if ( v96 < v51 )
    {
      v97 = v51 - v96;
      v98 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(Process + 1454));
      if ( (ULONG_PTR *)v98 == &MiSystemPartition )
        MiReturnResidentAvailable(v97);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v98 + 8128), v97);
    }
  }
  MiFinishVadDeletion((unsigned int *)a1, a2, a3, a5 != 0, 0LL);
  v52 = BugCheckParameter2;
  if ( BugCheckParameter2 && BugCheckParameter2 != v107 )
  {
    v99 = v113;
    v100 = 0LL;
    v101 = *(_QWORD *)(v113 + 64) != 0LL;
    v102 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v113 + 72));
    do
    {
      v103 = MiDecrementSubsections(v52, v52, 8u);
      v52 = *(_QWORD *)(v52 + 16);
      v100 += v103;
    }
    while ( v52 != v107 );
    BugCheckParameter2 = v52;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v99 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v102 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v102);
    if ( v100 )
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(v99 + 60) & 0x3FF)),
        v101,
        v100);
  }
  return 0LL;
}
