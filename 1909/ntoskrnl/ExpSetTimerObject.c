/*
 * XREFs of ExpSetTimerObject @ 0x140008D00
 * Callers:
 *     NtSetTimerEx @ 0x140008A80 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140158544 (ExpSetTimer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008A00 (KxWaitForSpinLockAndAcquire.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140009AC0 (ObpTraceObjectDereferenceIfActive.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiInsertTimerTable @ 0x140042A10 (KiInsertTimerTable.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KeInitializeApc @ 0x140082030 (KeInitializeApc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KiTimerWaitTest @ 0x1400A35B0 (KiTimerWaitTest.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1400D64DC (PoDestroyReasonContext.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     KeRemoveQueueDpcEx @ 0x1400FD550 (KeRemoveQueueDpcEx.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     ObpDeferObjectDeletion @ 0x140128EA4 (ObpDeferObjectDeletion.c)
 *     PsInsertVirtualizedTimer @ 0x14012F984 (PsInsertVirtualizedTimer.c)
 *     KiRemoveEntryTimer @ 0x1401300B8 (KiRemoveEntryTimer.c)
 *     KeRemoveQueueApc @ 0x140131FF4 (KeRemoveQueueApc.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A75D8 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A76E8 (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer @ 0x1402B2BA0 (KiTraceSetTimer.c)
 *     ExpCheckWakeTimerAccess @ 0x140747DA8 (ExpCheckWakeTimerAccess.c)
 *     ExpCheckTestsigningEnabled @ 0x140749EA0 (ExpCheckTestsigningEnabled.c)
 */

__int64 __fastcall ExpSetTimerObject(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        struct _KPRCB *a3,
        ULONG_PTR *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        unsigned int a9,
        _BYTE *a10)
{
  __int64 v10; // r13
  char v11; // r12
  ULONG_PTR v13; // r8
  char v14; // r15
  _KPROCESS *Process; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v19; // r15d
  unsigned __int8 v20; // r13
  char v21; // r14
  int v22; // r12d
  unsigned int v23; // r15d
  unsigned int v24; // r10d
  __int64 *v25; // r12
  KSPIN_LOCK *v26; // r11
  char v27; // r13
  __int64 v28; // rbx
  char v29; // cl
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // r13
  struct _KPRCB *v33; // r12
  char v34; // cl
  char v35; // cl
  __int64 v36; // rdx
  __int64 v37; // rax
  ULONG_PTR v38; // rbx
  __int64 v39; // rax
  void *v40; // rbx
  struct _KPRCB *v41; // rcx
  __int64 *v42; // rdx
  signed __int64 BugCheckParameter4; // rcx
  _BYTE *v44; // rdx
  ULONG_PTR *v46; // r15
  volatile signed __int32 *v47; // rbx
  struct _KPRCB *v48; // rdx
  _DWORD *v49; // rcx
  __int64 v50; // r12
  _QWORD *v51; // rcx
  _QWORD *v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // r15
  struct _KPRCB *v55; // rcx
  unsigned __int64 v56; // rdx
  signed __int64 v57; // rdx
  unsigned int v58; // edx
  __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  struct _KTHREAD *v61; // rbx
  KSPIN_LOCK *p_StackLimit; // r15
  char *v63; // rax
  void **p_StackBase; // rbx
  char **v65; // rcx
  struct _KTHREAD *v66; // rbx
  __int64 v67; // rcx
  char v68; // dl
  __int64 v69; // r15
  int SessionId; // eax
  bool v71; // zf
  signed __int8 v72; // cf
  _QWORD *v73; // rax
  _QWORD *v74; // rcx
  signed __int64 v75; // rax
  struct _KTHREAD *v76; // rsi
  ULONG_PTR v77; // r11
  unsigned int v78; // r10d
  unsigned __int8 v79; // r12
  __int64 v80; // r14
  unsigned int v81; // r8d
  __int64 v82; // rcx
  __int64 v83; // rdx
  int v84; // ecx
  unsigned __int8 v85; // r13
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  struct _KPRCB *v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  unsigned int v92; // ebx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v94; // eax
  _DWORD *v95; // rcx
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // r8
  struct _KPRCB *v99; // rcx
  struct _KTHREAD *v100; // rbx
  __int64 v101; // rcx
  unsigned __int8 v102; // al
  char v103; // dl
  __int64 v104; // r15
  int v105; // eax
  unsigned __int8 v106; // dl
  __int64 v107; // rbx
  __int64 v108; // r8
  _QWORD *v109; // rdx
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  struct _KPRCB *v115; // rcx
  unsigned int v116; // edx
  int v117; // eax
  unsigned int v118; // eax
  __int64 v119; // rdx
  struct _KPRCB *v120; // r13
  _DWORD *v121; // rcx
  int v122; // eax
  _DWORD *v123; // rcx
  int v124; // eax
  _DWORD *v125; // rcx
  int v126; // eax
  struct _KPRCB *v127; // rcx
  _DWORD *v128; // rdx
  int v129; // eax
  struct _KPRCB *v130; // rcx
  _DWORD *v131; // rdx
  int v132; // eax
  int v133; // eax
  struct _KPRCB *v134; // rcx
  __int64 *v135; // rax
  __int64 **v136; // rcx
  __int64 v137; // rcx
  char v138; // [rsp+40h] [rbp-158h]
  char v139; // [rsp+41h] [rbp-157h]
  char v140; // [rsp+42h] [rbp-156h]
  int v141; // [rsp+44h] [rbp-154h]
  unsigned int v142; // [rsp+44h] [rbp-154h]
  unsigned __int8 v143; // [rsp+48h] [rbp-150h]
  int v144; // [rsp+50h] [rbp-148h]
  KSPIN_LOCK *Object; // [rsp+58h] [rbp-140h]
  unsigned int v146; // [rsp+60h] [rbp-138h]
  __int64 v147; // [rsp+68h] [rbp-130h]
  volatile signed __int32 *v148; // [rsp+68h] [rbp-130h]
  int v149; // [rsp+74h] [rbp-124h] BYREF
  __int64 v150; // [rsp+78h] [rbp-120h]
  __int64 v151; // [rsp+80h] [rbp-118h]
  int v152; // [rsp+88h] [rbp-110h] BYREF
  int v153; // [rsp+8Ch] [rbp-10Ch] BYREF
  int v154; // [rsp+90h] [rbp-108h] BYREF
  int v155; // [rsp+94h] [rbp-104h] BYREF
  int v156; // [rsp+98h] [rbp-100h] BYREF
  int v157; // [rsp+9Ch] [rbp-FCh] BYREF
  int v158; // [rsp+A0h] [rbp-F8h] BYREF
  int v159; // [rsp+A4h] [rbp-F4h] BYREF
  int v160; // [rsp+A8h] [rbp-F0h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-E8h]
  ULONG_PTR v162; // [rsp+B8h] [rbp-E0h]
  struct _KPRCB *v163; // [rsp+C0h] [rbp-D8h]
  struct _KPRCB *v164; // [rsp+C8h] [rbp-D0h]
  __int64 v165; // [rsp+D0h] [rbp-C8h]
  __int64 v166; // [rsp+D8h] [rbp-C0h]
  __int64 v167; // [rsp+E0h] [rbp-B8h]
  ULONG_PTR v168; // [rsp+E8h] [rbp-B0h] BYREF
  ULONG_PTR v169; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v170; // [rsp+F8h] [rbp-A0h]
  int v171; // [rsp+100h] [rbp-98h]
  int v172; // [rsp+104h] [rbp-94h]
  int v173; // [rsp+108h] [rbp-90h]
  __int64 v174; // [rsp+110h] [rbp-88h]
  __int64 v175; // [rsp+118h] [rbp-80h]
  _BYTE *v176; // [rsp+120h] [rbp-78h]
  __int64 v177; // [rsp+128h] [rbp-70h]
  __int64 v178; // [rsp+130h] [rbp-68h]
  __int64 v179; // [rsp+138h] [rbp-60h]
  signed __int64 v180; // [rsp+140h] [rbp-58h]
  _QWORD v181[2]; // [rsp+148h] [rbp-50h] BYREF
  _QWORD v182[2]; // [rsp+158h] [rbp-40h] BYREF
  void *retaddr; // [rsp+198h] [rbp+0h]

  v10 = (__int64)a4;
  v163 = (struct _KPRCB *)a4;
  v164 = a3;
  v11 = a2;
  v140 = a2;
  v176 = a10;
  v13 = 0LL;
  v150 = 0LL;
  v146 = 0;
  v14 = 0;
  v139 = 0;
  CurrentThread = 0LL;
  if ( !a6 )
  {
    a4 = &ExpWakeTimerLock;
    goto LABEL_3;
  }
  if ( a7 )
  {
    if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
    {
      v92 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10]);
      v146 = v92;
      if ( v92 )
      {
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
        return v92;
      }
    }
    v13 = 0LL;
  }
  if ( (int)qword_140443BC0 < 2 && !byte_140443B93 )
  {
    v146 = 1073741861;
    a6 = 0LL;
    goto LABEL_3;
  }
  v139 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v152 = 0;
  v66 = KeGetCurrentThread();
  --v66->SpecialApcDisable;
  if ( ++v66->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v66, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v67) = v66->AbEntrySummary;
  if ( !(_BYTE)v67 )
  {
    if ( !v66->AbOrphanedEntrySummary )
    {
      v69 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v66, &ExpWakeTimerLock, 0LL);
      goto LABEL_93;
    }
    AbOrphanedEntrySummary = v66->AbOrphanedEntrySummary;
    v66->AbOrphanedEntrySummary = 0;
    LOBYTE(v67) = AbOrphanedEntrySummary | v66->AbEntrySummary;
  }
  v68 = v67;
  _BitScanForward((unsigned int *)&v67, (unsigned __int8)v67);
  v171 = v67;
  v66->AbEntrySummary = v68 & ~(1 << v67);
  v69 = (__int64)&v66->LockEntries[v67];
LABEL_93:
  if ( v69 )
  {
    if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
      && byte_140467140[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx(v66->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v69 + 40) = SessionId;
    *(_QWORD *)(v69 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v66->116 + 1, 0x10u);
  }
  --v66->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v66, &ExpWakeTimerLock, &v152);
  v71 = v66->SpecialApcDisable++ == -1;
  if ( v71 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v66->ApcState.ApcListHead[0].Flink != &v66->152 )
    KiCheckForKernelApcDelivery();
  a4 = &ExpWakeTimerLock;
  v72 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
  if ( v72 )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v69, &ExpWakeTimerLock);
  if ( v69 )
    *(_BYTE *)(v69 + 26) |= 1u;
  v13 = 0LL;
  v14 = 1;
LABEL_3:
  v162 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = (KSPIN_LOCK *)Process;
  v138 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v143 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( v11 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)&Process[2].ProcessListEntry);
    v138 = 1;
    v13 = 0LL;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(BugCheckParameter2 + 64);
    v13 = 0LL;
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v94 = SchedulerAssist[5];
        SchedulerAssist[5] = v94 + 1;
        if ( v94 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
          v13 = 0LL;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 64), 0LL) )
    {
      v95 = CurrentPrcb->SchedulerAssist;
      if ( v95 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v96 = v95[5] - 1;
          v95[5] = v96;
          if ( !v96 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
        }
      }
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(BugCheckParameter2 + 64), a2);
      v13 = 0LL;
    }
    Process = (_KPROCESS *)Object;
  }
  if ( !v14 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
    if ( v138 )
      KxReleaseSpinLock((PKSPIN_LOCK)&Process[2].ProcessListEntry);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v143 < 2u )
    {
      v99 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v99->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v99, v97);
    }
    __writecr8(v143);
    v139 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v153 = 0;
    v100 = KeGetCurrentThread();
    --v100->SpecialApcDisable;
    if ( ++v100->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v100, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
    LOBYTE(v101) = v100->AbEntrySummary;
    if ( !(_BYTE)v101 )
    {
      if ( !v100->AbOrphanedEntrySummary )
      {
        v104 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v100, &ExpWakeTimerLock, v98);
        goto LABEL_189;
      }
      v102 = v100->AbOrphanedEntrySummary;
      v100->AbOrphanedEntrySummary = 0;
      LOBYTE(v101) = v102 | v100->AbEntrySummary;
    }
    v103 = v101;
    _BitScanForward((unsigned int *)&v101, (unsigned __int8)v101);
    v172 = v101;
    v100->AbEntrySummary = v103 & ~(1 << v101);
    v104 = (__int64)&v100->LockEntries[v101];
LABEL_189:
    if ( v104 )
    {
      if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
        && byte_140467140[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
      {
        v105 = MmGetSessionIdEx(v100->ApcState.Process);
      }
      else
      {
        v105 = -1;
      }
      *(_DWORD *)(v104 + 40) = v105;
      *(_QWORD *)(v104 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v100->116 + 1, 0x10u);
    }
    --v100->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v100, &ExpWakeTimerLock, &v153);
    v71 = v100->SpecialApcDisable++ == -1;
    if ( v71 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v100->ApcState.ApcListHead[0].Flink != &v100->152 )
      KiCheckForKernelApcDelivery();
    v72 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL);
    if ( v72 )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v104, &ExpWakeTimerLock);
    if ( v104 )
      *(_BYTE *)(v104 + 26) |= 1u;
    v106 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v106 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v143 = v106;
    if ( v138 )
      KxAcquireSpinLock(Object + 257);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
    v13 = 0LL;
  }
  v19 = 0;
  v141 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v107 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v107 + 1584));
    v108 = *(_QWORD *)(BugCheckParameter2 + 224);
    v109 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v108 + 8) != BugCheckParameter2 + 224 || *v109 != BugCheckParameter2 + 224 )
      __fastfail(3u);
    *v109 = v108;
    *(_QWORD *)(v108 + 8) = v109;
    KxReleaseSpinLock((PKSPIN_LOCK)(v107 + 1584));
    *(_BYTE *)(BugCheckParameter2 + 304) &= ~1u;
    if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 && *(_BYTE *)(BugCheckParameter2 + 248)
      || KeCancelTimer((PKTIMER)BugCheckParameter2)
      || (unsigned __int8)KeRemoveQueueDpcEx(BugCheckParameter2 + 160, 0LL) )
    {
      v19 = 1;
      v141 = 1;
    }
    v22 = BugCheckParameter2 + 72;
    if ( (unsigned __int8)KeRemoveQueueApc(BugCheckParameter2 + 72) )
      v141 = ++v19;
    v13 = 0LL;
  }
  else
  {
    v20 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v168 = 0LL;
    v21 = 0;
    while ( 1 )
    {
      v154 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v154);
          while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) );
        v13 = 0LL;
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
        goto LABEL_19;
      }
      a4 = (ULONG_PTR *)*(unsigned __int8 *)(BugCheckParameter2 + 2);
      v147 = KiProcessorBlock[*(unsigned int *)(BugCheckParameter2 + 56)] + 13952;
      v46 = a4;
      v47 = (volatile signed __int32 *)(v147 + 32LL * (_QWORD)(a4 + 2));
      v48 = KeGetCurrentPrcb();
      v151 = (__int64)v48;
      v155 = 0;
      v49 = v48->SchedulerAssist;
      if ( v49 )
      {
        if ( v48->NestingLevel <= 1u )
        {
          v110 = v49[5];
          v49[5] = v110 + 1;
          if ( v110 == -1 )
            KiRemoveSystemWorkPriorityKick(v48, v48);
        }
      }
      v50 = v151;
      while ( _interlockedbittestandset64(v47, 0LL) )
      {
        v90 = *(_QWORD *)(v50 + 25016);
        if ( v90 )
        {
          if ( *(_BYTE *)(v50 + 32) <= 1u )
          {
            v111 = *(_DWORD *)(v90 + 20) - 1;
            *(_DWORD *)(v90 + 20) = v111;
            if ( !v111 )
              KiRemoveSystemWorkPriorityKick(v50, v48);
          }
        }
        do
          KeYieldProcessorEx(&v155);
        while ( *(_QWORD *)v47 );
        v91 = *(_QWORD *)(v50 + 25016);
        if ( v91 )
        {
          if ( *(_BYTE *)(v50 + 32) <= 1u )
          {
            v112 = *(_DWORD *)(v91 + 20);
            *(_DWORD *)(v91 + 20) = v112 + 1;
            if ( v112 == -1 )
              KiRemoveSystemWorkPriorityKick(v50, v48);
          }
        }
      }
      if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v47, 0LL);
      v89 = KeGetCurrentPrcb();
      a2 = (__int64)v89->SchedulerAssist;
      if ( a2 )
      {
        if ( v89->NestingLevel <= 1u )
        {
          v113 = *(_DWORD *)(a2 + 20) - 1;
          *(_DWORD *)(a2 + 20) = v113;
          if ( !v113 )
            KiRemoveSystemWorkPriorityKick(v89, a2);
        }
      }
      v13 = 0LL;
      if ( _InterlockedExchange64((volatile __int64 *)(v147 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
      {
        _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFF7Fu);
        v21 = 1;
        goto LABEL_19;
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      v156 = 0;
      while ( *(char *)(BugCheckParameter2 + 3) < 0 )
        KeYieldProcessorEx(&v156);
      v13 = 0LL;
    }
    v51 = *(_QWORD **)(BugCheckParameter2 + 32);
    v52 = *(_QWORD **)(BugCheckParameter2 + 40);
    if ( v51[1] != BugCheckParameter2 + 32 || *v52 != BugCheckParameter2 + 32 )
      __fastfail(3u);
    *v52 = v51;
    v51[1] = v52;
    if ( v52 == v51 )
    {
      *(_DWORD *)(32LL * (_QWORD)(v46 + 2) + v147 + 28) = -1;
      if ( KiSerializeTimerExpiration )
      {
        v53 = (unsigned __int8)v46 & 0x3F;
        v54 = 8LL * ((unsigned int)v46 >> 6);
      }
      else
      {
        v53 = *(unsigned __int8 *)(v147 - 13743);
        v54 = (_QWORD)v46 << 6;
      }
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(v54 + qword_140573688[2 * *(unsigned __int8 *)(v147 - 13744)]),
        v53);
    }
    _InterlockedAnd64((volatile signed __int64 *)v47, 0LL);
    v55 = KeGetCurrentPrcb();
    a2 = (__int64)v55->SchedulerAssist;
    if ( a2 )
    {
      if ( v55->NestingLevel <= 1u )
      {
        v114 = *(_DWORD *)(a2 + 20) - 1;
        *(_DWORD *)(a2 + 20) = v114;
        if ( !v114 )
          KiRemoveSystemWorkPriorityKick(v55, a2);
      }
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFF7F);
    v13 = 0LL;
    v21 = 1;
LABEL_19:
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v21 )
    {
      v168 = BugCheckParameter2;
      v181[0] = &v168;
      v181[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v181, 1, 1073872896, 3925, 1538);
      v13 = 0LL;
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20 < 2u )
    {
      v115 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v115->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v115, a2);
      v13 = 0LL;
    }
    __writecr8(v20);
    v22 = BugCheckParameter2 + 72;
    v19 = 0;
    v10 = (__int64)v163;
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v23 = v19 + 1;
  v144 = *(_DWORD *)(BugCheckParameter2 + 4);
  v24 = a8;
  *(_DWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 244) = 0;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( v10 )
  {
    v61 = KeGetCurrentThread();
    KeInitializeApc(v22, (_DWORD)v61, 2, (unsigned int)ExpTimerApcRoutine, 0LL, v10, v140, a5);
    p_StackLimit = (KSPIN_LOCK *)&v61[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v61[1].StackLimit);
    v63 = (char *)(BugCheckParameter2 + 224);
    p_StackBase = &v61[1].StackBase;
    v65 = (char **)p_StackBase[1];
    if ( *v65 != (char *)p_StackBase )
      __fastfail(3u);
    *(_QWORD *)v63 = p_StackBase;
    *(_QWORD *)(BugCheckParameter2 + 232) = v65;
    *v65 = v63;
    p_StackBase[1] = v63;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    v162 = BugCheckParameter2 + 160;
    v23 = v141;
    v24 = 0;
    a8 = 0;
  }
  LOBYTE(a4) = 0;
  v25 = (__int64 *)v164;
  v150 = *(_QWORD *)&v164->MxCsr;
  v26 = Object;
  v27 = v138;
  if ( !v138 )
    goto LABEL_24;
  v13 = BugCheckParameter2 + 280;
  if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
  {
    PsInsertVirtualizedTimer(Object, BugCheckParameter2 + 280);
    v24 = a8;
    v26 = Object;
  }
  _InterlockedIncrement((volatile signed __int32 *)v26 + 510);
  if ( (v26[55] & 0x10) != 0 && (v59 = *((unsigned int *)v26 + 17), (_DWORD)v59) )
  {
    v28 = *v25;
    if ( *v25 >= 0 )
    {
      if ( (unsigned __int64)v28 > MEMORY[0xFFFFF78000000014] )
        v28 += (unsigned int)v59;
      else
        v28 = MEMORY[0xFFFFF78000000014] + (unsigned int)v59;
      if ( v28 < *v25 )
        v28 = *v25;
    }
    else if ( v28 - v59 <= v28 )
    {
      v28 -= v59;
    }
    v150 = v28;
    v116 = (unsigned int)v59 / 0x2710;
    if ( v24 && (v117 = v116 + v24, v116 + v24 > v24) )
    {
      v24 += v116;
      a8 = v117;
      *(_DWORD *)(BugCheckParameter2 + 240) += v116;
      *(_DWORD *)(BugCheckParameter2 + 244) = v116;
    }
    else
    {
      v118 = *(_DWORD *)(BugCheckParameter2 + 240);
      if ( v118 && v118 + v116 > v118 )
      {
        *(_DWORD *)(BugCheckParameter2 + 240) = v118 + v116;
        *(_DWORD *)(BugCheckParameter2 + 244) = v116;
      }
    }
  }
  else
  {
LABEL_24:
    v28 = v150;
  }
  v29 = *(_BYTE *)(BugCheckParameter2 + 304);
  if ( (v29 & 2) == 0 )
  {
    v30 = v28;
    v177 = 0LL;
    v178 = 0LL;
    v179 = 0LL;
    if ( a9 )
    {
      v56 = 10000LL * a9;
      if ( v56 > 0xFC0000 )
      {
        v57 = v56 - 16515072;
        if ( v28 >= 0 )
        {
          v28 += v57;
          if ( v28 < v30 )
            v28 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v28 -= v57;
          if ( v28 > v30 )
            v28 = 0x8000000000000000uLL;
        }
        if ( v24 )
        {
          v60 = (__int64)((unsigned __int128)(v57 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
          if ( v24 + (unsigned int)v60 + (v60 >> 63) < v24 )
            a8 = -1;
          else
            a8 = v24 + v60 + (v60 >> 63);
        }
        LODWORD(v56) = 16515072;
      }
      v58 = (unsigned int)v56 >> 18;
      if ( v58 > 0x3F )
        LOBYTE(v58) = 63;
      BYTE1(v177) = 4 * v58;
    }
    v31 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v162 ^ KiWaitAlways), KiWaitNever);
    v32 = KeGetCurrentIrql();
    v175 = v32;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v32 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v33 = KeGetCurrentPrcb();
    v163 = v33;
    v169 = 0LL;
    while ( 1 )
    {
      v157 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
      {
        do
          KeYieldProcessorEx(&v157);
        while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
      {
        v34 = 0;
        goto LABEL_32;
      }
      v119 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
      v142 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
      v151 = KiProcessorBlock[*(unsigned int *)(BugCheckParameter2 + 56)] + 13952;
      v148 = (volatile signed __int32 *)(v151 + 32 * (v119 + 16));
      v120 = KeGetCurrentPrcb();
      v164 = v120;
      v158 = 0;
      v121 = v120->SchedulerAssist;
      if ( v121 )
      {
        if ( v120->NestingLevel <= 1u )
        {
          v122 = v121[5];
          v121[5] = v122 + 1;
          if ( v122 == -1 )
LABEL_277:
            KiRemoveSystemWorkPriorityKick(v120, v119);
        }
      }
      while ( _interlockedbittestandset64(v148, 0LL) )
      {
        v123 = v120->SchedulerAssist;
        if ( v123 )
        {
          if ( v120->NestingLevel <= 1u )
          {
            v124 = v123[5] - 1;
            v123[5] = v124;
            if ( !v124 )
              KiRemoveSystemWorkPriorityKick(v120, v119);
          }
        }
        do
          KeYieldProcessorEx(&v158);
        while ( *(_QWORD *)v148 );
        v120 = v164;
        v125 = v164->SchedulerAssist;
        if ( v125 )
        {
          if ( v164->NestingLevel <= 1u )
          {
            v126 = v125[5];
            v125[5] = v126 + 1;
            if ( v126 == -1 )
              goto LABEL_277;
          }
        }
      }
      v33 = v163;
      if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)v148, 0LL);
      v127 = KeGetCurrentPrcb();
      v128 = v127->SchedulerAssist;
      if ( v128 )
      {
        if ( v127->NestingLevel <= 1u )
        {
          v129 = v128[5] - 1;
          v128[5] = v129;
          if ( !v129 )
            KiRemoveSystemWorkPriorityKick(v127, v128);
        }
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v151 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
      {
        _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
        v34 = 1;
        goto LABEL_32;
      }
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      v159 = 0;
      while ( *(char *)(BugCheckParameter2 + 3) < 0 )
        KeYieldProcessorEx(&v159);
    }
    KiRemoveEntryTimer(v151, BugCheckParameter2, v142);
    _InterlockedAnd64((volatile signed __int64 *)v148, 0LL);
    v130 = KeGetCurrentPrcb();
    v131 = v130->SchedulerAssist;
    if ( v131 )
    {
      if ( v130->NestingLevel <= 1u )
      {
        v132 = v131[5] - 1;
        v131[5] = v132;
        if ( !v132 )
          KiRemoveSystemWorkPriorityKick(v130, v131);
      }
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
    v34 = 1;
LABEL_32:
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v34 )
    {
      v169 = BugCheckParameter2;
      v182[0] = &v169;
      v182[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v182, 1, 1073872896, 3925, 1538);
    }
    *(_QWORD *)(BugCheckParameter2 + 48) = v31;
    *(_DWORD *)(BugCheckParameter2 + 60) = a8;
    v165 = 0LL;
    v166 = 0LL;
    v167 = 0LL;
    v170 = 0LL;
    v174 = 0LL;
    LODWORD(v165) = *(_DWORD *)BugCheckParameter2;
    v35 = BYTE1(v177);
    BYTE1(v165) = BYTE1(v177);
    if ( v28 >= 0 )
    {
      BYTE1(v165) = BYTE1(v177) | 1;
      v170 = MEMORY[0xFFFFF78000000014];
      v28 = MEMORY[0xFFFFF78000000014] - v28;
      v174 = v28;
      if ( v28 >= 0 )
      {
        *(_DWORD *)BugCheckParameter2 = v165;
        *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
        goto LABEL_76;
      }
      v35 = BYTE1(v165);
    }
    v36 = 0LL;
    if ( (v35 & 0xFC) != 0 )
      v36 = (unsigned __int8)(v35 & 0xFC) << 16;
    v37 = MEMORY[0xFFFFF78000000008] - v28;
    *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v28;
    v173 = (unsigned __int8)((unsigned __int64)(v36 + v37) >> 18);
    BYTE3(v165) |= 0x40u;
    BYTE2(v165) = (unsigned __int64)(v36 + v37) >> 18;
    *(_DWORD *)BugCheckParameter2 = v165;
    *(_DWORD *)(BugCheckParameter2 + 4) = 0;
    v38 = v162;
    if ( (unsigned __int8)KiInsertTimerTable(
                            (_DWORD)v33,
                            BugCheckParameter2,
                            v162,
                            (unsigned __int8)((unsigned __int64)(v36 + v37) >> 18),
                            0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        KiTraceSetTimer(BugCheckParameter2, v38, 0LL);
      else
        _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      goto LABEL_39;
    }
LABEL_76:
    KiTimerWaitTest(v33, BugCheckParameter2, 0LL);
LABEL_39:
    KiExitDispatcher((_DWORD)v33, 0, 1, 0, v175);
    v39 = a6;
    if ( a6 )
      _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
    v29 = *(_BYTE *)(BugCheckParameter2 + 304);
    v27 = v138;
    v26 = Object;
    goto LABEL_42;
  }
  *(_QWORD *)(BugCheckParameter2 + 312) = v28;
  if ( v150 >= 0 )
    *(_BYTE *)(BugCheckParameter2 + 248) = 1;
  else
    *(_BYTE *)(BugCheckParameter2 + 248) = (a6 != 0) + 2;
  v39 = a6;
LABEL_42:
  v40 = *(void **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v39;
  *(_BYTE *)(BugCheckParameter2 + 304) = v29 ^ (v29 ^ (4 * a7)) & 4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(BugCheckParameter2 + 64, retaddr);
    v26 = Object;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 64), 0LL);
  }
  v41 = KeGetCurrentPrcb();
  v42 = (__int64 *)v41->SchedulerAssist;
  if ( v42 )
  {
    if ( v41->NestingLevel <= 1u )
    {
      v133 = *((_DWORD *)v42 + 5) - 1;
      *((_DWORD *)v42 + 5) = v133;
      if ( !v133 )
      {
        KiRemoveSystemWorkPriorityKick(v41, v42);
        v26 = Object;
      }
    }
  }
  if ( v27 )
    KxReleaseSpinLock(v26 + 257);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v143 < 2u )
  {
    v134 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v134->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v134, v42);
  }
  __writecr8(v143);
  if ( v139 )
  {
    if ( v40 )
    {
      if ( !a6 )
      {
        v135 = (__int64 *)(BugCheckParameter2 + 264);
        v42 = *(__int64 **)(BugCheckParameter2 + 264);
        v136 = *(__int64 ***)(BugCheckParameter2 + 272);
        if ( v42[1] != BugCheckParameter2 + 264 || *v136 != v135 )
          __fastfail(3u);
        *v136 = v42;
        v42[1] = (__int64)v136;
        *v135 = 0LL;
      }
    }
    else if ( a6 )
    {
      v73 = (_QWORD *)(BugCheckParameter2 + 264);
      v74 = (_QWORD *)qword_14042F598;
      v42 = &ExpWakeTimerList;
      if ( *(__int64 **)qword_14042F598 != &ExpWakeTimerList )
        __fastfail(3u);
      *v73 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v74;
      *v74 = v73;
      qword_14042F598 = BugCheckParameter2 + 264;
    }
    v75 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
    v180 = v75;
    if ( (v75 & 2) != 0 && (v75 & 4) == 0 )
      ExfTryToWakePushLock(&ExpWakeTimerLock);
    v149 = 0;
    v76 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(&ExpWakeTimerLock, v42, v13, a4) == 1 )
    {
      v78 = MmGetSessionIdEx(v76->ApcState.Process);
      v77 = (ULONG_PTR)&ExpWakeTimerLock;
    }
    else
    {
      v78 = -1;
    }
    --v76->SpecialApcDisable;
    v79 = ++v76->AbAllocationRegionCount;
    v80 = 0LL;
    v81 = ((char)v76->AbEntrySummary | (char)v76->AbOrphanedEntrySummary) ^ 0x3F;
    v71 = !_BitScanReverse((unsigned int *)&v82, v81);
    v160 = v82;
    if ( !v71 )
    {
      while ( 1 )
      {
        v81 &= ~(1 << v82);
        v83 = (__int64)&v76->LockEntries[v82];
        if ( (*(_BYTE *)(v83 + 26) & 1) != 0
          && (*(_DWORD *)(v83 + 32) & 1) == 0
          && (*(_QWORD *)(v83 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v77 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v83 + 40) == v78 )
        {
          *(_BYTE *)(v83 + 26) &= ~1u;
          if ( *(_QWORD *)(v83 + 32) )
            break;
        }
        v71 = !_BitScanReverse((unsigned int *)&v82, v81);
        v160 = v82;
        if ( v71 )
          goto LABEL_120;
      }
      v80 = (__int64)&v76->LockEntries[v82];
    }
LABEL_120:
    if ( v80 )
    {
      *(_BYTE *)(v80 + 32) |= 2u;
      if ( *(__int64 *)(v80 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v80);
        v77 = (ULONG_PTR)&ExpWakeTimerLock;
      }
      v84 = *(_DWORD *)(v80 + 88);
      v149 = v84 & 0x1FFFF;
      *(_DWORD *)(v80 + 88) = v84 & 0xFFFE0000;
      *(_BYTE *)(v80 + 25) &= ~1u;
      *(_QWORD *)(v80 + 32) = 0LL;
      v85 = 1 << ((v80 - (__int64)v76 - 800) / 96);
      if ( v79 == 1 )
        v76->AbEntrySummary |= v85;
      else
        _InterlockedOr8((volatile signed __int8 *)&v76->AbOrphanedEntrySummary, v85);
    }
    else if ( (*((_DWORD *)&v76->0 + 1) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, (ULONG_PTR)v76, v77, v78, 0LL);
    }
    --v76->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v76, v77, &v149);
    v71 = v76->SpecialApcDisable++ == -1;
    if ( v71 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v76->ApcState.ApcListHead[0].Flink != &v76->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegionThread(CurrentThread, v86, v87, v88);
    if ( v40 )
      PoDestroyReasonContext(v40);
  }
  if ( v23 )
  {
    ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48, v23, 1953261124LL);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), -v23) - v23;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter2 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
          BugCheckParameter2,
          6uLL,
          *(_QWORD *)(BugCheckParameter2 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(BugCheckParameter2 - 48);
    }
  }
  v44 = v176;
  if ( v176 )
  {
    if ( v140 )
    {
      v137 = (__int64)v176;
      if ( (unsigned __int64)v176 >= 0x7FFFFFFF0000LL )
        v137 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v137 = *(_BYTE *)v137;
      *v44 = v144;
    }
    else
    {
      *v176 = v144;
    }
  }
  return v146;
}
