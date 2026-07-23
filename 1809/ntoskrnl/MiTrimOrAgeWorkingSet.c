/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x14006D570
 * Callers:
 *     MiProcessWorkingSets @ 0x14006CEC0 (MiProcessWorkingSets.c)
 * Callees:
 *     KiAttachProcess @ 0x140016BD0 (KiAttachProcess.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiAgeWorkingSet @ 0x14006DE40 (MiAgeWorkingSet.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140088970 (MiQueuePageAccessLog.c)
 *     KiDetachProcess @ 0x1400B9BE0 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x1400BA080 (KiSetAddressPolicy.c)
 *     PfLogForegroundProcess @ 0x1400D7470 (PfLogForegroundProcess.c)
 *     MmFreeAccessPfnBuffer @ 0x1400E269C (MmFreeAccessPfnBuffer.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiDetachProcessFromSession @ 0x140125878 (MiDetachProcessFromSession.c)
 *     MiAttachSession @ 0x140125BE4 (MiAttachSession.c)
 *     MiPreUnlockWorkingSetShared @ 0x140130D18 (MiPreUnlockWorkingSetShared.c)
 *     MiTrimWorkingSet @ 0x140130F08 (MiTrimWorkingSet.c)
 *     MiEmptyWorkingSetInitiate @ 0x140142320 (MiEmptyWorkingSetInitiate.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140173C88 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402798B0 (HvlSwitchVirtualAddressSpace.c)
 *     MiComputeTrimAmount @ 0x1402B2F7C (MiComputeTrimAmount.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C494 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(__int64 a1, unsigned int *a2, __int64 CurrentThread, __int64 a4)
{
  bool v4; // zf
  unsigned int v5; // r14d
  __int64 v7; // rdx
  char v8; // al
  _KPROCESS *v9; // rbp
  unsigned __int8 v10; // al
  struct _KTHREAD *v11; // rdi
  __int64 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  $B00C2D09C1C60FFEAC19513EBB7C3DD3 *v15; // rsi
  struct _KTHREAD *Flink; // rcx
  struct _LIST_ENTRY *v17; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  struct _KPRCB *v20; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 GroupIndex; // r13
  __int64 v23; // r12
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // r10
  volatile signed __int32 *v27; // rbp
  unsigned __int8 v28; // al
  LONG *v29; // rdi
  __int64 v30; // r13
  struct _KPRCB *v31; // rsi
  _DWORD *v32; // rcx
  signed __int32 v33; // ett
  int v34; // r12d
  unsigned int v35; // edi
  unsigned int v36; // esi
  unsigned int v37; // eax
  unsigned int *v38; // rdx
  __int64 v39; // r13
  char v40; // cl
  LONG *v41; // rsi
  char v42; // cl
  LONG *v43; // r12
  LONG *v44; // r8
  struct _KPRCB *v45; // rdx
  _DWORD *v46; // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  int v53; // eax
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  unsigned __int8 v56; // si
  char v57; // al
  _QWORD *v58; // r15
  void *v60; // rcx
  _DWORD *v61; // rcx
  _DWORD *v62; // rcx
  int v63; // eax
  struct _LIST_ENTRY *v64; // rcx
  _DWORD *v65; // rcx
  _DWORD *v66; // rcx
  int v67; // eax
  int v68; // eax
  int v69; // eax
  struct _LIST_ENTRY *Blink; // rax
  int v71; // eax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rax
  struct _KPRCB *v74; // rcx
  int v75; // eax
  int v76; // eax
  unsigned int *v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // eax
  int v81; // eax
  unsigned __int32 v82; // eax
  int v83; // eax
  struct _KPRCB *v84; // rcx
  int v85; // eax
  struct _KPRCB *v86; // rcx
  signed __int32 v87[8]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v88; // [rsp+30h] [rbp-A8h]
  unsigned int *v89; // [rsp+38h] [rbp-A0h]
  int v90; // [rsp+40h] [rbp-98h] BYREF
  struct _KPRCB *v91; // [rsp+48h] [rbp-90h]
  int v92; // [rsp+50h] [rbp-88h] BYREF
  __int64 v93; // [rsp+58h] [rbp-80h]
  char v94[32]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v95; // [rsp+80h] [rbp-58h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v4 = *(_BYTE *)(a1 + 186) == 2;
  v5 = CurrentThread;
  v89 = a2;
  if ( v4 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    PfLogForegroundProcess();
  v7 = 1LL;
  v93 = *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 7024LL);
  v8 = *(_BYTE *)(a1 + 184) & 7;
  if ( v8 )
  {
    if ( v8 == 1 )
      MiAttachSession(a1 - 3008);
  }
  else
  {
    v9 = (_KPROCESS *)(a1 - 1280);
    if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1280) )
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      v10 = *(_BYTE *)(CurrentThread + 586);
      if ( v10 )
        KeBugCheckEx(5u, a1 - 1280, *(_QWORD *)(CurrentThread + 184), v10, 0LL);
      v11 = KeGetCurrentThread();
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 || (*(_DWORD *)&v9->0 & 0x40000000) != 0 )
        KeBugCheckEx(
          5u,
          a1 - 1280,
          (ULONG_PTR)v11->ApcState.Process,
          v11->ApcStateIndex,
          KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
      if ( v11->ApcState.Process == v9 )
      {
        v95 = 1LL;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        v88 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        CurrentPrcb = KeGetCurrentPrcb();
        v92 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v67 = SchedulerAssist[5];
            SchedulerAssist[5] = v67 + 1;
            if ( v67 == -1 )
LABEL_131:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v11->ThreadLock, 0LL) )
        {
          v65 = CurrentPrcb->SchedulerAssist;
          if ( v65 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v68 = v65[5] - 1;
              v65[5] = v68;
              if ( !v68 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v92, v7, CurrentThread);
          while ( v11->ThreadLock );
          v66 = CurrentPrcb->SchedulerAssist;
          if ( v66 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v69 = v66[5];
              v66[5] = v69 + 1;
              if ( v69 == -1 )
                goto LABEL_131;
            }
          }
        }
        if ( v11->ApcStateIndex )
        {
          KiAttachProcess((__int64)v11, a1 - 1280, v88, 1, (__int64)v94);
        }
        else
        {
          v15 = &v11->600;
          v11->SavedApcState.Process = v11->ApcState.Process;
          v11->SavedApcState.InProgressFlags = v11->ApcState.InProgressFlags;
          v11->SavedApcState.KernelApcPending = v11->ApcState.KernelApcPending;
          v11->SavedApcState.UserApcPendingAll = v11->ApcState.UserApcPendingAll;
          Flink = (struct _KTHREAD *)v11->ApcState.ApcListHead[0].Flink;
          if ( Flink == (struct _KTHREAD *)&v11->152 )
          {
            v11->SavedApcState.ApcListHead[0].Blink = v11->SavedApcState.ApcListHead;
            v15->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v15;
            v11->SavedApcState.KernelApcPending = 0;
          }
          else
          {
            Blink = v11->ApcState.ApcListHead[0].Blink;
            v15->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
            v11->SavedApcState.ApcListHead[0].Blink = Blink;
            Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v15;
            Blink->Flink = (struct _LIST_ENTRY *)v15;
          }
          CurrentThread = (__int64)v11->ApcState.ApcListHead[1].Flink;
          v17 = &v11->SavedApcState.ApcListHead[1];
          if ( (unsigned __int8 *)CurrentThread == &v11->ApcStateFill[16] )
          {
            v11->SavedApcState.ApcListHead[1].Blink = &v11->SavedApcState.ApcListHead[1];
            v17->Flink = v17;
            v11->SavedApcState.UserApcPendingAll = 0;
          }
          else
          {
            v64 = v11->ApcState.ApcListHead[1].Blink;
            v17->Flink = (struct _LIST_ENTRY *)CurrentThread;
            v11->SavedApcState.ApcListHead[1].Blink = v64;
            *(_QWORD *)(CurrentThread + 8) = v17;
            v64->Flink = v17;
          }
          v11->ApcState.ApcListHead[0].Blink = v11->ApcState.ApcListHead;
          v11->ApcState.ApcListHead[0].Flink = v11->ApcState.ApcListHead;
          v11->ApcState.ApcListHead[1].Blink = &v11->ApcState.ApcListHead[1];
          v11->ApcState.ApcListHead[1].Flink = &v11->ApcState.ApcListHead[1];
          v11->MiscFlags |= 0x800u;
          *(_WORD *)&v11->ApcStateFill[40] = 0;
          v11->ApcState.UserApcPendingAll = 0;
          v11->ApcStateIndex = 1;
          v11->ApcState.Process = v9;
          v11->ThreadLock = 0LL;
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          if ( v19 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v71 = v19[5] - 1;
              v19[5] = v71;
              if ( !v71 )
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          v20 = KeGetCurrentPrcb();
          Process = v11->SavedApcState.Process;
          v91 = (struct _KPRCB *)Process;
          GroupIndex = v20->GroupIndex;
          v23 = 8LL * v20->Group + 280;
          _interlockedbittestandset64((volatile signed __int32 *)((char *)&v9->Header.Lock + v23), GroupIndex);
          DirectoryTableBase = v9->DirectoryTableBase;
          if ( KiKvaShadow )
          {
            v25 = v9->DirectoryTableBase;
            if ( (DirectoryTableBase & 2) != 0 )
              v25 = DirectoryTableBase | 0x8000000000000000uLL;
            __writegsqword(0x7000u, v25);
            KiSetAddressPolicy(v9->AddressPolicy);
            Process = (_KPROCESS *)v91;
          }
          if ( (HvlEnlightenments & 1) != 0 )
          {
            HvlSwitchVirtualAddressSpace(DirectoryTableBase);
            Process = (_KPROCESS *)v91;
          }
          else
          {
            __writecr3(DirectoryTableBase);
          }
          if ( !KiFlushPcid && KiKvaShadow )
          {
            v72 = __readcr4();
            if ( (v72 & 0x20080) != 0 )
            {
              __writecr4(v72 ^ 0x80);
              __writecr4(v72);
            }
            else
            {
              v73 = __readcr3();
              __writecr3(v73);
            }
          }
          _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v23), GroupIndex);
          v11->MiscFlags &= ~0x800u;
          v26 = v88;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v88 < 2u )
          {
            v74 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v74->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v74);
            v26 = v88;
          }
          __writecr8(v26);
          v95 = 0LL;
        }
      }
    }
  }
  if ( (v5 & 4) != 0 )
    MiEmptyWorkingSetInitiate(a1, 0LL, 0LL, -1LL);
  v27 = &dword_14043C7C0;
  v28 = *(_BYTE *)(a1 + 184) & 7;
  if ( v28 >= 6u )
  {
    v30 = KeGetCurrentIrql();
    v88 = v30;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v30 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v28 == 2 )
      v29 = &dword_14043C7C0;
    else
      v29 = (LONG *)(a1 + 192);
    v30 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v30 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v29, (unsigned __int8)v30);
    }
    else
    {
      v31 = KeGetCurrentPrcb();
      v32 = v31->SchedulerAssist;
      if ( v32 )
      {
        if ( v31->NestingLevel <= 1u )
        {
          v75 = v32[5];
          v32[5] = v75 + 1;
          if ( v75 == -1 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
      _m_prefetchw(v29);
      v33 = *v29 & 0x7FFFFFFF;
      if ( v33 != _InterlockedCompareExchange(v29, v33 + 1, v33) )
      {
        v61 = v31->SchedulerAssist;
        if ( v61 )
        {
          if ( v31->NestingLevel <= 1u )
          {
            v76 = v61[5] - 1;
            v61[5] = v76;
            if ( !v76 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v29, (unsigned __int8)v30);
      }
    }
    if ( v29[1] )
      _InterlockedExchange(v29 + 1, 0);
    v88 = v30;
  }
  if ( (v5 & 0x20) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), (unsigned __int8)v30, 0, 2);
  if ( (v5 & 0x100) != 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), (unsigned __int8)v30, 0, 4);
  v34 = 0;
  v35 = 0;
  v36 = *(unsigned __int16 *)(v93 + 2354);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 2) != 0 )
    {
      v34 = 1;
      v35 = MiAgeWorkingSet(a1, (unsigned __int8)v30, 1LL, *(unsigned __int16 *)(v93 + 2354));
      if ( v35 || *(_BYTE *)(v93 + 55) != 1 || v36 - 1 > 8 )
        goto LABEL_48;
      v37 = MiAgeWorkingSet(a1, (unsigned __int8)v30, 2LL, 10LL);
      goto LABEL_47;
    }
    if ( (v5 & 0x40) != 0 )
    {
      v37 = MiAgeWorkingSet(a1, (unsigned __int8)v30, 1LL, *(unsigned __int16 *)(v93 + 2354));
      v34 = 1;
      goto LABEL_47;
    }
    if ( (v5 & 0x80u) == 0 )
      goto LABEL_48;
    CurrentThread = 2LL;
LABEL_100:
    v37 = MiAgeWorkingSet(a1, (unsigned __int8)v30, CurrentThread, v36);
    v34 = 1;
LABEL_47:
    v35 = v37;
LABEL_48:
    v38 = v89;
    goto LABEL_49;
  }
  v77 = v89;
  *((_BYTE *)v89 + 1) = MiTrimPassToAge[*(_BYTE *)v89 & 0x7F];
  v78 = MiComputeTrimAmount(v77, a1);
  if ( v78 )
  {
    v79 = MiTrimWorkingSet(a1, v78, (unsigned __int8)v30, *((unsigned __int8 *)v89 + 1), 17);
    v38 = v89;
    *((_QWORD *)v89 + 12) += v79;
  }
  else
  {
    v38 = v89;
  }
  CurrentThread = 0LL;
  if ( ((*(_BYTE *)v38 & 0x7F) == 0 && *(char *)v38 >= 0 || (*(_BYTE *)v38 & 0x7F) == 4) && *(_WORD *)(v93 + 2354) )
    CurrentThread = 1LL;
  if ( *((_BYTE *)v38 + 4) == 1 )
    goto LABEL_100;
LABEL_49:
  v39 = 0LL;
  if ( v35 != 1 )
  {
    if ( v34 == 1 )
    {
      v40 = 3;
      if ( *(_BYTE *)(a1 + 186) != 2 )
        v40 = 1;
      *((_QWORD *)v38 + 1) += *(_QWORD *)(a1 + 40) >> v40;
      *((_QWORD *)v38 + 2) += *(_QWORD *)(a1 + 48) >> v40;
      *((_QWORD *)v38 + 3) += *(_QWORD *)(a1 + 56) >> v40;
      *((_QWORD *)v38 + 4) += *(_QWORD *)(a1 + 64) >> v40;
      *((_QWORD *)v38 + 5) += *(_QWORD *)(a1 + 72) >> v40;
      *((_QWORD *)v38 + 6) += *(_QWORD *)(a1 + 80) >> v40;
      *((_QWORD *)v38 + 7) += *(_QWORD *)(a1 + 88) >> v40;
      *((_QWORD *)v38 + 8) += *(_QWORD *)(a1 + 96) >> v40;
    }
    if ( (v5 & 0x10) != 0 || (v5 & 8) != 0 )
      MiCaptureAndResetWorkingSetAccessBits(a1, (unsigned __int8)v88, v5);
    v41 = (LONG *)(a1 + 192);
    v39 = MEMORY[0xFFFFF78000000320];
    v42 = *(_BYTE *)(a1 + 184) & 7;
    if ( v42 == 2 )
      v43 = &dword_14043C7C0;
    else
      v43 = (LONG *)(a1 + 192);
    if ( *((_QWORD *)v43 + 6) )
    {
      v44 = (LONG *)(a1 + 192);
      if ( v42 == 2 )
        v44 = &dword_14043C7C0;
      CurrentThread = (__int64)(v44 + 10);
      v89 = (unsigned int *)CurrentThread;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v38) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(CurrentThread, v38);
      }
      else
      {
        v45 = KeGetCurrentPrcb();
        v90 = 0;
        v91 = v45;
        v46 = v45->SchedulerAssist;
        if ( v46 )
        {
          if ( v45->NestingLevel <= 1u )
          {
            v80 = v46[5];
            v46[5] = v80 + 1;
            if ( v80 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(v45);
              CurrentThread = (__int64)v89;
              v45 = v91;
            }
          }
        }
        if ( _interlockedbittestandset((volatile signed __int32 *)CurrentThread, 0x1Fu) )
        {
          v62 = v45->SchedulerAssist;
          if ( v62 )
          {
            if ( v45->NestingLevel <= 1u )
            {
              v81 = v62[5] - 1;
              v62[5] = v81;
              if ( !v81 )
              {
                KiRemoveSystemWorkPriorityKick(v45);
                CurrentThread = (__int64)v89;
              }
            }
          }
          v63 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)CurrentThread, 0xFFu);
          CurrentThread = (__int64)v89;
          v90 = v63;
        }
        v47 = *(unsigned int *)CurrentThread;
        if ( (*(_DWORD *)CurrentThread & 0xBFFFFFFF) != 0x80000000 )
        {
          do
          {
            if ( (v47 & 0x40000000) == 0 )
            {
              v82 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentThread, v47 | 0x40000000, v47);
              v4 = (_DWORD)v47 == v82;
              v47 = v82;
              if ( !v4 )
                continue;
            }
            KeYieldProcessorEx(&v90, v47, CurrentThread);
            CurrentThread = (__int64)v89;
            v47 = *v89;
          }
          while ( (v47 & 0xBFFFFFFF) != 0x80000000 );
        }
      }
      v48 = (_QWORD *)*((_QWORD *)v43 + 6);
      if ( v48 )
      {
        v49 = (_QWORD *)*v48;
        v50 = (_QWORD *)*((_QWORD *)v43 + 6);
        if ( *v48 )
        {
          do
          {
            v50 = v49;
            v49 = (_QWORD *)*v49;
          }
          while ( v49 );
        }
        if ( v39 - v50[2] > (unsigned __int64)PfKernelGlobals )
        {
          MiEmptyPageAccessLog(v48);
          *((_QWORD *)v43 + 6) = 0LL;
        }
      }
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        v41 = &dword_14043C7C0;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v41 + 10, retaddr);
      else
        v41[10] = 0;
      v51 = KeGetCurrentPrcb();
      v52 = v51->SchedulerAssist;
      if ( v52 )
      {
        if ( v51->NestingLevel <= 1u )
        {
          v83 = v52[5] - 1;
          v52[5] = v83;
          if ( !v83 )
            KiRemoveSystemWorkPriorityKick(v51);
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 184) & 7u) >= 6 )
  {
    v56 = v88;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v88 < 2u )
    {
      v84 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v84->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v84);
    }
  }
  else
  {
    v53 = *(_DWORD *)(a1 + 184);
    if ( (v53 & 0x8000000) != 0 || (v53 & 0x4000000) != 0 || (v53 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(a1, (unsigned __int8)v88);
      LOBYTE(v53) = *(_BYTE *)(a1 + 184);
    }
    if ( (v53 & 7) != 2 )
      v27 = (volatile signed __int32 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1u, CurrentThread, a4);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v27, retaddr);
    }
    else
    {
      _InterlockedAnd(v27, 0xBFFFFFFF);
      _InterlockedDecrement(v27);
    }
    v54 = KeGetCurrentPrcb();
    v55 = v54->SchedulerAssist;
    if ( v55 )
    {
      if ( v54->NestingLevel <= 1u )
      {
        v85 = v55[5] - 1;
        v55[5] = v85;
        if ( !v85 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
    v56 = v88;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v88 < 2u )
    {
      v86 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v86->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v86);
    }
  }
  __writecr8(v56);
  v57 = *(_BYTE *)(a1 + 184) & 7;
  if ( v57 )
  {
    if ( v57 == 1 )
    {
      MiDetachProcessFromSession(1LL);
      _InterlockedOr(v87, 0);
      dword_14043A020 = KiTbFlushTimeStamp;
    }
  }
  else if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1280) )
  {
    KiDetachProcess(&KeGetCurrentThread()->600, 1LL);
  }
  if ( !v35 )
  {
    if ( qword_14043B980 )
    {
      v58 = (_QWORD *)_InterlockedExchange64(&qword_14043B980, 0LL);
      if ( v58 )
      {
        if ( v39 - v58[2] > (unsigned __int64)PfKernelGlobals || (v5 & 0x18) != 0 )
        {
          v60 = v58;
        }
        else
        {
          if ( !qword_14043B980 && !_InterlockedCompareExchange64(&qword_14043B980, (signed __int64)v58, 0LL) )
            return v35;
          v60 = v58;
          if ( (_QWORD *)v58[4] == v58 + 9 )
          {
            MmFreeAccessPfnBuffer(v58);
            return v35;
          }
        }
        MiQueuePageAccessLog(v60);
      }
    }
  }
  return v35;
}
