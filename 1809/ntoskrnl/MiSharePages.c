/*
 * XREFs of MiSharePages @ 0x1400846D0
 * Callers:
 *     MiProcessCrcList @ 0x140620320 (MiProcessCrcList.c)
 * Callees:
 *     KeForceAttachProcess @ 0x14001674C (KeForceAttachProcess.c)
 *     MiProtectionToCacheAttribute @ 0x14002BD80 (MiProtectionToCacheAttribute.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiMakeCombineCandidateClean @ 0x140082B7C (MiMakeCombineCandidateClean.c)
 *     MiCrcStillIntact @ 0x140082C44 (MiCrcStillIntact.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiIsStoreProcess @ 0x1400837DC (MiIsStoreProcess.c)
 *     MiFlushTbListEarly @ 0x1400854CC (MiFlushTbListEarly.c)
 *     MiRecheckVaVm @ 0x140085560 (MiRecheckVaVm.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiAllocateCombineProto @ 0x14009B7E0 (MiAllocateCombineProto.c)
 *     MiCombineCandidate @ 0x1400B2610 (MiCombineCandidate.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     MiPrepareAttachThread @ 0x1400EEABC (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1400EEB1C (MiAttachThreadDone.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiPerformCombineScan @ 0x140101DE0 (MiPerformCombineScan.c)
 *     MiComputeHash64 @ 0x140101E70 (MiComputeHash64.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiMapArbitraryPage @ 0x14010EA90 (MiMapArbitraryPage.c)
 *     MiReleaseArbitraryPage @ 0x140111CF0 (MiReleaseArbitraryPage.c)
 *     MiConfirmPageIsZero @ 0x1401122E0 (MiConfirmPageIsZero.c)
 *     MiDereferenceCombineBlock @ 0x14011FA1C (MiDereferenceCombineBlock.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiPageMightBeZero @ 0x14012596C (MiPageMightBeZero.c)
 *     KeForceDetachProcess @ 0x140128044 (KeForceDetachProcess.c)
 *     MiIncrementCombineMdl @ 0x14012E954 (MiIncrementCombineMdl.c)
 *     MiConvertStandbyToProto @ 0x14013EB50 (MiConvertStandbyToProto.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHashIsCommon @ 0x1402CC1A8 (MiHashIsCommon.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSharePages(__int64 a1, _QWORD *a2, __int64 **a3, __int64 *a4, int a5)
{
  _QWORD *v5; // r12
  __int64 v7; // rsi
  int v8; // eax
  _QWORD *v9; // r8
  unsigned __int64 v10; // rcx
  int *v11; // r14
  _QWORD *v12; // r15
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rdi
  ULONG_PTR v16; // rdi
  unsigned __int8 OldIrql; // bl
  int v18; // eax
  char v19; // r12
  unsigned __int8 v20; // bl
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  int v26; // eax
  char v27; // si
  bool v28; // bl
  __int64 *v29; // r13
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r14
  __int64 v32; // rbx
  unsigned __int64 valid; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  ULONG_PTR BugCheckParameter2; // rbx
  int v39; // r12d
  char v40; // r10
  unsigned int v41; // esi
  bool v42; // di
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 Address; // rax
  __int64 *v49; // rbx
  int i; // edi
  __int64 v51; // rsi
  _QWORD *v52; // rdi
  ULONG_PTR v53; // rbx
  unsigned __int8 v54; // si
  __int64 v55; // r14
  __int64 result; // rax
  _QWORD *v57; // rbx
  unsigned int v58; // edi
  __int64 v59; // r12
  __int64 v60; // rsi
  __int64 v61; // r14
  unsigned __int64 v62; // rbx
  _QWORD *v63; // rax
  __int64 v64; // r12
  __int64 v65; // rbx
  KIRQL v66; // al
  bool v67; // r8
  KIRQL v68; // di
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  __int64 v73; // rbx
  __int64 CombineProto; // rax
  int IsZero; // eax
  __int64 v76; // rax
  char v77; // r13
  unsigned __int64 v78; // r14
  bool v79; // zf
  _QWORD *v80; // r14
  __int64 *v81; // rcx
  __int64 v82; // r12
  __int64 v83; // r10
  __int64 v84; // r13
  __int64 v85; // r14
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  int *PoolWithTag; // rax
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  struct _KPRCB *v96; // rcx
  struct _KPRCB *v97; // rcx
  _QWORD *v98; // rbx
  char v99; // [rsp+40h] [rbp-C0h]
  char v100; // [rsp+45h] [rbp-BBh]
  unsigned __int64 v101; // [rsp+48h] [rbp-B8h]
  _QWORD *v102; // [rsp+50h] [rbp-B0h]
  __int64 *v104; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v105; // [rsp+68h] [rbp-98h]
  int v106; // [rsp+6Ch] [rbp-94h]
  unsigned int v107; // [rsp+70h] [rbp-90h]
  unsigned int v108; // [rsp+74h] [rbp-8Ch]
  __int64 v109; // [rsp+78h] [rbp-88h]
  __int64 v110; // [rsp+80h] [rbp-80h]
  int v111; // [rsp+88h] [rbp-78h]
  int *v112; // [rsp+90h] [rbp-70h]
  __int64 v113; // [rsp+98h] [rbp-68h]
  _QWORD *v114; // [rsp+A0h] [rbp-60h]
  int v115; // [rsp+A8h] [rbp-58h]
  int v116; // [rsp+ACh] [rbp-54h]
  __int64 v118; // [rsp+B8h] [rbp-48h]
  __int64 v119; // [rsp+C0h] [rbp-40h]
  __int64 *v120; // [rsp+C0h] [rbp-40h]
  int v121[2]; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v122; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v123; // [rsp+D0h] [rbp-30h]
  int v124; // [rsp+D8h] [rbp-28h] BYREF
  int v125; // [rsp+DCh] [rbp-24h] BYREF
  __int64 v126; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v127; // [rsp+E8h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-10h]
  ULONG_PTR v129; // [rsp+F8h] [rbp-8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v131; // [rsp+118h] [rbp+18h] BYREF
  __int64 v132[4]; // [rsp+120h] [rbp+20h] BYREF
  int v133; // [rsp+140h] [rbp+40h] BYREF
  __int16 v134; // [rsp+144h] [rbp+44h]
  __int64 v135; // [rsp+148h] [rbp+48h]
  __int64 v136; // [rsp+150h] [rbp+50h]
  __int64 v137; // [rsp+158h] [rbp+58h]
  _BYTE v138[48]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE P[208]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD *v140; // [rsp+300h] [rbp+200h]
  _QWORD *v141; // [rsp+320h] [rbp+220h]
  _QWORD v142[4]; // [rsp+340h] [rbp+240h] BYREF
  _QWORD *v143; // [rsp+360h] [rbp+260h] BYREF

  v5 = *(_QWORD **)(a1 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = a2[4];
  *(_QWORD *)v121 = *(_QWORD *)(a1 + 16);
  v108 = *(_DWORD *)(a1 + 52);
  v110 = *a4;
  v114 = v5;
  v107 = 0;
  v113 = 0LL;
  v109 = v7;
  v8 = MiTbFlushType(v7);
  v10 = a2[3];
  v11 = (int *)P;
  v12 = (_QWORD *)a2[6];
  v13 = (int)v9;
  v111 = v8;
  v127 = v14 + 56;
  v106 = (int)v9;
  v112 = (int *)P;
  if ( v10 > 0x14 )
  {
    v15 = 509LL;
    if ( v10 < 0x1FD )
      v15 = v10;
    PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v15 + 24, 0x73576D4Du);
    v9 = 0LL;
    v112 = PoolWithTag;
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v11 = (int *)P;
      LODWORD(v15) = 20;
      v112 = (int *)P;
    }
  }
  else
  {
    LODWORD(v15) = v10;
  }
  *v11 = v111;
  v11[3] = (int)v9;
  *((_WORD *)v11 + 2) = v13;
  *((_QWORD *)v11 + 2) = v9;
  v11[2] = v15;
  *((_QWORD *)v11 + 3) = v9;
  v16 = a2[5];
  v129 = v16;
  if ( v16 && (_KPROCESS *)v16 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
    v106 = MiPrepareAttachThread(v16, v16 + 1280);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    v18 = v106;
    if ( !v106 )
      goto LABEL_67;
    KeForceAttachProcess(v16, (__int64)v138);
    v9 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 2 )
  {
    v19 = 0;
    v140 = v9;
    v100 = 0;
    v141 = v9;
    v20 = 0;
    v142[0] = v9;
    v143 = v9;
    v101 = (unsigned __int64)v9;
    v105 = MiLockWorkingSetShared(v7);
    v23 = v105;
    if ( v16
      && ((*(_DWORD *)(v16 + 772) & 0xC00u) < 0xC00
       || *(_QWORD *)(v7 + 104)
       || (unsigned int)MiIsStoreProcess(v16)
       || (*(_DWORD *)(v16 + 2084) & 0x1000) != 0) )
    {
      MiUnlockWorkingSetShared(v7, v23);
      KiLeaveCriticalRegionUnsafe(CurrentThread);
      goto LABEL_66;
    }
    v24 = v101;
    while ( 1 )
    {
      v25 = v20;
      v26 = v13 + 1;
      v27 = 0;
      v28 = 0;
      if ( (_BYTE)v25 != 1 )
        v27 = v25;
      v13 = 0;
      v99 = v27;
      if ( (_BYTE)v25 != 1 )
        v13 = v26;
      v116 = v13;
      if ( v19 )
      {
        v28 = 1;
        v100 = 0;
      }
      else if ( (v13 & 7) != 0 )
      {
        v28 = KeShouldYieldProcessor() || (unsigned int)MiFlushTbListEarly(v11, 2LL) != 0;
      }
      else if ( (unsigned int)MiWorkingSetIsContended(v109) )
      {
        v28 = 1;
      }
      else if ( v24 && (unsigned int)MiPageTableLockIsContended(v22, v24) )
      {
        v28 = 1;
      }
      if ( !v12 )
        break;
      if ( v28 )
        goto LABEL_49;
      v29 = (__int64 *)v12[3];
      v30 = v12[1];
      v102 = (_QWORD *)v12[2];
      v118 = *v12;
      v122 = v30;
      v104 = v29;
      if ( (unsigned int)v29 >= 0x100 )
      {
        v115 = v29[5] & 0x1F;
      }
      else
      {
        v115 = v12[3];
        v29 = 0LL;
        v104 = 0LL;
      }
      v21 = 0xFFFFF68000000000uLL;
      v22 = 0x7FFFFFFFF8LL;
      v31 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v119 = v31;
      v32 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v101 == v32 )
      {
LABEL_30:
        if ( (unsigned int)MiRecheckVaVm(v25, v30) )
        {
          v34 = MI_READ_PTE_LOCK_FREE(((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v126 = v34;
          if ( (v34 & 1) != 0 )
          {
            v35 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v126);
            v37 = 6 * ((v35 >> 12) & 0xFFFFFFFFFLL);
            if ( (*(_QWORD *)(48 * ((v35 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
            {
              BugCheckParameter2 = 48 * ((v35 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
              v124 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v124, v37, v36);
                while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
              }
LABEL_34:
              v39 = MiCombineCandidate(v110, v108, BugCheckParameter2);
              if ( v39 )
              {
                v40 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
                v41 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
                if ( (v108 & 4) != 0 && !(unsigned int)MiHashIsCommon(a1, v118) )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  goto LABEL_148;
                }
                if ( *(_QWORD *)(BugCheckParameter2 + 40) >> 58 != a5 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  MiDereferenceCombineBlock(a3);
                  goto LABEL_76;
                }
                v42 = 0;
                _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v40 == 6 )
                {
                  if ( v31 == (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) )
                  {
                    v43 = *(_QWORD *)(BugCheckParameter2 + 40);
                    if ( (v43 & 0x200000000000000LL) == 0 && (*(_BYTE *)(BugCheckParameter2 + 35) & 8) == 0 )
                    {
                      v44 = v43 & 0xFFFFFFFFFLL;
                      if ( v44 != 0xFFFFFFFFDLL
                        && (MiGetWsleContents(v44, v122) & 0xF) != 8
                        && *(_WORD *)(BugCheckParameter2 + 32) == 1 )
                      {
                        v47 = 0LL;
                        if ( v39 != 1
                          || (Address = MiLocateAddress(v122), (v47 = Address) != 0)
                          && (v46 = *(unsigned int *)(Address + 48),
                              v45 = (unsigned int)(1 << (*(_BYTE *)(Address + 48) & 7)),
                              (v45 & 0x55) != 0 && (v46 & 0x40000) == 0) )
                        {
                          v58 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
                          if ( v58 == v115 )
                          {
                            if ( (v126 & 0x42) != 0 )
                            {
                              if ( v107 < 8 )
                              {
                                v57 = v142;
                                goto LABEL_75;
                              }
                              MiMakeCombineCandidateClean(v31, v47);
                              v134 = 0;
                              v136 = 0LL;
                              v137 = 0LL;
                              v135 = 1LL;
                              v133 = v111;
                              MiInsertTbFlushEntry(&v133, v122, 1LL);
                              MiFlushTbList(&v133, v90, v91, v92);
                              v59 = v118;
                            }
                            else
                            {
                              v59 = v118;
                              if ( v118 != qword_14043B790 )
                                goto LABEL_85;
                              if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x18) == 0
                                && (v126 & 0x20) != 0
                                && v107 < 3 )
                              {
                                v57 = &v143;
LABEL_75:
                                MiInsertTbFlushEntry(v112, v122, 1LL);
                                v12[2] = *v57;
                                *v57 = v12;
LABEL_76:
                                v24 = v101;
                                goto LABEL_77;
                              }
                            }
                            if ( v59 == qword_14043B790
                              && (unsigned int)MiPageMightBeZero(v109, BugCheckParameter2, v31, v47) )
                            {
                              v125 = 0;
                              while ( _interlockedbittestandset64(
                                        (volatile signed __int32 *)(BugCheckParameter2 + 24),
                                        0x3FuLL) )
                              {
                                do
                                  KeYieldProcessorEx(&v125, v45, v46);
                                while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
                              }
                              IsZero = MiConfirmPageIsZero(BugCheckParameter2);
                              _InterlockedAnd64(
                                (volatile signed __int64 *)(BugCheckParameter2 + 24),
                                0x7FFFFFFFFFFFFFFFuLL);
                              if ( IsZero )
                              {
                                v136 = 0LL;
                                v137 = 0LL;
                                v135 = 1LL;
                                v133 = v111;
                                v134 = 4;
                                MiInsertTbFlushEntry(&v133, v122, 1LL);
                                MiFreeWsleList(v109, &v133, 0LL);
                                ++v113;
                                ++v114[1];
                                MiDereferenceCombineBlock(a3);
                                goto LABEL_76;
                              }
                            }
LABEL_85:
                            if ( (v58 & 0x18) != 0 )
                              v99 = 1;
                            v60 = -1LL;
                            if ( v29 )
                            {
                              LODWORD(v61) = 3;
                            }
                            else
                            {
                              if ( MiComputeHash64(v122, v45, v46, v47) != v59 )
                                goto LABEL_76;
                              v61 = (int)MiProtectionToCacheAttribute(v58);
                              v73 = *(_QWORD *)(v127 + 8 * v61);
                              if ( !v73 || *(_DWORD *)(v73 + 44) >= *(_DWORD *)(v73 + 40) )
                                goto LABEL_76;
                              CombineProto = MiAllocateCombineProto(v110, v59, v58, 0LL);
                              v104 = (__int64 *)CombineProto;
                              v29 = (__int64 *)CombineProto;
                              if ( CombineProto )
                              {
                                v12[3] = CombineProto;
                              }
                              else
                              {
                                v29 = *a3;
                                v104 = *a3;
                                v76 = **a3;
                                if ( (__int64 **)(*a3)[1] != a3 || *(__int64 **)(v76 + 8) != v29 )
                                  goto LABEL_209;
                                *a3 = (__int64 *)v76;
                                *(_QWORD *)(v76 + 8) = a3;
                                *((_DWORD *)v29 + 10) = v58 | v29[5] & 0xFFFFFFE0;
                                v60 = *(_QWORD *)(v73 + 8 * ((unsigned __int64)*(unsigned int *)(v73 + 44) >> 12) + 48);
                              }
                            }
                            v62 = MiConvertPrivateToProto(v109, v119, (__int64)v29, v47, v110, (__int64)v112, v60);
                            if ( v62 )
                            {
                              ++v114[1];
                              if ( v60 == -1 )
                              {
                                ++v113;
                                v104 = 0LL;
                              }
                              else
                              {
                                MiIncrementCombineMdl(a1, (unsigned int)v61);
                              }
                              v63 = v140;
                              v12[1] = v62;
                              v42 = v60 != -1;
                              v12[2] = v63;
                              v140 = v12;
LABEL_93:
                              if ( v42 )
                              {
                                v104[3] = v59;
                                v64 = v59 & 0xF;
                                v65 = 16LL * (unsigned int)v64;
                                v66 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v65 + v110 + 104));
                                v67 = 0;
                                v68 = v66;
                                v69 = *(_QWORD *)(v110 + 16 * (v64 + 6));
                                if ( v69 )
                                {
                                  v70 = v104[3];
                                  while ( 1 )
                                  {
                                    v71 = *(_QWORD *)(v69 + 24);
                                    if ( v70 <= v71
                                      && (v70 < v71 || ((_DWORD)v104[5] & 0x1Fu) < (*(_DWORD *)(v69 + 40) & 0x1Fu)) )
                                    {
                                      v72 = *(_QWORD *)v69;
                                      if ( !*(_QWORD *)v69 )
                                      {
                                        v67 = 0;
                                        break;
                                      }
                                    }
                                    else
                                    {
                                      v72 = *(_QWORD *)(v69 + 8);
                                      if ( !v72 )
                                      {
                                        v67 = 1;
                                        break;
                                      }
                                    }
                                    v69 = v72;
                                  }
                                }
                                RtlAvlInsertNodeEx((unsigned __int64 *)(v110 + 16 * (v64 + 6)), v69, v67, v104);
                                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v65 + v110 + 104));
                                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v68 < 2u )
                                {
                                  v96 = KeGetCurrentPrcb();
                                  _InterlockedAnd((volatile signed __int32 *)v96->SchedulerAssist, 0xFFFEFFFF);
                                  KiRemoveSystemWorkPriorityKick(v96);
                                }
                                __writecr8(v68);
                              }
                              goto LABEL_76;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_148;
                }
                v77 = 0;
                v78 = ((unsigned __int64)MiGetUltraMapping((unsigned __int64 *)(a1 + 200), 3u, 1LL, 0) >> 9) & 0x7FFFFFFFF8LL;
                v79 = v78 == 0x98000000000LL;
                v80 = (_QWORD *)(v78 - 0x98000000000LL);
                v123 = (unsigned __int64)v80;
                if ( v79 )
                  goto LABEL_148;
                *(_QWORD *)(*(_QWORD *)v121 + 72LL) = v80;
                *(_QWORD *)(*(_QWORD *)v121 + 64LL) = BugCheckParameter2;
                if ( !(unsigned int)MiMapArbitraryPage(v110, v121[0], v108, v39, 1) )
                {
                  if ( MiPteInShadowRange((unsigned __int64)v80) )
                  {
                    if ( (unsigned int)MiPteHasShadow(v95, v94) )
                    {
                      if ( !HIBYTE(word_14043B26C) && (v94 & 1) != 0 )
                        v94 |= 0x8000000000000000uLL;
                      *v80 = v94;
                      MiWritePteShadow(v80);
                      goto LABEL_148;
                    }
                    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                      && (v94 & 1) != 0 )
                    {
                      v94 |= 0x8000000000000000uLL;
                    }
                  }
                  *v80 = v94;
LABEL_148:
                  MiDereferenceCombineBlock(a3);
                  goto LABEL_76;
                }
                if ( (v41 & 0x18) != 0 )
                  v99 = 1;
                v81 = v104;
                v82 = -1LL;
                if ( v104 )
                {
                  LODWORD(v84) = 3;
                  goto LABEL_143;
                }
                if ( (unsigned int)MiPerformCombineScan(a1, *(_QWORD *)v121, v132) && v132[0] == v118 )
                {
                  v84 = (int)MiProtectionToCacheAttribute(v41);
                  v85 = *(_QWORD *)(v127 + 8 * v84);
                  if ( !v85 || *(_DWORD *)(v85 + 44) >= *(_DWORD *)(v85 + 40) )
                    goto LABEL_144;
                  v86 = MiAllocateCombineProto(v110, v83, v41, 0LL);
                  v104 = (__int64 *)v86;
                  v81 = (__int64 *)v86;
                  if ( v86 )
                  {
                    v12[3] = v86;
                  }
                  else
                  {
                    v81 = *a3;
                    v104 = *a3;
                    v88 = **a3;
                    if ( (__int64 **)(*a3)[1] != a3 || *(__int64 **)(v88 + 8) != v81 )
LABEL_209:
                      __fastfail(3u);
                    *a3 = (__int64 *)v88;
                    *(_QWORD *)(v88 + 8) = a3;
                    *((_DWORD *)v81 + 10) = v41 | v81[5] & 0xFFFFFFE0;
                    v82 = *(_QWORD *)(v85 + 8 * ((unsigned __int64)*(unsigned int *)(v85 + 44) >> 12) + 48);
                  }
LABEL_143:
                  if ( (unsigned int)MiConvertStandbyToProto(
                                       v109,
                                       v110,
                                       v121[0],
                                       v108,
                                       (__int64)v81,
                                       BugCheckParameter2,
                                       v119,
                                       v82) )
                  {
                    ++v114[1];
                    if ( v82 == -1 )
                    {
                      v77 = 1;
                      ++v113;
                      v104 = 0LL;
                    }
                    else
                    {
                      MiIncrementCombineMdl(a1, (unsigned int)v84);
                      v42 = 1;
                      v77 = 1;
                    }
                  }
                  else
                  {
LABEL_144:
                    v77 = 0;
                  }
                }
                MiReleaseArbitraryPage(*(_QWORD *)v121);
                if ( MiPteInShadowRange(v123) )
                {
                  if ( !(unsigned int)MiPteHasShadow(v87, v21) )
                  {
                    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                      && (v21 & 1) != 0 )
                    {
                      v21 |= 0x8000000000000000uLL;
                    }
                    goto LABEL_146;
                  }
                  if ( !HIBYTE(word_14043B26C) && (v21 & 1) != 0 )
                    v21 |= 0x8000000000000000uLL;
                  *(_QWORD *)v22 = v21;
                  MiWritePteShadow(v22);
                }
                else
                {
LABEL_146:
                  *(_QWORD *)v22 = v21;
                }
                if ( !v77 )
                  goto LABEL_148;
                v59 = v118;
                goto LABEL_93;
              }
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
          else if ( (v34 & 0x400) == 0 && (v34 & 0x800) != 0 )
          {
            BugCheckParameter2 = MiLockTransitionLeafPage(((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            if ( BugCheckParameter2 )
              goto LABEL_34;
          }
        }
        MiDereferenceCombineBlock(a3);
        v99 = v27;
        goto LABEL_76;
      }
      if ( v101 )
      {
        v20 = v27;
        v24 = v101;
        v11 = v112;
        v13 = v116;
        v100 = 1;
        v19 = 1;
      }
      else
      {
        valid = MiLockLowestValidPageTable(v109, ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v131, v23);
        v101 = valid;
        if ( valid == v32 )
          goto LABEL_30;
        MiUnlockPageTableInternal(v109, valid);
        v24 = 0LL;
        v101 = 0LL;
        MiDereferenceCombineBlock(a3);
        v99 = v27;
LABEL_77:
        v12 = v102;
        v20 = v99;
        v11 = v112;
        v13 = v116;
        v19 = v100;
      }
    }
    ++v107;
LABEL_49:
    v49 = v142;
    v120 = v142;
    for ( i = 2; i <= 3; ++i )
    {
      v51 = *v49;
      if ( *v49 )
      {
        do
        {
          v55 = *(_QWORD *)(v51 + 16);
          if ( (unsigned int)MiCrcStillIntact(v110, v109, v108, v51, i) )
          {
            *(_QWORD *)(v51 + 16) = v12;
            v12 = (_QWORD *)v51;
          }
          else
          {
            v21 = *(_QWORD *)(v51 + 24);
            if ( (unsigned int)v21 >= 0x100 )
              MiDereferenceCombineBlock(a3);
          }
          v51 = v55;
        }
        while ( v55 );
        v49 = v120;
      }
      *v49 = 0LL;
      v49 += 4;
      v120 = v49;
    }
    v11 = v112;
    MiFlushTbList(v112, v21, v22, v23);
    v7 = v109;
    if ( v101 )
      MiUnlockPageTableInternal(v109, v101);
    MiUnlockWorkingSetShared(v109, v105);
    v52 = v140;
    if ( v140 )
    {
      do
      {
        v53 = v52[1];
        v54 = MiLockPageInline(v53);
        *(_BYTE *)(v53 + 34) = *(_BYTE *)(v53 + 34) & 0xF8 | 6;
        MiDecrementShareCount(v53);
        _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v54 < 2u )
        {
          v97 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v97->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v97);
        }
        __writecr8(v54);
        v52 = (_QWORD *)v52[2];
      }
      while ( v52 );
      v11 = v112;
      v7 = v109;
    }
    if ( v12 )
    {
      v16 = v129;
      v9 = 0LL;
      continue;
    }
    break;
  }
  KiLeaveCriticalRegionUnsafe(CurrentThread);
  v16 = v129;
LABEL_66:
  v18 = v106;
  v5 = v114;
LABEL_67:
  if ( v12 )
  {
    do
    {
      v98 = (_QWORD *)v12[2];
      if ( (unsigned int)v12[3] >= 0x100 )
        MiDereferenceCombineBlock(a3);
      v12 = v98;
    }
    while ( v98 );
    v5 = v114;
    v18 = v106;
  }
  if ( v18 == 1 )
  {
    KeForceDetachProcess(v138, 0LL);
    MiAttachThreadDone(v16 + 1280);
  }
  if ( v11 != (int *)P )
    ExFreePoolWithTag(v11, 0);
  result = v113;
  *v5 += v113;
  return result;
}
