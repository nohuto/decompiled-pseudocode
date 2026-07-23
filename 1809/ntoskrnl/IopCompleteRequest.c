/*
 * XREFs of IopCompleteRequest @ 0x1400BFC50
 * Callers:
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x14081A560 (IopAbortRequest.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeInitializeApc @ 0x14008A350 (KeInitializeApc.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     IopDequeueIrpFromThread @ 0x1400B8E30 (IopDequeueIrpFromThread.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1400B95E0 (IopFreeIrp.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400BC720 (KiSetVpThreadSpinLockCount.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     IopDequeueIrpFromFileObject @ 0x1400E0B10 (IopDequeueIrpFromFileObject.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeInsertQueueEx @ 0x1400FD720 (KeInsertQueueEx.c)
 *     IopFreeIrpExtension @ 0x1401078D0 (IopFreeIrpExtension.c)
 *     IopUpdateWriteTransferCount @ 0x14011EDA8 (IopUpdateWriteTransferCount.c)
 *     ExReturnPoolQuota @ 0x14011F398 (ExReturnPoolQuota.c)
 *     IopInterlockedAdd @ 0x14012FA8C (IopInterlockedAdd.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401B3E2C (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401B3EA4 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     IopExceptionFilter @ 0x14027EFC0 (IopExceptionFilter.c)
 *     IopFreeReserveIrp @ 0x14027F074 (IopFreeReserveIrp.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140291128 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1409251EC (IovFreeIrpPrivate.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rdi
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v7; // r15
  _DWORD *v8; // rsi
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rbx
  __int64 *v12; // r14
  __int16 v13; // ax
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  volatile signed __int32 *v17; // rdx
  struct _KEVENT *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r14
  int v24; // ebx
  unsigned __int8 CurrentIrql; // cl
  __int64 v26; // rdx
  struct _KPRCB *v27; // r10
  int v28; // eax
  _QWORD *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rbx
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  char v34; // al
  bool v35; // zf
  __int64 v36; // rsi
  _QWORD *v37; // r12
  unsigned __int8 v38; // cl
  struct _KPRCB *v39; // r13
  _KTHREAD *v40; // r15
  unsigned __int8 IsThreadRunning; // al
  char v42; // al
  int v43; // r8d
  __int64 *v44; // rdx
  _QWORD *v45; // rbx
  char v46; // al
  __int64 v47; // r8
  __int64 v48; // rsi
  _QWORD *v49; // r12
  unsigned __int8 v50; // cl
  struct _KPRCB *v51; // r13
  _KTHREAD *v52; // r15
  unsigned __int8 v53; // al
  char v54; // al
  int v55; // r8d
  _QWORD *v56; // rdx
  int v57; // ecx
  ULONG_PTR v58; // rsi
  int v59; // ebx
  __int64 v60; // rcx
  __int64 v61; // rdx
  struct _KPRCB *v62; // r10
  int v63; // eax
  _QWORD *v64; // r14
  __int64 v65; // rcx
  __int64 v66; // rbx
  _QWORD *v67; // rax
  _QWORD *v68; // rcx
  char v69; // al
  int v70; // eax
  unsigned __int64 v71; // rdx
  __int64 v72; // rsi
  _QWORD *v73; // r15
  char v74; // r12
  unsigned __int8 v75; // cl
  struct _KPRCB *v76; // r13
  _KTHREAD *v77; // r14
  unsigned __int8 v78; // al
  int v79; // r8d
  __int64 *v80; // rdx
  _QWORD *v81; // rbx
  char v82; // al
  __int64 v83; // r8
  __int64 v84; // rsi
  _QWORD *v85; // r15
  char v86; // r12
  unsigned __int8 v87; // cl
  struct _KPRCB *v88; // r13
  _KTHREAD *v89; // r14
  unsigned __int8 v90; // al
  int v91; // r8d
  _QWORD *v92; // rdx
  unsigned __int64 v93; // rcx
  struct _KTHREAD *v94; // rax
  __int64 v95; // rcx
  struct _KTHREAD *v96; // rax
  volatile signed __int32 *v97; // rbx
  unsigned __int8 v98; // r14
  struct _KPRCB *v99; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // r8
  _QWORD *v104; // rax
  __int64 v105; // rdx
  _QWORD *v106; // rcx
  __int64 v107; // r10
  volatile signed __int32 *v108; // rsi
  struct _KPRCB *v109; // rbx
  _DWORD *v110; // rcx
  int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // r8
  _QWORD *v114; // rax
  __int64 v115; // rdx
  _QWORD *v116; // rcx
  volatile signed __int64 *v117; // rcx
  struct _KPRCB *v118; // rcx
  _DWORD *v119; // rdx
  int v120; // eax
  struct _KPRCB *v121; // rcx
  int v122; // ecx
  __int64 v123; // rdx
  int v124; // r8d
  __int64 v125; // r8
  int v126; // ecx
  unsigned __int64 v127; // rax
  __int64 v128; // r8
  __int64 v129; // r9
  unsigned __int64 v130; // rdx
  ULONG_PTR v131; // rcx
  char v132; // al
  __int64 v133; // rcx
  struct _KPRCB *v134; // rdx
  char v135; // al
  __int16 v136; // r9
  unsigned __int16 v137; // r9
  __int64 v138; // rbx
  __int64 v139; // rcx
  __int64 v140; // rbx
  char v141; // al
  struct _KPRCB *v142; // [rsp+40h] [rbp-A8h]
  _QWORD *v143; // [rsp+40h] [rbp-A8h]
  _QWORD *v144; // [rsp+40h] [rbp-A8h]
  ULONG_PTR v145; // [rsp+50h] [rbp-98h]
  ULONG_PTR v146; // [rsp+58h] [rbp-90h]
  _QWORD *v147; // [rsp+58h] [rbp-90h]
  _QWORD *v148; // [rsp+58h] [rbp-90h]
  struct _KTHREAD *v149; // [rsp+60h] [rbp-88h]
  __int64 v150; // [rsp+68h] [rbp-80h]
  PVOID Object; // [rsp+70h] [rbp-78h]
  char v152; // [rsp+78h] [rbp-70h]
  int v153; // [rsp+80h] [rbp-68h] BYREF
  int v154; // [rsp+84h] [rbp-64h] BYREF
  __int64 v155; // [rsp+88h] [rbp-60h]
  __int64 v156; // [rsp+90h] [rbp-58h]
  void *retaddr; // [rsp+E8h] [rbp+0h]
  struct _KPRCB *v158; // [rsp+F0h] [rbp+8h]
  char v159; // [rsp+100h] [rbp+18h]

  v5 = a1 - 120;
  v150 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v149 = CurrentThread;
  v7 = *a4;
  v145 = *a4;
  v146 = *a4;
  if ( !a3 || (v159 = 1, *a3 != 1LL) )
    v159 = 0;
  v8 = (_DWORD *)(v5 + 16);
  v9 = *(_DWORD *)(v5 + 16);
  if ( (v9 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 160) = *a5;
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    return;
  }
  if ( (v9 & 0x10) != 0 )
  {
    if ( (v9 & 0x40) != 0 )
    {
      v10 = *(_DWORD *)(v5 + 48);
      if ( v10 != -2147483626 && (v10 & 0xC0000000) != 0xC0000000 )
        memmove(*(void **)(v5 + 112), *(const void **)(v5 + 24), *(_QWORD *)(v5 + 56));
    }
    if ( (*v8 & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
  }
  *v8 &= 0xFFFFFFCF;
  v11 = *(__int64 **)(v5 + 8);
  if ( v11 )
  {
    do
    {
      v12 = (__int64 *)*v11;
      v13 = *((_WORD *)v11 + 5);
      if ( (v13 & 0x20) != 0 )
      {
        MmUnmapLockedPages((PVOID)v11[3], (PMDL)v11);
        v13 = *((_WORD *)v11 + 5);
      }
      if ( (v13 & 8) != 0 )
      {
        v14 = *((unsigned __int16 *)v11 + 6);
        if ( (unsigned int)v14 >= (unsigned int)KeNumberProcessors_0 )
        {
          CurrentPrcb = 0LL;
        }
        else
        {
          _mm_lfence();
          CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v14];
        }
        if ( !CurrentPrcb )
          CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[3].P;
        ++P->TotalFrees;
        if ( LOWORD(P->ListHead.Alignment) < P->Depth
          || (++P->FreeMisses,
              P = CurrentPrcb->PPLookasideList[3].L,
              ++P->TotalFrees,
              LOWORD(P->ListHead.Alignment) < P->Depth) )
        {
          RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v11);
        }
        else
        {
          ++P->FreeMisses;
          ((void (__fastcall *)(__int64 *))P->FreeEx)(v11);
        }
      }
      else
      {
        ExFreePoolWithTag(v11, 0);
      }
      v11 = v12;
    }
    while ( v12 );
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  v17 = (volatile signed __int32 *)*(unsigned int *)(v5 + 48);
  if ( (*(_DWORD *)(v5 + 48) & 0xC0000000) != 0xC0000000 )
    goto LABEL_52;
  if ( !*(_BYTE *)(v5 + 65) )
    goto LABEL_40;
  if ( (*v8 & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
  {
LABEL_52:
    Object = 0LL;
    v155 = 0LL;
    if ( v7 )
    {
      v20 = *(_QWORD *)(v7 + 176);
      if ( v20 )
      {
        if ( (*v8 & 0x2000) != 0 )
        {
          Object = *(PVOID *)v20;
          v155 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          IopIncrementCompletionContextUsageCountAndReadData(v7);
        }
        if ( Object )
          ObfReferenceObject(Object);
      }
    }
    v21 = *(_QWORD *)(v5 + 72);
    v22 = v150;
    if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
      *(_DWORD *)(v21 + 4) = *(_DWORD *)(v150 + 56);
    else
      *(_QWORD *)(v21 + 8) = *(_QWORD *)(v150 + 56);
    *(_DWORD *)v21 = *(_DWORD *)(v5 + 48);
    v23 = *(_QWORD *)(v5 + 80);
    if ( v23 )
    {
      if ( (*(_BYTE *)v23 & 0x7F) != 0 )
      {
        v24 = 0;
      }
      else
      {
        if ( *(_DWORD *)(v23 + 4) == 1 )
          goto LABEL_134;
        v24 = 1;
      }
      CurrentIrql = KeGetCurrentIrql();
      v152 = CurrentIrql;
      v26 = 2LL;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v27 = KeGetCurrentPrcb();
      v142 = v27;
      v153 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v23, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v153, v26, v22);
          while ( (*(_DWORD *)v23 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v23, 7u) );
        v27 = v142;
      }
      v28 = *(_DWORD *)(v23 + 4);
      *(_DWORD *)(v23 + 4) = 1;
      if ( !v28 )
      {
        v29 = (_QWORD *)(v23 + 8);
        v30 = *(_QWORD *)(v23 + 8);
        if ( !v24 )
        {
          if ( (_QWORD *)v30 != v29 )
          {
            while ( 1 )
            {
              v31 = v30;
              v32 = *(_QWORD **)v30;
              v147 = v32;
              v33 = *(_QWORD **)(v30 + 8);
              if ( v32[1] != v31 || *v33 != v31 )
                break;
              *v33 = v32;
              v32[1] = v33;
              v34 = *(_BYTE *)(v31 + 16);
              if ( v34 == 1 )
              {
                if ( (unsigned __int8)KiTryUnwaitThread(v27, v31, *(unsigned __int16 *)(v31 + 18), 0LL) )
                {
                  v35 = (*(_DWORD *)(v23 + 4))-- == 1;
                  if ( v35 )
                    goto LABEL_133;
                }
              }
              else if ( v34 == 2 )
              {
                *(_BYTE *)(v31 + 17) = 5;
                v36 = *(_QWORD *)(v31 + 24);
                *(_QWORD *)v31 = 0LL;
                v37 = (_QWORD *)(v36 + 8);
                v38 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 < 2u )
                  _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                v39 = KeGetCurrentPrcb();
                v40 = v39->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(v39->CurrentThread);
                  EtwTraceEnqueueWork(v40, v31, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe(v36);
                if ( (_QWORD *)*v37 == v37
                  || *(_DWORD *)(v36 + 40) >= *(_DWORD *)(v36 + 44)
                  || v40->Queue == (_DISPATCHER_HEADER *volatile)v36 && v40->WaitReason == 15 )
                {
                  v42 = 0;
                }
                else
                {
                  v42 = KiWakeQueueWaiter((__int64)v39, v36, v31);
                }
                if ( !v42 )
                {
                  v43 = *(_DWORD *)(v36 + 4);
                  *(_DWORD *)(v36 + 4) = v43 + 1;
                  v44 = *(__int64 **)(v36 + 32);
                  if ( *v44 != v36 + 24 )
                    break;
                  *(_QWORD *)v31 = v36 + 24;
                  *(_QWORD *)(v31 + 8) = v44;
                  *v44 = v31;
                  *(_QWORD *)(v36 + 32) = v31;
                  if ( !v43 && (_QWORD *)*v37 != v37 )
                    KiWakeOtherQueueWaiters(v39, v36);
                }
                _InterlockedAnd((volatile signed __int32 *)v36, 0xFFFFFF7F);
                v35 = (*(_DWORD *)(v23 + 4))-- == 1;
                if ( v35 )
                  goto LABEL_133;
                v29 = (_QWORD *)(v23 + 8);
              }
              else
              {
                KiTryUnwaitThread(v27, v31, 256LL, 0LL);
              }
              v30 = (__int64)v147;
              v27 = v142;
              if ( v147 == v29 )
                goto LABEL_133;
            }
LABEL_331:
            __fastfail(3u);
          }
          goto LABEL_133;
        }
        if ( (_QWORD *)v30 != v29 )
        {
          do
          {
            v45 = (_QWORD *)v30;
            v148 = *(_QWORD **)v30;
            v46 = *(_BYTE *)(v30 + 16);
            if ( v46 == 1 )
            {
              v47 = *(unsigned __int16 *)(v30 + 18);
            }
            else
            {
              if ( v46 == 2 )
              {
                *(_BYTE *)(v30 + 17) = 5;
                v48 = *(_QWORD *)(v30 + 24);
                *(_QWORD *)v30 = 0LL;
                v49 = (_QWORD *)(v48 + 8);
                v50 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 < 2u )
                  _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                v51 = KeGetCurrentPrcb();
                v52 = v51->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  v53 = KeIsThreadRunning(v51->CurrentThread);
                  EtwTraceEnqueueWork(v52, v45, v53);
                }
                KiAcquireKobjectLockSafe(v48);
                if ( (_QWORD *)*v49 == v49
                  || *(_DWORD *)(v48 + 40) >= *(_DWORD *)(v48 + 44)
                  || v52->Queue == (_DISPATCHER_HEADER *volatile)v48 && v52->WaitReason == 15 )
                {
                  v54 = 0;
                }
                else
                {
                  v54 = KiWakeQueueWaiter((__int64)v51, v48, (__int64)v45);
                }
                if ( !v54 )
                {
                  v55 = *(_DWORD *)(v48 + 4);
                  *(_DWORD *)(v48 + 4) = v55 + 1;
                  v56 = *(_QWORD **)(v48 + 32);
                  if ( *v56 != v48 + 24 )
                    goto LABEL_331;
                  *v45 = v48 + 24;
                  v45[1] = v56;
                  *v56 = v45;
                  *(_QWORD *)(v48 + 32) = v45;
                  if ( !v55 && (_QWORD *)*v49 != v49 )
                    KiWakeOtherQueueWaiters(v51, v48);
                }
                _InterlockedAnd((volatile signed __int32 *)v48, 0xFFFFFF7F);
                v29 = (_QWORD *)(v23 + 8);
                goto LABEL_131;
              }
              v47 = 256LL;
            }
            KiTryUnwaitThread(v27, v30, v47, 0LL);
LABEL_131:
            v30 = (__int64)v148;
            v27 = v142;
          }
          while ( v148 != v29 );
        }
        v29[1] = v29;
        *v29 = v29;
      }
LABEL_133:
      _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v142, 0, 1, 0, v152);
      v7 = v145;
LABEL_134:
      if ( v7 )
      {
        v57 = *(_DWORD *)(v5 + 16);
        if ( (v57 & 4) == 0 )
        {
          ObfDereferenceObject(*(PVOID *)(v5 + 80));
          v57 = *(_DWORD *)(v5 + 16);
        }
        if ( (*(_DWORD *)(v7 + 80) & 2) != 0 && (v57 & 0x1000) == 0 )
        {
          KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
          *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
        }
      }
LABEL_165:
      v70 = *(_DWORD *)(v5 + 16);
      if ( (v70 & 0x2000) != 0 )
        v71 = *(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
      else
        v71 = 0LL;
      if ( (v70 & 0x100) != 0 )
      {
        v93 = *(unsigned int *)(v150 + 56);
        if ( v71 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v71 + 1232), v93);
        }
        else
        {
          v94 = KeGetCurrentThread();
          v94->ReadTransferCount += v93;
        }
        __addgsqword(0x2EE8u, v93);
      }
      else if ( (v70 & 0x200) != 0 )
      {
        IopUpdateWriteTransferCount(*(unsigned int *)(v150 + 56), v71, v22);
      }
      else
      {
        v95 = *(_QWORD *)(v150 + 56);
        if ( v95 >= 0 )
        {
          if ( v71 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v71 + 1248), (unsigned int)v95);
          }
          else
          {
            v96 = KeGetCurrentThread();
            v96->OtherTransferCount += (unsigned int)v95;
          }
          __addgsqword(0x2EF8u, (unsigned int)v95);
        }
      }
      if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
      {
        v97 = (volatile signed __int32 *)(v7 + 184);
        v98 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v98 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v7 + 184);
        }
        else
        {
          v99 = KeGetCurrentPrcb();
          SchedulerAssist = v99->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v99->NestingLevel <= 1u )
            {
              v101 = SchedulerAssist[5];
              SchedulerAssist[5] = v101 + 1;
              if ( v101 == -1 )
                KiRemoveSystemWorkPriorityKick(v99);
            }
          }
          if ( _interlockedbittestandset64(v97, 0LL) )
          {
            KiSetVpThreadSpinLockCount((__int64)v99, 0);
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 184), v102, v103);
          }
        }
        v104 = (_QWORD *)(v5 + 32);
        v105 = *(_QWORD *)(v5 + 32);
        v106 = *(_QWORD **)(v5 + 40);
        if ( *(_QWORD *)(v105 + 8) != v5 + 32 || (_QWORD *)*v106 != v104 )
          goto LABEL_331;
        *v106 = v105;
        *(_QWORD *)(v105 + 8) = v106;
        *(_QWORD *)(v5 + 40) = v5 + 32;
        *v104 = v104;
        ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
        *(_DWORD *)(v5 + 16) = *(_DWORD *)(v5 + 16) & 0xFFFF5FFF | 0x8000;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v97, 0LL);
      }
      else
      {
        v107 = (__int64)v149;
        *(_QWORD *)(v5 + 152) = v149;
        v98 = 0;
        if ( v149 )
        {
          v108 = (volatile signed __int32 *)&v149[1].WaitBlockFill11[16];
          v98 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v98 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(&v149[1].WaitBlockFill11[16]);
          }
          else
          {
            v109 = KeGetCurrentPrcb();
            v110 = v109->SchedulerAssist;
            if ( v110 )
            {
              if ( v109->NestingLevel <= 1u )
              {
                v111 = v110[5];
                v110[5] = v111 + 1;
                if ( v111 == -1 )
                  KiRemoveSystemWorkPriorityKick(v109);
              }
            }
            if ( _interlockedbittestandset64(v108, 0LL) )
            {
              KiSetVpThreadSpinLockCount((__int64)v109, 0);
              KxWaitForSpinLockAndAcquire(v108, v112, v113);
            }
          }
          v107 = (__int64)v149;
        }
        v114 = (_QWORD *)(v5 + 32);
        v115 = *(_QWORD *)(v5 + 32);
        v116 = *(_QWORD **)(v5 + 40);
        if ( *(_QWORD *)(v115 + 8) != v5 + 32 || (_QWORD *)*v116 != v114 )
          goto LABEL_331;
        *v116 = v115;
        *(_QWORD *)(v115 + 8) = v116;
        *(_QWORD *)(v5 + 40) = v5 + 32;
        *v114 = v114;
        if ( !v107 )
        {
LABEL_276:
          v122 = *(_DWORD *)(v5 + 16) & 0x8000;
          if ( !v122 )
          {
            *(_QWORD *)(v5 + 88) &= ~1uLL;
            v123 = *(_QWORD *)(v5 + 88);
            if ( v123 )
            {
              if ( v159 )
                v124 = *(char *)(v5 + 70);
              else
                v124 = 2;
              KeInitializeApc(
                v5 + 120,
                v107,
                v124,
                (__int64)IopUserRundown,
                (__int64)IopUserRundown,
                v123,
                *(_BYTE *)(v5 + 64),
                *(_QWORD *)(v5 + 96));
              KeInsertQueueApc(v5 + 120, *(_QWORD *)(v5 + 72), 0LL, 2LL);
              goto LABEL_327;
            }
          }
          if ( Object
            && *(_QWORD *)(v5 + 96)
            && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
             || *(_BYTE *)(v5 + 65)
             || (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0x80000000) )
          {
            v125 = 0LL;
            v126 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
            if ( v126 == 8 || v126 == 20 )
              v125 = 1LL;
            *(_QWORD *)(v5 + 120) = v155;
            *(_DWORD *)(v5 + 184) = 0;
            KeInsertQueueEx(Object, v5 + 168, v125, 0LL);
            goto LABEL_327;
          }
          if ( v122 )
          {
            v127 = *(_QWORD *)(v5 + 88);
            do
            {
              v128 = v127;
              v129 = ((v127 >> 1) & 3) - 1;
              v130 = v127 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v129);
              v127 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 88), v130, v127);
            }
            while ( v128 != v127 );
            if ( (_DWORD)v129 )
              goto LABEL_327;
            v131 = v5;
            if ( !IopDispatchFreeIrp )
            {
              IopFreeIrp(v5, v130, v128);
              goto LABEL_327;
            }
          }
          else
          {
            if ( !IopDispatchFreeIrp )
            {
              if ( *(_WORD *)v5 != 6 )
                KeBugCheckEx(IopDispatchFreeIrp + 68, v5, 0x26D4uLL, 0LL, 0LL);
              *(_WORD *)v5 = 0;
              v132 = *(_BYTE *)(v5 + 71);
              if ( (v132 & 0x40) != 0 )
              {
                LOBYTE(v22) = 1;
                IopFreeIrpExtension(v5, 0xFFFFFFFFLL, v22);
                v132 = *(_BYTE *)(v5 + 71);
              }
              if ( (v132 & 0x21) == 0x21 )
              {
                IopFreeReserveIrp(v5);
              }
              else
              {
                v133 = *(unsigned __int16 *)(v5 + 4);
                if ( (unsigned int)v133 >= (unsigned int)KeNumberProcessors_0 )
                {
                  v134 = KeGetCurrentPrcb();
                }
                else
                {
                  _mm_lfence();
                  v134 = (struct _KPRCB *)KiProcessorBlock[v133];
                }
                v135 = *(_BYTE *)(v5 + 71);
                if ( (v135 & 8) != 0 )
                {
                  *(_BYTE *)(v5 + 71) = v135 ^ 8;
                  _InterlockedIncrement(&v134->LookasideIrpFloat);
                  v135 = *(_BYTE *)(v5 + 71);
                }
                if ( (v135 & 4) != 0 )
                {
                  if ( (IopIrpStackProfilerFlags & 3) == 0
                    || (v136 = *(_WORD *)(v5 + 2), v136 == 72 * (char)IopLargeIrpStackLocations + 208)
                    || v136 == 72 * (char)IopMediumIrpStackLocations + 208
                    || v136 == 280 )
                  {
                    v137 = *(_WORD *)(v5 + 2);
                    if ( v137 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
                    {
                      if ( v137 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
                      {
                        v138 = 2048LL;
                        v139 = 2056LL;
                      }
                      else
                      {
                        v138 = 2064LL;
                        v139 = 2072LL;
                      }
                    }
                    else
                    {
                      v138 = 2080LL;
                      v139 = 2088LL;
                    }
                    *(_QWORD *)(v150 + 56) = v137;
                    v140 = *(_QWORD *)((char *)&v134->MxCsr + v138);
                    ++*(_DWORD *)(v140 + 28);
                    if ( *(_WORD *)v140 < *(_WORD *)(v140 + 16)
                      || (++*(_DWORD *)(v140 + 32),
                          v140 = *(_QWORD *)((char *)&v134->MxCsr + v139),
                          ++*(_DWORD *)(v140 + 28),
                          *(_WORD *)v140 < *(_WORD *)(v140 + 16)) )
                    {
                      v141 = *(_BYTE *)(v5 + 71);
                      if ( (v141 & 1) != 0 )
                      {
                        *(_BYTE *)(v5 + 71) = v141 ^ 1;
                        ExReturnPoolQuota(v5);
                      }
                      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v140, (PSLIST_ENTRY)v5);
                      goto LABEL_327;
                    }
                    ++*(_DWORD *)(v140 + 32);
                  }
                }
                ExFreePoolWithTag((PVOID)v5, 0);
              }
LABEL_327:
              if ( Object )
                ObfDereferenceObject(Object);
              if ( v7 )
                ObDereferenceObjectDeferDelete((PVOID)v7);
              return;
            }
            v131 = v5;
          }
          IovFreeIrpPrivate(v131);
          goto LABEL_327;
        }
        v117 = (volatile signed __int64 *)(v107 + 1856);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v117, retaddr);
        else
          _InterlockedAnd64(v117, 0LL);
      }
      v118 = KeGetCurrentPrcb();
      v119 = v118->SchedulerAssist;
      if ( v119 )
      {
        if ( v118->NestingLevel <= 1u )
        {
          v120 = v119[5] - 1;
          v119[5] = v120;
          if ( !v120 )
            KiRemoveSystemWorkPriorityKick(v118);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v98 < 2u )
      {
        v121 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v121->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v121);
      }
      v107 = (__int64)v149;
      __writecr8(v98);
      goto LABEL_276;
    }
    if ( !v7 )
      goto LABEL_165;
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) == 0 )
    {
      v58 = v146;
      if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
      {
        v59 = 0;
      }
      else
      {
        if ( *(_DWORD *)(v146 + 156) == 1 )
          goto LABEL_164;
        v59 = 1;
      }
      v60 = KeGetCurrentIrql();
      v156 = v60;
      v61 = 2LL;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v60 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v62 = KeGetCurrentPrcb();
      v158 = v62;
      v154 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v154, v61, v22);
          while ( (*(_DWORD *)(v7 + 152) & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) );
        v62 = v158;
      }
      v63 = *(_DWORD *)(v146 + 156);
      *(_DWORD *)(v146 + 156) = 1;
      if ( !v63 )
      {
        v64 = (_QWORD *)(v146 + 160);
        v65 = *(_QWORD *)(v146 + 160);
        if ( !v59 )
        {
          if ( (_QWORD *)v65 == v64 )
            goto LABEL_163;
          while ( 1 )
          {
            v66 = v65;
            v67 = *(_QWORD **)v65;
            v143 = v67;
            v68 = *(_QWORD **)(v65 + 8);
            if ( v67[1] != v66 || *v68 != v66 )
              goto LABEL_331;
            *v68 = v67;
            v67[1] = v68;
            v69 = *(_BYTE *)(v66 + 16);
            if ( v69 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(v62, v66, *(unsigned __int16 *)(v66 + 18), 0LL) )
              {
                v35 = (*(_DWORD *)(v58 + 156))-- == 1;
                if ( v35 )
                  goto LABEL_162;
              }
            }
            else if ( v69 == 2 )
            {
              *(_BYTE *)(v66 + 17) = 5;
              v72 = *(_QWORD *)(v66 + 24);
              *(_QWORD *)v66 = 0LL;
              v73 = (_QWORD *)(v72 + 8);
              v74 = 0;
              v75 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v75 < 2u )
                _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
              v76 = KeGetCurrentPrcb();
              v77 = v76->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                v78 = KeIsThreadRunning(v76->CurrentThread);
                EtwTraceEnqueueWork(v77, v66, v78);
              }
              KiAcquireKobjectLockSafe(v72);
              if ( (_QWORD *)*v73 != v73
                && *(_DWORD *)(v72 + 40) < *(_DWORD *)(v72 + 44)
                && (v77->Queue != (_DISPATCHER_HEADER *volatile)v72 || v77->WaitReason != 15) )
              {
                v74 = KiWakeQueueWaiter((__int64)v76, v72, v66);
              }
              if ( !v74 )
              {
                v79 = *(_DWORD *)(v72 + 4);
                *(_DWORD *)(v72 + 4) = v79 + 1;
                v80 = *(__int64 **)(v72 + 32);
                if ( *v80 != v72 + 24 )
                  goto LABEL_331;
                *(_QWORD *)v66 = v72 + 24;
                *(_QWORD *)(v66 + 8) = v80;
                *v80 = v66;
                *(_QWORD *)(v72 + 32) = v66;
                if ( !v79 && (_QWORD *)*v73 != v73 )
                  KiWakeOtherQueueWaiters(v76, v72);
              }
              _InterlockedAnd((volatile signed __int32 *)v72, 0xFFFFFF7F);
              v58 = v146;
              v35 = (*(_DWORD *)(v146 + 156))-- == 1;
              if ( v35 )
              {
LABEL_162:
                v7 = v145;
                goto LABEL_163;
              }
              v64 = (_QWORD *)(v146 + 160);
            }
            else
            {
              KiTryUnwaitThread(v62, v66, 256LL, 0LL);
            }
            v65 = (__int64)v143;
            v62 = v158;
            if ( v143 == v64 )
              goto LABEL_162;
          }
        }
        if ( (_QWORD *)v65 != v64 )
        {
          while ( 1 )
          {
            v81 = (_QWORD *)v65;
            v144 = *(_QWORD **)v65;
            v82 = *(_BYTE *)(v65 + 16);
            if ( v82 == 1 )
            {
              v83 = *(unsigned __int16 *)(v65 + 18);
            }
            else
            {
              if ( v82 == 2 )
              {
                *(_BYTE *)(v65 + 17) = 5;
                v84 = *(_QWORD *)(v65 + 24);
                *(_QWORD *)v65 = 0LL;
                v85 = (_QWORD *)(v84 + 8);
                v86 = 0;
                v87 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v87 < 2u )
                  _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                v88 = KeGetCurrentPrcb();
                v89 = v88->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  v90 = KeIsThreadRunning(v88->CurrentThread);
                  EtwTraceEnqueueWork(v89, v81, v90);
                }
                KiAcquireKobjectLockSafe(v84);
                if ( (_QWORD *)*v85 != v85
                  && *(_DWORD *)(v84 + 40) < *(_DWORD *)(v84 + 44)
                  && (v89->Queue != (_DISPATCHER_HEADER *volatile)v84 || v89->WaitReason != 15) )
                {
                  v86 = KiWakeQueueWaiter((__int64)v88, v84, (__int64)v81);
                }
                if ( !v86 )
                {
                  v91 = *(_DWORD *)(v84 + 4);
                  *(_DWORD *)(v84 + 4) = v91 + 1;
                  v92 = *(_QWORD **)(v84 + 32);
                  if ( *v92 != v84 + 24 )
                    goto LABEL_331;
                  *v81 = v84 + 24;
                  v81[1] = v92;
                  *v92 = v81;
                  *(_QWORD *)(v84 + 32) = v81;
                  if ( !v91 && (_QWORD *)*v85 != v85 )
                    KiWakeOtherQueueWaiters(v88, v84);
                }
                _InterlockedAnd((volatile signed __int32 *)v84, 0xFFFFFF7F);
                v64 = (_QWORD *)(v146 + 160);
                goto LABEL_212;
              }
              v83 = 256LL;
            }
            KiTryUnwaitThread(v62, v65, v83, 0LL);
LABEL_212:
            v65 = (__int64)v144;
            v62 = v158;
            if ( v144 == v64 )
            {
              v7 = v145;
              break;
            }
          }
        }
        v64[1] = v64;
        *v64 = v64;
      }
LABEL_163:
      _InterlockedAnd((volatile signed __int32 *)(v7 + 152), 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v158, 0, 1, 0, v156);
    }
LABEL_164:
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    goto LABEL_165;
  }
  if ( v7 )
  {
    if ( (*v8 & 4) != 0 )
    {
      *(_OWORD *)*(_QWORD *)(v5 + 72) = *(_OWORD *)(v5 + 48);
      v18 = *(struct _KEVENT **)(v5 + 80);
      if ( v18 )
      {
LABEL_39:
        KeSetEvent(v18, 0, 0);
        goto LABEL_40;
      }
    }
    else
    {
      *(_DWORD *)(v7 + 56) = (_DWORD)v17;
    }
    v18 = (struct _KEVENT *)(v7 + 152);
    goto LABEL_39;
  }
LABEL_40:
  if ( (*v8 & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(v5, v7);
  if ( v7 )
    ObDereferenceObjectDeferDelete((PVOID)v7);
  v19 = *(void **)(v5 + 80);
  if ( v19 && v7 && (*v8 & 4) == 0 )
    ObfDereferenceObject(v19);
  if ( (*v8 & 0x8000) != 0 )
  {
    if ( (unsigned int)IopInterlockedAdd(v5 + 88, 0xFFFFFFFFLL) )
      return;
  }
  else
  {
    *(_QWORD *)(v5 + 152) = CurrentThread;
    IopDequeueIrpFromThread((_QWORD *)v5, v17, (__int64)a3);
  }
  IoFreeIrp((PIRP)v5);
}
