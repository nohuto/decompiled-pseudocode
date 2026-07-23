/*
 * XREFs of MiDeletePartialVad @ 0x1400ABFA8
 * Callers:
 *     MiFreeVadRange @ 0x1400ABCD8 (MiFreeVadRange.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     MiReturnFullProcessCharges @ 0x14001F9A0 (MiReturnFullProcessCharges.c)
 *     MiComputePageCommitment @ 0x140020D00 (MiComputePageCommitment.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiFinishVadDeletion @ 0x140056B50 (MiFinishVadDeletion.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     PsReturnProcessPagedPoolQuota @ 0x14005B090 (PsReturnProcessPagedPoolQuota.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiDecrementSubsections @ 0x1400715F0 (MiDecrementSubsections.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiManageSubsectionView @ 0x140074E60 (MiManageSubsectionView.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiClearVadBits @ 0x1400AC6E8 (MiClearVadBits.c)
 *     MiCaptureDeleteHierarchy @ 0x1400AC9BC (MiCaptureDeleteHierarchy.c)
 *     MiDeleteVirtualAddresses @ 0x1400ACAAC (MiDeleteVirtualAddresses.c)
 *     MiLocateLockedVadEvent @ 0x1400ACF18 (MiLocateLockedVadEvent.c)
 *     MiAdvanceVadView @ 0x1400ACF34 (MiAdvanceVadView.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiCountSharedPages @ 0x1401007A0 (MiCountSharedPages.c)
 *     MiDrainSystemAccessLog @ 0x14012F468 (MiDrainSystemAccessLog.c)
 *     MiInsertVad @ 0x14015A7D0 (MiInsertVad.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiUpControlAreaRefs @ 0x1402BA800 (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x1402DEDC0 (MiReInsertPlaceholderVad.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReturnPageTablePageCommitment @ 0x1406058B0 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveSharedCommitNode @ 0x1406086F0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140608960 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MiResidentPagesForSpan @ 0x1406E2F40 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x1406EA100 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x1406F01E0 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x14088B224 (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x14089922C (MiCreatePlaceholderStorage.c)
 *     MiLockNestedVad @ 0x14089B8A0 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14089B8BC (MiUnlockNestedVad.c)
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
  __int64 v47; // rcx
  __int64 v48; // r12
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rbx
  ULONG_PTR v51; // rbx
  __int64 i; // r15
  LONG *SharedVm; // rbx
  __int16 v55; // r9
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // rax
  __int64 v58; // rbx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rcx
  _QWORD *v61; // rcx
  __int64 k; // r14
  _QWORD *j; // rax
  __int64 *v64; // rax
  __int64 v65; // rdx
  unsigned int *PoolWithTag; // rax
  int PlaceholderStorage; // ebx
  __int64 v68; // rax
  unsigned int v69; // edx
  char v70; // al
  unsigned __int64 v71; // r14
  __int64 v72; // r14
  unsigned int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rcx
  LONG *v76; // rbx
  KIRQL v77; // al
  __int64 v78; // rbx
  unsigned __int64 v79; // r15
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // rax
  unsigned __int64 v87; // r15
  __int64 v88; // r13
  unsigned __int64 v89; // rbx
  LONG *v90; // rbx
  KIRQL v91; // al
  int v92; // ecx
  unsigned int v93; // edx
  __int64 *v94; // rcx
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rbx
  __int64 v97; // r8
  __int64 v98; // r13
  __int64 v99; // rdi
  BOOL v100; // r15d
  KIRQL v101; // si
  __int64 v102; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 Process; // [rsp+48h] [rbp-A1h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-99h] BYREF
  __int64 v106; // [rsp+58h] [rbp-91h] BYREF
  __int64 v107; // [rsp+60h] [rbp-89h]
  __int64 v108; // [rsp+68h] [rbp-81h]
  unsigned int v109; // [rsp+70h] [rbp-79h]
  int v110; // [rsp+74h] [rbp-75h] BYREF
  int v111; // [rsp+78h] [rbp-71h] BYREF
  __int64 v112; // [rsp+80h] [rbp-69h]
  int v113; // [rsp+88h] [rbp-61h]
  unsigned __int64 v114; // [rsp+90h] [rbp-59h]
  unsigned __int64 v115; // [rsp+98h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-49h]
  __int64 v117; // [rsp+A8h] [rbp-41h]
  __int64 v118; // [rsp+B0h] [rbp-39h]
  __int64 v119; // [rsp+B8h] [rbp-31h]
  _QWORD v120[15]; // [rsp+C0h] [rbp-29h] BYREF
  KIRQL v121; // [rsp+148h] [rbp+5Fh]

  v6 = a2;
  v110 = 0;
  memset(v120, 0, 0x30uLL);
  BugCheckParameter2 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v8 = 0;
  v106 = 0LL;
  v112 = 0LL;
  v109 = 0;
  v9 = (a3 - v6 + 1) >> 12;
  v10 = 0LL;
  v114 = v9;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v108 = Process + 1280;
  v12 = *((_DWORD *)a1 + 12);
  if ( (v12 & 0x100000) != 0 )
  {
    v13 = 64LL;
    v107 = 64LL;
    v14 = 8;
    if ( (v12 & 0x70) != 0x40 )
      v14 = 0;
    v109 = v14;
  }
  else
  {
    v64 = (__int64 *)a1[9];
    v13 = 136LL;
    v107 = 136LL;
    v65 = *v64;
    v112 = v65;
    if ( *(_QWORD *)(v65 + 64) )
    {
      if ( (__int64)a1[15] < 0 )
        return 3221225505LL;
      v8 = (*(_DWORD *)(v65 + 56) & 0x420) == 0;
    }
  }
  LOBYTE(v6) = 15;
  v115 = v6;
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
    v68 = *((unsigned int *)a1 + 13);
    LODWORD(v68) = v68 & 0x7FFFFFFF;
    v69 = v10[13] & 0x80000000;
    if ( (v68 | ((unsigned __int64)*((unsigned __int8 *)a1 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      v70 = 15;
      v69 |= 0x7FFFFFFDu;
    }
    else
    {
      v70 = 0;
    }
    v10[13] = v69;
    *((_BYTE *)v10 + 34) = v70;
    *((_QWORD *)v10 + 5) = 0LL;
    v71 = ((a3 + 1) >> 12) - (*((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32));
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
    MiAdvanceVadView(v10, v71);
    MiUnlockNestedVad(v10);
    v72 = v107;
    if ( v107 != 64 )
    {
      v73 = v10[16] & 0xFDFFFFFF;
      v74 = v112;
      *((_QWORD *)v10 + 15) = 0LL;
      v10[16] = v73;
      PlaceholderStorage = MiInsertSharedCommitNode(v74, Process, 0LL);
      if ( PlaceholderStorage < 0 )
        goto LABEL_105;
      v11 = 1;
    }
    PlaceholderStorage = MiInsertVadCharges(v10, Process);
    if ( PlaceholderStorage >= 0 )
    {
      v75 = *(_QWORD *)(Process + 1296);
      if ( v72 == 64 )
      {
        if ( MiVadPageSizes[(v10[12] >> 18) & 3] == 16 )
          ++*(_QWORD *)(v75 + 424);
      }
      else
      {
        if ( *((_QWORD *)v10 + 16) )
        {
          ObfReferenceObjectWithTag(*((PVOID *)v10 + 16), 0x746C6644u);
        }
        else if ( MiVadPageSizes[(v10[12] >> 18) & 3] == 16 )
        {
          ++*(_QWORD *)(v75 + 432);
        }
        MiUpControlAreaRefs(v10, 1LL);
      }
      goto LABEL_6;
    }
    if ( v11 )
      MiRemoveSharedCommitNode(v112, Process, 0LL);
    goto LABEL_105;
  }
LABEL_6:
  v16 = *((_DWORD *)a1 + 12);
  v117 = 0LL;
  if ( (v16 & 0x70) == 0x10 || (v16 & 0x70) == 0x40 || (v16 & 0x70) == 0x30 )
    v117 = MiResidentPagesForSpan(
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
    if ( v107 == 64 )
    {
      SharedVm = MiGetSharedVm(v108);
      LOBYTE(v55) = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v121 = v55;
      v20 = MiComputePageCommitment(a2, a3, (__int64)a1, v55, 4, 0LL);
    }
    else
    {
      v20 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
          - MiCountSharedPages(
              a1,
              ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
          + 1;
      v76 = MiGetSharedVm(v108);
      v77 = ExAcquireSpinLockExclusive(v76);
      v76[1] = 0;
      v121 = v77;
    }
  }
  else
  {
    v19 = 0LL;
    if ( v18 != 0x7FFFFFFFDLL )
      v19 = v18;
    v20 = 0LL;
    v18 = v19;
    v21 = MiGetSharedVm(v108);
    v121 = ExAcquireSpinLockExclusive(v21);
    v21[1] = 0;
  }
  v22 = 1LL;
  if ( a4 != 1 )
  {
    v56 = v18 - v20;
    if ( a4 == 2 )
    {
      v27 = 0x7FFFFFFFLL;
      v26 = *((_DWORD *)a1 + 13) & 0x80000000;
      if ( (((unsigned __int64)*((unsigned __int8 *)a1 + 34) << 31) | *((_DWORD *)a1 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
      {
        LOBYTE(v57) = v115;
      }
      else
      {
        v57 = v56 >> 31;
        v15 = v56 & 0x7FFFFFFF;
      }
      v58 = v107;
      *((_DWORD *)a1 + 13) = v26 | v15;
      *((_BYTE *)a1 + 34) = v57;
      if ( v58 != 64 && v8 )
      {
        MiGetProtoPteAddress(
          a1,
          *((unsigned int *)a1 + 7) | ((unsigned __int64)*((unsigned __int8 *)a1 + 33) << 32),
          0LL,
          &v106);
        v22 = 1LL;
        v106 = *(_QWORD *)(v106 + 16);
      }
      v59 = (a2 - 1) >> 44;
      v60 = (a2 - 1) >> 12;
      *((_DWORD *)a1 + 7) = v60;
      *((_BYTE *)a1 + 33) = v59;
      if ( v58 != 64 && v8 )
      {
        MiGetProtoPteAddress(
          a1,
          (unsigned int)v60 | ((unsigned __int64)(unsigned __int8)v59 << 32),
          0LL,
          &BugCheckParameter2);
        BugCheckParameter2 = *(_QWORD *)(BugCheckParameter2 + 16);
        MiAdvanceVadView(a1, 0LL);
      }
      v28 = 0LL;
      goto LABEL_73;
    }
    v78 = v107;
    if ( v107 != 64 && v8 )
    {
      MiGetProtoPteAddress(
        a1,
        *((unsigned int *)a1 + 7) | ((unsigned __int64)*((unsigned __int8 *)a1 + 33) << 32),
        0LL,
        &v106);
      v106 = *(_QWORD *)(v106 + 16);
    }
    v79 = a2 - 1;
    v80 = (a2 - 1) >> 12;
    v81 = (a2 - 1) >> 44;
    *((_DWORD *)a1 + 7) = v80;
    *((_BYTE *)a1 + 33) = v81;
    if ( v78 != 64 && v8 )
    {
      MiGetProtoPteAddress(
        a1,
        (unsigned int)v80 | ((unsigned __int64)(unsigned __int8)v81 << 32),
        0LL,
        &BugCheckParameter2);
      BugCheckParameter2 = *(_QWORD *)(BugCheckParameter2 + 16);
      MiAdvanceVadView(a1, 0LL);
    }
    v114 += (v10[7] | ((unsigned __int64)*((unsigned __int8 *)v10 + 33) << 32))
          - (v10[6] | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32))
          + 1;
    MiInsertVad(v10, Process, 2LL);
    v85 = *((unsigned int *)a1 + 13);
    LODWORD(v85) = v85 & 0x7FFFFFFF;
    v86 = 0x7FFFFFFFDLL;
    if ( (((unsigned __int64)*((unsigned __int8 *)a1 + 34) << 31) | v85) != 0x7FFFFFFFDLL )
    {
      if ( v78 != 64 )
      {
        v88 = v108;
        LOBYTE(v82) = v121;
        MiUnlockWorkingSetExclusive(v108, v82, v83, v84);
        v89 = 8
            * ((*((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v87 = ((__int64)(((v79 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v89) >> 3)
            - MiCountSharedPages(a1, v89, ((v79 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v90 = MiGetSharedVm(v88);
        v91 = ExAcquireSpinLockExclusive(v90);
        v90[1] = 0;
        v121 = v91;
        goto LABEL_138;
      }
      LOBYTE(v84) = v121;
      v86 = MiComputePageCommitment(
              (*((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32)) << 12,
              v79,
              (__int64)a1,
              v84,
              4,
              0LL);
    }
    v87 = v86;
LABEL_138:
    v27 = v87 & 0x7FFFFFFF;
    v92 = v27 | *((_DWORD *)a1 + 13) & 0x80000000;
    *((_DWORD *)a1 + 13) = v92;
    v22 = v87 >> 31;
    *((_BYTE *)a1 + 34) = v87 >> 31;
    v93 = v10[13] & 0x80000000;
    if ( (((unsigned __int64)(unsigned __int8)(v87 >> 31) << 31) | v92 & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
    {
      v26 = (unsigned int)v27 | v93;
    }
    else
    {
      v22 = (v56 - v87) >> 31;
      v26 = ((_DWORD)v56 - (_DWORD)v87) & 0x7FFFFFFF | v93;
    }
    v10[13] = v26;
    v28 = v10;
    *((_BYTE *)v10 + 34) = v22;
LABEL_73:
    v29 = (unsigned __int64)a1;
    goto LABEL_20;
  }
  v23 = v107;
  if ( v107 != 64 && v8 )
    MiGetProtoPteAddress(
      a1,
      *((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32),
      0LL,
      &BugCheckParameter2);
  v24 = v18 - v20;
  if ( (((unsigned __int64)*((unsigned __int8 *)a1 + 34) << 31) | *((_DWORD *)a1 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
  {
    LOBYTE(v25) = v115;
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
      a1,
      *((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32),
      0LL,
      &v106);
  v28 = a1;
  v29 = 0LL;
LABEL_20:
  LOBYTE(v26) = v121;
  MiUnlockWorkingSetExclusive(v108, v26, v22, v27);
  MiDeleteVirtualAddresses(a2, a3, v109, v120);
  v30 = MiGetSharedVm(v108);
  ExAcquireSpinLockExclusive(v30);
  v30[1] = 0;
  if ( BugCheckParameter2 )
    MiDrainSystemAccessLog(v108);
  LOBYTE(v31) = v121;
  MiCaptureDeleteHierarchy(a2, a3, v31, &v110);
  LOBYTE(v32) = v121;
  MiUnlockWorkingSetExclusive(v108, v32, v33, v34);
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
    v61 = a1;
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
        if ( !v28 || (_QWORD *)*v28 == v61 )
          break;
        v61 = v28;
      }
    }
  }
  if ( !a5 )
    MiClearVadBits(a2, a3, v29, v28);
  MiReturnPageTablePageCommitment(a2, a3, Process, v29, (__int64)v28, (__int64)a1, (__int64)&v110);
  v36 = Process + 888;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 888), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 888));
  v111 = 0;
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
    v113 = v42;
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
          v111 = v45->BoostBitmap.AllFields & 0x1FFFF;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v37, v36, &v111);
  v41 = v37->SpecialApcDisable++ == -1;
  if ( v41 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
    KiCheckForKernelApcDelivery(v47);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( a5 )
  {
    MiReInsertPlaceholderVad(a5);
    MiUnlockNestedVad(a5);
  }
  if ( v10 && (v10[12] & 0x100000) == 0 )
  {
    v94 = (__int64 *)*((_QWORD *)v10 + 9);
    *((_QWORD *)v10 + 14) = Process | 1;
    MiManageSubsectionView(v94, (_QWORD *)v10 + 12, 3);
  }
  v48 = v20 - v120[2];
  v49 = v48 - v120[1];
  v119 = v48 - v120[1];
  if ( v48 )
    MiReturnFullProcessCharges(Process, v48);
  if ( v49 )
    MiReturnCommit(*(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(Process + 1454)), v49);
  if ( v107 != 64 )
    PsReturnProcessPagedPoolQuota((struct _KPROCESS *)Process, 8 * v114);
  v50 = v117;
  if ( v117 )
  {
    v95 = MiResidentPagesForSpan(
            (*((unsigned int *)a1 + 6) | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32)) << 12,
            ((*((unsigned int *)a1 + 7) | ((unsigned __int64)*((unsigned __int8 *)a1 + 33) << 32)) << 12) | 0xFFF,
            0LL);
    if ( v95 < v50 )
    {
      v96 = v50 - v95;
      v97 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(Process + 1454));
      if ( (ULONG_PTR *)v97 == &MiSystemPartition )
        MiReturnResidentAvailable(v96);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v97 + 8128), v96);
    }
  }
  MiFinishVadDeletion((unsigned int *)a1, a2, a3, a5 != 0, 0LL);
  v51 = BugCheckParameter2;
  if ( BugCheckParameter2 && BugCheckParameter2 != v106 )
  {
    v98 = v112;
    v99 = 0LL;
    v100 = *(_QWORD *)(v112 + 64) != 0LL;
    v101 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v112 + 72));
    do
    {
      v102 = MiDecrementSubsections(v51, v51, 8u);
      v51 = *(_QWORD *)(v51 + 16);
      v99 += v102;
    }
    while ( v51 != v106 );
    BugCheckParameter2 = v51;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v98 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v101 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v101);
    if ( v99 )
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(v98 + 60) & 0x3FF)),
        v100,
        v99);
  }
  return 0LL;
}
