/*
 * XREFs of IopCompleteRequest @ 0x1400656B0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140044840 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x1408535E0 (IopAbortRequest.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008970 (KxWaitForSpinLockAndAcquire.c)
 *     IopDequeueIrpFromThread @ 0x14000A940 (IopDequeueIrpFromThread.c)
 *     KeInsertQueueEx @ 0x14000CE90 (KeInsertQueueEx.c)
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BD60 (KiSetVpThreadSpinLockCount.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140043EA0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140043ED0 (IopFreeIrp.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A0B0 (KiTryUnwaitThread.c)
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     KeInitializeApc @ 0x140081C30 (KeInitializeApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KeInsertQueueApc @ 0x1400AECB0 (KeInsertQueueApc.c)
 *     IopDequeueIrpFromFileObject @ 0x1400FCD04 (IopDequeueIrpFromFileObject.c)
 *     IopFreeIrpExtension @ 0x14011BE78 (IopFreeIrpExtension.c)
 *     ExReturnPoolQuota @ 0x14011CABC (ExReturnPoolQuota.c)
 *     IopInterlockedAdd @ 0x140130CA4 (IopInterlockedAdd.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     IopExceptionFilter @ 0x140293788 (IopExceptionFilter.c)
 *     IopFreeReserveIrp @ 0x14029384C (IopFreeReserveIrp.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A7878 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A7988 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140963370 (IovFreeIrpPrivate.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, _QWORD *a5)
{
  ULONG_PTR v5; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v7; // rsi
  __int64 v8; // r13
  _DWORD *v9; // rdi
  int v10; // eax
  __int64 *v11; // r14
  __int64 v12; // r14
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // edi
  int v17; // eax
  _QWORD *v18; // r13
  _QWORD *v19; // rdi
  int v20; // eax
  volatile signed __int64 *v21; // r8
  __int64 v22; // rcx
  struct _KTHREAD *v23; // rax
  unsigned __int8 v24; // r12
  int v25; // r13d
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  volatile signed __int64 *v31; // rcx
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  int v34; // ecx
  __int64 v35; // rdx
  char v36; // al
  __int64 v37; // rcx
  struct _KPRCB *v38; // r11
  char v39; // al
  __int16 v40; // r8
  unsigned __int16 v41; // r8
  __int64 v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rdi
  char v45; // al
  __int64 *v46; // r12
  __int16 v47; // ax
  __int64 v48; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  int v51; // r8d
  int v52; // ecx
  volatile signed __int32 *v53; // rdi
  struct _KPRCB *v54; // r13
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rcx
  struct _KPRCB *v59; // rcx
  _DWORD *v60; // rdx
  unsigned __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rdx
  ULONG_PTR v65; // rcx
  int v66; // r13d
  int v67; // eax
  bool v68; // zf
  _QWORD *v69; // r13
  _QWORD *v70; // rax
  int v71; // eax
  int v72; // eax
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  struct _KTHREAD *v75; // rax
  volatile signed __int32 *v76; // rdx
  void *v77; // rcx
  struct _KTHREAD *v78; // rax
  struct _KEVENT *v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rdx
  int v82; // r8d
  char v83; // cl
  unsigned __int8 v84; // cl
  _QWORD *v85; // r10
  __int64 v86; // rcx
  char v87; // al
  int v88; // r9d
  _QWORD *v89; // r8
  _QWORD *v90; // rdx
  char v91; // al
  unsigned __int8 v92; // cl
  _QWORD *v93; // r10
  __int64 v94; // rcx
  char v95; // al
  _QWORD *v96; // rdx
  _QWORD *v97; // rcx
  _QWORD *v98; // rax
  unsigned __int8 v99; // al
  __int64 v100; // rdx
  __int64 v101; // r9
  char v102; // al
  unsigned __int8 v103; // cl
  _QWORD *v104; // r10
  __int64 v105; // rcx
  char v106; // al
  int v107; // r9d
  _QWORD *v108; // r8
  int v109; // r9d
  __int64 *v110; // r8
  unsigned __int8 v111; // al
  __int64 v112; // rdx
  __int64 v113; // r9
  unsigned __int8 v114; // al
  __int64 v115; // rdx
  __int64 v116; // r9
  __int64 v117; // r8
  _QWORD *v118; // rax
  _QWORD *v119; // rdx
  __int64 v120; // rax
  _QWORD *v121; // rcx
  char v122; // al
  unsigned __int8 v123; // cl
  unsigned __int8 IsThreadRunning; // al
  __int64 v125; // rdx
  __int64 v126; // r9
  _QWORD *v127; // r10
  __int64 v128; // rcx
  char v129; // al
  int v130; // r9d
  _QWORD *v131; // r8
  __int64 v132; // r8
  int v133; // eax
  int v134; // eax
  struct _KPRCB *v135; // rcx
  int v136; // eax
  int v137; // eax
  struct _KPRCB *v138; // rcx
  __int64 v139; // [rsp+40h] [rbp-A8h]
  struct _KPRCB *v140; // [rsp+40h] [rbp-A8h]
  __int64 v141; // [rsp+40h] [rbp-A8h]
  __int64 v142; // [rsp+40h] [rbp-A8h]
  struct _KPRCB *v143; // [rsp+48h] [rbp-A0h]
  __int64 v144; // [rsp+48h] [rbp-A0h]
  __int64 v145; // [rsp+48h] [rbp-A0h]
  char CurrentIrql; // [rsp+50h] [rbp-98h]
  struct _KPRCB *v147; // [rsp+50h] [rbp-98h]
  _QWORD *v148; // [rsp+58h] [rbp-90h]
  struct _KPRCB *v149; // [rsp+58h] [rbp-90h]
  _QWORD *v150; // [rsp+58h] [rbp-90h]
  struct _KPRCB *v151; // [rsp+58h] [rbp-90h]
  __int64 v152; // [rsp+60h] [rbp-88h]
  struct _KPRCB *v153; // [rsp+60h] [rbp-88h]
  _QWORD *v154; // [rsp+60h] [rbp-88h]
  char v155; // [rsp+68h] [rbp-80h]
  _KTHREAD *v156; // [rsp+78h] [rbp-70h]
  _KTHREAD *v157; // [rsp+78h] [rbp-70h]
  _QWORD *v158; // [rsp+78h] [rbp-70h]
  _KTHREAD *v159; // [rsp+78h] [rbp-70h]
  struct _KTHREAD *v160; // [rsp+80h] [rbp-68h]
  _QWORD *v161; // [rsp+88h] [rbp-60h]
  _KTHREAD *v162; // [rsp+88h] [rbp-60h]
  _QWORD *v163; // [rsp+88h] [rbp-60h]
  int v164; // [rsp+90h] [rbp-58h] BYREF
  __int64 v165; // [rsp+98h] [rbp-50h]
  void *retaddr; // [rsp+E8h] [rbp+0h]
  struct _KPRCB *v167; // [rsp+F0h] [rbp+8h]
  bool v168; // [rsp+100h] [rbp+18h]
  int v169; // [rsp+108h] [rbp+20h] BYREF

  v5 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v160 = CurrentThread;
  v7 = *a4;
  v8 = *a4;
  v139 = *a4;
  v168 = a3 && *a3 == 1LL;
  v9 = (_DWORD *)(v5 + 16);
  v10 = *(_DWORD *)(v5 + 16);
  if ( (v10 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 160) = *a5;
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    return;
  }
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      v72 = *(_DWORD *)(v5 + 48);
      if ( v72 != -2147483626 && (v72 & 0xC0000000) != 0xC0000000 )
        memmove(*(void **)(v5 + 112), *(const void **)(v5 + 24), *(_QWORD *)(v5 + 56));
    }
    if ( (*v9 & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
  }
  *v9 &= 0xFFFFFFCF;
  v11 = *(__int64 **)(v5 + 8);
  if ( v11 )
  {
    do
    {
      v46 = (__int64 *)*v11;
      v47 = *((_WORD *)v11 + 5);
      if ( (v47 & 0x20) != 0 )
      {
        MmUnmapLockedPages((PVOID)v11[3], (PMDL)v11);
        v47 = *((_WORD *)v11 + 5);
      }
      if ( (v47 & 8) != 0 )
      {
        v48 = *((unsigned __int16 *)v11 + 6);
        if ( (unsigned int)v48 >= (unsigned int)KeNumberProcessors_0 )
        {
          CurrentPrcb = 0LL;
        }
        else
        {
          _mm_lfence();
          CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v48];
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
      v11 = v46;
    }
    while ( v46 );
    v8 = v139;
    CurrentThread = v160;
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  if ( (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0xC0000000 )
  {
    v76 = (volatile signed __int32 *)*(unsigned __int8 *)(v5 + 65);
    if ( !(_BYTE)v76 )
      goto LABEL_150;
    if ( (*v9 & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
      goto LABEL_11;
    if ( !v7 )
    {
LABEL_150:
      if ( (*v9 & 0x2000) != 0 )
        IopDequeueIrpFromFileObject(v5, v7);
      if ( v7 )
        ObDereferenceObjectDeferDelete((PVOID)v7);
      v77 = *(void **)(v5 + 80);
      if ( v77 && v7 && (*v9 & 4) == 0 )
        ObfDereferenceObject(v77);
      if ( (*v9 & 0x8000) != 0 )
      {
        if ( (unsigned int)IopInterlockedAdd(v5 + 88, 0xFFFFFFFFLL) )
          return;
      }
      else
      {
        *(_QWORD *)(v5 + 152) = CurrentThread;
        IopDequeueIrpFromThread((_QWORD *)v5, v76);
      }
      IoFreeIrp((PIRP)v5);
      return;
    }
    if ( (*v9 & 4) != 0 )
    {
      *(_OWORD *)*(_QWORD *)(v5 + 72) = *(_OWORD *)(v5 + 48);
      v79 = *(struct _KEVENT **)(v5 + 80);
      if ( v79 )
        goto LABEL_166;
    }
    else
    {
      *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    }
    v79 = (struct _KEVENT *)(v7 + 152);
LABEL_166:
    KeSetEvent(v79, 0, 0);
    goto LABEL_150;
  }
LABEL_11:
  v12 = 0LL;
  v165 = 0LL;
  if ( v7 )
  {
    v13 = *(__int64 **)(v7 + 176);
    if ( v13 )
    {
      v12 = *v13;
      v165 = v13[1];
    }
  }
  v14 = *(_QWORD *)(v5 + 72);
  if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
    *(_DWORD *)(v14 + 4) = *(_DWORD *)(v5 + 56);
  else
    *(_QWORD *)(v14 + 8) = *(_QWORD *)(v5 + 56);
  *(_DWORD *)v14 = *(_DWORD *)(v5 + 48);
  v15 = *(_QWORD *)(v5 + 80);
  if ( !v15 )
  {
    if ( !v7 )
      goto LABEL_31;
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) != 0 )
      goto LABEL_30;
    if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
    {
      v16 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v8 + 156) == 1 )
      {
LABEL_30:
        *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
        goto LABEL_31;
      }
      v16 = 1;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v143 = KeGetCurrentPrcb();
    v164 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) )
    {
      do
        KeYieldProcessorEx(&v164);
      while ( (*(_DWORD *)(v7 + 152) & 0x80u) != 0 );
    }
    v17 = *(_DWORD *)(v8 + 156);
    *(_DWORD *)(v8 + 156) = 1;
    if ( v17 )
    {
LABEL_29:
      _InterlockedAnd((volatile signed __int32 *)(v7 + 152), 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v143, 0, 1, 0, CurrentIrql);
      goto LABEL_30;
    }
    if ( !v16 )
    {
      v118 = *(_QWORD **)(v8 + 160);
      if ( v118 != (_QWORD *)(v8 + 160) )
      {
        while ( 1 )
        {
          v119 = v118;
          v154 = v118;
          v120 = *v118;
          v163 = (_QWORD *)v120;
          v121 = (_QWORD *)v119[1];
          if ( *(_QWORD **)(v120 + 8) != v119 || (_QWORD *)*v121 != v119 )
            __fastfail(3u);
          *v121 = v120;
          *(_QWORD *)(v120 + 8) = v121;
          v122 = *((_BYTE *)v119 + 16);
          if ( v122 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(v143, v119, *((unsigned __int16 *)v119 + 9), 0LL) )
            {
              v68 = (*(_DWORD *)(v8 + 156))-- == 1;
              if ( v68 )
                goto LABEL_29;
            }
          }
          else if ( v122 == 2 )
          {
            *((_BYTE *)v119 + 17) = 5;
            v142 = v119[3];
            *v119 = 0LL;
            v123 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v123 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v151 = KeGetCurrentPrcb();
            v159 = v151->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v151->CurrentThread);
              EtwTraceEnqueueWork(v126, v125, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v142);
            v127 = (_QWORD *)(v142 + 8);
            v128 = v142;
            if ( (_QWORD *)*v127 == v127
              || *(_DWORD *)(v142 + 40) >= *(_DWORD *)(v142 + 44)
              || v159->Queue == (_DISPATCHER_HEADER *volatile)v142 && v159->WaitReason == 15 )
            {
              v129 = 0;
            }
            else
            {
              v129 = KiWakeQueueWaiter((__int64)v151, (_QWORD *)v142, (__int64)v154);
              v128 = v142;
              v127 = (_QWORD *)(v142 + 8);
            }
            if ( !v129 )
            {
              v130 = *(_DWORD *)(v128 + 4);
              *(_DWORD *)(v128 + 4) = v130 + 1;
              v131 = *(_QWORD **)(v128 + 32);
              if ( *v131 != v128 + 24 )
                __fastfail(3u);
              *v154 = v128 + 24;
              v154[1] = v131;
              *v131 = v154;
              *(_QWORD *)(v128 + 32) = v154;
              if ( !v130 && (_QWORD *)*v127 != v127 )
              {
                KiWakeOtherQueueWaiters((__int64)v151, v128);
                v128 = v142;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v128, 0xFFFFFF7F);
            v68 = (*(_DWORD *)(v8 + 156))-- == 1;
            if ( v68 )
              goto LABEL_29;
          }
          else
          {
            KiTryUnwaitThread(v143, v119, 256LL, 0LL);
          }
          v118 = v163;
          if ( v163 == (_QWORD *)(v8 + 160) )
            goto LABEL_29;
        }
      }
      goto LABEL_29;
    }
    v18 = (_QWORD *)(v8 + 160);
    v19 = (_QWORD *)*v18;
    if ( (_QWORD *)*v18 == v18 )
    {
LABEL_28:
      v18[1] = v18;
      *v18 = v18;
      goto LABEL_29;
    }
    while ( 1 )
    {
      v90 = v19;
      v152 = (__int64)v19;
      v19 = (_QWORD *)*v19;
      v91 = *(_BYTE *)(v152 + 16);
      if ( v91 == 1 )
      {
        v132 = *((unsigned __int16 *)v90 + 9);
      }
      else
      {
        if ( v91 == 2 )
        {
          *((_BYTE *)v90 + 17) = 5;
          v141 = v90[3];
          *v90 = 0LL;
          v92 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v92 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v149 = KeGetCurrentPrcb();
          v157 = v149->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v111 = KeIsThreadRunning(v149->CurrentThread);
            EtwTraceEnqueueWork(v113, v112, v111);
          }
          KiAcquireKobjectLockSafe(v141);
          v93 = (_QWORD *)(v141 + 8);
          v94 = v141;
          if ( (_QWORD *)*v93 == v93
            || *(_DWORD *)(v141 + 40) >= *(_DWORD *)(v141 + 44)
            || v157->Queue == (_DISPATCHER_HEADER *volatile)v141 && v157->WaitReason == 15 )
          {
            v95 = 0;
          }
          else
          {
            v95 = KiWakeQueueWaiter((__int64)v149, (_QWORD *)v141, v152);
            v94 = v141;
            v93 = (_QWORD *)(v141 + 8);
          }
          if ( !v95 )
          {
            v109 = *(_DWORD *)(v94 + 4);
            *(_DWORD *)(v94 + 4) = v109 + 1;
            v110 = *(__int64 **)(v94 + 32);
            if ( *v110 != v94 + 24 )
              __fastfail(3u);
            *(_QWORD *)v152 = v94 + 24;
            *(_QWORD *)(v152 + 8) = v110;
            *v110 = v152;
            *(_QWORD *)(v94 + 32) = v152;
            if ( !v109 && (_QWORD *)*v93 != v93 )
            {
              KiWakeOtherQueueWaiters((__int64)v149, v94);
              v94 = v141;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v94, 0xFFFFFF7F);
          goto LABEL_212;
        }
        v132 = 256LL;
      }
      KiTryUnwaitThread(v143, v90, v132, 0LL);
LABEL_212:
      if ( v19 == v18 )
        goto LABEL_28;
    }
  }
  if ( (*(_BYTE *)v15 & 0x7F) != 0 )
  {
    v66 = 0;
  }
  else
  {
    if ( *(_DWORD *)(v15 + 4) == 1 )
      goto LABEL_126;
    v66 = 1;
  }
  v155 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v155 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v140 = KeGetCurrentPrcb();
  v169 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) )
  {
    do
      KeYieldProcessorEx(&v169);
    while ( (*(_DWORD *)v15 & 0x80u) != 0 );
  }
  v67 = *(_DWORD *)(v15 + 4);
  *(_DWORD *)(v15 + 4) = 1;
  if ( !v67 )
  {
    v68 = v66 == 0;
    v69 = (_QWORD *)(v15 + 8);
    v70 = *(_QWORD **)(v15 + 8);
    if ( v68 )
    {
      if ( v70 != v69 )
      {
        while ( 1 )
        {
          v96 = v70;
          v150 = v70;
          v97 = (_QWORD *)*v70;
          v158 = v97;
          v98 = (_QWORD *)v70[1];
          if ( (_QWORD *)v97[1] != v96 || (_QWORD *)*v98 != v96 )
            __fastfail(3u);
          *v98 = v97;
          v97[1] = v98;
          v102 = *((_BYTE *)v96 + 16);
          if ( v102 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(v140, v96, *((unsigned __int16 *)v96 + 9), 0LL) )
            {
              v68 = (*(_DWORD *)(v15 + 4))-- == 1;
              if ( v68 )
                goto LABEL_125;
            }
          }
          else if ( v102 == 2 )
          {
            *((_BYTE *)v96 + 17) = 5;
            v145 = v96[3];
            *v96 = 0LL;
            v103 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v103 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v153 = KeGetCurrentPrcb();
            v162 = v153->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v114 = KeIsThreadRunning(v153->CurrentThread);
              EtwTraceEnqueueWork(v116, v115, v114);
            }
            KiAcquireKobjectLockSafe(v145);
            v104 = (_QWORD *)(v145 + 8);
            v105 = v145;
            if ( (_QWORD *)*v104 == v104
              || *(_DWORD *)(v145 + 40) >= *(_DWORD *)(v145 + 44)
              || v162->Queue == (_DISPATCHER_HEADER *volatile)v145 && v162->WaitReason == 15 )
            {
              v106 = 0;
            }
            else
            {
              v106 = KiWakeQueueWaiter((__int64)v153, (_QWORD *)v145, (__int64)v150);
              v105 = v145;
              v104 = (_QWORD *)(v145 + 8);
            }
            if ( !v106 )
            {
              v107 = *(_DWORD *)(v105 + 4);
              *(_DWORD *)(v105 + 4) = v107 + 1;
              v108 = *(_QWORD **)(v105 + 32);
              if ( *v108 != v105 + 24 )
                __fastfail(3u);
              *v150 = v105 + 24;
              v150[1] = v108;
              *v108 = v150;
              *(_QWORD *)(v105 + 32) = v150;
              if ( !v107 && (_QWORD *)*v104 != v104 )
              {
                KiWakeOtherQueueWaiters((__int64)v153, v105);
                v105 = v145;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v105, 0xFFFFFF7F);
            v68 = (*(_DWORD *)(v15 + 4))-- == 1;
            if ( v68 )
              goto LABEL_125;
          }
          else
          {
            KiTryUnwaitThread(v140, v96, 256LL, 0LL);
          }
          v70 = v158;
          if ( v158 == v69 )
            goto LABEL_125;
        }
      }
      goto LABEL_125;
    }
    if ( v70 == v69 )
    {
LABEL_144:
      *(_QWORD *)(v15 + 16) = v15 + 8;
      *v69 = v69;
      goto LABEL_125;
    }
    while ( 1 )
    {
      v148 = v70;
      v161 = (_QWORD *)*v70;
      v83 = *((_BYTE *)v70 + 16);
      if ( v83 == 1 )
      {
        v117 = *((unsigned __int16 *)v70 + 9);
      }
      else
      {
        if ( v83 == 2 )
        {
          *((_BYTE *)v70 + 17) = 5;
          v144 = v70[3];
          *v70 = 0LL;
          v84 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v84 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v147 = KeGetCurrentPrcb();
          v156 = v147->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v99 = KeIsThreadRunning(v147->CurrentThread);
            EtwTraceEnqueueWork(v101, v100, v99);
          }
          KiAcquireKobjectLockSafe(v144);
          v85 = (_QWORD *)(v144 + 8);
          v86 = v144;
          if ( (_QWORD *)*v85 == v85
            || *(_DWORD *)(v144 + 40) >= *(_DWORD *)(v144 + 44)
            || v156->Queue == (_DISPATCHER_HEADER *volatile)v144 && v156->WaitReason == 15 )
          {
            v87 = 0;
          }
          else
          {
            v87 = KiWakeQueueWaiter((__int64)v147, (_QWORD *)v144, (__int64)v148);
            v86 = v144;
            v85 = (_QWORD *)(v144 + 8);
          }
          if ( !v87 )
          {
            v88 = *(_DWORD *)(v86 + 4);
            *(_DWORD *)(v86 + 4) = v88 + 1;
            v89 = *(_QWORD **)(v86 + 32);
            if ( *v89 != v86 + 24 )
              __fastfail(3u);
            *v148 = v86 + 24;
            v148[1] = v89;
            *v89 = v148;
            *(_QWORD *)(v86 + 32) = v148;
            if ( !v88 && (_QWORD *)*v85 != v85 )
            {
              KiWakeOtherQueueWaiters((__int64)v147, v86);
              v86 = v144;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v86, 0xFFFFFF7F);
          goto LABEL_195;
        }
        v117 = 256LL;
      }
      KiTryUnwaitThread(v140, v70, v117, 0LL);
LABEL_195:
      v70 = v161;
      if ( v161 == v69 )
        goto LABEL_144;
    }
  }
LABEL_125:
  _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)v140, 0, 1, 0, v155);
LABEL_126:
  if ( v7 )
  {
    v71 = *(_DWORD *)(v5 + 16);
    if ( (v71 & 4) == 0 )
    {
      ObfDereferenceObject(*(PVOID *)(v5 + 80));
      v71 = *(_DWORD *)(v5 + 16);
    }
    if ( (*(_BYTE *)(v7 + 80) & 2) != 0 && (v71 & 0x1000) == 0 )
    {
      KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
      goto LABEL_30;
    }
  }
LABEL_31:
  v20 = *(_DWORD *)(v5 + 16);
  if ( (v20 & 0x2000) != 0 )
    v21 = (volatile signed __int64 *)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL);
  else
    v21 = 0LL;
  if ( (v20 & 0x100) != 0 )
  {
    v73 = *(unsigned int *)(v5 + 56);
    if ( v21 )
    {
      _InterlockedExchangeAdd64(v21 + 154, (unsigned int)v73);
    }
    else
    {
      v75 = KeGetCurrentThread();
      v75->ReadTransferCount += v73;
    }
    __addgsqword(0x2EE8u, v73);
  }
  else if ( (v20 & 0x200) != 0 )
  {
    v74 = *(unsigned int *)(v5 + 56);
    if ( v21 )
    {
      _InterlockedExchangeAdd64(v21 + 155, (unsigned int)v74);
    }
    else
    {
      v78 = KeGetCurrentThread();
      v78->WriteTransferCount += v74;
    }
    __addgsqword(0x2EF0u, v74);
  }
  else
  {
    v22 = *(_QWORD *)(v5 + 56);
    if ( v22 >= 0 )
    {
      if ( v21 )
      {
        _InterlockedExchangeAdd64(v21 + 156, (unsigned int)v22);
      }
      else
      {
        v23 = KeGetCurrentThread();
        v23->OtherTransferCount += (unsigned int)v22;
      }
      __addgsqword(0x2EF8u, (unsigned int)v22);
    }
  }
  if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
  {
    v53 = (volatile signed __int32 *)(v7 + 184);
    v24 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v7 + 184);
    }
    else
    {
      v54 = KeGetCurrentPrcb();
      SchedulerAssist = v54->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v54->NestingLevel <= 1u )
        {
          v133 = SchedulerAssist[5];
          SchedulerAssist[5] = v133 + 1;
          if ( v133 == -1 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
      if ( _interlockedbittestandset64(v53, 0LL) )
      {
        KiSetVpThreadSpinLockCount((__int64)v54, 0);
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 184), v80);
      }
    }
    v56 = (_QWORD *)(v5 + 32);
    v57 = *(_QWORD *)(v5 + 32);
    v58 = *(_QWORD **)(v5 + 40);
    if ( *(_QWORD *)(v57 + 8) != v5 + 32 || (_QWORD *)*v58 != v56 )
      __fastfail(3u);
    *v58 = v57;
    *(_QWORD *)(v57 + 8) = v58;
    *(_QWORD *)(v5 + 40) = v5 + 32;
    *v56 = v56;
    ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(v5 + 16) & 0xFFFF5FFF | 0x8000;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v53, 0LL);
    v59 = KeGetCurrentPrcb();
    v60 = v59->SchedulerAssist;
    if ( v60 )
    {
      if ( v59->NestingLevel <= 1u )
      {
        v134 = v60[5] - 1;
        v60[5] = v134;
        if ( !v134 )
          KiRemoveSystemWorkPriorityKick(v59);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v24 < 2u )
    {
      v135 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v135->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v135);
    }
    v25 = (int)v160;
    goto LABEL_53;
  }
  *(_QWORD *)(v5 + 152) = CurrentThread;
  v24 = 0;
  v25 = (int)v160;
  if ( v160 )
  {
    v24 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&v160[1].WaitBlockFill11[16]);
    }
    else
    {
      v26 = KeGetCurrentPrcb();
      v167 = v26;
      v27 = v26->SchedulerAssist;
      if ( v27 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v136 = v27[5];
          v27[5] = v136 + 1;
          if ( v136 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v26);
            v26 = v167;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)&v160[1].WaitBlockFill11[16], 0LL) )
      {
        KiSetVpThreadSpinLockCount((__int64)v26, 0);
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&v160[1].WaitBlockFill11[16], v81);
      }
    }
  }
  v28 = (_QWORD *)(v5 + 32);
  v29 = *(_QWORD *)(v5 + 32);
  v30 = *(_QWORD **)(v5 + 40);
  if ( *(_QWORD *)(v29 + 8) != v5 + 32 || (_QWORD *)*v30 != v28 )
    __fastfail(3u);
  *v30 = v29;
  *(_QWORD *)(v29 + 8) = v30;
  *(_QWORD *)(v5 + 40) = v5 + 32;
  *v28 = v28;
  if ( v160 )
  {
    v31 = (volatile signed __int64 *)&v160[1].WaitBlockFill11[16];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v31, retaddr);
    else
      _InterlockedAnd64(v31, 0LL);
    v32 = KeGetCurrentPrcb();
    v33 = v32->SchedulerAssist;
    if ( v33 )
    {
      if ( v32->NestingLevel <= 1u )
      {
        v137 = v33[5] - 1;
        v33[5] = v137;
        if ( !v137 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v24 < 2u )
    {
      v138 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v138->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v138);
    }
LABEL_53:
    __writecr8(v24);
  }
  v34 = *(_DWORD *)(v5 + 16) & 0x8000;
  if ( !v34 )
  {
    *(_QWORD *)(v5 + 88) &= ~1uLL;
    v35 = *(_QWORD *)(v5 + 88);
    if ( v35 )
    {
      if ( v168 )
        v82 = *(char *)(v5 + 70);
      else
        v82 = 2;
      KeInitializeApc(
        v5 + 120,
        v25,
        v82,
        (unsigned int)IopUserRundown,
        (__int64)IopUserRundown,
        v35,
        *(_BYTE *)(v5 + 64),
        *(_QWORD *)(v5 + 96));
      KeInsertQueueApc(v5 + 120, *(_QWORD *)(v5 + 72), 0LL, 2LL);
      goto LABEL_78;
    }
  }
  if ( v12
    && *(_QWORD *)(v5 + 96)
    && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
     || *(_BYTE *)(v5 + 65)
     || (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0x80000000) )
  {
    v51 = 0;
    v52 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
    if ( v52 == 8 || v52 == 20 )
      v51 = 1;
    *(_QWORD *)(v5 + 120) = v165;
    *(_DWORD *)(v5 + 184) = 0;
    KeInsertQueueEx(v12, (_QWORD *)(v5 + 168), v51, 0);
    goto LABEL_78;
  }
  if ( v34 )
  {
    v61 = *(_QWORD *)(v5 + 88);
    do
    {
      v62 = v61;
      v63 = ((v61 >> 1) & 3) - 1;
      v64 = v61 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v63);
      v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 88), v64, v61);
    }
    while ( v62 != v61 );
    if ( (_DWORD)v63 )
      goto LABEL_78;
    v65 = v5;
    if ( !IopDispatchFreeIrp )
    {
      IopFreeIrp(v5, v64, v62);
      goto LABEL_78;
    }
  }
  else
  {
    if ( !IopDispatchFreeIrp )
    {
      if ( *(_WORD *)v5 != 6 )
        KeBugCheckEx(0x44u, v5, 0x257CuLL, 0LL, 0LL);
      *(_WORD *)v5 = 0;
      v36 = *(_BYTE *)(v5 + 71);
      if ( (v36 & 0x40) != 0 )
      {
        LOBYTE(v21) = 1;
        IopFreeIrpExtension(v5, 0xFFFFFFFFLL, v21);
        v36 = *(_BYTE *)(v5 + 71);
      }
      if ( (v36 & 0x21) == 0x21 )
      {
        IopFreeReserveIrp(v5);
      }
      else
      {
        v37 = *(unsigned __int16 *)(v5 + 4);
        if ( (unsigned int)v37 >= (unsigned int)KeNumberProcessors_0 )
        {
          v38 = KeGetCurrentPrcb();
        }
        else
        {
          _mm_lfence();
          v38 = (struct _KPRCB *)KiProcessorBlock[v37];
        }
        v39 = *(_BYTE *)(v5 + 71);
        if ( (v39 & 8) != 0 )
        {
          *(_BYTE *)(v5 + 71) = v39 ^ 8;
          _InterlockedIncrement(&v38->LookasideIrpFloat);
          v39 = *(_BYTE *)(v5 + 71);
        }
        if ( (v39 & 4) != 0
          && ((IopIrpStackProfilerFlags & 3) == 0
           || (v40 = *(_WORD *)(v5 + 2), v40 == 72 * (char)IopLargeIrpStackLocations + 208)
           || v40 == 72 * (char)IopMediumIrpStackLocations + 208
           || v40 == 280) )
        {
          v41 = *(_WORD *)(v5 + 2);
          if ( v41 >= (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
          {
            v42 = 2080LL;
            v43 = 2088LL;
          }
          else if ( v41 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
          {
            v42 = 2048LL;
            v43 = 2056LL;
          }
          else
          {
            v42 = 2064LL;
            v43 = 2072LL;
          }
          *(_QWORD *)(v5 + 56) = v41;
          v44 = *(_QWORD *)((char *)&v38->MxCsr + v42);
          ++*(_DWORD *)(v44 + 28);
          if ( *(_WORD *)v44 < *(_WORD *)(v44 + 16)
            || (++*(_DWORD *)(v44 + 32),
                v44 = *(_QWORD *)((char *)&v38->MxCsr + v43),
                ++*(_DWORD *)(v44 + 28),
                *(_WORD *)v44 < *(_WORD *)(v44 + 16)) )
          {
            v45 = *(_BYTE *)(v5 + 71);
            if ( (v45 & 1) != 0 )
            {
              *(_BYTE *)(v5 + 71) = v45 ^ 1;
              ExReturnPoolQuota(v5);
            }
            RtlpInterlockedPushEntrySList((PSLIST_HEADER)v44, (PSLIST_ENTRY)v5);
          }
          else
          {
            ++*(_DWORD *)(v44 + 32);
            ExFreePoolWithTag((PVOID)v5, 0);
          }
        }
        else
        {
          ExFreePoolWithTag((PVOID)v5, 0);
        }
      }
      goto LABEL_78;
    }
    v65 = v5;
  }
  IovFreeIrpPrivate(v65);
LABEL_78:
  if ( v7 )
    ObDereferenceObjectDeferDelete((PVOID)v7);
}
