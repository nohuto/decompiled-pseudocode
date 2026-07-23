/*
 * XREFs of MiDeleteVad @ 0x140055030
 * Callers:
 *     MiFreeVadRange @ 0x1400ABCD8 (MiFreeVadRange.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiCleanVad @ 0x14060AA70 (MiCleanVad.c)
 *     MiUnmapVad @ 0x14064C934 (MiUnmapVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x140670744 (MiFreeToSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x14077A454 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x14088B470 (MiCoalescePlaceholderAllocations.c)
 *     MiCreateEnclave @ 0x1408939D0 (MiCreateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408992E0 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x14089B22C (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiEmptyPageAccessLog @ 0x14001C930 (MiEmptyPageAccessLog.c)
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400477F0 (ExpAcquireSpinLockExclusive.c)
 *     MiFinishVadDeletion @ 0x140056B50 (MiFinishVadDeletion.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     MiControlAreaRequiresCharge @ 0x140071220 (MiControlAreaRequiresCharge.c)
 *     MiDecrementSubsections @ 0x1400715F0 (MiDecrementSubsections.c)
 *     MiUnlockVad @ 0x140073FB0 (MiUnlockVad.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiDeletePagablePteRange @ 0x1400ACB20 (MiDeletePagablePteRange.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1400CCBA0 (MiCheckProcessShadow.c)
 *     MiDereferenceExtendInfo @ 0x14013A09C (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x14013D0CC (MiDereferenceControlArea.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA5E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402C0B60 (MiLogPerfMemoryRangeEvent.c)
 *     MiDecrementLargeSubsections @ 0x1402CB518 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x1402DEDC0 (MiReInsertPlaceholderVad.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402E3BBC (MiDeleteDeferredCloneDescriptors.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReturnPageTablePageCommitment @ 0x1406058B0 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveSharedCommitNode @ 0x1406086F0 (MiRemoveSharedCommitNode.c)
 *     MiDereferencePerSessionProtos @ 0x1406E88BC (MiDereferencePerSessionProtos.c)
 *     MiDeleteEnclavePages @ 0x140894018 (MiDeleteEnclavePages.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140896AE4 (MiRemoveUserPhysicalPagesView.c)
 *     MiUnlockNestedVad @ 0x14089B8BC (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiDeleteVad(unsigned int *a1, __int64 a2, int a3)
{
  unsigned int *v3; // r13
  _QWORD *v4; // rsi
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rbx
  __int64 v8; // rax
  unsigned __int16 *v9; // r14
  unsigned __int64 v10; // rcx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  void *v13; // rcx
  unsigned int v14; // ecx
  __int64 v15; // rax
  char v16; // r12
  char v17; // al
  LONG *v18; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  unsigned __int32 v25; // edx
  __int64 v26; // rcx
  bool v27; // zf
  signed __int32 v28; // eax
  unsigned __int8 v29; // bl
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  signed __int32 v34; // edx
  struct _KPRCB *v35; // rcx
  LONG *v36; // rbx
  int v37; // r14d
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  int v40; // eax
  struct _KPRCB *v41; // rcx
  _QWORD *v42; // rbx
  ULONG_PTR v43; // rsi
  struct _KTHREAD *v44; // r14
  unsigned int SessionId; // r8d
  unsigned __int8 v46; // r15
  unsigned int v47; // edx
  __int64 v48; // r9
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  _KLOCK_ENTRY *v52; // rsi
  __int64 v53; // rdx
  unsigned __int8 v54; // al
  struct _KTHREAD *v55; // rcx
  unsigned int v56; // r8d
  int v57; // ecx
  __int64 *v58; // rax
  int v59; // esi
  __int64 *v60; // rdx
  _KPROCESS *v61; // r14
  unsigned int v62; // ecx
  __int64 v63; // r14
  char v64; // r15
  unsigned int v65; // ecx
  _SLIST_ENTRY **v66; // rsi
  unsigned __int8 v67; // r14
  unsigned __int64 *v68; // rdx
  struct _KPRCB *v69; // rcx
  char v70; // di
  char v71; // cl
  char v72; // di
  struct _KTHREAD *v73; // r15
  ULONG_PTR v74; // r12
  struct _KTHREAD *v75; // rsi
  __int64 v76; // r14
  unsigned __int8 AbEntrySummary; // al
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v79; // rcx
  int v80; // eax
  int v81; // eax
  LONG *v82; // r14
  unsigned __int8 v83; // r12
  struct _KPRCB *v84; // r15
  unsigned int v85; // esi
  _DWORD *v86; // rcx
  int v87; // eax
  _DWORD *v88; // rcx
  int v89; // eax
  unsigned __int32 v90; // edx
  __int64 v91; // rcx
  signed __int32 v92; // eax
  unsigned __int64 v93; // rcx
  int *v94; // r15
  unsigned __int64 v95; // rdi
  __int64 v96; // r12
  __int64 **v97; // r14
  unsigned int v98; // esi
  __int64 *v99; // r10
  __int64 v100; // rcx
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v102; // rax
  __int64 v103; // r8
  PVOID v104; // rcx
  unsigned __int64 v105; // r12
  unsigned __int64 v106; // rax
  PVOID v107; // rcx
  unsigned __int64 v108; // r13
  _QWORD *v109; // rax
  unsigned __int64 *v110; // r14
  __int64 v111; // r15
  unsigned int v112; // ecx
  _QWORD *v113; // r14
  int v114; // r15d
  struct _KPRCB *v115; // rcx
  _DWORD *v116; // rdx
  int v117; // eax
  struct _KPRCB *v118; // rcx
  _QWORD *v119; // rsi
  unsigned __int64 v120; // rdx
  unsigned __int64 v121; // r14
  unsigned __int64 v122; // rax
  int v123; // r11d
  __int64 v124; // rcx
  unsigned __int64 v125; // rbx
  __int64 v126; // rax
  int v127; // edi
  __int64 v128; // rax
  __int64 v129; // r9
  unsigned __int64 *v130; // r12
  unsigned __int64 v131; // rcx
  __int64 v132; // rax
  unsigned __int64 v133; // r10
  unsigned __int64 v134; // rdx
  unsigned __int64 v135; // r13
  unsigned __int64 v136; // rsi
  __int64 v137; // r8
  unsigned __int64 v138; // r15
  unsigned __int64 v139; // rsi
  unsigned __int64 v140; // r8
  unsigned __int64 v141; // r15
  unsigned __int64 v142; // r13
  unsigned __int64 v143; // rcx
  _BYTE *v144; // r14
  char v145; // al
  int v146; // r15d
  unsigned __int64 v147; // rax
  int v148; // edx
  unsigned __int64 v149; // r8
  unsigned __int64 v150; // r8
  unsigned __int64 v151; // r9
  unsigned __int64 v152; // r9
  PVOID v153; // rcx
  int v154; // r8d
  int v155; // edx
  ULONG_PTR v156; // r13
  __int64 v157; // r12
  struct _KTHREAD *v158; // r14
  ULONG_PTR v159; // r9
  unsigned __int8 v160; // r15
  unsigned int v161; // edx
  __int64 v162; // rcx
  int v163; // eax
  __int64 v164; // rcx
  _KLOCK_ENTRY *v165; // rsi
  unsigned __int8 v166; // al
  struct _KTHREAD *v167; // rcx
  __int64 v168; // rsi
  __int64 v169; // r14
  __int64 v170; // rsi
  unsigned int v171; // eax
  char *v172; // r15
  __int64 v173; // rsi
  struct _KTHREAD *v174; // rax
  volatile signed __int64 *v175; // r14
  __int64 v176; // rcx
  char **v177; // rax
  struct _KTHREAD *v178; // rsi
  __int64 result; // rax
  __int64 v180; // r13
  ULONG_PTR v181; // rbx
  volatile signed __int32 *v182; // rcx
  __int64 v183; // r14
  BOOL v184; // r15d
  unsigned __int8 v185; // di
  char v186; // [rsp+40h] [rbp-C0h]
  int v187; // [rsp+44h] [rbp-BCh]
  int v188; // [rsp+44h] [rbp-BCh]
  unsigned int v189; // [rsp+44h] [rbp-BCh]
  unsigned __int8 v190; // [rsp+48h] [rbp-B8h]
  int v191; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v192; // [rsp+50h] [rbp-B0h]
  int v193; // [rsp+50h] [rbp-B0h]
  LONG *v194; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v195; // [rsp+58h] [rbp-A8h]
  int v196; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  _QWORD *v198; // [rsp+70h] [rbp-90h]
  unsigned __int64 v199; // [rsp+78h] [rbp-88h]
  unsigned __int64 v200; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h]
  __int64 v202; // [rsp+90h] [rbp-70h]
  unsigned __int64 v203; // [rsp+98h] [rbp-68h]
  __int64 v204; // [rsp+A0h] [rbp-60h]
  int v205; // [rsp+A8h] [rbp-58h] BYREF
  int v206; // [rsp+ACh] [rbp-54h] BYREF
  int v207; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v208; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v209; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v210; // [rsp+C8h] [rbp-38h] BYREF
  int v211; // [rsp+D0h] [rbp-30h] BYREF
  int v212; // [rsp+D4h] [rbp-2Ch]
  int v213; // [rsp+D8h] [rbp-28h] BYREF
  int v214; // [rsp+DCh] [rbp-24h]
  struct _KTHREAD *v215; // [rsp+E0h] [rbp-20h]
  __int64 v216; // [rsp+E8h] [rbp-18h]
  __int64 v217; // [rsp+F0h] [rbp-10h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v219; // [rsp+110h] [rbp+10h] BYREF
  __int64 v220; // [rsp+118h] [rbp+18h]
  __int64 v221; // [rsp+120h] [rbp+20h]
  __int64 v222; // [rsp+128h] [rbp+28h]
  __int64 v223; // [rsp+130h] [rbp+30h]
  __int64 v224; // [rsp+138h] [rbp+38h]
  int v225; // [rsp+140h] [rbp+40h]
  unsigned __int64 v226; // [rsp+148h] [rbp+48h]
  __int64 v227; // [rsp+150h] [rbp+50h]
  unsigned __int64 v228; // [rsp+158h] [rbp+58h]
  __int64 v229; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v230; // [rsp+168h] [rbp+68h]
  unsigned __int64 v231; // [rsp+170h] [rbp+70h]
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v3 = a1;
  P = a1;
  v207 = a3;
  v4 = 0LL;
  v219 = 0LL;
  v220 = 0LL;
  v5 = 0;
  v221 = 0LL;
  v222 = 0LL;
  v223 = 0LL;
  v224 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v8 = a1[7];
  v203 = (a1[6] | ((unsigned __int64)*((unsigned __int8 *)a1 + 32) << 32)) << 12;
  v9 = &Process[1].IdealNode[6];
  v10 = v8 | ((unsigned __int64)*((unsigned __int8 *)a1 + 33) << 32);
  v216 = a2;
  v196 = 0;
  v208 = (v10 << 12) | 0xFFF;
  v11 = v3[12];
  v186 = 0;
  v215 = CurrentThread;
  v202 = (__int64)Process;
  v192 = &Process[1].IdealNode[6];
  v209 = 0LL;
  v210 = 0LL;
  v204 = 0LL;
  if ( (v11 & 0x100000) != 0 && ((v11 & 0x400000) != 0 || (v11 & 0xC0000) >= 0x80000)
    || (v11 & 0x70) == 0x20 && (v3[16] & 0x1000000) != 0 )
  {
    v5 = 64;
    v186 = 64;
  }
  v12 = v3[12];
  if ( (v12 & 0x100000) == 0 )
  {
    v13 = (void *)*((_QWORD *)v3 + 16);
    if ( v13 )
    {
      ObfDereferenceObject(v13);
      v12 = v3[12];
    }
  }
  LOBYTE(v14) = v12;
  if ( (v12 & 0x100000) != 0 && (v12 & 0x1000000) == 0 && (v12 & 0x2000000) != 0 )
  {
    MiDeleteEnclavePages(Process, v3);
    v14 = v3[12];
  }
  if ( (v14 & 0x70) == 0x30 )
    v223 = MiRemoveUserPhysicalPagesView(v3);
  v15 = v3[13];
  LODWORD(v15) = v15 & 0x7FFFFFFF;
  if ( (v15 | ((unsigned __int64)*((unsigned __int8 *)v3 + 34) << 31)) == 0x7FFFFFFFDLL && *((_QWORD *)v3 + 2) == -2LL )
  {
    v5 |= 0x80u;
    v186 = v5;
  }
  --CurrentThread->SpecialApcDisable;
  v16 = v5;
  BugCheckParameter2 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v17 = Process[1].SecureState.SecureHandle & 7;
  v194 = &dword_140467200;
  v18 = &dword_140467200;
  if ( v17 != 2 )
    v18 = (LONG *)(v9 + 96);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v18, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = SchedulerAssist[5];
        SchedulerAssist[5] = v22 + 1;
        if ( v22 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(v18, 0x1Fu) )
    {
      v23 = CurrentPrcb->SchedulerAssist;
      if ( v23 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v24 = v23[5] - 1;
          v23[5] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LODWORD(v4) = ExpWaitForSpinLockExclusiveAndAcquire(v18, CurrentIrql);
    }
    v25 = *v18;
    v26 = (unsigned int)*v18;
    LODWORD(v26) = v26 & 0xBFFFFFFF;
    if ( (_DWORD)v26 != 0x80000000 )
    {
      do
      {
        if ( (v25 & 0x40000000) == 0 )
        {
          v26 = v25;
          LODWORD(v26) = v25 | 0x40000000;
          v28 = _InterlockedCompareExchange(v18, v25 | 0x40000000, v25);
          v27 = v25 == v28;
          v25 = v28;
          if ( !v27 )
            continue;
        }
        LODWORD(v4) = (_DWORD)v4 + 1;
        if ( ((unsigned int)v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
        {
          HvlNotifyLongSpinWait((unsigned int)v4);
        }
        else
        {
          _mm_pause();
        }
        v25 = *v18;
      }
      while ( (v25 & 0xBFFFFFFF) != 0x80000000 );
    }
    v9 = v192;
    v4 = 0LL;
  }
  v18[1] = 0;
  v29 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v29 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v30 = v3[12];
  do
  {
    while ( (v30 & 1) != 0 )
    {
      if ( (v30 & 2) != 0 )
      {
        v211 = 0;
        do
        {
          KeYieldProcessorEx(&v211);
          v30 = v3[12];
        }
        while ( (v30 & 1) != 0 );
      }
      else
      {
        v30 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v30 | 2, v30);
      }
    }
    v31 = v30;
    v30 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v30 & 0xFFFFFFFC | 1, v30);
  }
  while ( v31 != v30 );
  _InterlockedOr((volatile signed __int32 *)v3 + 12, 4u);
  v33 = v3[12];
  v32 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v33 & 0xFFFFFFFC, v33);
  if ( v33 != v32 )
  {
    do
    {
      v34 = v32;
      v32 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 12, v32 & 0xFFFFFFFC, v32);
    }
    while ( v32 != v34 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v29 < 2u )
  {
    v35 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v35);
  }
  __writecr8(v29);
  v36 = &dword_140467200;
  v187 = *((_DWORD *)v9 + 46);
  if ( (v187 & 7) != 2 )
    v36 = (LONG *)(v9 + 96);
  if ( (v187 & 7) == 0
    && *((_QWORD *)v9 + 2)
    && *(_WORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 368LL) )
  {
    v4 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
  }
  v37 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
  MiCheckProcessShadow(v192, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v36, retaddr);
  else
    *v36 = 0;
  v38 = KeGetCurrentPrcb();
  v39 = v38->SchedulerAssist;
  if ( v39 )
  {
    if ( v38->NestingLevel <= 1u )
    {
      v40 = v39[5] - 1;
      v39[5] = v40;
      if ( !v40 )
        KiRemoveSystemWorkPriorityKick(v38);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v41 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v41);
  }
  __writecr8(CurrentIrql);
  if ( v4 )
  {
    do
    {
      v42 = (_QWORD *)*v4;
      ExFreePoolWithTag(v4, 0);
      v4 = v42;
    }
    while ( v42 );
  }
  if ( !v37 && ((v187 & 0x8000000) != 0 || (v187 & 0x4000000) != 0 || (v187 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(v192);
    MiUnlockWorkingSetShared(v192, CurrentIrql);
  }
  v43 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v205 = 0;
  v44 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v44->ApcState.Process);
  else
    SessionId = -1;
  --v44->SpecialApcDisable;
  v46 = ++v44->AbAllocationRegionCount;
  v47 = ((char)v44->AbEntrySummary | (char)v44->AbOrphanedEntrySummary) ^ 0x3F;
  v48 = v43 & 0x7FFFFFFFFFFFFFFCLL;
  v27 = !_BitScanReverse((unsigned int *)&v49, v47);
  v212 = v49;
  if ( v27 )
  {
LABEL_123:
    if ( (*((_DWORD *)&v44->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v44, v43, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v50 = ~(1 << v49);
      v51 = v49;
      v47 &= v50;
      v52 = &v44->LockEntries[v51];
      if ( (v52->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v52->LockState.0 & 1) == 0
        && (*(_QWORD *)&v52->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v48
        && v52->LockState.SessionId == SessionId )
      {
        v52->AcquiredByte &= ~1u;
        if ( v52->LockState.0 )
          break;
      }
      v27 = !_BitScanReverse((unsigned int *)&v49, v47);
      v212 = v49;
      if ( v27 )
        goto LABEL_122;
    }
    if ( !v52 )
    {
LABEL_122:
      v43 = BugCheckParameter2;
      goto LABEL_123;
    }
    v52->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v52->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v44->LockEntries[v51].TreeNode);
    v205 = v52->BoostBitmap.AllFields & 0x1FFFF;
    v52->BoostBitmap.AllFields &= 0xFFFE0000;
    v52->ThreadLocalFlags &= ~1u;
    v52->LockState.0 = 0LL;
    v53 = (unsigned __int128)(((char *)v52 - (char *)v44 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v43 = BugCheckParameter2;
    v54 = 1 << ((v53 >> 4) + (v53 < 0));
    if ( v46 == 1 )
      v44->AbEntrySummary |= v54;
    else
      _InterlockedOr8((volatile signed __int8 *)&v44->AbOrphanedEntrySummary, v54);
  }
  --v44->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v44, v43, &v205);
  v27 = v44->SpecialApcDisable++ == -1;
  if ( v27 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
    KiCheckForKernelApcDelivery();
  v55 = v215;
  v27 = v215->SpecialApcDisable++ == -1;
  if ( v27 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v55->ApcState.ApcListHead[0].Flink != &v55->152 )
    KiCheckForKernelApcDelivery();
  v56 = v3[12];
  if ( (v3[12] & 0x70) != 0x30 || (v56 & 0x100000) != 0 && (v56 & 0x1000000) == 0 && (v56 & 0x2000000) != 0 )
  {
    if ( (v56 & 0x70) == 0x10 )
    {
      v58 = (__int64 *)*((_QWORD *)v3 + 9);
      if ( v58 )
        v204 = *v58;
      v57 = 32;
    }
    else if ( (v56 & 0x100000) != 0 )
    {
      v57 = 0;
      if ( (v56 & 0x70) == 0x40 )
      {
        v57 = 8;
      }
      else if ( (v56 & 0x1000000) == 0 && (v56 & 0x4000000) != 0 )
      {
        v57 = 512;
      }
    }
    else
    {
      v57 = ((v207 >> 31) & 1) + 2;
      if ( (v207 & 1) != 0 )
        v57 |= 4u;
    }
  }
  else
  {
    v57 = 16;
  }
  if ( (v56 & 0x100000) != 0 && ((v56 & 0x400000) != 0 || (v56 & 0xC0000) >= 0x80000)
    || (v56 & 0x70) == 0x20 && (v3[16] & 0x1000000) != 0 )
  {
    v57 |= 0x400u;
  }
  v59 = v57 | 0x800;
  if ( (v3[12] & 0x1100000) != 0x1100000 )
    v59 = v57;
  if ( v5 < 0x80 )
  {
    v60 = &v219;
    LOBYTE(v60) = 17;
    v61 = KeGetCurrentThread()->ApcState.Process;
    MiDeletePagablePteRange((_DWORD)v61 + 1280, (_DWORD)v60, v203, v208, 0, v59 | 0x40, (__int64)&v219);
    if ( v222 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v61[1].Affinity.Bitmap[13], -v222);
  }
  if ( (v59 & 2) != 0 )
  {
    v62 = v3[12];
    v63 = **((_QWORD **)v3 + 9);
    v204 = v63;
    if ( (v62 & 0x70) == 0x20 )
    {
      if ( (v3[16] & 0x1000000) != 0 )
      {
        LOBYTE(v5) = v5 | 0x18;
        v186 = v5;
      }
    }
    else if ( *(_QWORD *)(v63 + 64) )
    {
      if ( (v62 & 0xF80) == 0x200 || (v62 & 0xF80) == 0x300 )
        _InterlockedDecrement((volatile signed __int32 *)(v63 + 92));
      MiGetProtoPteAddress(v3, v3[6] | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32), 0LL, &v209);
      LOBYTE(v5) = v5 | 0x20;
      if ( (v3[16] & 0x1000000) == 0 )
        LOBYTE(v5) = v16;
      v186 = v5;
      MiGetProtoPteAddress(v3, v3[7] | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32), 0LL, &v210);
    }
    v64 = v5;
    if ( (v5 & 8) == 0 )
    {
      v65 = v3[12];
      if ( (v3[12] & 0x70) != 0x50 )
      {
        v66 = (_SLIST_ENTRY **)&unk_140467228;
        memset(&LockHandle, 0, sizeof(LockHandle));
        if ( (v192[92] & 7) != 2 )
          v66 = (_SLIST_ENTRY **)(v192 + 116);
        if ( *v66 )
        {
          v67 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v67 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          if ( (v192[92] & 7) == 2 )
            v68 = (unsigned __int64 *)&unk_140467240;
          else
            v68 = (unsigned __int64 *)(v192 + 128);
          LockHandle.LockQueue.Lock = v68;
          LockHandle.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v68);
          if ( *v66 )
          {
            MiEmptyPageAccessLog(*v66);
            *v66 = 0LL;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v67 < 2u )
          {
            v69 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v69->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v69);
          }
          __writecr8(v67);
          v65 = v3[12];
          v63 = v204;
        }
        if ( (v65 & 0x70) == 0x20 )
        {
          v70 = v5 | 2;
          if ( (*(_DWORD *)(v63 + 56) & 0x4000000) == 0 )
            v70 = v64;
          LOBYTE(v5) = v70 | 4;
        }
        else if ( (v65 & 0x100000) == 0 && !*(_QWORD *)(v63 + 64) )
        {
          MiGetProtoPteAddress(v3, v3[6] | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32), 0LL, &v209);
          MiGetProtoPteAddress(v3, v3[7] | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32), 0LL, &v210);
        }
      }
      v71 = v5;
      v72 = v5 | 1;
      if ( *((__int64 *)v3 + 15) >= 0 )
        v72 = v71;
      LOBYTE(v5) = v72 | 8;
      v186 = v5;
    }
  }
  v73 = KeGetCurrentThread();
  --v73->SpecialApcDisable;
  v213 = 0;
  v74 = v202 + 880;
  v75 = KeGetCurrentThread();
  --v75->SpecialApcDisable;
  if ( ++v75->AbAllocationRegionCount != 1 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v75->116 + 1, 0x10u);
    v76 = 0LL;
    goto LABEL_205;
  }
  AbEntrySummary = v75->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !v75->AbOrphanedEntrySummary )
    {
      v76 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v75, v74);
      goto LABEL_196;
    }
    AbOrphanedEntrySummary = v75->AbOrphanedEntrySummary;
    v75->AbOrphanedEntrySummary = 0;
    AbEntrySummary = v75->AbEntrySummary | AbOrphanedEntrySummary;
  }
  _BitScanForward((unsigned int *)&v79, AbEntrySummary);
  v225 = v79;
  v75->AbEntrySummary = AbEntrySummary & ~(1 << v79);
  v76 = (__int64)&v75->LockEntries[v79];
LABEL_196:
  if ( v76 )
  {
    if ( v74 >= 0xFFFF800000000000uLL && byte_140467440[((v74 >> 39) & 0x1FF) - 256] == 1 )
      v80 = MmGetSessionIdEx((__int64)v75->ApcState.Process);
    else
      v80 = -1;
    *(_DWORD *)(v76 + 40) = v80;
    *(_QWORD *)(v76 + 32) = v74 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v75->116 + 1, 0x10u);
  }
LABEL_205:
  --v75->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v75, v74, &v213);
  v27 = v75->SpecialApcDisable++ == -1;
  if ( v27 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v75->ApcState.ApcListHead[0].Flink != &v75->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)v74, 0LL) )
  {
    if ( v76 )
      KeAbPostReleaseEx(v74);
    v81 = 0;
  }
  else
  {
    if ( v76 )
      *(_BYTE *)(v76 + 26) |= 1u;
    v81 = 1;
  }
  if ( v81 )
  {
    LOBYTE(v73[1].Queue) |= 1u;
  }
  else
  {
    MiUnlockVad(v73, v3);
    --v73->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v74, 0LL);
    LOBYTE(v73[1].Queue) |= 1u;
    --v73->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 10), 0LL);
    LOBYTE(v73[1].Queue) |= 0x80u;
    KiLeaveGuardedRegionUnsafe((__int64)v73);
  }
  if ( (v5 & 0x80u) != 0 )
  {
    v157 = 0LL;
    goto LABEL_416;
  }
  --v215->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v82 = &dword_140467200;
  if ( (v192[92] & 7) != 2 )
    v82 = (LONG *)(v192 + 96);
  v83 = KeGetCurrentIrql();
  v190 = v83;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v83 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v82, v83);
  }
  else
  {
    v84 = KeGetCurrentPrcb();
    v85 = 0;
    v86 = v84->SchedulerAssist;
    if ( v86 )
    {
      if ( v84->NestingLevel <= 1u )
      {
        v87 = v86[5];
        v86[5] = v87 + 1;
        if ( v87 == -1 )
          KiRemoveSystemWorkPriorityKick(v84);
      }
    }
    if ( _interlockedbittestandset(v82, 0x1Fu) )
    {
      v88 = v84->SchedulerAssist;
      if ( v88 )
      {
        if ( v84->NestingLevel <= 1u )
        {
          v89 = v88[5] - 1;
          v88[5] = v89;
          if ( !v89 )
            KiRemoveSystemWorkPriorityKick(v84);
        }
      }
      v85 = ExpWaitForSpinLockExclusiveAndAcquire(v82, v83);
    }
    v90 = *v82;
    v91 = (unsigned int)*v82;
    LODWORD(v91) = v91 & 0xBFFFFFFF;
    if ( (_DWORD)v91 != 0x80000000 )
    {
      do
      {
        if ( (v90 & 0x40000000) == 0 )
        {
          v91 = v90;
          LODWORD(v91) = v90 | 0x40000000;
          v92 = _InterlockedCompareExchange(v82, v90 | 0x40000000, v90);
          v27 = v90 == v92;
          v90 = v92;
          if ( !v27 )
            continue;
        }
        if ( (++v85 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v91) )
        {
          HvlNotifyLongSpinWait(v85);
        }
        else
        {
          _mm_pause();
        }
        v90 = *v82;
      }
      while ( (v90 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  v93 = v203;
  v94 = &v196;
  v95 = v208;
  v96 = 2LL;
  v82[1] = 0;
  v196 = 0;
  do
  {
    v231 = ((v93 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v230 = ((v231 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v97 = (__int64 **)&v229;
    v229 = ((v230 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v98 = 0;
    while ( 1 )
    {
      v99 = *v97;
      v100 = **v97;
      if ( (unsigned __int64)*v97 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v99 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v100 & 1) != 0
        && ((v100 & 0x20) == 0 || (v100 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v102 = *(_QWORD *)(DeepFreezeStartTime + 8 * (((unsigned __int64)v99 >> 3) & 0x1FF));
          v103 = v100 | 0x20;
          if ( (v102 & 0x20) == 0 )
            v103 = **v97;
          v100 = v103;
          if ( (v102 & 0x42) != 0 )
            v100 = v103 | 0x42;
        }
      }
      if ( !v100 )
        break;
      if ( (v100 & 1) == 0 && v98 != 2 )
        MiMakeSystemAddressValid((__int64)((_QWORD)v99 << 25) >> 16, 0LL, 0, v190, 1);
      ++v98;
      ++v97;
      if ( v98 >= 3 )
        goto LABEL_268;
    }
    *(_BYTE *)v94 = 1 << (2 - v98);
LABEL_268:
    v94 = (int *)((char *)v94 + 1);
    v93 = v95;
    --v96;
  }
  while ( v96 );
  v104 = P;
  v105 = *(_QWORD *)P;
  v200 = v105;
  if ( v105 )
  {
    v106 = *(_QWORD *)(v105 + 8);
    if ( v106 )
    {
      do
      {
        v200 = v106;
        v106 = *(_QWORD *)(v106 + 8);
      }
      while ( v106 );
      v105 = v200;
    }
  }
  else
  {
    v105 = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL;
    v200 = v105;
    if ( v105 )
    {
      do
      {
        if ( *(PVOID *)(v105 + 8) == v104 )
          break;
        v104 = (PVOID)v105;
        v105 = *(_QWORD *)(v105 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      }
      while ( v105 );
      v200 = v105;
    }
  }
  v107 = P;
  v108 = *((_QWORD *)P + 1);
  v198 = (_QWORD *)v108;
  if ( v108 )
  {
    v109 = *(_QWORD **)v108;
    if ( *(_QWORD *)v108 )
    {
      do
      {
        v198 = v109;
        v109 = (_QWORD *)*v109;
      }
      while ( v109 );
      v108 = (unsigned __int64)v198;
    }
    v110 = (unsigned __int64 *)P;
  }
  else
  {
    v110 = (unsigned __int64 *)P;
    v108 = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL;
    v198 = (_QWORD *)v108;
    if ( v108 )
    {
      do
      {
        if ( *(PVOID *)v108 == v107 )
          break;
        v107 = (PVOID)v108;
        v108 = *(_QWORD *)(v108 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      }
      while ( v108 );
      v198 = (_QWORD *)v108;
    }
  }
  v111 = v202;
  RtlAvlRemoveNode((unsigned __int64 *)(v202 + 1624), v110);
  LOBYTE(v5) = v186;
  if ( *(unsigned __int64 **)(v111 + 1632) == v110 )
    *(_QWORD *)(v111 + 1632) = *(_QWORD *)(v111 + 1624);
  --*(_QWORD *)(v111 + 1640);
  v112 = *((_DWORD *)v110 + 12);
  v110[2] = -2LL;
  if ( (v112 & 0x100000) == 0 || (v112 & 0x400000) == 0 && (v112 & 0xC0000) < 0x80000 )
  {
    if ( (v112 & 0x70) != 0x20 || (v110[8] & 0x1000000) == 0 )
      goto LABEL_296;
    v112 = *((_DWORD *)v110 + 12);
  }
  if ( (unsigned __int64)MiVadPageSizes[((unsigned __int64)v112 >> 18) & 3] >= 0x200 )
    --*(_DWORD *)(v111 + 1756);
LABEL_296:
  v113 = 0LL;
  v188 = *((_DWORD *)v192 + 46);
  if ( (v188 & 7) != 2 )
    v194 = (LONG *)(v192 + 96);
  if ( (v188 & 7) == 0
    && *((_QWORD *)v192 + 2)
    && *(_WORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 368LL) )
  {
    v113 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
  }
  v114 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
  MiCheckProcessShadow(v192, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v194, retaddr);
  else
    *v194 = 0;
  v115 = KeGetCurrentPrcb();
  v116 = v115->SchedulerAssist;
  if ( v116 )
  {
    if ( v115->NestingLevel <= 1u )
    {
      v117 = v116[5] - 1;
      v116[5] = v117;
      if ( !v117 )
        KiRemoveSystemWorkPriorityKick(v115);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v190 < 2u )
  {
    v118 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v118->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v118);
  }
  __writecr8(v190);
  if ( v113 )
  {
    do
    {
      v119 = (_QWORD *)*v113;
      ExFreePoolWithTag(v113, 0);
      v113 = v119;
    }
    while ( v119 );
  }
  if ( !v114 && ((v188 & 0x8000000) != 0 || (v188 & 0x4000000) != 0 || (v188 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(v192);
    MiUnlockWorkingSetShared(v192, v190);
  }
  if ( v216 )
    goto LABEL_386;
  v120 = v203 >> 16;
  v121 = v208 >> 16;
  v199 = v203 >> 16;
  v195 = v208 >> 16;
  if ( v105
    && ((v203 ^ ((*(unsigned int *)(v105 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v105 + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v199 = ++v120;
  }
  if ( !v108
    || ((v208 ^ ((*(unsigned int *)(v108 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v108 + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
LABEL_329:
    v123 = 0;
    v191 = 0;
    v189 = 0;
    v124 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 48LL;
    v217 = v124;
    if ( *(_QWORD *)(v124 + 216) )
    {
      v125 = v200;
      v126 = 0LL;
      v127 = 0;
      while ( 1 )
      {
        v128 = 9 * v126;
        v129 = *(_QWORD *)(v124 + 8 * v128 + 8);
        v130 = (unsigned __int64 *)(v124 + 8 * v128);
        v131 = v120;
        v132 = v129 - qword_140465ED8;
        if ( !v120 )
          v131 = v129 == qword_140465ED8;
        if ( v131 > v121 )
          goto LABEL_384;
        v133 = 8 * v132;
        v227 = 8 * v132;
        if ( v121 < 8 * v132 )
          goto LABEL_384;
        v134 = v133 + *v130;
        if ( v131 >= v134 )
          goto LABEL_383;
        v135 = v130[8];
        v136 = v134 - 1;
        v137 = 8 * v132;
        LOBYTE(v123) = v131 < v133;
        if ( v131 >= v133 )
          v137 = v131;
        if ( v121 < v134 )
          v136 = v121;
        else
          v123 = 1;
        v193 = v123;
        v138 = v136 - v137;
        v139 = v136 - v133;
        v140 = v137 - v133;
        v228 = v139;
        v141 = v138 + 1;
        v226 = v140;
        v142 = v135 - v133;
        if ( !v127 )
          break;
LABEL_356:
        v147 = v130[2];
        v148 = 1;
        if ( v147 >= v142 && v130[4] >= v142 )
        {
          v123 = 0;
        }
        else
        {
          v123 = 0;
          v148 = 0;
        }
        if ( v147 > v140 )
        {
          if ( v140 < v142 && v148 )
          {
            if ( v139 >= v142 )
              v130[2] = v142;
          }
          else
          {
            v130[2] = v140;
          }
        }
        v149 = 0LL;
        if ( v125 )
        {
          v150 = ((((*(unsigned int *)(v125 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v125 + 33) << 32)) << 12) | 0xFFF)
                + 0xFFFF) >> 16;
          if ( v150 <= v133 )
          {
            v149 = 0LL;
          }
          else
          {
            v149 = v150 - v133;
            if ( v149 )
              goto LABEL_373;
          }
        }
        if ( !v133 )
          v149 = 1LL;
LABEL_373:
        if ( v148 && v149 < v142 )
          v149 = v142;
        v108 = (unsigned __int64)v198;
        if ( v149 <= v139 )
        {
          v151 = *v130;
          if ( v198
            && (*((unsigned int *)v198 + 6) | ((unsigned __int64)*((unsigned __int8 *)v198 + 32) << 32)) << 12 >> 16 <= v151 + v133 )
          {
            v151 = ((*((unsigned int *)v198 + 6) | ((unsigned __int64)*((unsigned __int8 *)v198 + 32) << 32)) << 12 >> 16)
                 - v133;
          }
          v152 = v151 - v149;
          if ( v149 < v130[4] )
          {
            v120 = v199;
            if ( v152 >= v130[3] )
              v130[4] = v149;
            goto LABEL_384;
          }
        }
LABEL_383:
        v120 = v199;
LABEL_384:
        v124 = v217;
        v126 = ++v189;
        if ( (unsigned __int64)v189 >= *(_QWORD *)(v217 + 216) )
        {
          LOBYTE(v5) = v186;
          LODWORD(v105) = v200;
          goto LABEL_386;
        }
      }
      if ( !v141 )
      {
LABEL_353:
        v146 = v191;
        if ( !v123 )
          v146 = 1;
        v191 = v146;
        v127 = v146;
        goto LABEL_356;
      }
      v143 = v140 & 7;
      v144 = (_BYTE *)(v129 + (v140 >> 3));
      if ( v143 + v141 > 8 )
      {
        if ( (v140 & 7) != 0 )
        {
          *v144++ &= byte_1403821E8[v143];
          v141 -= (unsigned int)(8 - v143);
        }
        if ( v141 > 8 )
        {
          memset(v144, 0, v141 >> 3);
          v140 = v226;
          v144 += v141 >> 3;
          v133 = v227;
          v141 &= 7u;
          v123 = v193;
          v139 = v228;
        }
        if ( !v141 )
          goto LABEL_352;
        v145 = byte_140380E20[v141];
      }
      else
      {
        v145 = ~(byte_1403821E8[v141] << v143);
      }
      *v144 &= v145;
LABEL_352:
      v121 = v195;
      goto LABEL_353;
    }
    goto LABEL_386;
  }
  v122 = v121 - 1;
  if ( v121 )
  {
    --v121;
    v195 = v122;
    goto LABEL_329;
  }
LABEL_386:
  v153 = P;
  v154 = v202;
  v155 = v208;
  *((_QWORD *)P + 1) = v223;
  MiReturnPageTablePageCommitment(v203, v155, v154, v105, v108, (__int64)v153, (__int64)&v196);
  v156 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v156);
  v157 = 0LL;
  v206 = 0;
  v158 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v156) == 1 )
    v159 = (unsigned int)MmGetSessionIdEx((__int64)v158->ApcState.Process);
  else
    v159 = 0xFFFFFFFFLL;
  --v158->SpecialApcDisable;
  v160 = ++v158->AbAllocationRegionCount;
  v161 = ((char)v158->AbEntrySummary | (char)v158->AbOrphanedEntrySummary) ^ 0x3F;
  v27 = !_BitScanReverse((unsigned int *)&v162, v161);
  v214 = v162;
  if ( v27 )
    goto LABEL_398;
  while ( 1 )
  {
    v163 = 1 << v162;
    v164 = v162;
    v165 = &v158->LockEntries[v164];
    v161 &= ~v163;
    if ( (v165->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v165->LockState.0 & 1) == 0
      && (*(_QWORD *)&v165->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v156 & 0x7FFFFFFFFFFFFFFCLL)
      && v165->LockState.SessionId == (_DWORD)v159 )
    {
      v165->AcquiredByte &= ~1u;
      if ( v165->LockState.0 )
        break;
    }
    v27 = !_BitScanReverse((unsigned int *)&v162, v161);
    v214 = v162;
    if ( v27 )
      goto LABEL_398;
  }
  if ( !v165 )
  {
LABEL_398:
    if ( (*((_DWORD *)&v158->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v158, v156, v159, 0LL);
  }
  else
  {
    v165->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v165->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v158->LockEntries[v164].TreeNode);
    v206 = v165->BoostBitmap.AllFields & 0x1FFFF;
    v165->BoostBitmap.AllFields &= 0xFFFE0000;
    v165->ThreadLocalFlags &= ~1u;
    v165->LockState.0 = 0LL;
    v166 = 1 << (((char *)v165 - (char *)v158 - 800) / 96);
    if ( v160 == 1 )
      v158->AbEntrySummary |= v166;
    else
      _InterlockedOr8((volatile signed __int8 *)&v158->AbOrphanedEntrySummary, v166);
  }
  --v158->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v158, v156, &v206);
  v27 = v158->SpecialApcDisable++ == -1;
  if ( v27 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v158->ApcState.ApcListHead[0].Flink != &v158->152 )
    KiCheckForKernelApcDelivery();
  v167 = v215;
  v27 = v215->SpecialApcDisable++ == -1;
  if ( v27 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v167->ApcState.ApcListHead[0].Flink != &v167->152 )
    KiCheckForKernelApcDelivery();
  v168 = v216;
  if ( v216 )
  {
    MiReInsertPlaceholderVad(v216);
    MiUnlockNestedVad(v168);
  }
  v3 = (unsigned int *)P;
LABEL_416:
  v169 = v202;
  *((_QWORD *)v3 + 1) = v220;
  *(_QWORD *)v3 = v221;
  if ( (v5 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(
      v203,
      v169,
      26LL,
      (v3[7] | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32))
    - (v3[6] | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32))
    + 1);
  v170 = v204;
  if ( (v5 & 1) != 0 )
    MiDereferenceExtendInfo(v3, v204);
  if ( (v5 & 8) != 0 )
  {
    if ( (v5 & 2) != 0 )
    {
      v171 = MmGetSessionIdEx(v169);
      MiDereferencePerSessionProtos(v170, v171);
    }
    if ( (v5 & 4) != 0 && (MiControlAreaRequiresCharge(v170, 0LL) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v170);
    MiRemoveSharedCommitNode(v170, v169, 0LL);
    v172 = (char *)(v3 + 24);
    v173 = **((_QWORD **)v3 + 9);
    v174 = KeGetCurrentThread();
    --v174->SpecialApcDisable;
    v175 = (volatile signed __int64 *)(v173 + 104);
    ExAcquirePushLockExclusiveEx(v173 + 104, 0LL);
    if ( (*(_DWORD *)(v173 + 56) & 0x400) == 0 )
    {
      v176 = *(_QWORD *)v172;
      v177 = (char **)*((_QWORD *)v3 + 13);
      if ( *(char **)(*(_QWORD *)v172 + 8LL) != v172 || *v177 != v172 )
        __fastfail(3u);
      *v177 = (char *)v176;
      *(_QWORD *)(v176 + 8) = v177;
    }
    v178 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v175, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v175);
    KeAbPostRelease((ULONG_PTR)v175);
    v27 = v178->SpecialApcDisable++ == -1;
    if ( v27 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v178->ApcState.ApcListHead[0].Flink != &v178->152 )
      KiCheckForKernelApcDelivery();
  }
  result = MiFinishVadDeletion(v3, v223);
  v180 = v204;
  if ( v204 )
  {
    if ( (v5 & 0x10) != 0 )
    {
      return MiDereferenceControlArea(v204);
    }
    else
    {
      v181 = v209;
      if ( v209 && (v5 & 0x20) != 0 )
        MiDecrementLargeSubsections(v209, v210);
      v182 = (volatile signed __int32 *)(v180 + 72);
      v183 = 0LL;
      v184 = *(_QWORD *)(v180 + 64) != 0LL;
      v185 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v185 < 2u )
      {
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v181 = v209;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v182, v185);
      else
        ExpAcquireSpinLockExclusive(v182, v185);
      if ( v181 )
        v157 = MiDecrementSubsections(v181);
      --*(_QWORD *)(v180 + 40);
      --*(_QWORD *)(v180 + 48);
      if ( v157 )
        v183 = *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(v180 + 60) & 0x3FF));
      result = MiCheckControlArea(v180, v185);
      if ( v157 )
        return MiReturnCrossPartitionSectionCharges(v183, v184, v157);
    }
  }
  return result;
}
