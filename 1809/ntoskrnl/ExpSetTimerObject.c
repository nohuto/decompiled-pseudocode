/*
 * XREFs of ExpSetTimerObject @ 0x14001D7C0
 * Callers:
 *     NtSetTimerEx @ 0x14001D530 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x1401403B8 (ExpSetTimer.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x140003730 (PoDestroyReasonContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KiCancelTimer @ 0x14001E100 (KiCancelTimer.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KiInsertTimerTable @ 0x1400581E0 (KiInsertTimerTable.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeInitializeApc @ 0x14008A350 (KeInitializeApc.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x1400C7AB0 (KiTimerWaitTest.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     PsInsertVirtualizedTimer @ 0x14012D16C (PsInsertVirtualizedTimer.c)
 *     KeRemoveQueueApc @ 0x14012F428 (KeRemoveQueueApc.c)
 *     KiRemoveEntryTimer @ 0x14013199C (KiRemoveEntryTimer.c)
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140291128 (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer @ 0x14029BB58 (KiTraceSetTimer.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     ExpCheckTestsigningEnabled @ 0x140708274 (ExpCheckTestsigningEnabled.c)
 *     ExpCheckWakeTimerAccess @ 0x14071FD4C (ExpCheckWakeTimerAccess.c)
 */

__int64 __fastcall ExpSetTimerObject(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        unsigned int a9,
        _BYTE *a10)
{
  char v10; // r15
  char v12; // r12
  char v13; // si
  _KPROCESS *Process; // r13
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v16; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v19; // r13d
  unsigned __int8 v20; // bl
  __int64 v21; // rdx
  unsigned int v22; // r12d
  unsigned int v23; // r8d
  ULONG_PTR v24; // rdx
  __int64 v25; // rbx
  _KPROCESS *v26; // r11
  __int64 v27; // rcx
  unsigned __int8 v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rcx
  char v31; // cl
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  struct _KPRCB *v34; // rbx
  __int64 v35; // rsi
  _QWORD *v36; // rbx
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  signed __int64 BugCheckParameter4; // rcx
  _BYTE *v40; // rdx
  __int64 ProcessTimerDelay; // rcx
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r13
  unsigned int v45; // r13d
  struct _KTHREAD *v46; // rbx
  KSPIN_LOCK *p_StackLimit; // r12
  char *v48; // rax
  void **p_StackBase; // rbx
  char **v50; // rdx
  _RTL_BALANCED_NODE *v51; // rax
  _RTL_BALANCED_NODE *v52; // rbx
  char v53; // al
  _QWORD *v54; // rax
  _QWORD *v55; // rcx
  _DWORD *v56; // rcx
  unsigned int v57; // eax
  unsigned int v58; // ebx
  int v59; // eax
  int v60; // eax
  __int64 v61; // rdx
  struct _KPRCB *v62; // rcx
  _RTL_BALANCED_NODE *v63; // rax
  _RTL_BALANCED_NODE *v64; // rbx
  unsigned __int8 v65; // dl
  __int64 v66; // rbx
  __int64 v67; // r8
  _QWORD *v68; // rdx
  struct _KPRCB *v69; // rcx
  unsigned int v70; // edx
  unsigned int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // r8
  struct _KPRCB *v74; // rcx
  _DWORD *v75; // rdx
  int v76; // eax
  struct _KPRCB *v77; // r15
  _DWORD *v78; // rcx
  int v79; // eax
  _DWORD *v80; // rcx
  int v81; // eax
  struct _KPRCB *v82; // rcx
  _DWORD *v83; // rdx
  int v84; // eax
  struct _KPRCB *v85; // rcx
  _DWORD *v86; // rdx
  int v87; // eax
  int v88; // eax
  struct _KPRCB *v89; // rcx
  _QWORD *v90; // rax
  __int64 v91; // rdx
  _QWORD *v92; // rcx
  __int64 v93; // rcx
  char v94; // [rsp+40h] [rbp-F8h]
  char v95; // [rsp+41h] [rbp-F7h]
  char v96; // [rsp+42h] [rbp-F6h]
  unsigned int v97; // [rsp+44h] [rbp-F4h]
  ULONG_PTR v98; // [rsp+48h] [rbp-F0h]
  unsigned __int8 v99; // [rsp+50h] [rbp-E8h]
  __int64 v101; // [rsp+58h] [rbp-E0h]
  struct _KPRCB *v102; // [rsp+58h] [rbp-E0h]
  _KPROCESS *Object; // [rsp+60h] [rbp-D8h]
  int v104; // [rsp+68h] [rbp-D0h]
  volatile signed __int32 *v105; // [rsp+70h] [rbp-C8h]
  __int64 v106; // [rsp+78h] [rbp-C0h]
  __int64 v108; // [rsp+80h] [rbp-B8h]
  int v109; // [rsp+8Ch] [rbp-ACh] BYREF
  int v110; // [rsp+90h] [rbp-A8h] BYREF
  int v111; // [rsp+94h] [rbp-A4h] BYREF
  unsigned int v112; // [rsp+98h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-98h]
  struct _KPRCB *v114; // [rsp+A8h] [rbp-90h]
  int v115; // [rsp+B0h] [rbp-88h]
  int v116; // [rsp+C8h] [rbp-70h]
  __int64 v117; // [rsp+D0h] [rbp-68h]
  ULONG_PTR v118; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v119; // [rsp+E0h] [rbp-58h]
  _BYTE *v120; // [rsp+E8h] [rbp-50h]
  _QWORD v121[2]; // [rsp+F0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+138h] [rbp+0h]

  v10 = a2;
  v96 = a2;
  v120 = a10;
  v12 = 0;
  v97 = 0;
  v13 = 0;
  v95 = 0;
  CurrentThread = 0LL;
  v106 = a6;
  if ( a6 )
  {
    if ( a7 )
    {
      if ( !(unsigned __int8)ExpCheckTestsigningEnabled() )
      {
        v57 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10]);
        v58 = v57;
        v97 = v57;
        if ( v57 )
        {
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
          return v58;
        }
      }
    }
    if ( (int)qword_140419320 >= 2 || byte_1404192F3 )
    {
      v13 = 1;
      v95 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v51 = (_RTL_BALANCED_NODE *)KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL);
      v52 = v51;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v51, (ULONG_PTR)&ExpWakeTimerLock);
      if ( v52 )
        BYTE2(v52[1].Left) |= 1u;
    }
    else
    {
      v97 = 1073741861;
      v106 = 0LL;
    }
  }
  v98 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = Process;
  v94 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v99 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( v10 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[12]);
    v12 = 1;
    v94 = 1;
  }
  v16 = (volatile signed __int32 *)(BugCheckParameter2 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(BugCheckParameter2 + 64);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v59 = SchedulerAssist[5];
        SchedulerAssist[5] = v59 + 1;
        if ( v59 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
      }
    }
    if ( _interlockedbittestandset64(v16, 0LL) )
    {
      v56 = CurrentPrcb->SchedulerAssist;
      if ( v56 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v60 = v56[5] - 1;
          v56[5] = v60;
          if ( !v60 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
        }
      }
      KxWaitForSpinLockAndAcquire(BugCheckParameter2 + 64);
    }
    CurrentIrql = v99;
  }
  if ( !v13 && *(_QWORD *)(BugCheckParameter2 + 256) )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
    if ( v12 )
      KxReleaseSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[12]);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v62 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v62->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v62, v61);
    }
    __writecr8(CurrentIrql);
    v95 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v63 = (_RTL_BALANCED_NODE *)KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL);
    v64 = v63;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v63, (ULONG_PTR)&ExpWakeTimerLock);
    if ( v64 )
      BYTE2(v64[1].Left) |= 1u;
    v65 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v65 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v99 = v65;
    if ( v12 )
      KxAcquireSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[12]);
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 64));
  }
  v19 = 0;
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 1) != 0 )
  {
    v66 = *(_QWORD *)(BugCheckParameter2 + 80);
    KxAcquireSpinLock((PKSPIN_LOCK)(v66 + 1568));
    v67 = *(_QWORD *)(BugCheckParameter2 + 224);
    v68 = *(_QWORD **)(BugCheckParameter2 + 232);
    if ( *(_QWORD *)(v67 + 8) != BugCheckParameter2 + 224 || *v68 != BugCheckParameter2 + 224 )
      goto LABEL_208;
    *v68 = v67;
    *(_QWORD *)(v67 + 8) = v68;
    KxReleaseSpinLock((PKSPIN_LOCK)(v66 + 1568));
    *(_BYTE *)(BugCheckParameter2 + 304) &= ~1u;
    if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 && *(_BYTE *)(BugCheckParameter2 + 248)
      || KeCancelTimer((PKTIMER)BugCheckParameter2)
      || (unsigned __int8)KeRemoveQueueDpcEx(BugCheckParameter2 + 160, 0LL) )
    {
      v19 = 1;
    }
    if ( (unsigned __int8)KeRemoveQueueApc(BugCheckParameter2 + 72) )
      ++v19;
  }
  else
  {
    v20 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LOBYTE(a2) = 1;
    KiCancelTimer(BugCheckParameter2, a2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20 < 2u )
    {
      v69 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v69->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v69, v21);
    }
    __writecr8(v20);
  }
  *(_BYTE *)(BugCheckParameter2 + 248) = 0;
  v22 = v19 + 1;
  v104 = *(_DWORD *)(BugCheckParameter2 + 4);
  v23 = a8;
  *(_QWORD *)(BugCheckParameter2 + 240) = a8;
  *(_DWORD *)(BugCheckParameter2 + 320) = a9;
  if ( a4 )
  {
    v46 = KeGetCurrentThread();
    KeInitializeApc(BugCheckParameter2 + 72, (_DWORD)v46, 2, (unsigned int)ExpTimerApcRoutine, 0LL, a4, v96, a5);
    p_StackLimit = (KSPIN_LOCK *)&v46[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v46[1].StackLimit);
    v48 = (char *)(BugCheckParameter2 + 224);
    p_StackBase = &v46[1].StackBase;
    v50 = (char **)p_StackBase[1];
    if ( *v50 != (char *)p_StackBase )
      goto LABEL_208;
    *(_QWORD *)v48 = p_StackBase;
    *(_QWORD *)(BugCheckParameter2 + 232) = v50;
    *v50 = v48;
    p_StackBase[1] = v48;
    *(_BYTE *)(BugCheckParameter2 + 304) |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    v24 = BugCheckParameter2 + 160;
    v98 = BugCheckParameter2 + 160;
    v22 = v19;
    v23 = 0;
    a8 = 0;
  }
  else
  {
    v24 = 0LL;
  }
  v25 = *a3;
  v101 = *a3;
  v26 = Object;
  if ( v94 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 280) )
    {
      PsInsertVirtualizedTimer(Object, BugCheckParameter2 + 280);
      v23 = a8;
      v26 = Object;
      v24 = v98;
    }
    _InterlockedIncrement((volatile signed __int32 *)&v26[2].IdealNode[4]);
    if ( (*(_DWORD *)&v26->0 & 0x10) != 0 )
    {
      ProcessTimerDelay = v26->ProcessTimerDelay;
      if ( (_DWORD)ProcessTimerDelay )
      {
        v25 = *a3;
        if ( *a3 >= 0 )
        {
          if ( (unsigned __int64)v25 <= MEMORY[0xFFFFF78000000014] )
            v25 = MEMORY[0xFFFFF78000000014];
          v25 += ProcessTimerDelay;
          if ( v25 < *a3 )
            v25 = *a3;
        }
        else if ( v25 - ProcessTimerDelay <= v25 )
        {
          v25 -= ProcessTimerDelay;
        }
        HIDWORD(v101) = HIDWORD(v25);
        v70 = (unsigned int)ProcessTimerDelay / 0x2710;
        if ( v23 && (v71 = v70 + v23, v70 + v23 > v23) )
        {
          v23 += v70;
          a8 = v71;
          *(_DWORD *)(BugCheckParameter2 + 240) += v70;
        }
        else
        {
          v72 = *(_DWORD *)(BugCheckParameter2 + 240);
          if ( !v72 || v72 + v70 <= v72 )
            goto LABEL_150;
          *(_DWORD *)(BugCheckParameter2 + 240) = v72 + v70;
        }
        *(_DWORD *)(BugCheckParameter2 + 244) = v70;
LABEL_150:
        v24 = v98;
      }
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 304) & 2) != 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 312) = v25;
    v35 = v106;
    if ( v101 >= 0 )
      *(_BYTE *)(BugCheckParameter2 + 248) = 1;
    else
      *(_BYTE *)(BugCheckParameter2 + 248) = (v106 != 0) + 2;
    goto LABEL_35;
  }
  v27 = v25;
  v28 = 0;
  if ( a9 )
  {
    v43 = 10000LL * a9;
    if ( v43 > 0xFC0000 )
    {
      v44 = v43 - 16515072;
      if ( v25 >= 0 )
      {
        v25 += v44;
        if ( v25 < v27 )
          v25 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v25 -= v44;
        if ( v25 > v27 )
          v25 = 0x8000000000000000uLL;
      }
      if ( v23 )
      {
        if ( v23 + (int)v44 / 10000 < v23 )
          a8 = -1;
        else
          a8 = v23 + (int)v44 / 10000;
      }
      LODWORD(v43) = 16515072;
    }
    v45 = (unsigned int)v43 >> 18;
    if ( v45 > 0x3F )
      LOBYTE(v45) = 63;
    v28 = 4 * v45;
    v24 = v98;
  }
  v29 = KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v24 ^ KiWaitAlways), KiWaitNever);
  v117 = v29;
  v30 = KeGetCurrentIrql();
  v119 = v30;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v30 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v102 = KeGetCurrentPrcb();
  while ( 1 )
  {
    v109 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
    {
      do
        KeYieldProcessorEx(&v109);
      while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0xC0) == 0 )
    {
      v31 = 0;
      goto LABEL_26;
    }
    v73 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v112 = *(unsigned __int8 *)(BugCheckParameter2 + 2);
    v108 = KiProcessorBlock[*(unsigned int *)(BugCheckParameter2 + 56)] + 13952;
    v105 = (volatile signed __int32 *)(v108 + 32 * (v73 + 16));
    v74 = KeGetCurrentPrcb();
    v114 = v74;
    v110 = 0;
    v75 = v74->SchedulerAssist;
    if ( v75 )
    {
      if ( v74->NestingLevel <= 1u )
      {
        v76 = v75[5];
        v75[5] = v76 + 1;
        if ( v76 == -1 )
          KiRemoveSystemWorkPriorityKick(v74, v75);
      }
    }
    v77 = v114;
    while ( _interlockedbittestandset64(v105, 0LL) )
    {
      v78 = v77->SchedulerAssist;
      if ( v78 )
      {
        if ( v77->NestingLevel <= 1u )
        {
          v79 = v78[5] - 1;
          v78[5] = v79;
          if ( !v79 )
            KiRemoveSystemWorkPriorityKick(v77, v75);
        }
      }
      do
        KeYieldProcessorEx(&v110);
      while ( *(_QWORD *)v105 );
      v77 = v114;
      v80 = v114->SchedulerAssist;
      if ( v80 )
      {
        if ( v114->NestingLevel <= 1u )
        {
          v81 = v80[5];
          v80[5] = v81 + 1;
          if ( v81 == -1 )
            KiRemoveSystemWorkPriorityKick(v77, v75);
        }
      }
    }
    v29 = v117;
    v16 = (volatile signed __int32 *)(BugCheckParameter2 + 64);
    if ( *(char *)(BugCheckParameter2 + 3) >= 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v105, 0LL);
    v82 = KeGetCurrentPrcb();
    v83 = v82->SchedulerAssist;
    if ( v83 )
    {
      if ( v82->NestingLevel <= 1u )
      {
        v84 = v83[5] - 1;
        v83[5] = v84;
        if ( !v84 )
          KiRemoveSystemWorkPriorityKick(v82, v83);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v108 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFFu);
      v31 = 1;
      goto LABEL_26;
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    v111 = 0;
    while ( *(char *)(BugCheckParameter2 + 3) < 0 )
      KeYieldProcessorEx(&v111);
  }
  KiRemoveEntryTimer(v108, BugCheckParameter2, v112);
  _InterlockedAnd64((volatile signed __int64 *)v105, 0LL);
  v85 = KeGetCurrentPrcb();
  v86 = v85->SchedulerAssist;
  if ( v86 )
  {
    if ( v85->NestingLevel <= 1u )
    {
      v87 = v86[5] - 1;
      v86[5] = v87;
      if ( !v87 )
        KiRemoveSystemWorkPriorityKick(v85, v86);
    }
  }
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xBFFFFFFF);
  v31 = 1;
LABEL_26:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v31 )
  {
    v118 = BugCheckParameter2;
    v121[0] = &v118;
    v121[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v121, 1, 1073872896, 3925, 1538);
  }
  *(_QWORD *)(BugCheckParameter2 + 48) = v29;
  *(_DWORD *)(BugCheckParameter2 + 60) = a8;
  v115 = *(_DWORD *)BugCheckParameter2;
  BYTE1(v115) = v28;
  if ( v25 >= 0 )
  {
    v28 |= 1u;
    BYTE1(v115) = v28;
    v25 = MEMORY[0xFFFFF78000000014] - v25;
    if ( v25 >= 0 )
    {
      *(_DWORD *)BugCheckParameter2 = v115;
      *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
      v34 = v102;
LABEL_50:
      KiTimerWaitTest(v34, BugCheckParameter2, 0LL);
      goto LABEL_33;
    }
  }
  v32 = 0LL;
  if ( v28 >= 4u )
    v32 = (unsigned __int64)(v28 & 0xFC) << 16;
  v33 = MEMORY[0xFFFFF78000000008] - v25;
  *(_QWORD *)(BugCheckParameter2 + 24) = MEMORY[0xFFFFF78000000008] - v25;
  v116 = (unsigned __int8)((v32 + v33) >> 18);
  HIBYTE(v115) |= 0x40u;
  BYTE2(v115) = (v32 + v33) >> 18;
  *(_DWORD *)BugCheckParameter2 = v115;
  *(_DWORD *)(BugCheckParameter2 + 4) = 0;
  v34 = v102;
  if ( !(unsigned __int8)KiInsertTimerTable(
                           (_DWORD)v102,
                           BugCheckParameter2,
                           v98,
                           (unsigned __int8)((v32 + v33) >> 18),
                           0LL) )
    goto LABEL_50;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(BugCheckParameter2, v98, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
LABEL_33:
  KiExitDispatcher((_DWORD)v34, 0, 1, 0, v119);
  v35 = v106;
  v26 = Object;
  if ( v106 )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 9u);
LABEL_35:
  v36 = *(_QWORD **)(BugCheckParameter2 + 256);
  *(_QWORD *)(BugCheckParameter2 + 256) = v35;
  *(_BYTE *)(BugCheckParameter2 + 304) ^= (*(_BYTE *)(BugCheckParameter2 + 304) ^ (4 * a7)) & 4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v16, retaddr);
    v26 = Object;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
  }
  v37 = KeGetCurrentPrcb();
  v38 = v37->SchedulerAssist;
  if ( v38 )
  {
    if ( v37->NestingLevel <= 1u )
    {
      v88 = v38[5] - 1;
      v38[5] = v88;
      if ( !v88 )
      {
        KiRemoveSystemWorkPriorityKick(v37, v38);
        v26 = Object;
      }
    }
  }
  if ( v94 )
    KxReleaseSpinLock((PKSPIN_LOCK)&v26[2].IdealNode[12]);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v99 < 2u )
  {
    v89 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v89->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v89, v38);
  }
  __writecr8(v99);
  if ( !v95 )
    goto LABEL_42;
  if ( !v36 )
  {
    if ( !v35 )
      goto LABEL_77;
    v54 = (_QWORD *)(BugCheckParameter2 + 264);
    v55 = (_QWORD *)qword_1404080F8;
    if ( *(__int64 **)qword_1404080F8 == &ExpWakeTimerList )
    {
      *v54 = &ExpWakeTimerList;
      *(_QWORD *)(BugCheckParameter2 + 272) = v55;
      *v55 = v54;
      qword_1404080F8 = BugCheckParameter2 + 264;
      goto LABEL_77;
    }
LABEL_208:
    __fastfail(3u);
  }
  if ( v35 )
    goto LABEL_77;
  v90 = (_QWORD *)(BugCheckParameter2 + 264);
  v91 = *(_QWORD *)(BugCheckParameter2 + 264);
  v92 = *(_QWORD **)(BugCheckParameter2 + 272);
  if ( *(_QWORD *)(v91 + 8) != BugCheckParameter2 + 264 || (_QWORD *)*v92 != v90 )
    goto LABEL_208;
  *v92 = v91;
  *(_QWORD *)(v91 + 8) = v92;
  *v90 = 0LL;
LABEL_77:
  v53 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v53 & 2) != 0 && (v53 & 4) == 0 )
    ExfTryToWakePushLock(&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  KiLeaveCriticalRegionUnsafe(CurrentThread);
  if ( v36 )
    PoDestroyReasonContext(v36);
LABEL_42:
  if ( v22 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(BugCheckParameter2 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), -v22) - v22;
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
  v40 = v120;
  if ( !v120 )
    return v97;
  if ( !v96 )
  {
    *v120 = v104;
    return v97;
  }
  v93 = (__int64)v120;
  if ( (unsigned __int64)v120 >= 0x7FFFFFFF0000LL )
    v93 = 0x7FFFFFFF0000LL;
  *(_BYTE *)v93 = *(_BYTE *)v93;
  *v40 = v104;
  return v97;
}
