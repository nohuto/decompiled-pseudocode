/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x140048180
 * Callers:
 *     MiProcessWorkingSets @ 0x140047C50 (MiProcessWorkingSets.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14001CD20 (MiEmptyPageAccessLog.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x140043560 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x140043810 (KiDetachProcess.c)
 *     KiSetAddressPolicy @ 0x140043BF0 (KiSetAddressPolicy.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     MiAgeWorkingSet @ 0x140048A50 (MiAgeWorkingSet.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     MiCheckProcessShadow @ 0x1400ACA20 (MiCheckProcessShadow.c)
 *     PfLogForegroundProcess @ 0x1400D34BC (PfLogForegroundProcess.c)
 *     MmFreeAccessPfnBuffer @ 0x1400D4890 (MmFreeAccessPfnBuffer.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiDetachProcessFromSession @ 0x1401262F8 (MiDetachProcessFromSession.c)
 *     MiAttachSession @ 0x140127350 (MiAttachSession.c)
 *     MiPreUnlockWorkingSetShared @ 0x14012A498 (MiPreUnlockWorkingSetShared.c)
 *     MiTrimWorkingSet @ 0x14012A6A8 (MiTrimWorkingSet.c)
 *     MiQueuePageAccessLog @ 0x14013AEF4 (MiQueuePageAccessLog.c)
 *     MiEmptyWorkingSetInitiate @ 0x14015A9F8 (MiEmptyWorkingSetInitiate.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14017D428 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14028D770 (HvlSwitchVirtualAddressSpace.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiComputeTrimAmount @ 0x1402C7F3C (MiComputeTrimAmount.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033ACA4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // al
  _KPROCESS *v6; // rbp
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  struct _KTHREAD *v9; // rdi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  $B3BA4C768623B88C7BF94E30725A7E5E *v13; // rsi
  struct _KTHREAD *Flink; // rcx
  struct _KTHREAD *v15; // r8
  _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  struct _KPRCB *v19; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 GroupIndex; // r12
  __int64 v22; // r15
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // r10
  volatile signed __int32 *v26; // rsi
  unsigned __int8 v27; // al
  LONG *v28; // rdi
  unsigned __int8 v29; // r12
  struct _KPRCB *v30; // rbp
  _DWORD *v31; // rcx
  signed __int32 v32; // ett
  int v33; // r15d
  unsigned int v34; // edi
  unsigned int v35; // ebp
  __int64 v36; // rdx
  __int64 v37; // rbp
  char v38; // cl
  char v39; // cl
  LONG *v40; // rax
  LONG *v41; // r15
  volatile __int64 *v42; // rcx
  struct _KPRCB *v43; // rdx
  _DWORD *v44; // r8
  _QWORD *v45; // rdx
  _SLIST_ENTRY *v46; // rcx
  _SLIST_ENTRY *Next; // rax
  _SLIST_ENTRY *i; // rdx
  __int64 v49; // rax
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  int v52; // eax
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  char v55; // al
  _QWORD *v56; // r13
  __int64 v58; // r8
  void *v59; // rcx
  _DWORD *v60; // rcx
  struct _KPRCB *v61; // rcx
  _DWORD *v62; // rcx
  _DWORD *v63; // rcx
  int v64; // eax
  int v65; // eax
  int v66; // eax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v68; // rcx
  int v69; // eax
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rax
  struct _KPRCB *v72; // rcx
  int v73; // eax
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  unsigned __int8 v81; // [rsp+38h] [rbp-B0h]
  _KPROCESS *v82; // [rsp+40h] [rbp-A8h]
  volatile __int64 *v83; // [rsp+40h] [rbp-A8h]
  __int64 v84; // [rsp+48h] [rbp-A0h] BYREF
  volatile signed __int64 *v85; // [rsp+50h] [rbp-98h]
  __int64 v86; // [rsp+58h] [rbp-90h]
  int v87; // [rsp+60h] [rbp-88h] BYREF
  __int64 v88; // [rsp+68h] [rbp-80h]
  _QWORD v89[6]; // [rsp+70h] [rbp-78h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 186) == 2 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    PfLogForegroundProcess();
  v88 = *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 7800LL);
  v5 = *(_BYTE *)(a1 + 184) & 7;
  if ( v5 )
  {
    if ( v5 == 1 )
      MiAttachSession(a1 - 256);
  }
  else
  {
    v6 = (_KPROCESS *)(a1 - 1280);
    if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1280) )
    {
      memset(v89, 0, sizeof(v89));
      CurrentThread = KeGetCurrentThread();
      ApcStateIndex = CurrentThread->ApcStateIndex;
      if ( ApcStateIndex )
        KeBugCheckEx(5u, a1 - 1280, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
      v9 = KeGetCurrentThread();
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 || (*(_DWORD *)&v6->0 & 0x400) != 0 )
        KeBugCheckEx(
          5u,
          a1 - 1280,
          (ULONG_PTR)v9->ApcState.Process,
          v9->ApcStateIndex,
          KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
      if ( v9->ApcState.Process == v6 )
      {
        v89[4] = 1LL;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        v81 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        CurrentPrcb = KeGetCurrentPrcb();
        v87 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v64 = SchedulerAssist[5];
            SchedulerAssist[5] = v64 + 1;
            if ( v64 == -1 )
LABEL_134:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v9->ThreadLock, 0LL) )
        {
          v62 = CurrentPrcb->SchedulerAssist;
          if ( v62 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v65 = v62[5] - 1;
              v62[5] = v65;
              if ( !v65 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v87);
          while ( v9->ThreadLock );
          v63 = CurrentPrcb->SchedulerAssist;
          if ( v63 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v66 = v63[5];
              v63[5] = v66 + 1;
              if ( v66 == -1 )
                goto LABEL_134;
            }
          }
        }
        if ( v9->ApcStateIndex )
        {
          KiAttachProcess((__int64)v9, a1 - 1280, v81, 1, (__int64)v89);
        }
        else
        {
          v13 = &v9->600;
          v9->SavedApcState.Process = v9->ApcState.Process;
          v9->SavedApcState.InProgressFlags = v9->ApcState.InProgressFlags;
          v9->SavedApcState.KernelApcPending = v9->ApcState.KernelApcPending;
          v9->SavedApcState.UserApcPendingAll = v9->ApcState.UserApcPendingAll;
          Flink = (struct _KTHREAD *)v9->ApcState.ApcListHead[0].Flink;
          if ( Flink == (struct _KTHREAD *)&v9->152 )
          {
            v9->SavedApcState.ApcListHead[0].Blink = v9->SavedApcState.ApcListHead;
            v13->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v13;
            v9->SavedApcState.KernelApcPending = 0;
          }
          else
          {
            Blink = v9->ApcState.ApcListHead[0].Blink;
            v13->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)Flink;
            v9->SavedApcState.ApcListHead[0].Blink = Blink;
            Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v13;
            Blink->Flink = (struct _LIST_ENTRY *)v13;
          }
          v15 = (struct _KTHREAD *)v9->ApcState.ApcListHead[1].Flink;
          v16 = &v9->SavedApcState.ApcListHead[1];
          if ( v15 == (struct _KTHREAD *)&v9->ApcStateFill[16] )
          {
            v9->SavedApcState.ApcListHead[1].Blink = &v9->SavedApcState.ApcListHead[1];
            v16->Flink = v16;
            v9->SavedApcState.UserApcPendingAll = 0;
          }
          else
          {
            v68 = v9->ApcState.ApcListHead[1].Blink;
            v16->Flink = (struct _LIST_ENTRY *)v15;
            v9->SavedApcState.ApcListHead[1].Blink = v68;
            v15->Header.WaitListHead.Flink = v16;
            v68->Flink = v16;
          }
          v9->ApcState.ApcListHead[0].Blink = v9->ApcState.ApcListHead;
          v9->ApcState.ApcListHead[0].Flink = v9->ApcState.ApcListHead;
          v9->ApcState.ApcListHead[1].Blink = &v9->ApcState.ApcListHead[1];
          v9->ApcState.ApcListHead[1].Flink = &v9->ApcState.ApcListHead[1];
          v9->MiscFlags |= 0x800u;
          *(_WORD *)&v9->ApcStateFill[40] = 0;
          v9->ApcState.UserApcPendingAll = 0;
          v9->ApcStateIndex = 1;
          v9->ApcState.Process = v6;
          v9->ThreadLock = 0LL;
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          if ( v18 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v69 = v18[5] - 1;
              v18[5] = v69;
              if ( !v69 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          v19 = KeGetCurrentPrcb();
          Process = v9->SavedApcState.Process;
          v82 = Process;
          GroupIndex = v19->GroupIndex;
          v22 = 8LL * v19->Group + 280;
          _interlockedbittestandset64((volatile signed __int32 *)((char *)&v6->Header.Lock + v22), GroupIndex);
          DirectoryTableBase = v6->DirectoryTableBase;
          if ( KiKvaShadow )
          {
            v24 = v6->DirectoryTableBase;
            if ( (DirectoryTableBase & 2) != 0 )
              v24 = DirectoryTableBase | 0x8000000000000000uLL;
            __writegsqword(0x7000u, v24);
            KiSetAddressPolicy();
            Process = v82;
          }
          if ( (HvlEnlightenments & 1) != 0 )
          {
            HvlSwitchVirtualAddressSpace(DirectoryTableBase);
            Process = v82;
          }
          else
          {
            __writecr3(DirectoryTableBase);
          }
          if ( !KiFlushPcid && KiKvaShadow )
          {
            v70 = __readcr4();
            if ( (v70 & 0x20080) != 0 )
            {
              __writecr4(v70 ^ 0x80);
              __writecr4(v70);
            }
            else
            {
              v71 = __readcr3();
              __writecr3(v71);
            }
          }
          _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v22), GroupIndex);
          v9->MiscFlags &= ~0x800u;
          v25 = v81;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v81 < 2u )
          {
            v72 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v72->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v72);
            v25 = v81;
          }
          __writecr8(v25);
        }
      }
    }
  }
  if ( (a3 & 4) != 0 )
    MiEmptyWorkingSetInitiate(a1, 0LL, 0LL, -1LL);
  v26 = &dword_140466F00;
  v27 = *(_BYTE *)(a1 + 184) & 7;
  if ( v27 >= 6u )
  {
    v29 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v29 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v27 == 2 )
      v28 = &dword_140466F00;
    else
      v28 = (LONG *)(a1 + 192);
    v29 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v29 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v28, v29);
    }
    else
    {
      v30 = KeGetCurrentPrcb();
      v31 = v30->SchedulerAssist;
      if ( v31 )
      {
        if ( v30->NestingLevel <= 1u )
        {
          v73 = v31[5];
          v31[5] = v73 + 1;
          if ( v73 == -1 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
      _m_prefetchw(v28);
      v32 = *v28 & 0x7FFFFFFF;
      if ( v32 != _InterlockedCompareExchange(v28, v32 + 1, v32) )
      {
        v60 = v30->SchedulerAssist;
        if ( v60 )
        {
          if ( v30->NestingLevel <= 1u )
          {
            v74 = v60[5] - 1;
            v60[5] = v74;
            if ( !v74 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v28, v29);
      }
    }
    if ( v28[1] )
      _InterlockedExchange(v28 + 1, 0);
  }
  if ( (a3 & 0x20) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), v29, 0, 2);
  if ( (a3 & 0x100) != 0 )
    MiTrimWorkingSet(a1, *(_QWORD *)(a1 + 136), v29, 0, 4);
  v33 = 0;
  v34 = 0;
  v35 = *(unsigned __int16 *)(v88 + 2354);
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 2) != 0 )
    {
      v34 = MiAgeWorkingSet(a1, v29, 1LL, *(unsigned __int16 *)(v88 + 2354));
      v33 = 1;
      if ( !v34 && *(_BYTE *)(v88 + 55) == 1 && v35 - 1 <= 8 )
        v34 = MiAgeWorkingSet(a1, v29, 2LL, 10LL);
      goto LABEL_46;
    }
    if ( (a3 & 0x40) != 0 )
    {
      v58 = 1LL;
    }
    else
    {
      if ( (a3 & 0x80u) == 0 )
        goto LABEL_46;
      v58 = 2LL;
    }
LABEL_101:
    v34 = MiAgeWorkingSet(a1, v29, v58, v35);
    v33 = 1;
LABEL_46:
    v36 = a2;
    goto LABEL_47;
  }
  *(_BYTE *)(a2 + 1) = MiTrimPassToAge[*(_BYTE *)a2 & 0x7F];
  v75 = MiComputeTrimAmount(a2, a1);
  if ( v75 )
  {
    v76 = MiTrimWorkingSet(a1, v75, v29, *(unsigned __int8 *)(a2 + 1), 17);
    v36 = a2;
    *(_QWORD *)(a2 + 96) += v76;
  }
  else
  {
    v36 = a2;
  }
  v58 = 0LL;
  if ( ((*(_BYTE *)v36 & 0x7F) == 0 && *(char *)v36 >= 0 || (*(_BYTE *)v36 & 0x7F) == 4) && *(_WORD *)(v88 + 2354) )
    v58 = 1LL;
  if ( *(_BYTE *)(v36 + 4) == 1 )
    goto LABEL_101;
LABEL_47:
  v37 = 0LL;
  if ( v34 != 1 )
  {
    if ( v33 == 1 )
    {
      v38 = 3;
      if ( *(_BYTE *)(a1 + 186) != 2 )
        v38 = 1;
      *(_QWORD *)(v36 + 8) += *(_QWORD *)(a1 + 40) >> v38;
      *(_QWORD *)(v36 + 16) += *(_QWORD *)(a1 + 48) >> v38;
      *(_QWORD *)(v36 + 24) += *(_QWORD *)(a1 + 56) >> v38;
      *(_QWORD *)(v36 + 32) += *(_QWORD *)(a1 + 64) >> v38;
      *(_QWORD *)(v36 + 40) += *(_QWORD *)(a1 + 72) >> v38;
      *(_QWORD *)(v36 + 48) += *(_QWORD *)(a1 + 80) >> v38;
      *(_QWORD *)(v36 + 56) += *(_QWORD *)(a1 + 88) >> v38;
      *(_QWORD *)(v36 + 64) += *(_QWORD *)(a1 + 96) >> v38;
    }
    if ( (a3 & 0x10) != 0 || (a3 & 8) != 0 )
      MiCaptureAndResetWorkingSetAccessBits(a1, v29, a3);
    v37 = MEMORY[0xFFFFF78000000320];
    v39 = *(_BYTE *)(a1 + 184) & 7;
    v84 = 0LL;
    v85 = 0LL;
    v86 = 0LL;
    v40 = (LONG *)(a1 + 192);
    v41 = v39 == 2 ? &dword_140466F00 : (LONG *)(a1 + 192);
    if ( *((_QWORD *)v41 + 5) )
    {
      v84 = 0LL;
      if ( v39 == 2 )
        v40 = &dword_140466F00;
      v42 = (volatile __int64 *)(v40 + 16);
      v85 = (volatile signed __int64 *)(v40 + 16);
      v43 = KeGetCurrentPrcb();
      v83 = (volatile __int64 *)(v40 + 16);
      v44 = v43->SchedulerAssist;
      if ( v44 )
      {
        if ( v43->NestingLevel <= 1u )
        {
          v77 = v44[5];
          v44[5] = v77 + 1;
          if ( v77 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v43);
            v42 = v83;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v84, v42);
      }
      else
      {
        v45 = (_QWORD *)_InterlockedExchange64(v42, (__int64)&v84);
        if ( v45 )
          KxWaitForLockOwnerShip((__int64)&v84, v45);
      }
      v46 = (_SLIST_ENTRY *)*((_QWORD *)v41 + 5);
      if ( v46 )
      {
        Next = v46->Next;
        for ( i = (_SLIST_ENTRY *)*((_QWORD *)v41 + 5); Next; Next = Next->Next )
          i = Next;
        if ( v37 - (unsigned __int64)i[1].Next > PfKernelGlobals )
        {
          MiEmptyPageAccessLog(v46);
          *((_QWORD *)v41 + 5) = 0LL;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v84, retaddr);
        goto LABEL_70;
      }
      _m_prefetchw(&v84);
      v49 = v84;
      if ( !v84 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v85, 0LL, (signed __int64)&v84) == &v84 )
        {
LABEL_70:
          v50 = KeGetCurrentPrcb();
          v51 = v50->SchedulerAssist;
          if ( v51 )
          {
            if ( v50->NestingLevel <= 1u )
            {
              v78 = v51[5] - 1;
              v51[5] = v78;
              if ( !v78 )
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
          goto LABEL_71;
        }
        v49 = KxWaitForLockChainValid(&v84);
      }
      v84 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v49 + 8), 1uLL);
      goto LABEL_70;
    }
  }
LABEL_71:
  if ( (*(_BYTE *)(a1 + 184) & 7u) >= 6 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v29 < 2u )
    {
LABEL_120:
      v61 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v61->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v61);
    }
  }
  else
  {
    v52 = *(_DWORD *)(a1 + 184);
    if ( (v52 & 0x8000000) != 0 || (v52 & 0x4000000) != 0 || (v52 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(a1, v29);
      LOBYTE(v52) = *(_BYTE *)(a1 + 184);
    }
    if ( (v52 & 7) != 2 )
      v26 = (volatile signed __int32 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v26, retaddr);
    }
    else
    {
      _InterlockedAnd(v26, 0xBFFFFFFF);
      _InterlockedDecrement(v26);
    }
    v53 = KeGetCurrentPrcb();
    v54 = v53->SchedulerAssist;
    if ( v54 )
    {
      if ( v53->NestingLevel <= 1u )
      {
        v79 = v54[5] - 1;
        v54[5] = v79;
        if ( !v79 )
          KiRemoveSystemWorkPriorityKick(v53);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v29 < 2u )
      goto LABEL_120;
  }
  __writecr8(v29);
  v55 = *(_BYTE *)(a1 + 184) & 7;
  if ( v55 )
  {
    if ( v55 == 1 )
      MiDetachProcessFromSession(1LL);
  }
  else if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1280) )
  {
    KiDetachProcess((struct _KTHREAD *)&KeGetCurrentThread()->600, 1);
  }
  if ( !v34 )
  {
    if ( qword_140466040 )
    {
      v56 = (_QWORD *)_InterlockedExchange64(&qword_140466040, 0LL);
      if ( v56 )
      {
        if ( v37 - v56[2] > (unsigned __int64)PfKernelGlobals || (a3 & 0x18) != 0 )
        {
          v59 = v56;
        }
        else
        {
          if ( !qword_140466040 && !_InterlockedCompareExchange64(&qword_140466040, (signed __int64)v56, 0LL) )
            return v34;
          v59 = v56;
          if ( (_QWORD *)v56[4] == v56 + 9 )
          {
            MmFreeAccessPfnBuffer(v56);
            return v34;
          }
        }
        MiQueuePageAccessLog(v59);
      }
    }
  }
  return v34;
}
