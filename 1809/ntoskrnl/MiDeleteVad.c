/*
 * XREFs of MiDeleteVad @ 0x140065E00
 * Callers:
 *     MiFreeVadRange @ 0x140025674 (MiFreeVadRange.c)
 *     MiFreeToSubAllocatedRegion @ 0x1405E071C (MiFreeToSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiCleanVad @ 0x140618088 (MiCleanVad.c)
 *     MiUnmapVad @ 0x140618488 (MiUnmapVad.c)
 *     MiMapViewOfPhysicalSection @ 0x140755690 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140852C58 (MiCoalescePlaceholderAllocations.c)
 *     MiCreateEnclave @ 0x14085AD08 (MiCreateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14085D9CC (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x14085F5C8 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiClearVadCellBits @ 0x140067560 (MiClearVadCellBits.c)
 *     MiFinishVadDeletion @ 0x140067760 (MiFinishVadDeletion.c)
 *     MiDeletePagablePteRange @ 0x140067FD0 (MiDeletePagablePteRange.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiDecrementSubsections @ 0x140079400 (MiDecrementSubsections.c)
 *     MiControlAreaRequiresCharge @ 0x140079E58 (MiControlAreaRequiresCharge.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400BC5E0 (ExpAcquireSpinLockExclusive.c)
 *     MiDereferenceExtendInfo @ 0x140138A28 (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x14013B67C (MiDereferenceControlArea.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3424 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402A9508 (MiLogPerfMemoryRangeEvent.c)
 *     MiDecrementLargeSubsections @ 0x1402B5A04 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x1402C5080 (MiReInsertPlaceholderVad.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402C9A58 (MiDeleteDeferredCloneDescriptors.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiReturnPageTablePageCommitment @ 0x1405ED380 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408513A4 (MiRemoveUserPhysicalPagesView.c)
 *     MiDeleteEnclavePages @ 0x14085B328 (MiDeleteEnclavePages.c)
 *     MiUnlockNestedVad @ 0x14085FC5C (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiDeleteVad(unsigned int *a1, __int64 a2, int a3)
{
  unsigned int *v3; // r13
  _QWORD *v4; // rsi
  char v5; // bl
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  char v12; // cl
  void *v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rax
  char v16; // r12
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  LONG *v20; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  bool v29; // zf
  unsigned __int32 v30; // eax
  unsigned __int8 v31; // di
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  signed __int32 v38; // edx
  struct _KPRCB *v39; // rcx
  LONG *v40; // rdi
  int v41; // r14d
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  int v44; // eax
  struct _KPRCB *v45; // rcx
  _QWORD *v46; // rdi
  ULONG_PTR v47; // rsi
  struct _KTHREAD *v48; // r14
  unsigned int SessionId; // r8d
  unsigned __int8 v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  _KLOCK_ENTRY *v55; // rsi
  __int64 v56; // rdx
  unsigned __int8 v57; // al
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned int v60; // ecx
  int v61; // eax
  int v62; // esi
  __int64 *v63; // rax
  __int64 *v64; // rdx
  _KPROCESS *v65; // r14
  unsigned int v66; // ecx
  __int64 v67; // r14
  char v68; // r15
  unsigned int v69; // ecx
  PVOID *v70; // rsi
  unsigned __int8 v71; // r14
  LONG *SharedVm; // rax
  LONG *v73; // rax
  struct _KPRCB *v74; // rcx
  char v75; // bl
  char v76; // cl
  char v77; // bl
  struct _KTHREAD *v78; // r15
  ULONG_PTR v79; // r12
  struct _KTHREAD *v80; // rsi
  _KLOCK_ENTRY *v81; // r14
  unsigned __int8 AbEntrySummary; // al
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v84; // rcx
  int v85; // eax
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // r8
  LONG *v89; // r14
  __int64 v90; // r12
  struct _KPRCB *v91; // r15
  unsigned int v92; // esi
  _DWORD *v93; // rcx
  int v94; // eax
  _DWORD *v95; // rcx
  int v96; // eax
  __int64 v97; // rdx
  unsigned __int64 v98; // rcx
  unsigned __int32 v99; // eax
  unsigned __int64 v100; // rcx
  int *v101; // r15
  unsigned __int64 v102; // rdi
  __int64 v103; // r12
  __int64 **v104; // r14
  unsigned int v105; // esi
  __int64 *v106; // r10
  __int64 v107; // rcx
  unsigned __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // r8
  _DWORD *v111; // r13
  PVOID v112; // rcx
  unsigned __int64 j; // r15
  unsigned __int64 i; // rax
  unsigned __int64 k; // r14
  PVOID v116; // rcx
  _QWORD *v117; // rax
  __int64 v118; // r12
  __int64 v119; // r8
  __int64 v120; // r9
  int v121; // eax
  _QWORD *v122; // r12
  int v123; // r13d
  struct _KPRCB *v124; // rcx
  _DWORD *v125; // rdx
  int v126; // eax
  unsigned __int8 v127; // si
  struct _KPRCB *v128; // rcx
  _QWORD *v129; // rsi
  unsigned __int64 v130; // r13
  unsigned __int64 v131; // r12
  __int64 v132; // rdi
  unsigned int m; // esi
  int v134; // r8d
  int v135; // edx
  int v136; // ecx
  ULONG_PTR v137; // rsi
  __int64 v138; // r12
  struct _KTHREAD *v139; // r14
  ULONG_PTR v140; // r9
  unsigned __int8 v141; // r15
  __int64 v142; // rdx
  __int64 v143; // rcx
  int v144; // eax
  __int64 v145; // rcx
  _KLOCK_ENTRY *v146; // rsi
  unsigned __int8 v147; // al
  __int64 v148; // rcx
  __int64 v149; // rcx
  __int64 v150; // rsi
  __int64 v151; // r14
  __int64 v152; // rsi
  char *v153; // r15
  __int64 v154; // rsi
  struct _KTHREAD *v155; // rax
  volatile signed __int64 *v156; // r14
  __int64 v157; // rcx
  char **v158; // rax
  struct _KTHREAD *v159; // rsi
  __int64 v160; // rcx
  __int64 result; // rax
  __int64 v162; // r13
  ULONG_PTR v163; // rdi
  __int64 v164; // rcx
  __int64 v165; // r14
  BOOL v166; // r15d
  unsigned __int8 v167; // bl
  char v168; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h]
  __int64 v170; // [rsp+50h] [rbp-B0h]
  int v171; // [rsp+58h] [rbp-A8h] BYREF
  int v172; // [rsp+5Ch] [rbp-A4h] BYREF
  int v173; // [rsp+60h] [rbp-A0h]
  __int64 v174; // [rsp+68h] [rbp-98h]
  __int64 v175; // [rsp+70h] [rbp-90h]
  unsigned __int64 v176; // [rsp+78h] [rbp-88h]
  __int64 v177; // [rsp+80h] [rbp-80h]
  int v178; // [rsp+88h] [rbp-78h] BYREF
  int v179; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 v180; // [rsp+90h] [rbp-70h]
  ULONG_PTR v181; // [rsp+98h] [rbp-68h] BYREF
  __int64 v182; // [rsp+A0h] [rbp-60h] BYREF
  int v183; // [rsp+A8h] [rbp-58h] BYREF
  int v184; // [rsp+ACh] [rbp-54h]
  int v185; // [rsp+B0h] [rbp-50h] BYREF
  int v186; // [rsp+B4h] [rbp-4Ch]
  LONG *v187; // [rsp+B8h] [rbp-48h]
  struct _KTHREAD *v188; // [rsp+C0h] [rbp-40h]
  __int64 v189; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h]
  __int64 v191; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v192; // [rsp+E0h] [rbp-20h]
  __int64 v193; // [rsp+E8h] [rbp-18h]
  __int64 v194; // [rsp+F0h] [rbp-10h]
  __int64 v195; // [rsp+F8h] [rbp-8h]
  int v196; // [rsp+100h] [rbp+0h]
  __int64 v197; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v198; // [rsp+110h] [rbp+10h]
  unsigned __int64 v199; // [rsp+118h] [rbp+18h]
  void *retaddr; // [rsp+168h] [rbp+68h]

  v3 = a1;
  P = a1;
  v179 = a3;
  v191 = 0LL;
  v4 = 0LL;
  v192 = 0LL;
  v5 = 0;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v8 = a1[7];
  v176 = (a1[6] | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32)) << 12;
  v9 = (__int64)&Process[1].IdealNode[12];
  v10 = v8 | ((unsigned __int64)*((unsigned __int8 *)a1 + 33) << 32);
  v189 = a2;
  v11 = v3[12];
  v168 = 0;
  v188 = CurrentThread;
  v175 = (__int64)Process;
  v170 = (__int64)&Process[1].IdealNode[12];
  v181 = 0LL;
  v182 = 0LL;
  v177 = 0LL;
  v180 = (v10 << 12) | 0xFFF;
  if ( (v11 & 0x4000) != 0 )
  {
    v5 = 64;
    if ( (v11 & 7) != 5 )
      v5 = 0;
    v168 = v5;
  }
  else
  {
    if ( (v3[16] & 0x1000000) != 0 )
    {
      v12 = 0;
      if ( (v3[12] & 7) == 2 )
        v12 = 64;
      v5 = v12;
      v168 = v12;
    }
    v13 = (void *)*((_QWORD *)v3 + 16);
    if ( v13 )
      ObfDereferenceObject(v13);
  }
  v14 = v3[12];
  if ( (v14 & 0x20000) != 0 )
  {
    MiDeleteEnclavePages(Process, v3);
    v14 = v3[12];
  }
  if ( (v14 & 7) == 3 )
    v195 = MiRemoveUserPhysicalPagesView(v3);
  v15 = v3[13];
  LODWORD(v15) = v15 & 0x7FFFFFFF;
  if ( (v15 | ((unsigned __int64)*((unsigned __int8 *)v3 + 34) << 31)) == 0x7FFFFFFFDLL && *((_QWORD *)v3 + 2) == -2LL )
  {
    v5 |= 0x80u;
    v168 = v5;
  }
  v16 = v5;
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v19 = (__int64)Process[2].Header.WaitListHead.Flink & 7;
  v187 = &dword_14043C7C0;
  v20 = &dword_14043C7C0;
  if ( v19 != 2 )
    v20 = (LONG *)(v9 + 192);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v20, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = SchedulerAssist[5];
        SchedulerAssist[5] = v24 + 1;
        if ( v24 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(v20, 0x1Fu) )
    {
      v25 = CurrentPrcb->SchedulerAssist;
      if ( v25 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v26 = v25[5] - 1;
          v25[5] = v26;
          if ( !v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LODWORD(v4) = ExpWaitForSpinLockExclusiveAndAcquire(v20, CurrentIrql);
    }
    v27 = (unsigned int)*v20;
    v28 = v27 & 0xFFFFFFFFBFFFFFFFuLL;
    while ( (v27 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v27 & 0x40000000) == 0 )
      {
        v28 = (unsigned int)v27;
        LODWORD(v28) = v27 | 0x40000000;
        v30 = _InterlockedCompareExchange(v20, v27 | 0x40000000, v27);
        v29 = (_DWORD)v27 == v30;
        v27 = v30;
        if ( !v29 )
          continue;
      }
      LODWORD(v4) = (_DWORD)v4 + 1;
      if ( ((unsigned int)v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28, v27, v17) )
      {
        HvlNotifyLongSpinWait((unsigned int)v4);
      }
      else
      {
        _mm_pause();
      }
      v27 = (unsigned int)*v20;
    }
    v9 = v170;
    v4 = 0LL;
  }
  v20[1] = 0;
  v31 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v32 = v3[12];
  do
  {
    while ( v32 < 0 )
    {
      if ( (v32 & 0x40000000) != 0 )
      {
        v183 = 0;
        do
        {
          KeYieldProcessorEx(&v183);
          v32 = v3[12];
        }
        while ( v32 < 0 );
      }
      else
      {
        v32 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v32 | 0x40000000, v32);
      }
    }
    v33 = v32;
    v32 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v32 & 0x3FFFFFFF | 0x80000000, v32);
  }
  while ( v33 != v32 );
  v34 = v3[12];
  do
  {
    v35 = v34;
    v34 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v34 | 0x20000000, v34);
  }
  while ( v35 != v34 );
  v37 = v3[12];
  v36 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v37 & 0x3FFFFFFF, v37);
  if ( v37 != v36 )
  {
    do
    {
      v38 = v36;
      v36 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v36 & 0x3FFFFFFF, v36);
    }
    while ( v36 != v38 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v31 < 2u )
  {
    v39 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v39);
  }
  __writecr8(v31);
  v40 = &dword_14043C7C0;
  v173 = *(_DWORD *)(v9 + 184);
  if ( (v173 & 7) != 2 )
    v40 = (LONG *)(v9 + 192);
  if ( (v173 & 7) == 0
    && *(_QWORD *)(v9 + 16)
    && *(_WORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 320LL) )
  {
    v4 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
  }
  v41 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
  MiCheckProcessShadow(v170, 2u, v17, v18);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v40, retaddr);
  else
    *v40 = 0;
  v42 = KeGetCurrentPrcb();
  v43 = v42->SchedulerAssist;
  if ( v43 )
  {
    if ( v42->NestingLevel <= 1u )
    {
      v44 = v43[5] - 1;
      v43[5] = v44;
      if ( !v44 )
        KiRemoveSystemWorkPriorityKick(v42);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v45 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v45);
  }
  __writecr8(CurrentIrql);
  if ( v4 )
  {
    do
    {
      v46 = (_QWORD *)*v4;
      ExFreePoolWithTag(v4, 0);
      v4 = v46;
    }
    while ( v46 );
  }
  if ( !v41 && ((v173 & 0x8000000) != 0 || (v173 & 0x4000000) != 0 || (v173 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(v170);
    MiUnlockWorkingSetShared(v170, CurrentIrql);
  }
  v47 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v171 = 0;
  v48 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v48->ApcState.Process);
  else
    SessionId = -1;
  --v48->SpecialApcDisable;
  v50 = ++v48->AbAllocationRegionCount;
  LODWORD(v51) = ((char)v48->AbEntrySummary | (char)v48->AbOrphanedEntrySummary) ^ 0x3F;
  v29 = !_BitScanReverse((unsigned int *)&v52, v51);
  v184 = v52;
  if ( v29 )
  {
LABEL_106:
    if ( (*((_DWORD *)&v48->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v48, v47, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v53 = 1 << v52;
      v54 = v52;
      v55 = &v48->LockEntries[v54];
      v51 = ~v53 & (unsigned int)v51;
      if ( (v55->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v55->LockState.0 & 1) == 0
        && (*(_QWORD *)&v55->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v55->LockState.SessionId == SessionId )
      {
        v55->AcquiredByte &= ~1u;
        if ( v55->LockState.0 )
          break;
      }
      v29 = !_BitScanReverse((unsigned int *)&v52, v51);
      v184 = v52;
      if ( v29 )
        goto LABEL_105;
    }
    if ( !v55 )
    {
LABEL_105:
      v47 = BugCheckParameter2;
      goto LABEL_106;
    }
    v55->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v55->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v48->LockEntries[v54].TreeNode, v51);
    v171 = 0;
    v171 = v55->BoostBitmap.AllFields & 0x1FFFF;
    v55->BoostBitmap.AllFields &= 0xFFFE0000;
    v55->ThreadLocalFlags &= ~1u;
    v55->LockState.0 = 0LL;
    v56 = (unsigned __int128)(((char *)v55 - (char *)v48 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v47 = BugCheckParameter2;
    v57 = 1 << ((v56 >> 4) + (v56 < 0));
    if ( v50 == 1 )
      v48->AbEntrySummary |= v57;
    else
      _InterlockedOr8((volatile signed __int8 *)&v48->AbOrphanedEntrySummary, v57);
  }
  --v48->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v48, v47, (__int64)&v171);
  v29 = v48->SpecialApcDisable++ == -1;
  if ( v29 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
    KiCheckForKernelApcDelivery(v58);
  v59 = (__int64)v188;
  v29 = v188->SpecialApcDisable++ == -1;
  if ( v29 && *(_QWORD *)(v59 + 152) != v59 + 152 )
    KiCheckForKernelApcDelivery(v59);
  v60 = v3[12];
  v61 = v60 & 7;
  if ( v61 != 3 || (v60 & 0x20000) != 0 )
  {
    if ( v61 == 1 )
    {
      v63 = (__int64 *)*((_QWORD *)v3 + 9);
      if ( v63 )
        v177 = *v63;
      v62 = 32;
    }
    else if ( (v60 & 0x4000) != 0 )
    {
      v62 = 0;
      if ( v61 == 6 )
      {
        v62 = 8;
      }
      else if ( (v60 & 0x80000) != 0 )
      {
        v62 = 512;
      }
    }
    else
    {
      v62 = ((v179 >> 31) & 1) + 2;
      if ( (v179 & 1) != 0 )
        v62 |= 4u;
    }
  }
  else
  {
    v62 = 16;
  }
  if ( v5 >= 0 )
  {
    v64 = &v191;
    LOBYTE(v64) = 17;
    v65 = KeGetCurrentThread()->ApcState.Process;
    MiDeletePagablePteRange((_DWORD)v65 + 1280, (_DWORD)v64, v176, v180, 0, v62 | 0x40, (__int64)&v191);
    if ( v194 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v65[1].Affinity.Bitmap[13], -v194);
  }
  if ( (v62 & 2) != 0 )
  {
    v66 = v3[12];
    v67 = **((_QWORD **)v3 + 9);
    v177 = v67;
    if ( (v66 & 7) == 2 )
    {
      if ( (v3[16] & 0x1000000) != 0 )
      {
        v5 |= 0x18u;
        v168 = v5;
      }
    }
    else if ( *(_QWORD *)(v67 + 64) )
    {
      if ( (v66 & 0xF8) == 0x20 || (v66 & 0xF8) == 0x30 )
        _InterlockedDecrement((volatile signed __int32 *)(v67 + 92));
      MiGetProtoPteAddress((__int64)v3, v3[6] | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32), 0, &v181);
      v5 |= 0x20u;
      if ( (v3[16] & 0x1000000) == 0 )
        v5 = v16;
      v168 = v5;
      MiGetProtoPteAddress((__int64)v3, v3[7] | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32), 0, &v182);
    }
    v68 = v5;
    if ( (v5 & 8) == 0 )
    {
      v69 = v3[12];
      if ( (v3[12] & 7) != 7 )
      {
        v70 = (PVOID *)&unk_14043C7F0;
        if ( (*(_BYTE *)(v170 + 184) & 7) != 2 )
          v70 = (PVOID *)(v170 + 240);
        if ( *v70 )
        {
          v71 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v71 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          SharedVm = MiGetSharedVm(v170);
          ExAcquireSpinLockExclusiveAtDpcLevel(SharedVm + 10);
          if ( *v70 )
          {
            MiEmptyPageAccessLog(*v70);
            *v70 = 0LL;
          }
          v73 = MiGetSharedVm(v170);
          ExReleaseSpinLockExclusiveFromDpcLevel(v73 + 10);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v71 < 2u )
          {
            v74 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v74->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v74);
          }
          __writecr8(v71);
          v69 = v3[12];
          v67 = v177;
        }
        if ( (v69 & 7) == 2 )
        {
          v75 = v5 | 2;
          if ( (*(_DWORD *)(v67 + 56) & 0x4000000) == 0 )
            v75 = v68;
          v5 = v75 | 4;
        }
        else if ( (v69 & 0x4000) == 0 && !*(_QWORD *)(v67 + 64) )
        {
          MiGetProtoPteAddress((__int64)v3, v3[6] | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32), 0, &v181);
          MiGetProtoPteAddress((__int64)v3, v3[7] | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32), 0, &v182);
        }
      }
      v76 = v5;
      v77 = v5 | 1;
      if ( *((__int64 *)v3 + 15) >= 0 )
        v77 = v76;
      v5 = v77 | 8;
      v168 = v5;
    }
  }
  v78 = KeGetCurrentThread();
  --v78->SpecialApcDisable;
  v185 = 0;
  v79 = v175 + 872;
  v80 = KeGetCurrentThread();
  --v80->SpecialApcDisable;
  if ( ++v80->AbAllocationRegionCount != 1 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v80->116 + 1, 0x10u);
    v81 = 0LL;
    goto LABEL_190;
  }
  AbEntrySummary = v80->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !v80->AbOrphanedEntrySummary )
    {
      v81 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v80, v79);
      goto LABEL_181;
    }
    AbOrphanedEntrySummary = v80->AbOrphanedEntrySummary;
    v80->AbOrphanedEntrySummary = 0;
    v80->AbEntrySummary |= AbOrphanedEntrySummary;
    AbEntrySummary = v80->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v84, AbEntrySummary);
  v196 = v84;
  v80->AbEntrySummary = AbEntrySummary & ~(1 << v84);
  v81 = &v80->LockEntries[v84];
LABEL_181:
  if ( v81 )
  {
    if ( v79 >= 0xFFFF800000000000uLL && byte_14043CA10[((v79 >> 39) & 0x1FF) - 256] == 1 )
      v85 = MmGetSessionIdEx((__int64)v80->ApcState.Process);
    else
      v85 = -1;
    v81->LockState.SessionId = v85;
    v81->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(v79 & 0x7FFFFFFFFFFFFFFCLL);
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v80->116 + 1, 0x10u);
  }
LABEL_190:
  --v80->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v80, v79, (__int64)&v185);
  v29 = v80->SpecialApcDisable++ == -1;
  if ( v29 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v80->ApcState.ApcListHead[0].Flink != &v80->152 )
    KiCheckForKernelApcDelivery(v86);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v79, 0LL) )
  {
    if ( v81 )
      KeAbPostReleaseEx(v79, v81);
    v87 = 0;
  }
  else
  {
    if ( v81 )
      v81->AcquiredByte |= 1u;
    v87 = 1;
  }
  if ( v87 )
  {
    LOBYTE(v78[1].Queue) |= 1u;
  }
  else
  {
    MiUnlockVad(v78, v3);
    --v78->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v79, 0LL);
    LOBYTE(v78[1].Queue) |= 1u;
    --v78->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 10), 0LL);
    LOBYTE(v78[1].Queue) |= 0x80u;
    KiLeaveGuardedRegionUnsafe((__int64)v78);
  }
  if ( v5 < 0 )
  {
    v138 = 0LL;
    goto LABEL_340;
  }
  --v188->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v89 = &dword_14043C7C0;
  if ( (*(_BYTE *)(v170 + 184) & 7) != 2 )
    v89 = (LONG *)(v170 + 192);
  v90 = KeGetCurrentIrql();
  v174 = v90;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v90 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v89, (unsigned __int8)v90);
  }
  else
  {
    v91 = KeGetCurrentPrcb();
    v92 = 0;
    v93 = v91->SchedulerAssist;
    if ( v93 )
    {
      if ( v91->NestingLevel <= 1u )
      {
        v94 = v93[5];
        v93[5] = v94 + 1;
        if ( v94 == -1 )
          KiRemoveSystemWorkPriorityKick(v91);
      }
    }
    if ( _interlockedbittestandset(v89, 0x1Fu) )
    {
      v95 = v91->SchedulerAssist;
      if ( v95 )
      {
        if ( v91->NestingLevel <= 1u )
        {
          v96 = v95[5] - 1;
          v95[5] = v96;
          if ( !v96 )
            KiRemoveSystemWorkPriorityKick(v91);
        }
      }
      v92 = ExpWaitForSpinLockExclusiveAndAcquire(v89, v90);
    }
    v97 = (unsigned int)*v89;
    v98 = v97 & 0xFFFFFFFFBFFFFFFFuLL;
    while ( (v97 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v97 & 0x40000000) == 0 )
      {
        v98 = (unsigned int)v97;
        LODWORD(v98) = v97 | 0x40000000;
        v99 = _InterlockedCompareExchange(v89, v97 | 0x40000000, v97);
        v29 = (_DWORD)v97 == v99;
        v97 = v99;
        if ( !v29 )
          continue;
      }
      if ( (++v92 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v98, v97, v88) )
      {
        HvlNotifyLongSpinWait(v92);
      }
      else
      {
        _mm_pause();
      }
      v97 = (unsigned int)*v89;
    }
  }
  v100 = v176;
  v101 = &v178;
  v102 = v180;
  v89[1] = 0;
  v178 = 0;
  v103 = 2LL;
  do
  {
    v199 = ((v100 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v198 = ((v199 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v104 = (__int64 **)&v197;
    v197 = ((v198 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v105 = 0;
    while ( 1 )
    {
      v106 = *v104;
      v107 = **v104;
      if ( (unsigned __int64)*v104 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v106 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v107 & 1) != 0
        && ((v107 & 0x20) == 0 || (v107 & 0x42) == 0) )
      {
        v108 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v108 )
        {
          v109 = *(_QWORD *)(v108 + 8 * (((unsigned __int64)v106 >> 3) & 0x1FF));
          v110 = v107 | 0x20;
          if ( (v109 & 0x20) == 0 )
            v110 = **v104;
          v107 = v110;
          if ( (v109 & 0x42) != 0 )
            v107 = v110 | 0x42;
        }
      }
      if ( !v107 )
        break;
      if ( (v107 & 1) == 0 && v105 != 2 )
        MiMakeSystemAddressValid((__int64)((_QWORD)v106 << 25) >> 16, 1);
      ++v105;
      ++v104;
      if ( v105 >= 3 )
        goto LABEL_253;
    }
    *(_BYTE *)v101 = 1 << (2 - v105);
LABEL_253:
    v101 = (int *)((char *)v101 + 1);
    v100 = v102;
    --v103;
  }
  while ( v103 );
  v111 = P;
  v112 = P;
  j = *(_QWORD *)P;
  if ( *(_QWORD *)P )
  {
    for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
      j = i;
  }
  else
  {
    for ( j = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(PVOID *)(j + 8) == v112 )
        break;
      v112 = (PVOID)j;
    }
  }
  k = *((_QWORD *)P + 1);
  v116 = P;
  if ( k )
  {
    v117 = *(_QWORD **)k;
    if ( *(_QWORD *)k )
    {
      do
      {
        k = (unsigned __int64)v117;
        v117 = (_QWORD *)*v117;
      }
      while ( v117 );
    }
  }
  else
  {
    for ( k = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(PVOID *)k == v116 )
        break;
      v116 = (PVOID)k;
    }
  }
  v118 = v175;
  RtlAvlRemoveNode((unsigned __int64 *)(v175 + 1576), (unsigned __int64 *)P);
  v5 = v168;
  if ( *(_DWORD **)(v118 + 1584) == v111 )
    *(_QWORD *)(v118 + 1584) = *(_QWORD *)(v118 + 1576);
  --*(_QWORD *)(v118 + 1592);
  v121 = v111[12] & 7;
  *((_QWORD *)v111 + 2) = -2LL;
  if ( v121 == 5 || v121 == 2 && (v111[16] & 0x1000000) != 0 )
    --*(_DWORD *)(v118 + 1708);
  v122 = 0LL;
  v173 = *(_DWORD *)(v170 + 184);
  if ( (v173 & 7) != 2 )
    v187 = (LONG *)(v170 + 192);
  if ( (v173 & 7) == 0
    && *(_QWORD *)(v170 + 16)
    && *(_WORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 320LL) )
  {
    v122 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
  }
  v123 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
  MiCheckProcessShadow(v170, 2u, v119, v120);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v187, retaddr);
  else
    *v187 = 0;
  v124 = KeGetCurrentPrcb();
  v125 = v124->SchedulerAssist;
  if ( v125 )
  {
    if ( v124->NestingLevel <= 1u )
    {
      v126 = v125[5] - 1;
      v125[5] = v126;
      if ( !v126 )
        KiRemoveSystemWorkPriorityKick(v124);
    }
  }
  v127 = v174;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v174 < 2u )
  {
    v128 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v128->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v128);
  }
  __writecr8(v127);
  if ( v122 )
  {
    do
    {
      v129 = (_QWORD *)*v122;
      ExFreePoolWithTag(v122, 0);
      v122 = v129;
    }
    while ( v129 );
  }
  if ( !v123 && ((v173 & 0x8000000) != 0 || (v173 & 0x4000000) != 0 || (v173 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(v170);
    MiUnlockWorkingSetShared(v170, v174);
  }
  if ( !v189 )
  {
    v130 = v176 >> 16;
    v131 = v180 >> 16;
    if ( j
      && ((v176 ^ ((*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      LODWORD(v130) = v130 + 1;
    }
    if ( !k
      || ((v180 ^ ((*(unsigned int *)(k + 24) | ((unsigned __int64)*(unsigned __int8 *)(k + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      goto LABEL_307;
    }
    if ( (_DWORD)v131 )
    {
      LODWORD(v131) = v131 - 1;
LABEL_307:
      v132 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 48LL;
      for ( m = 0; m < 3; ++m )
      {
        if ( (unsigned int)MiClearVadCellBits((unsigned int)v132 + 56 * m, v130, v131, j, k) )
          break;
      }
    }
  }
  v3 = (unsigned int *)P;
  v134 = v175;
  v135 = v180;
  v136 = v176;
  *((_QWORD *)P + 1) = v195;
  MiReturnPageTablePageCommitment(v136, v135, v134, j, k, (__int64)v3, (__int64)&v178);
  v137 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v138 = 0LL;
  v172 = 0;
  v139 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    v140 = (unsigned int)MmGetSessionIdEx((__int64)v139->ApcState.Process);
  else
    v140 = 0xFFFFFFFFLL;
  --v139->SpecialApcDisable;
  v141 = ++v139->AbAllocationRegionCount;
  LODWORD(v142) = ((char)v139->AbEntrySummary | (char)v139->AbOrphanedEntrySummary) ^ 0x3F;
  v29 = !_BitScanReverse((unsigned int *)&v143, v142);
  v186 = v143;
  if ( v29 )
  {
LABEL_323:
    if ( (*((_DWORD *)&v139->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v139, v137, v140, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v144 = 1 << v143;
      v145 = v143;
      v146 = &v139->LockEntries[v145];
      v142 = ~v144 & (unsigned int)v142;
      if ( (v146->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v146->LockState.0 & 1) == 0
        && (*(_QWORD *)&v146->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v146->LockState.SessionId == (_DWORD)v140 )
      {
        v146->AcquiredByte &= ~1u;
        if ( v146->LockState.0 )
          break;
      }
      v29 = !_BitScanReverse((unsigned int *)&v143, v142);
      v186 = v143;
      if ( v29 )
        goto LABEL_322;
    }
    if ( !v146 )
    {
LABEL_322:
      v137 = BugCheckParameter2;
      goto LABEL_323;
    }
    v146->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v146->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v139->LockEntries[v145].TreeNode, v142);
    v172 = 0;
    v172 = v146->BoostBitmap.AllFields & 0x1FFFF;
    v146->BoostBitmap.AllFields &= 0xFFFE0000;
    v146->ThreadLocalFlags &= ~1u;
    v146->LockState.0 = 0LL;
    v147 = 1 << (((char *)v146 - (char *)v139 - 800) / 96);
    if ( v141 == 1 )
      v139->AbEntrySummary |= v147;
    else
      _InterlockedOr8((volatile signed __int8 *)&v139->AbOrphanedEntrySummary, v147);
  }
  --v139->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v139, BugCheckParameter2, (__int64)&v172);
  v29 = v139->SpecialApcDisable++ == -1;
  if ( v29 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v139->ApcState.ApcListHead[0].Flink != &v139->152 )
    KiCheckForKernelApcDelivery(v148);
  v149 = (__int64)v188;
  v29 = v188->SpecialApcDisable++ == -1;
  if ( v29 && *(_QWORD *)(v149 + 152) != v149 + 152 )
    KiCheckForKernelApcDelivery(v149);
  v150 = v189;
  if ( v189 )
  {
    MiReInsertPlaceholderVad(v189);
    MiUnlockNestedVad(v150);
  }
LABEL_340:
  v151 = v175;
  *((_QWORD *)v3 + 1) = v192;
  *(_QWORD *)v3 = v193;
  if ( (v5 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(
      v176,
      v151,
      26LL,
      (v3[7] | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32))
    - (v3[6] | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32))
    + 1);
  v152 = v177;
  if ( (v5 & 1) != 0 )
    MiDereferenceExtendInfo(v3, v177);
  if ( (v5 & 8) != 0 )
  {
    if ( (v5 & 2) != 0 )
    {
      MmGetSessionIdEx(v151);
      MiDereferencePerSessionProtos(v152);
    }
    if ( (v5 & 4) != 0 && (MiControlAreaRequiresCharge(v152, 0LL) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v152);
    MiRemoveSharedCommitNode(v152, v151, 0LL);
    v153 = (char *)(v3 + 24);
    v154 = **((_QWORD **)v3 + 9);
    v155 = KeGetCurrentThread();
    --v155->SpecialApcDisable;
    v156 = (volatile signed __int64 *)(v154 + 104);
    ExAcquirePushLockExclusiveEx(v154 + 104, 0LL);
    if ( (*(_DWORD *)(v154 + 56) & 0x400) == 0 )
    {
      v157 = *(_QWORD *)v153;
      v158 = (char **)*((_QWORD *)v3 + 13);
      if ( *(char **)(*(_QWORD *)v153 + 8LL) != v153 || *v158 != v153 )
        __fastfail(3u);
      *v158 = (char *)v157;
      *(_QWORD *)(v157 + 8) = v158;
    }
    v159 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v156, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v156);
    KeAbPostRelease((ULONG_PTR)v156);
    v29 = v159->SpecialApcDisable++ == -1;
    if ( v29 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v159->ApcState.ApcListHead[0].Flink != &v159->152 )
      KiCheckForKernelApcDelivery(v160);
  }
  result = MiFinishVadDeletion(v3, v195);
  v162 = v177;
  if ( v177 )
  {
    if ( (v5 & 0x10) != 0 )
    {
      return MiDereferenceControlArea(v177);
    }
    else
    {
      v163 = v181;
      if ( v181 && (v5 & 0x20) != 0 )
        MiDecrementLargeSubsections(v181, v182);
      v164 = v162 + 72;
      v165 = 0LL;
      v166 = *(_QWORD *)(v162 + 64) != 0LL;
      v167 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v167 < 2u )
      {
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v163 = v181;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v164, v167);
      else
        ExpAcquireSpinLockExclusive(v164, v167);
      if ( v163 )
        v138 = MiDecrementSubsections(v163);
      --*(_QWORD *)(v162 + 40);
      --*(_QWORD *)(v162 + 48);
      if ( v138 )
        v165 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v162 + 60) & 0x3FF));
      result = MiCheckControlArea(v162, v167);
      if ( v138 )
        return MiReturnCrossPartitionSectionCharges(v165, v166, v138);
    }
  }
  return result;
}
