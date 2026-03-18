/*
 * XREFs of MiSharePages @ 0x14013F5C0
 * Callers:
 *     MiProcessCrcList @ 0x1406F56E0 (MiProcessCrcList.c)
 * Callees:
 *     MiIsPfn @ 0x140005F30 (MiIsPfn.c)
 *     PsGetCurrentProcess @ 0x1400065C0 (PsGetCurrentProcess.c)
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MiTbFlushType @ 0x1400241C0 (MiTbFlushType.c)
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002AC80 (MiGetUltraMapping.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiVadSupportsPrivateCommit @ 0x1400507D0 (MiVadSupportsPrivateCommit.c)
 *     KeEnterCriticalRegionThread @ 0x140053A10 (KeEnterCriticalRegionThread.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MiProtectionToCacheAttribute @ 0x14009739C (MiProtectionToCacheAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiLockTransitionLeafPage @ 0x1400BD5EC (MiLockTransitionLeafPage.c)
 *     MiPrepareAttachThread @ 0x1400C212C (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1400C76B0 (MiAttachThreadDone.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiFlushTbListEarly @ 0x1400DB720 (MiFlushTbListEarly.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     ExReleaseSpinLockExclusive @ 0x140109E70 (ExReleaseSpinLockExclusive.c)
 *     MiIsStoreProcess @ 0x140120098 (MiIsStoreProcess.c)
 *     MiGetCombineDomain @ 0x14013EC80 (MiGetCombineDomain.c)
 *     MiMakeCombineCandidateClean @ 0x14013EC98 (MiMakeCombineCandidateClean.c)
 *     MiCrcStillIntact @ 0x14013ED60 (MiCrcStillIntact.c)
 *     MiAllocateCombineProto @ 0x14013EFD0 (MiAllocateCombineProto.c)
 *     MiRecheckVaVm @ 0x1401405A0 (MiRecheckVaVm.c)
 *     MiPerformCombineScan @ 0x140140600 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x1401406B0 (MiReleaseArbitraryPage.c)
 *     MiCombineCandidate @ 0x140140780 (MiCombineCandidate.c)
 *     MiMapArbitraryPage @ 0x140140B10 (MiMapArbitraryPage.c)
 *     MiDereferenceCombineBlock @ 0x140140D60 (MiDereferenceCombineBlock.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiConfirmPageIsZero @ 0x140142AA0 (MiConfirmPageIsZero.c)
 *     MiPageMightBeZero @ 0x140142BF8 (MiPageMightBeZero.c)
 *     MiSetPfnPageState @ 0x140142D2C (MiSetPfnPageState.c)
 *     MiHashIsCommon @ 0x140143030 (MiHashIsCommon.c)
 *     MiPopCombineBlock @ 0x14014308C (MiPopCombineBlock.c)
 *     MiPushCombineBlock @ 0x1401430BC (MiPushCombineBlock.c)
 *     MiIncrementCombineMdl @ 0x14014333C (MiIncrementCombineMdl.c)
 *     MiComputeHash64 @ 0x140146310 (MiComputeHash64.c)
 *     MiUnlockPageTable @ 0x14019D818 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiAcquireSpinLockExclusive @ 0x1402B89D8 (MiAcquireSpinLockExclusive.c)
 *     MiForceAttachProcess @ 0x1402BB050 (MiForceAttachProcess.c)
 *     MiForceDetachProcess @ 0x1402BB068 (MiForceDetachProcess.c)
 *     MiShouldYieldProcessor @ 0x1402C4884 (MiShouldYieldProcessor.c)
 *     MiLockPage @ 0x1402D8D04 (MiLockPage.c)
 *     MiLockPageAtDpc @ 0x1402D8D18 (MiLockPageAtDpc.c)
 *     MiUnlockPage @ 0x1402D8D58 (MiUnlockPage.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiSharePages(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, int a5)
{
  __int64 v5; // rsi
  __int64 v9; // r15
  __int64 v10; // r12
  unsigned int v11; // eax
  _QWORD *v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // r13
  _DWORD *PoolWithTag; // rax
  __int64 v18; // rbx
  _KPROCESS *v19; // rdi
  __int64 v20; // r14
  int v21; // ebx
  char v22; // di
  unsigned __int64 v23; // rsi
  char v24; // r13
  unsigned __int64 v25; // rdx
  __int64 Process; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 *v29; // r12
  char v30; // r14
  int v31; // r12d
  bool v32; // cl
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // r15
  __int64 v35; // rdi
  unsigned __int64 valid; // rax
  unsigned __int64 v37; // r9
  __int64 v38; // rax
  ULONG_PTR v39; // r9
  unsigned __int64 v40; // rax
  __int64 v41; // r9
  ULONG_PTR BugCheckParameter2; // rdi
  char v43; // cl
  unsigned __int64 v44; // r12
  unsigned int v45; // r12d
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned __int64 v49; // r12
  int v50; // r9d
  unsigned __int64 v51; // r10
  __int64 v52; // rdx
  unsigned __int64 Address; // rax
  unsigned int v54; // r15d
  unsigned __int64 **v55; // rdi
  int v56; // r13d
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // r11
  int IsZero; // eax
  unsigned __int64 v62; // r8
  __int64 CombineDomain; // rax
  __int64 v64; // rdi
  __int64 v65; // rax
  unsigned __int64 v66; // r11
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // rdx
  unsigned __int64 *v70; // r12
  __int64 v71; // r14
  unsigned __int64 v72; // rax
  bool v73; // r14
  unsigned __int64 UltraMapping; // rax
  int v75; // r9d
  unsigned __int64 *v76; // r15
  __int64 v77; // rax
  __int64 v78; // rdx
  int v79; // ecx
  unsigned __int64 v80; // rdx
  char v81; // al
  __int64 v82; // r14
  __int64 v83; // rax
  __int64 v84; // rcx
  char v85; // di
  unsigned __int64 v86; // rax
  int v87; // r14d
  unsigned __int64 v88; // rdi
  unsigned int v89; // r14d
  __int64 v90; // r12
  bool v91; // r8
  unsigned __int64 *v92; // rdi
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  unsigned int v95; // eax
  unsigned __int64 v96; // rax
  __int64 *v97; // r15
  int v98; // r14d
  unsigned int v99; // eax
  __int64 v100; // rdi
  __int64 v101; // rsi
  unsigned __int64 *i; // r14
  unsigned __int64 v103; // rsi
  unsigned __int8 v104; // di
  ULONG_PTR v105; // rcx
  unsigned __int64 *v106; // rbx
  char v107; // [rsp+40h] [rbp-C0h]
  KIRQL v108; // [rsp+41h] [rbp-BFh]
  __int64 v109; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v110; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v112; // [rsp+60h] [rbp-A0h]
  int v113; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 *v114; // [rsp+68h] [rbp-98h]
  int v115; // [rsp+70h] [rbp-90h]
  unsigned int v116; // [rsp+74h] [rbp-8Ch]
  unsigned int v117; // [rsp+78h] [rbp-88h]
  unsigned __int64 v118; // [rsp+80h] [rbp-80h] BYREF
  int v119[2]; // [rsp+88h] [rbp-78h]
  _KPROCESS *v120; // [rsp+90h] [rbp-70h]
  unsigned __int64 v121; // [rsp+98h] [rbp-68h]
  __int64 v122; // [rsp+A0h] [rbp-60h]
  int v123; // [rsp+A8h] [rbp-58h]
  int v124; // [rsp+ACh] [rbp-54h]
  PVOID P; // [rsp+B0h] [rbp-50h]
  __int64 v126; // [rsp+B8h] [rbp-48h]
  int v127; // [rsp+C0h] [rbp-40h]
  int v128; // [rsp+C4h] [rbp-3Ch]
  __int64 v129; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v130; // [rsp+D0h] [rbp-30h]
  _QWORD *v131; // [rsp+D8h] [rbp-28h]
  __int64 *v132; // [rsp+E0h] [rbp-20h] BYREF
  int v133[2]; // [rsp+E8h] [rbp-18h]
  __int64 v134; // [rsp+F0h] [rbp-10h]
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v136; // [rsp+100h] [rbp+0h]
  unsigned __int64 v137; // [rsp+108h] [rbp+8h]
  __int64 v138; // [rsp+110h] [rbp+10h]
  unsigned __int64 v139; // [rsp+118h] [rbp+18h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v141[5]; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v142; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v143[7]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v144[24]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v145[208]; // [rsp+260h] [rbp+160h] BYREF
  unsigned __int64 *v146; // [rsp+330h] [rbp+230h]
  __int64 v147; // [rsp+358h] [rbp+258h]
  _QWORD v148[5]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v149; // [rsp+3A8h] [rbp+2A8h] BYREF

  v5 = a3;
  v126 = a1;
  memset(v141, 0, sizeof(v141));
  memset(v143, 0, 48);
  v137 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  memset(v144, 0, 0xB8uLL);
  memset(v145, 0, 0xB8uLL);
  v9 = a2[4];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = 0LL;
  *(_QWORD *)v133 = *(_QWORD *)(a1 + 16);
  v11 = *(_DWORD *)(a1 + 60);
  v12 = *(_QWORD **)(a1 + 24);
  v117 = v11;
  *(_QWORD *)v119 = *a4;
  v131 = v12;
  v116 = 0;
  v122 = 0LL;
  v109 = v9;
  v13 = MiTbFlushType(v9);
  v15 = a2[3];
  v16 = (unsigned __int64 *)a2[6];
  v113 = v13;
  v114 = v16;
  v134 = v126 + 64;
  PoolWithTag = v145;
  P = v145;
  v124 = v14;
  v128 = v14;
  if ( v15 <= 0x14 )
  {
    LODWORD(v18) = v15;
  }
  else
  {
    v18 = 509LL;
    if ( v15 < 0x1FD )
      v18 = v15;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v18 + 24, 0x73576D4Du);
    v14 = 0LL;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = v145;
      P = v145;
      LODWORD(v18) = 20;
    }
  }
  *PoolWithTag = v113;
  PoolWithTag[3] = v14;
  *((_WORD *)PoolWithTag + 2) = 0;
  *((_QWORD *)PoolWithTag + 2) = v14;
  PoolWithTag[2] = v18;
  *((_QWORD *)PoolWithTag + 3) = v14;
  v19 = (_KPROCESS *)a2[5];
  v120 = v19;
  if ( !v19 || v19 == PsGetCurrentProcess() )
  {
    v20 = (__int64)v19;
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v128 = MiPrepareAttachThread((__int64)v19, (__int64)&v19[1].IdealNode[6]);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v128 )
      goto LABEL_188;
    v20 = (__int64)v19;
    MiForceAttachProcess(v19, v143);
  }
  CurrentThread = KeGetCurrentThread();
  KeEnterCriticalRegionThread((__int64)CurrentThread);
  v21 = a5;
  while ( 2 )
  {
    v22 = 0;
    v146 = 0LL;
    v147 = 0LL;
    v23 = 0LL;
    v148[0] = 0LL;
    v24 = 0;
    v149 = 0LL;
    v130 = 0LL;
    v107 = 0;
    v112 = MiLockWorkingSetShared(v9);
    v28 = v112;
    if ( v20
      && ((*(_DWORD *)(v20 + 780) & 0xC00u) < 0xC00 || *(_QWORD *)(v9 + 104) || (unsigned int)MiIsStoreProcess(v20)) )
    {
      MiUnlockWorkingSetShared(v9, v28);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v16 = v114;
      goto LABEL_187;
    }
    v29 = v114;
LABEL_18:
    while ( 2 )
    {
      v30 = 0;
      v114 = v29;
      if ( v24 != 1 )
        v30 = v24;
      v31 = 0;
      if ( v24 != 1 )
        v31 = v124 + 1;
      v124 = v31;
      if ( v22 )
      {
        v107 = 0;
        v32 = 1;
        goto LABEL_33;
      }
      if ( (v31 & 7) != 0 )
        goto LABEL_199;
      if ( MiWorkingSetIsContended(v9) )
      {
        v32 = 1;
        goto LABEL_33;
      }
      if ( !v23 || !(unsigned int)MiPageTableLockIsContended(v9, v23) )
      {
LABEL_199:
        if ( (unsigned int)MiShouldYieldProcessor(Process, v25, v27, v28) )
          v32 = 1;
        else
          v32 = (unsigned int)MiFlushTbListEarly((__int64)P, 2LL, (_KPROCESS *)v27) != 0;
        goto LABEL_33;
      }
      v32 = 1;
LABEL_33:
      v16 = v114;
      if ( v114 && !v32 )
      {
        v33 = v114[4];
        v34 = v114[1];
        v110 = v114[2];
        v121 = *v114;
        v136 = v34;
        if ( v33 >= 0x100 )
        {
          v127 = *(_DWORD *)(v33 + 40) & 0x1F;
        }
        else
        {
          v127 = v33;
          v33 = 0LL;
        }
        v25 = 0xFFFFF68000000000uLL;
        v27 = 0x7FFFFFFFF8LL;
        v28 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v129 = v28;
        Process = (v28 >> 9) & 0x7FFFFFFFF8LL;
        v35 = Process - 0x98000000000LL;
        if ( v130 != Process - 0x98000000000LL )
        {
          if ( v130 )
          {
            v9 = v109;
            v22 = 1;
            v29 = v114;
            v107 = 1;
            v24 = v30;
            v23 = v130;
            continue;
          }
          valid = MiLockLowestValidPageTable(v109, ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v142);
          v130 = valid;
          if ( valid != v35 )
          {
            v9 = v109;
            MiUnlockPageTable(v109, valid);
            v130 = 0LL;
            MiDereferenceCombineBlock(a3);
            v22 = v107;
            v24 = v30;
            v29 = (unsigned __int64 *)v110;
            v23 = v130;
            continue;
          }
        }
        if ( !(unsigned int)MiRecheckVaVm(Process, v34) )
          goto LABEL_44;
        v38 = MI_READ_PTE_LOCK_FREE(v37);
        v132 = (__int64 *)v38;
        if ( (v38 & 1) != 0 )
        {
          v40 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v132);
          if ( !(unsigned int)MiIsPfn((v40 >> 12) & 0xFFFFFFFFFLL) )
            goto LABEL_44;
          BugCheckParameter2 = 48 * v41 - 0x58000000000LL;
          MiLockPageAtDpc(BugCheckParameter2);
        }
        else
        {
          if ( (v38 & 0x400) != 0 )
            goto LABEL_44;
          if ( (v38 & 0x800) == 0 )
            goto LABEL_44;
          BugCheckParameter2 = MiLockTransitionLeafPage(v39, 0LL);
          if ( !BugCheckParameter2 )
            goto LABEL_44;
        }
        v123 = MiCombineCandidate(*(_QWORD *)v119, v117, BugCheckParameter2);
        if ( !v123 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiDereferenceCombineBlock(a3);
          v24 = v30;
          goto LABEL_166;
        }
        v43 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
        v44 = (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 16) >> 5;
        v118 = v114[3];
        v45 = v44 & 0x1F;
        v46 = *(_QWORD *)(BugCheckParameter2 + 40);
        v115 = 3;
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v46 >> 58 != v21 )
        {
LABEL_44:
          MiDereferenceCombineBlock(a3);
          v24 = v30;
          goto LABEL_166;
        }
        if ( v43 == 6 )
        {
          if ( v129 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) )
            goto LABEL_44;
          v47 = *(_QWORD *)(BugCheckParameter2 + 40);
          if ( (v47 & 0x200000000000000LL) != 0 )
            goto LABEL_44;
          if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
            goto LABEL_44;
          v48 = v47 & 0xFFFFFFFFFLL;
          if ( v48 == 0xFFFFFFFFDLL )
            goto LABEL_44;
          v49 = v136;
          if ( (MiGetWsleContents(v48, v136) & 0xF) == 8 )
            goto LABEL_44;
          if ( *(_WORD *)(BugCheckParameter2 + 32) != 1 )
            goto LABEL_44;
          v52 = 0LL;
          if ( v50 == 1 )
          {
            Address = MiLocateAddress(v49);
            if ( !Address
              || MiVadPageSizes[((unsigned __int64)*(unsigned int *)(Address + 48) >> 18) & 3] == 16
              || !MiVadSupportsPrivateCommit(Address) )
            {
              goto LABEL_44;
            }
          }
          v54 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
          if ( v54 != v127 )
            goto LABEL_44;
          if ( ((unsigned __int8)v132 & 0x42) != 0 )
          {
            if ( v116 < 8 )
            {
              v55 = (unsigned __int64 **)v148;
LABEL_75:
              MiInsertTbFlushEntry((__int64)P, v49, 1LL, 0);
              v114[2] = (unsigned __int64)*v55;
              *v55 = v114;
              v24 = v30;
              goto LABEL_166;
            }
            MiMakeCombineCandidateClean(v51, v52);
            v56 = v113;
            v144[1] = 1LL;
            LODWORD(v144[0]) = v113;
            WORD2(v144[0]) = 0;
            v144[2] = 0LL;
            v144[3] = 0LL;
            MiInsertTbFlushEntry((__int64)v144, v49, 1LL, 0);
            MiFlushTbList((int *)v144, v57, v58, v59);
            v51 = v129;
            v60 = v121;
          }
          else
          {
            v60 = v121;
            if ( v121 != qword_140466578 )
              goto LABEL_81;
            if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x18) == 0
              && ((unsigned __int8)v132 & 0x20) != 0
              && v116 < 3 )
            {
              v55 = (unsigned __int64 **)&v149;
              goto LABEL_75;
            }
            v56 = v113;
          }
          if ( v60 == qword_140466578 )
          {
            if ( (unsigned int)MiPageMightBeZero(v109, BugCheckParameter2, v51) )
            {
              MiLockPageAtDpc(BugCheckParameter2);
              IsZero = MiConfirmPageIsZero(BugCheckParameter2);
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( IsZero )
              {
                v144[1] = 1LL;
                LODWORD(v144[0]) = v56;
                WORD2(v144[0]) = 4;
                v144[2] = 0LL;
                v144[3] = 0LL;
                MiInsertTbFlushEntry((__int64)v144, v49, 1LL, 0);
                v9 = v109;
                MiFreeWsleList(v109, (__int64)v144, 0);
                ++v122;
                ++v131[1];
                MiDereferenceCombineBlock(a3);
                v22 = v107;
                v24 = v30;
                v29 = (unsigned __int64 *)v110;
                v23 = v130;
                continue;
              }
            }
          }
LABEL_81:
          v62 = v118;
          v24 = v30;
          if ( (v54 & 0x18) != 0 )
            v24 = 1;
          if ( v118 != qword_140465DD0 )
          {
            v50 = v123;
            if ( v123 == 1 )
            {
              CombineDomain = MiGetCombineDomain(1, v109);
              v62 = v118;
              if ( v118 != CombineDomain || (*(_DWORD *)&v120[2].Spare2[11] & 0x1000) != 0 )
              {
LABEL_150:
                MiDereferenceCombineBlock(a3);
                goto LABEL_166;
              }
            }
          }
          v64 = -1LL;
          if ( !v33 )
          {
            v65 = MiComputeHash64(v49, v52, v62);
            if ( v65 != v66 )
              goto LABEL_166;
            if ( v27 == qword_140465DD0 )
            {
              if ( !(unsigned int)MiHashIsCommon(v126, v66, v49) )
                goto LABEL_166;
              v66 = v121;
            }
            v67 = MiAllocateCombineProto(*(__int64 *)v119, v66, v54, &v118, 0);
            v33 = v67;
            if ( v67 )
            {
              v70 = v114;
              v114[4] = v67;
              goto LABEL_99;
            }
            v33 = MiPopCombineBlock(a3);
            if ( !v33 )
              goto LABEL_166;
            v115 = MiProtectionToCacheAttribute(v54);
            v69 = *(_QWORD *)(v134 + 8LL * v115);
            if ( !v69 || *(_DWORD *)(v69 + 44) >= *(_DWORD *)(v69 + 40) )
            {
              MiPushCombineBlock(v68, v33);
              goto LABEL_166;
            }
            *(_DWORD *)(v33 + 40) = v54 | *(_DWORD *)(v33 + 40) & 0xFFFFFFE0;
            *(_QWORD *)(v33 + 64) = v118;
            v64 = *(_QWORD *)(v69 + 8 * ((unsigned __int64)*(unsigned int *)(v69 + 44) >> 12) + 48);
          }
          v70 = v114;
LABEL_99:
          v9 = v109;
          v71 = MiConvertPrivateToProto(v109, v129, v33, v50, *(__int64 *)v119, (__int64)P, v64);
          if ( !v71 )
          {
            MiDereferenceCombineBlock(a3);
            v22 = v107;
            v29 = (unsigned __int64 *)v110;
            v23 = v130;
            continue;
          }
          ++v131[1];
          if ( v64 == -1 )
          {
            v33 = 0LL;
            ++v122;
          }
          else
          {
            MiIncrementCombineMdl(v126, (unsigned int)v115);
          }
          v72 = (unsigned __int64)v146;
          v70[1] = v71;
          v73 = v64 != -1;
          v70[2] = v72;
          v146 = v70;
          goto LABEL_152;
        }
        UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v126 + 208), 3u, 1LL, 0);
        v75 = v123;
        v76 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( v118 != qword_140465DD0 && v123 == 1 )
        {
          v77 = MiGetCombineDomain(1, v109);
          if ( v118 != v77 || (*(_DWORD *)&v120[2].Spare2[11] & 0x1000) != 0 )
            goto LABEL_44;
        }
        if ( !v76 )
          goto LABEL_44;
        v78 = *(_QWORD *)v133;
        v79 = v119[0];
        *(_QWORD *)(*(_QWORD *)v133 + 72LL) = v76;
        *(_QWORD *)(v78 + 64) = BugCheckParameter2;
        if ( !(unsigned int)MiMapArbitraryPage(v79, v78, v117, v75, 1) )
        {
          if ( MiPteInShadowRange((unsigned __int64)v76) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_1404658EC) && (v80 & 1) != 0 )
                v80 |= 0x8000000000000000uLL;
              *v76 = v80;
              MiWritePteShadow((__int64)v76);
              MiDereferenceCombineBlock(a3);
              v24 = v30;
              goto LABEL_166;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
              && (v80 & 1) != 0 )
            {
              v80 |= 0x8000000000000000uLL;
            }
          }
          *v76 = v80;
          MiDereferenceCombineBlock(a3);
          v24 = v30;
          goto LABEL_166;
        }
        v81 = v30;
        v82 = -1LL;
        if ( (v45 & 0x18) != 0 )
          v81 = 1;
        v24 = v81;
        if ( !v33 )
        {
          if ( !(unsigned int)MiPerformCombineScan(v126, *(_QWORD *)v133, v118 == qword_140465DD0, v141)
            || v141[0] != v121 )
          {
            goto LABEL_138;
          }
          v83 = MiAllocateCombineProto(*(__int64 *)v119, v121, v45, &v118, 0);
          v33 = v83;
          if ( v83 )
          {
            v114[4] = v83;
          }
          else
          {
            v33 = MiPopCombineBlock(a3);
            if ( !v33 )
              goto LABEL_138;
            v115 = MiProtectionToCacheAttribute(v45);
            v84 = *(_QWORD *)(v134 + 8LL * v115);
            if ( !v84 || *(_DWORD *)(v84 + 44) >= *(_DWORD *)(v84 + 40) )
              goto LABEL_138;
            *(_DWORD *)(v33 + 40) = v45 | *(_DWORD *)(v33 + 40) & 0xFFFFFFE0;
            *(_QWORD *)(v33 + 64) = v118;
            v82 = *(_QWORD *)(v84 + 8 * ((unsigned __int64)*(unsigned int *)(v84 + 44) >> 12) + 48);
          }
        }
        if ( (unsigned int)MiConvertStandbyToProto(v109, v119[0], v133[0], v117, v33, BugCheckParameter2, v129, v82) )
        {
          ++v131[1];
          if ( v82 == -1 )
          {
            v33 = 0LL;
            v85 = 1;
            ++v122;
            v73 = 0;
          }
          else
          {
            MiIncrementCombineMdl(v126, (unsigned int)v115);
            v73 = 1;
            v85 = 1;
          }
LABEL_139:
          MiReleaseArbitraryPage(*(_QWORD *)v133);
          if ( MiPteInShadowRange((unsigned __int64)v76) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_1404658EC) && (v25 & 1) != 0 )
                v25 |= 0x8000000000000000uLL;
              *v76 = v25;
              MiWritePteShadow((__int64)v76);
              goto LABEL_149;
            }
            Process = (__int64)KeGetCurrentThread()->ApcState.Process;
            if ( (*(_DWORD *)(Process + 1788) & 0x1000) != 0 && (v25 & 1) != 0 )
              v25 |= 0x8000000000000000uLL;
          }
          *v76 = v25;
LABEL_149:
          if ( !v85 )
            goto LABEL_150;
          v9 = v109;
LABEL_152:
          if ( !v73 )
            goto LABEL_167;
          v86 = v121;
          v87 = *(_DWORD *)(v33 + 40);
          v88 = v121 & 0xF;
          *(_QWORD *)(v33 + 24) = v121;
          v137 = v86;
          v89 = v87 & 0x1F;
          v90 = *(_QWORD *)v119 + 16LL * (unsigned int)v88;
          LODWORD(v138) = v89;
          v139 = v33 + 64;
          v108 = MiAcquireSpinLockExclusive(v90 + 104);
          v91 = 0;
          v92 = (unsigned __int64 *)(*(_QWORD *)v119 + 16 * (v88 + 6));
          v93 = *v92;
          if ( !*v92 )
            goto LABEL_165;
          while ( 1 )
          {
            v94 = *(_QWORD *)(v93 + 24);
            if ( v121 > v94
              || v121 >= v94
              && ((v95 = *(_DWORD *)(v93 + 40) & 0x1F, v89 > v95)
               || v89 >= v95 && (v33 == -64LL || *(_QWORD *)(v33 + 64) >= *(_QWORD *)(v93 + 64))) )
            {
              v96 = *(_QWORD *)(v93 + 8);
              if ( !v96 )
              {
                v91 = 1;
LABEL_165:
                RtlAvlInsertNodeEx(v92, v93, v91, (_QWORD *)v33);
                ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v90 + 104), v108);
LABEL_166:
                v9 = v109;
LABEL_167:
                v22 = v107;
                v29 = (unsigned __int64 *)v110;
                v23 = v130;
                goto LABEL_18;
              }
            }
            else
            {
              v96 = *(_QWORD *)v93;
              if ( !*(_QWORD *)v93 )
              {
                v91 = 0;
                goto LABEL_165;
              }
            }
            v93 = v96;
          }
        }
LABEL_138:
        v85 = 0;
        v73 = 0;
        goto LABEL_139;
      }
      break;
    }
    v97 = v148;
    v98 = 2;
    v132 = v148;
    v99 = v116 + 1;
    if ( v114 )
      v99 = v116;
    v116 = v99;
    do
    {
      v100 = *v97;
      if ( *v97 )
      {
        do
        {
          v101 = *(_QWORD *)(v100 + 16);
          if ( (unsigned int)MiCrcStillIntact(*(__int64 *)v119, v109, v117, v100, v98) )
          {
            *(_QWORD *)(v100 + 16) = v16;
            v16 = (unsigned __int64 *)v100;
          }
          else
          {
            v25 = *(_QWORD *)(v100 + 32);
            if ( v25 >= 0x100 )
              MiDereferenceCombineBlock(a3);
          }
          v100 = v101;
        }
        while ( v101 );
        v97 = v132;
        v114 = v16;
      }
      *v97 = 0LL;
      ++v98;
      v97 += 5;
      v132 = v97;
    }
    while ( v98 <= 3 );
    v21 = a5;
    MiFlushTbList((int *)P, v25, v27, v28);
    v9 = v109;
    if ( v130 )
      MiUnlockPageTable(v109, v130);
    MiUnlockWorkingSetShared(v109, v112);
    for ( i = v146; i; i = (unsigned __int64 *)i[2] )
    {
      v103 = i[1];
      v104 = MiLockPage(v103);
      MiSetPfnPageState(v103, 6LL);
      MiDecrementShareCount(v105);
      MiUnlockPage(v103, v104);
    }
    if ( v16 )
    {
      v20 = (__int64)v120;
      v124 = v31;
      continue;
    }
    break;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
LABEL_187:
  v19 = v120;
  v10 = v122;
  v12 = v131;
  v5 = a3;
LABEL_188:
  if ( v16 )
  {
    do
    {
      v106 = (unsigned __int64 *)v16[2];
      if ( v16[4] >= 0x100 )
        MiDereferenceCombineBlock(v5);
      v16 = v106;
    }
    while ( v106 );
  }
  if ( v128 == 1 )
  {
    MiForceDetachProcess(v143);
    MiAttachThreadDone((__int64)&v19[1].IdealNode[6]);
  }
  if ( P != v145 )
    ExFreePoolWithTag(P, 0);
  *v12 += v10;
}
