/*
 * XREFs of IopCompleteRequest @ 0x140065750
 * Callers:
 *     IoRemoveIoCompletion @ 0x1400448E0 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405F0890 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x140852CE0 (IopAbortRequest.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008A00 (KxWaitForSpinLockAndAcquire.c)
 *     IopDequeueIrpFromThread @ 0x14000A9D0 (IopDequeueIrpFromThread.c)
 *     KeInsertQueueEx @ 0x14000D0C0 (KeInsertQueueEx.c)
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BAA0 (KiSetVpThreadSpinLockCount.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140043F70 (IopFreeIrp.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     KeInitializeApc @ 0x140082030 (KeInitializeApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KeInsertQueueApc @ 0x1400E5200 (KeInsertQueueApc.c)
 *     IopDequeueIrpFromFileObject @ 0x1400FEE94 (IopDequeueIrpFromFileObject.c)
 *     IopFreeIrpExtension @ 0x14011A3FC (IopFreeIrpExtension.c)
 *     ExReturnPoolQuota @ 0x14011CFDC (ExReturnPoolQuota.c)
 *     IopInterlockedAdd @ 0x140131834 (IopInterlockedAdd.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401BEAB8 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401BEB30 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     IopExceptionFilter @ 0x1402934E8 (IopExceptionFilter.c)
 *     IopFreeReserveIrp @ 0x1402935AC (IopFreeReserveIrp.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A75D8 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A76E8 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140963370 (IovFreeIrpPrivate.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rdi
  struct _KTHREAD *CurrentThread; // r12
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
  __int64 v22; // r14
  int v23; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v25; // r10
  int v26; // eax
  _QWORD *v27; // rsi
  __int64 v28; // rbx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  char v31; // al
  bool v32; // zf
  __int64 v33; // rsi
  _QWORD *v34; // r12
  unsigned __int8 v35; // cl
  struct _KPRCB *v36; // r13
  _KTHREAD *v37; // r15
  unsigned __int8 IsThreadRunning; // al
  char v39; // al
  int v40; // r8d
  __int64 *v41; // rdx
  _QWORD *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbx
  char v45; // al
  __int64 v46; // r8
  __int64 v47; // rsi
  _QWORD *v48; // r12
  unsigned __int8 v49; // cl
  struct _KPRCB *v50; // r13
  _KTHREAD *v51; // r15
  unsigned __int8 v52; // al
  char v53; // al
  int v54; // r8d
  __int64 *v55; // rdx
  int v56; // ecx
  ULONG_PTR v57; // rsi
  int v58; // ebx
  unsigned __int8 v59; // cl
  struct _KPRCB *v60; // r10
  int v61; // eax
  _QWORD *v62; // r14
  __int64 v63; // rbx
  _QWORD *v64; // rax
  _QWORD *v65; // rcx
  char v66; // al
  int v67; // eax
  volatile signed __int64 *v68; // rcx
  __int64 v69; // rsi
  _QWORD *v70; // r15
  char v71; // r12
  unsigned __int8 v72; // cl
  struct _KPRCB *v73; // r13
  _KTHREAD *v74; // r14
  unsigned __int8 v75; // al
  int v76; // r8d
  __int64 *v77; // rdx
  _QWORD *v78; // rcx
  _QWORD *v79; // r12
  __int64 v80; // rbx
  char v81; // al
  __int64 v82; // r8
  __int64 v83; // rsi
  _QWORD *v84; // r15
  unsigned __int8 v85; // cl
  struct _KPRCB *v86; // r13
  _KTHREAD *v87; // r14
  unsigned __int8 v88; // al
  char v89; // al
  int v90; // r8d
  __int64 *v91; // rdx
  unsigned __int64 v92; // rdx
  struct _KTHREAD *v93; // rax
  unsigned __int64 v94; // rdx
  struct _KTHREAD *v95; // rax
  __int64 v96; // rdx
  struct _KTHREAD *v97; // rax
  volatile signed __int32 *v98; // rbx
  unsigned __int8 v99; // r14
  struct _KPRCB *v100; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v102; // eax
  __int64 v103; // rdx
  _QWORD *v104; // rax
  __int64 v105; // rdx
  _QWORD *v106; // rcx
  struct _KTHREAD *v107; // r10
  volatile signed __int32 *v108; // rsi
  struct _KPRCB *v109; // rbx
  _DWORD *v110; // rcx
  int v111; // eax
  __int64 v112; // rdx
  _QWORD *v113; // rax
  __int64 v114; // rdx
  _QWORD *v115; // rcx
  volatile signed __int64 *v116; // rcx
  struct _KPRCB *v117; // rcx
  _DWORD *v118; // rdx
  int v119; // eax
  struct _KPRCB *v120; // rcx
  int v121; // ecx
  __int64 v122; // rdx
  int v123; // r8d
  int v124; // r8d
  int v125; // ecx
  unsigned __int64 v126; // rax
  __int64 v127; // r8
  __int64 v128; // r9
  unsigned __int64 v129; // rdx
  ULONG_PTR v130; // rcx
  char v131; // al
  __int64 v132; // rcx
  struct _KPRCB *v133; // rdx
  char v134; // al
  __int16 v135; // r9
  unsigned __int16 v136; // r9
  __int64 v137; // rbx
  __int64 v138; // rcx
  __int64 v139; // rbx
  char v140; // al
  ULONG_PTR v141; // [rsp+40h] [rbp-98h]
  struct _KPRCB *v142; // [rsp+40h] [rbp-98h]
  char v143; // [rsp+48h] [rbp-90h]
  struct _KPRCB *v144; // [rsp+48h] [rbp-90h]
  _QWORD *v145; // [rsp+50h] [rbp-88h]
  __int64 v146; // [rsp+50h] [rbp-88h]
  char v147; // [rsp+50h] [rbp-88h]
  ULONG_PTR v148; // [rsp+60h] [rbp-78h]
  struct _KTHREAD *v149; // [rsp+68h] [rbp-70h]
  PVOID Object; // [rsp+70h] [rbp-68h]
  int v151; // [rsp+78h] [rbp-60h] BYREF
  int v152; // [rsp+7Ch] [rbp-5Ch] BYREF
  __int64 v153; // [rsp+80h] [rbp-58h]
  void *retaddr; // [rsp+D8h] [rbp+0h]
  _QWORD *v155; // [rsp+E0h] [rbp+8h]
  char v156; // [rsp+F0h] [rbp+18h]

  v5 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v149 = CurrentThread;
  v7 = *a4;
  v148 = *a4;
  v141 = *a4;
  if ( !a3 || (v156 = 1, *a3 != 1LL) )
    v156 = 0;
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
    v153 = 0LL;
    if ( v7 )
    {
      v20 = *(_QWORD *)(v7 + 176);
      if ( v20 )
      {
        if ( (*v8 & 0x2000) != 0 )
        {
          Object = *(PVOID *)v20;
          v153 = *(_QWORD *)(v20 + 8);
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
    if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
      *(_DWORD *)(v21 + 4) = *(_DWORD *)(v5 + 56);
    else
      *(_QWORD *)(v21 + 8) = *(_QWORD *)(v5 + 56);
    *(_DWORD *)v21 = *(_DWORD *)(v5 + 48);
    v22 = *(_QWORD *)(v5 + 80);
    if ( v22 )
    {
      if ( (*(_BYTE *)v22 & 0x7F) != 0 )
      {
        v23 = 0;
      }
      else
      {
        if ( *(_DWORD *)(v22 + 4) == 1 )
          goto LABEL_138;
        v23 = 1;
      }
      CurrentIrql = KeGetCurrentIrql();
      v143 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v25 = KeGetCurrentPrcb();
      v142 = v25;
      v151 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v22, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v151);
          while ( (*(_DWORD *)v22 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v22, 7u) );
        v25 = v142;
      }
      v26 = *(_DWORD *)(v22 + 4);
      *(_DWORD *)(v22 + 4) = 1;
      if ( !v26 )
      {
        if ( !v23 )
        {
          v27 = *(_QWORD **)(v22 + 8);
          if ( v27 != (_QWORD *)(v22 + 8) )
          {
            while ( 1 )
            {
              v28 = (__int64)v27;
              v29 = (_QWORD *)*v27;
              v27 = v29;
              v145 = v29;
              v30 = *(_QWORD **)(v28 + 8);
              if ( v29[1] != v28 || *v30 != v28 )
                __fastfail(3u);
              *v30 = v29;
              v29[1] = v30;
              v31 = *(_BYTE *)(v28 + 16);
              if ( v31 == 1 )
              {
                if ( (unsigned __int8)KiTryUnwaitThread(v25, v28, *(unsigned __int16 *)(v28 + 18), 0LL) )
                {
                  v32 = (*(_DWORD *)(v22 + 4))-- == 1;
                  if ( v32 )
                    goto LABEL_137;
                }
              }
              else if ( v31 == 2 )
              {
                *(_BYTE *)(v28 + 17) = 5;
                v33 = *(_QWORD *)(v28 + 24);
                *(_QWORD *)v28 = 0LL;
                v34 = (_QWORD *)(v33 + 8);
                v35 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v35 < 2u )
                  _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                v36 = KeGetCurrentPrcb();
                v37 = v36->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(v36->CurrentThread);
                  EtwTraceEnqueueWork(v37, v28, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe(v33);
                if ( (_QWORD *)*v34 == v34
                  || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44)
                  || v37->Queue == (_DISPATCHER_HEADER *volatile)v33 && v37->WaitReason == 15 )
                {
                  v39 = 0;
                }
                else
                {
                  v39 = KiWakeQueueWaiter((__int64)v36, (_QWORD *)v33, v28);
                }
                if ( !v39 )
                {
                  v40 = *(_DWORD *)(v33 + 4);
                  *(_DWORD *)(v33 + 4) = v40 + 1;
                  v41 = *(__int64 **)(v33 + 32);
                  if ( *v41 != v33 + 24 )
                    __fastfail(3u);
                  *(_QWORD *)v28 = v33 + 24;
                  *(_QWORD *)(v28 + 8) = v41;
                  *v41 = v28;
                  *(_QWORD *)(v33 + 32) = v28;
                  if ( !v40 && (_QWORD *)*v34 != v34 )
                    KiWakeOtherQueueWaiters((__int64)v36, v33);
                }
                _InterlockedAnd((volatile signed __int32 *)v33, 0xFFFFFF7F);
                v32 = (*(_DWORD *)(v22 + 4))-- == 1;
                if ( v32 )
                  goto LABEL_137;
                v27 = v145;
              }
              else
              {
                KiTryUnwaitThread(v25, v28, 256LL, 0LL);
              }
              if ( v27 == (_QWORD *)(v22 + 8) )
                goto LABEL_137;
              v25 = v142;
            }
          }
          goto LABEL_137;
        }
        v42 = (_QWORD *)(v22 + 8);
        v43 = *(_QWORD *)(v22 + 8);
        if ( v43 != v22 + 8 )
        {
          while ( 1 )
          {
            v44 = v43;
            v146 = *(_QWORD *)v43;
            v45 = *(_BYTE *)(v43 + 16);
            if ( v45 == 1 )
              break;
            if ( v45 != 2 )
            {
              v46 = 256LL;
              goto LABEL_132;
            }
            *(_BYTE *)(v44 + 17) = 5;
            v47 = *(_QWORD *)(v44 + 24);
            *(_QWORD *)v44 = 0LL;
            v48 = (_QWORD *)(v47 + 8);
            v49 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v50 = KeGetCurrentPrcb();
            v51 = v50->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v52 = KeIsThreadRunning(v50->CurrentThread);
              EtwTraceEnqueueWork(v51, v44, v52);
            }
            KiAcquireKobjectLockSafe(v47);
            if ( (_QWORD *)*v48 == v48
              || *(_DWORD *)(v47 + 40) >= *(_DWORD *)(v47 + 44)
              || v51->Queue == (_DISPATCHER_HEADER *volatile)v47 && v51->WaitReason == 15 )
            {
              v53 = 0;
            }
            else
            {
              v53 = KiWakeQueueWaiter((__int64)v50, (_QWORD *)v47, v44);
            }
            if ( !v53 )
            {
              v54 = *(_DWORD *)(v47 + 4);
              *(_DWORD *)(v47 + 4) = v54 + 1;
              v55 = *(__int64 **)(v47 + 32);
              if ( *v55 != v47 + 24 )
                __fastfail(3u);
              *(_QWORD *)v44 = v47 + 24;
              *(_QWORD *)(v44 + 8) = v55;
              *v55 = v44;
              *(_QWORD *)(v47 + 32) = v44;
              if ( !v54 && (_QWORD *)*v48 != v48 )
                KiWakeOtherQueueWaiters((__int64)v50, v47);
            }
            _InterlockedAnd((volatile signed __int32 *)v47, 0xFFFFFF7F);
LABEL_133:
            v43 = v146;
            v42 = (_QWORD *)(v22 + 8);
            if ( v146 == v22 + 8 )
              goto LABEL_136;
            v25 = v142;
          }
          v46 = *(unsigned __int16 *)(v44 + 18);
LABEL_132:
          KiTryUnwaitThread(v25, v44, v46, 0LL);
          goto LABEL_133;
        }
LABEL_136:
        v42[1] = v42;
        *v42 = v42;
      }
LABEL_137:
      _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v142, 0, 1, 0, v143);
      v7 = v148;
LABEL_138:
      if ( v7 )
      {
        v56 = *(_DWORD *)(v5 + 16);
        if ( (v56 & 4) == 0 )
        {
          ObfDereferenceObject(*(PVOID *)(v5 + 80));
          v56 = *(_DWORD *)(v5 + 16);
        }
        if ( (*(_DWORD *)(v7 + 80) & 2) != 0 && (v56 & 0x1000) == 0 )
        {
          KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
          *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
        }
      }
LABEL_169:
      v67 = *(_DWORD *)(v5 + 16);
      if ( (v67 & 0x2000) != 0 )
        v68 = (volatile signed __int64 *)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL);
      else
        v68 = 0LL;
      if ( (v67 & 0x100) != 0 )
      {
        v92 = *(unsigned int *)(v5 + 56);
        if ( v68 )
        {
          _InterlockedExchangeAdd64(v68 + 154, v92);
        }
        else
        {
          v93 = KeGetCurrentThread();
          v93->ReadTransferCount += v92;
        }
        __addgsqword(0x2EE8u, v92);
      }
      else if ( (v67 & 0x200) != 0 )
      {
        v94 = *(unsigned int *)(v5 + 56);
        if ( v68 )
        {
          _InterlockedExchangeAdd64(v68 + 155, v94);
        }
        else
        {
          v95 = KeGetCurrentThread();
          v95->WriteTransferCount += v94;
        }
        __addgsqword(0x2EF0u, v94);
      }
      else
      {
        v96 = *(_QWORD *)(v5 + 56);
        if ( v96 >= 0 )
        {
          if ( v68 )
          {
            _InterlockedExchangeAdd64(v68 + 156, (unsigned int)v96);
          }
          else
          {
            v97 = KeGetCurrentThread();
            v97->OtherTransferCount += (unsigned int)v96;
          }
          __addgsqword(0x2EF8u, (unsigned int)v96);
        }
      }
      if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
      {
        v98 = (volatile signed __int32 *)(v7 + 184);
        v99 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v99 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v7 + 184);
        }
        else
        {
          v100 = KeGetCurrentPrcb();
          SchedulerAssist = v100->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v100->NestingLevel <= 1u )
            {
              v102 = SchedulerAssist[5];
              SchedulerAssist[5] = v102 + 1;
              if ( v102 == -1 )
                KiRemoveSystemWorkPriorityKick(v100);
            }
          }
          if ( _interlockedbittestandset64(v98, 0LL) )
          {
            KiSetVpThreadSpinLockCount((__int64)v100, 0);
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 184), v103);
          }
        }
        v104 = (_QWORD *)(v5 + 32);
        v105 = *(_QWORD *)(v5 + 32);
        v106 = *(_QWORD **)(v5 + 40);
        if ( *(_QWORD *)(v105 + 8) != v5 + 32 || (_QWORD *)*v106 != v104 )
          __fastfail(3u);
        *v106 = v105;
        *(_QWORD *)(v105 + 8) = v106;
        *(_QWORD *)(v5 + 40) = v5 + 32;
        *v104 = v104;
        ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
        *(_DWORD *)(v5 + 16) = *(_DWORD *)(v5 + 16) & 0xFFFF5FFF | 0x8000;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v98, 0LL);
      }
      else
      {
        v107 = v149;
        *(_QWORD *)(v5 + 152) = v149;
        v99 = 0;
        if ( v149 )
        {
          v108 = (volatile signed __int32 *)&v149[1].WaitBlockFill11[16];
          v99 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v99 < 2u )
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
              KxWaitForSpinLockAndAcquire(v108, v112);
            }
          }
          v107 = v149;
        }
        v113 = (_QWORD *)(v5 + 32);
        v114 = *(_QWORD *)(v5 + 32);
        v115 = *(_QWORD **)(v5 + 40);
        if ( *(_QWORD *)(v114 + 8) != v5 + 32 || (_QWORD *)*v115 != v113 )
          __fastfail(3u);
        *v115 = v114;
        *(_QWORD *)(v114 + 8) = v115;
        *(_QWORD *)(v5 + 40) = v5 + 32;
        *v113 = v113;
        if ( !v107 )
        {
LABEL_289:
          v121 = *(_DWORD *)(v5 + 16) & 0x8000;
          if ( !v121 )
          {
            *(_QWORD *)(v5 + 88) &= ~1uLL;
            v122 = *(_QWORD *)(v5 + 88);
            if ( v122 )
            {
              if ( v156 )
                v123 = *(char *)(v5 + 70);
              else
                v123 = 2;
              KeInitializeApc(
                v5 + 120,
                (_DWORD)v107,
                v123,
                (unsigned int)IopUserRundown,
                (__int64)IopUserRundown,
                v122,
                *(_BYTE *)(v5 + 64),
                *(_QWORD *)(v5 + 96));
              KeInsertQueueApc(v5 + 120, *(_QWORD *)(v5 + 72), 0LL, 2LL);
              goto LABEL_340;
            }
          }
          if ( Object
            && *(_QWORD *)(v5 + 96)
            && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
             || *(_BYTE *)(v5 + 65)
             || (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0x80000000) )
          {
            v124 = 0;
            v125 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
            if ( v125 == 8 || v125 == 20 )
              v124 = 1;
            *(_QWORD *)(v5 + 120) = v153;
            *(_DWORD *)(v5 + 184) = 0;
            KeInsertQueueEx((__int64)Object, (_QWORD *)(v5 + 168), v124, 0);
            goto LABEL_340;
          }
          if ( v121 )
          {
            v126 = *(_QWORD *)(v5 + 88);
            do
            {
              v127 = v126;
              v128 = ((v126 >> 1) & 3) - 1;
              v129 = v126 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v128);
              v126 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 88), v129, v126);
            }
            while ( v127 != v126 );
            if ( (_DWORD)v128 )
              goto LABEL_340;
            v130 = v5;
            if ( !IopDispatchFreeIrp )
            {
              IopFreeIrp(v5, v129, v127);
LABEL_340:
              if ( Object )
                ObfDereferenceObject(Object);
              if ( v7 )
                ObDereferenceObjectDeferDelete((PVOID)v7);
              return;
            }
          }
          else
          {
            if ( !IopDispatchFreeIrp )
            {
              if ( *(_WORD *)v5 != 6 )
                KeBugCheckEx(IopDispatchFreeIrp + 68, v5, 0x257CuLL, 0LL, 0LL);
              *(_WORD *)v5 = 0;
              v131 = *(_BYTE *)(v5 + 71);
              if ( (v131 & 0x40) != 0 )
              {
                LOBYTE(a3) = 1;
                IopFreeIrpExtension(v5, 0xFFFFFFFFLL, a3);
                v131 = *(_BYTE *)(v5 + 71);
              }
              if ( (v131 & 0x21) == 0x21 )
              {
                IopFreeReserveIrp(v5);
              }
              else
              {
                v132 = *(unsigned __int16 *)(v5 + 4);
                if ( (unsigned int)v132 >= (unsigned int)KeNumberProcessors_0 )
                {
                  v133 = KeGetCurrentPrcb();
                }
                else
                {
                  _mm_lfence();
                  v133 = (struct _KPRCB *)KiProcessorBlock[v132];
                }
                v134 = *(_BYTE *)(v5 + 71);
                if ( (v134 & 8) != 0 )
                {
                  *(_BYTE *)(v5 + 71) = v134 ^ 8;
                  _InterlockedIncrement(&v133->LookasideIrpFloat);
                  v134 = *(_BYTE *)(v5 + 71);
                }
                if ( (v134 & 4) != 0
                  && ((IopIrpStackProfilerFlags & 3) == 0
                   || (v135 = *(_WORD *)(v5 + 2), v135 == 72 * (char)IopLargeIrpStackLocations + 208)
                   || v135 == 72 * (char)IopMediumIrpStackLocations + 208
                   || v135 == 280) )
                {
                  v136 = *(_WORD *)(v5 + 2);
                  if ( v136 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
                  {
                    if ( v136 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
                    {
                      v137 = 2048LL;
                      v138 = 2056LL;
                    }
                    else
                    {
                      v137 = 2064LL;
                      v138 = 2072LL;
                    }
                  }
                  else
                  {
                    v137 = 2080LL;
                    v138 = 2088LL;
                  }
                  *(_QWORD *)(v5 + 56) = v136;
                  v139 = *(_QWORD *)((char *)&v133->MxCsr + v137);
                  ++*(_DWORD *)(v139 + 28);
                  if ( *(_WORD *)v139 < *(_WORD *)(v139 + 16)
                    || (++*(_DWORD *)(v139 + 32),
                        v139 = *(_QWORD *)((char *)&v133->MxCsr + v138),
                        ++*(_DWORD *)(v139 + 28),
                        *(_WORD *)v139 < *(_WORD *)(v139 + 16)) )
                  {
                    v140 = *(_BYTE *)(v5 + 71);
                    if ( (v140 & 1) != 0 )
                    {
                      *(_BYTE *)(v5 + 71) = v140 ^ 1;
                      ExReturnPoolQuota(v5);
                    }
                    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v139, (PSLIST_ENTRY)v5);
                  }
                  else
                  {
                    ++*(_DWORD *)(v139 + 32);
                    ExFreePoolWithTag((PVOID)v5, 0);
                  }
                }
                else
                {
                  ExFreePoolWithTag((PVOID)v5, 0);
                }
              }
              goto LABEL_340;
            }
            v130 = v5;
          }
          IovFreeIrpPrivate(v130);
          goto LABEL_340;
        }
        v116 = (volatile signed __int64 *)&v107[1].WaitBlockFill11[16];
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v116, retaddr);
        else
          _InterlockedAnd64(v116, 0LL);
      }
      v117 = KeGetCurrentPrcb();
      v118 = v117->SchedulerAssist;
      if ( v118 )
      {
        if ( v117->NestingLevel <= 1u )
        {
          v119 = v118[5] - 1;
          v118[5] = v119;
          if ( !v119 )
            KiRemoveSystemWorkPriorityKick(v117);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v99 < 2u )
      {
        v120 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v120->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v120);
      }
      LODWORD(v107) = (_DWORD)v149;
      __writecr8(v99);
      goto LABEL_289;
    }
    if ( !v7 )
      goto LABEL_169;
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) == 0 )
    {
      v57 = v141;
      if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
      {
        v58 = 0;
      }
      else
      {
        if ( *(_DWORD *)(v141 + 156) == 1 )
          goto LABEL_168;
        v58 = 1;
      }
      v59 = KeGetCurrentIrql();
      v147 = v59;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v59 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v60 = KeGetCurrentPrcb();
      v144 = v60;
      v152 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v152);
          while ( (*(_DWORD *)(v7 + 152) & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) );
        v60 = v144;
      }
      v61 = *(_DWORD *)(v141 + 156);
      *(_DWORD *)(v141 + 156) = 1;
      if ( !v61 )
      {
        if ( !v58 )
        {
          v62 = *(_QWORD **)(v141 + 160);
          if ( v62 == (_QWORD *)(v141 + 160) )
            goto LABEL_167;
          while ( 1 )
          {
            v63 = (__int64)v62;
            v64 = (_QWORD *)*v62;
            v62 = v64;
            v155 = v64;
            v65 = *(_QWORD **)(v63 + 8);
            if ( v64[1] != v63 || *v65 != v63 )
              __fastfail(3u);
            *v65 = v64;
            v64[1] = v65;
            v66 = *(_BYTE *)(v63 + 16);
            if ( v66 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(v60, v63, *(unsigned __int16 *)(v63 + 18), 0LL) )
              {
                v32 = (*(_DWORD *)(v57 + 156))-- == 1;
                if ( v32 )
                  goto LABEL_166;
              }
            }
            else if ( v66 == 2 )
            {
              *(_BYTE *)(v63 + 17) = 5;
              v69 = *(_QWORD *)(v63 + 24);
              *(_QWORD *)v63 = 0LL;
              v70 = (_QWORD *)(v69 + 8);
              v71 = 0;
              v72 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v72 < 2u )
                _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
              v73 = KeGetCurrentPrcb();
              v74 = v73->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                v75 = KeIsThreadRunning(v73->CurrentThread);
                EtwTraceEnqueueWork(v74, v63, v75);
              }
              KiAcquireKobjectLockSafe(v69);
              if ( (_QWORD *)*v70 != v70
                && *(_DWORD *)(v69 + 40) < *(_DWORD *)(v69 + 44)
                && (v74->Queue != (_DISPATCHER_HEADER *volatile)v69 || v74->WaitReason != 15) )
              {
                v71 = KiWakeQueueWaiter((__int64)v73, (_QWORD *)v69, v63);
              }
              if ( !v71 )
              {
                v76 = *(_DWORD *)(v69 + 4);
                *(_DWORD *)(v69 + 4) = v76 + 1;
                v77 = *(__int64 **)(v69 + 32);
                if ( *v77 != v69 + 24 )
                  __fastfail(3u);
                *(_QWORD *)v63 = v69 + 24;
                *(_QWORD *)(v63 + 8) = v77;
                *v77 = v63;
                *(_QWORD *)(v69 + 32) = v63;
                if ( !v76 && (_QWORD *)*v70 != v70 )
                  KiWakeOtherQueueWaiters((__int64)v73, v69);
              }
              _InterlockedAnd((volatile signed __int32 *)v69, 0xFFFFFF7F);
              v57 = v141;
              v32 = (*(_DWORD *)(v141 + 156))-- == 1;
              if ( v32 )
              {
LABEL_166:
                v7 = v148;
                goto LABEL_167;
              }
              v62 = v155;
            }
            else
            {
              KiTryUnwaitThread(v60, v63, 256LL, 0LL);
            }
            if ( v62 == (_QWORD *)(v57 + 160) )
              goto LABEL_166;
            v60 = v144;
          }
        }
        v78 = (_QWORD *)(v141 + 160);
        v79 = *(_QWORD **)(v141 + 160);
        if ( v79 != (_QWORD *)(v141 + 160) )
        {
          while ( 1 )
          {
            v80 = (__int64)v79;
            v79 = (_QWORD *)*v79;
            v81 = *(_BYTE *)(v80 + 16);
            if ( v81 == 1 )
              break;
            if ( v81 != 2 )
            {
              v82 = 256LL;
              goto LABEL_218;
            }
            *(_BYTE *)(v80 + 17) = 5;
            v83 = *(_QWORD *)(v80 + 24);
            *(_QWORD *)v80 = 0LL;
            v84 = (_QWORD *)(v83 + 8);
            v85 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v85 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v86 = KeGetCurrentPrcb();
            v87 = v86->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v88 = KeIsThreadRunning(v86->CurrentThread);
              EtwTraceEnqueueWork(v87, v80, v88);
            }
            KiAcquireKobjectLockSafe(v83);
            if ( (_QWORD *)*v84 == v84
              || *(_DWORD *)(v83 + 40) >= *(_DWORD *)(v83 + 44)
              || v87->Queue == (_DISPATCHER_HEADER *volatile)v83 && v87->WaitReason == 15 )
            {
              v89 = 0;
            }
            else
            {
              v89 = KiWakeQueueWaiter((__int64)v86, (_QWORD *)v83, v80);
            }
            if ( !v89 )
            {
              v90 = *(_DWORD *)(v83 + 4);
              *(_DWORD *)(v83 + 4) = v90 + 1;
              v91 = *(__int64 **)(v83 + 32);
              if ( *v91 != v83 + 24 )
                __fastfail(3u);
              *(_QWORD *)v80 = v83 + 24;
              *(_QWORD *)(v80 + 8) = v91;
              *v91 = v80;
              *(_QWORD *)(v83 + 32) = v80;
              if ( !v90 && (_QWORD *)*v84 != v84 )
                KiWakeOtherQueueWaiters((__int64)v86, v83);
            }
            _InterlockedAnd((volatile signed __int32 *)v83, 0xFFFFFF7F);
            v57 = v141;
LABEL_219:
            v78 = (_QWORD *)(v57 + 160);
            if ( v79 == (_QWORD *)(v57 + 160) )
            {
              v7 = v148;
              goto LABEL_223;
            }
            v60 = v144;
          }
          v82 = *(unsigned __int16 *)(v80 + 18);
LABEL_218:
          KiTryUnwaitThread(v60, v80, v82, 0LL);
          goto LABEL_219;
        }
LABEL_223:
        v78[1] = v78;
        *v78 = v78;
      }
LABEL_167:
      _InterlockedAnd((volatile signed __int32 *)(v7 + 152), 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v144, 0, 1, 0, v147);
    }
LABEL_168:
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    goto LABEL_169;
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
    IopDequeueIrpFromThread((_QWORD *)v5, v17);
  }
  IoFreeIrp((PIRP)v5);
}
