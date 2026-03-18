/*
 * XREFs of KiQuantumEnd @ 0x140011130
 * Callers:
 *     KiIdleLoop @ 0x1401C8150 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x1401CB450 (KiDispatchInterrupt.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D450 (KiInsertDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x1400100B0 (KiUpdateThreadPriority.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140011C08 (KiCheckPreferredHeteroProcessor.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140011DC0 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140011E08 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x140011E50 (KiComputeNewPriority.c)
 *     KiShouldScanSharedReadyQueue @ 0x140011F00 (KiShouldScanSharedReadyQueue.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140011F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiReadyDeferredReadyList @ 0x140012840 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x1400138D0 (KiSelectNextThread.c)
 *     KiSetPriorityBoost @ 0x140014290 (KiSetPriorityBoost.c)
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BAA0 (KiSetVpThreadSpinLockCount.c)
 *     KiSelectReadyThread @ 0x140041FA0 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400E9F58 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KeIsUserVaAccessAllowed @ 0x14012DBD4 (KeIsUserVaAccessAllowed.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14015BE50 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402AF84C (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0380 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x14032D0B8 (EtwTraceAntiStarvationBoost.c)
 */

__int64 __fastcall KiQuantumEnd(__int64 a1, _DWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v3; // r9
  unsigned __int8 v4; // r14
  __int64 CurrentThread; // rsi
  unsigned __int64 v6; // rdi
  int v7; // r15d
  char v8; // di
  int v9; // r13d
  int v10; // r12d
  bool v11; // sf
  struct _KPRCB *v12; // r15
  _DWORD *v13; // rcx
  __int64 NextThread; // rdi
  __int64 result; // rax
  char v16; // cl
  char IsUserVaAccessAllowed; // bl
  __int64 v18; // r8
  struct _KPRCB *v19; // r15
  _DWORD *SchedulerAssist; // rcx
  char v21; // al
  __int64 v22; // rdx
  struct _KPRCB *v23; // r14
  char v24; // r15
  _DWORD *v25; // rcx
  struct _KPRCB *v26; // rdx
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  int v29; // r15d
  unsigned __int64 v30; // rdx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  char QueueIndex; // al
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  _KSHARED_READY_QUEUE *v35; // r13
  __int64 v36; // r8
  char v37; // r10
  int v38; // r9d
  __int64 v39; // rdx
  unsigned int v40; // ecx
  unsigned int v41; // r14d
  _LIST_ENTRY *v42; // rbx
  _LIST_ENTRY *Flink; // r12
  struct _LIST_ENTRY **p_Blink; // rsi
  bool v45; // cl
  bool v46; // zf
  int v47; // r11d
  struct _KPRCB *v48; // rcx
  _QWORD *v49; // rsi
  char v50; // cl
  unsigned int ReadySummary; // edi
  int v52; // edi
  __int64 DispatcherReadyListHead; // rdx
  unsigned int v54; // r14d
  unsigned int v55; // edi
  int v56; // esi
  unsigned int v57; // ecx
  __int64 v58; // r8
  _QWORD **v59; // r13
  _QWORD *v60; // r10
  _QWORD *v61; // rcx
  _QWORD *v62; // rdi
  int v63; // ecx
  __int64 v64; // rax
  _DWORD *v65; // rcx
  _DWORD *v66; // rcx
  char v67; // al
  _DWORD *v68; // rcx
  _DWORD *v69; // rcx
  int v70; // r11d
  struct _KPRCB *v71; // rcx
  _DWORD *v72; // rdx
  int v73; // esi
  volatile signed __int32 *v74; // r13
  _QWORD *v75; // r8
  struct _KPRCB *v76; // rcx
  _DWORD *v77; // rdx
  __int64 v78; // rdx
  struct _KPRCB *v79; // rdi
  _DWORD *v80; // rcx
  __int64 v81; // rdx
  int v82; // r11d
  int v83; // r14d
  _QWORD *v84; // rdx
  struct _KPRCB *v85; // r13
  _DWORD *v86; // rcx
  int v87; // ecx
  int v88; // eax
  _DWORD *v89; // rcx
  _DWORD *v90; // rcx
  _DWORD *v91; // rcx
  _DWORD *v92; // rcx
  struct _KPRCB *v93; // rcx
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int GuestSchedulerAssistPriority; // eax
  int v106; // eax
  int v107; // eax
  _DWORD *v108; // rcx
  int v109; // eax
  _DWORD *v110; // rcx
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  _DWORD *v118; // rcx
  int v119; // eax
  _DWORD *v120; // rcx
  int v121; // eax
  int v122; // eax
  _DWORD *v123; // rcx
  int v124; // eax
  _DWORD *v125; // rcx
  int v126; // eax
  char IsThreadRankNonZero; // al
  char v128; // cl
  __int64 v129; // rdx
  char v130; // al
  char v131; // dl
  _BYTE *v132; // rcx
  __int64 v133; // rdx
  _KTHREAD *IdleThread; // rax
  __int64 v135; // rdx
  struct _KPRCB *v136; // rdi
  __int64 v137; // rdx
  char v138; // [rsp+20h] [rbp-69h]
  volatile signed __int32 *v139; // [rsp+20h] [rbp-69h]
  __int64 v140; // [rsp+28h] [rbp-61h] BYREF
  unsigned int v141; // [rsp+30h] [rbp-59h]
  _QWORD *v142; // [rsp+38h] [rbp-51h]
  int v143; // [rsp+40h] [rbp-49h] BYREF
  int v144; // [rsp+44h] [rbp-45h] BYREF
  int v145; // [rsp+48h] [rbp-41h] BYREF
  int v146; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned int v147; // [rsp+50h] [rbp-39h]
  int v148; // [rsp+54h] [rbp-35h]
  int v149; // [rsp+58h] [rbp-31h] BYREF
  int v150; // [rsp+5Ch] [rbp-2Dh] BYREF
  int v151; // [rsp+60h] [rbp-29h] BYREF
  int v152; // [rsp+64h] [rbp-25h] BYREF
  __int64 v153; // [rsp+68h] [rbp-21h]
  _QWORD *v154; // [rsp+70h] [rbp-19h]
  struct _KPRCB *v155; // [rsp+78h] [rbp-11h]
  _QWORD *v156; // [rsp+80h] [rbp-9h] BYREF
  _KSHARED_READY_QUEUE *v157; // [rsp+88h] [rbp-1h]
  _QWORD *v158; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v159; // [rsp+98h] [rbp+Fh]
  unsigned int v160; // [rsp+9Ch] [rbp+13h]
  char v161; // [rsp+F0h] [rbp+67h]
  char v162; // [rsp+F0h] [rbp+67h]
  struct _KPRCB *v163; // [rsp+F8h] [rbp+6Fh]
  int v164; // [rsp+F8h] [rbp+6Fh]
  unsigned int v165; // [rsp+F8h] [rbp+6Fh]
  char v166; // [rsp+F8h] [rbp+6Fh]
  unsigned int v167; // [rsp+100h] [rbp+77h]
  int v168; // [rsp+100h] [rbp+77h]
  struct _KPRCB *v169; // [rsp+100h] [rbp+77h]
  unsigned int v170; // [rsp+100h] [rbp+77h]
  int v171; // [rsp+108h] [rbp+7Fh]
  __int64 v172; // [rsp+108h] [rbp+7Fh]
  _QWORD *v173; // [rsp+108h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0LL;
  v4 = 0;
  v140 = 0LL;
  v161 = 0;
  v155 = CurrentPrcb;
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  v153 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v6 = *(_QWORD *)(CurrentThread + 72);
    if ( v6 >= *(_QWORD *)(CurrentThread + 32) || *(_BYTE *)(CurrentThread + 125) )
    {
      v19 = KeGetCurrentPrcb();
      v143 = 0;
      SchedulerAssist = v19->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v94 = SchedulerAssist[5];
          SchedulerAssist[5] = v94 + 1;
          if ( v94 == -1 )
LABEL_163:
            KiRemoveSystemWorkPriorityKick(v19, a2);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        v91 = v19->SchedulerAssist;
        if ( v91 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v95 = v91[5] - 1;
            v91[5] = v95;
            if ( !v95 )
              KiRemoveSystemWorkPriorityKick(v19, a2);
          }
        }
        do
          KeYieldProcessorEx(&v143);
        while ( *(_QWORD *)(CurrentThread + 64) );
        v92 = v19->SchedulerAssist;
        if ( v92 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v96 = v92[5];
            v92[5] = v96 + 1;
            if ( v96 == -1 )
              goto LABEL_163;
          }
        }
      }
      if ( v6 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
        {
          v29 = 127;
        }
        else
        {
          LOBYTE(a2) = 1;
          v21 = KiComputeNewPriority(CurrentThread, a2);
          v23 = KeGetCurrentPrcb();
          v24 = v21;
          v144 = 0;
          v25 = v23->SchedulerAssist;
          if ( v25 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v97 = v25[5];
              v25[5] = v97 + 1;
              if ( v97 == -1 )
LABEL_174:
                KiRemoveSystemWorkPriorityKick(v23, v22);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            v68 = v23->SchedulerAssist;
            if ( v68 )
            {
              if ( v23->NestingLevel <= 1u )
              {
                v98 = v68[5] - 1;
                v68[5] = v98;
                if ( !v98 )
                  KiRemoveSystemWorkPriorityKick(v23, v22);
              }
            }
            do
              KeYieldProcessorEx(&v144);
            while ( CurrentPrcb->PrcbLock );
            v69 = v23->SchedulerAssist;
            if ( v69 )
            {
              if ( v23->NestingLevel <= 1u )
              {
                v99 = v69[5];
                v69[5] = v99 + 1;
                if ( v99 == -1 )
                  goto LABEL_174;
              }
            }
          }
          if ( CurrentPrcb->NextThread )
            v26 = 0LL;
          else
            v26 = CurrentPrcb;
          if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread, v26, 0LL) )
            KiUpdateThreadPriority(
              (__int64)CurrentPrcb,
              CurrentThread,
              (_SINGLE_LIST_ENTRY *)(unsigned int)v24,
              CurrentPrcb->NextThread == 0LL);
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          if ( v28 )
          {
            if ( v27->NestingLevel <= 1u )
            {
              v100 = v28[5] - 1;
              v28[5] = v100;
              if ( !v100 )
                KiRemoveSystemWorkPriorityKick(v27, v28);
            }
          }
          v29 = *(unsigned __int8 *)(CurrentThread + 651);
          v4 = 1;
          v161 = 1;
          KiTryScheduleNextForegroundBoost(CurrentThread);
        }
        v30 = v6 + (unsigned int)(v29 * KiCyclesPerClockQuantum);
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
        *(_QWORD *)(CurrentThread + 32) = v30;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v64 = KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)];
          if ( (*(_QWORD *)(*(_QWORD *)(v64 + 192) + 8LL) & *(_QWORD *)(*(_QWORD *)(v64 + 192) + 80LL) & *(_QWORD *)(CurrentThread + 576)) != 0LL )
          {
            *(_DWORD *)(CurrentThread + 116) |= 0x80u;
            _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
          }
        }
      }
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
      KiReleaseThreadLockSafe(CurrentThread);
      v3 = 0LL;
    }
  }
  v7 = 10;
  v8 = 0;
  v9 = MEMORY[0xFFFFF78000000320];
  v10 = 16;
  v11 = (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0;
  v148 = MEMORY[0xFFFFF78000000320];
  if ( v11 )
  {
    v8 = 1;
    if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    {
      SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
      v157 = SharedReadyQueue;
      if ( (SharedReadyQueue->ReadySummary & 0x7FFE) != 0 )
      {
        QueueIndex = SharedReadyQueue->QueueIndex;
        v33 = KeGetCurrentPrcb();
        v156 = (_QWORD *)v3;
        v138 = QueueIndex;
        v163 = v33;
        v34 = v33->SchedulerAssist;
        v145 = v3;
        if ( v34 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v101 = v34[5];
            v34[5] = v101 + 1;
            if ( v101 == -1 )
              KiRemoveSystemWorkPriorityKick(v33, v34);
          }
        }
        v35 = v157;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v35, 0LL) )
        {
          v89 = v163->SchedulerAssist;
          if ( v89 )
          {
            if ( v163->NestingLevel <= 1u )
            {
              v102 = v89[5] - 1;
              v89[5] = v102;
              if ( !v102 )
                KiRemoveSystemWorkPriorityKick(v163, v34);
            }
          }
          do
            KeYieldProcessorEx(&v145);
          while ( v35->Lock );
          v90 = v163->SchedulerAssist;
          if ( v90 )
          {
            if ( v163->NestingLevel <= 1u )
            {
              v103 = v90[5];
              v90[5] = v103 + 1;
              if ( v103 == -1 )
                KiRemoveSystemWorkPriorityKick(v163, v34);
            }
          }
        }
        if ( (v35->ReadySummary & 0x7FFE) != 0 )
        {
          v36 = 10LL;
          v37 = v138;
          v167 = 10;
          v171 = 16;
          v38 = MEMORY[0xFFFFF78000000320] - 300;
          v39 = (unsigned int)__ROR4__(v35->ReadySummary & 0x7FFE, v138);
          v164 = MEMORY[0xFFFFF78000000320] - 300;
          do
          {
            _BitScanForward(&v40, v39);
            LODWORD(v39) = v39 ^ (1 << v40);
            v159 = v40;
            v141 = v39;
            v41 = ((_BYTE)v40 + v37) & 0x1F;
            v147 = v41;
            v42 = &v35->ReadyListHead[((_BYTE)v40 + v37) & 0x1F];
            Flink = v42->Flink;
            do
            {
              p_Blink = &Flink[-14].Blink;
              v45 = 0;
              v46 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
              Flink = Flink->Flink;
              if ( !v46 )
              {
                GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(p_Blink, v39, v36);
                v36 = v167;
                v38 = v164;
                v45 = GuestSchedulerAssistPriority != *((char *)p_Blink + 195);
              }
              if ( v38 - *((_DWORD *)p_Blink + 109) > 0 || v45 )
              {
                KiRemoveThreadFromSharedReadyQueue(v35, p_Blink, v41);
                KiInsertDeferredReadyList((__int64 *)&v156, v81);
                v36 = v167;
                v38 = v164;
                if ( v82 > 0 )
                  v36 = --v167;
              }
              v47 = --v171;
            }
            while ( Flink != v42 && (_DWORD)v36 && v47 );
            v39 = v141;
            if ( !v141 )
              break;
            if ( !(_DWORD)v36 )
              break;
            v37 = v138;
          }
          while ( v47 );
          _InterlockedAnd64((volatile signed __int64 *)v35, 0LL);
          v48 = KeGetCurrentPrcb();
          v10 = 16;
          CurrentPrcb = v155;
          v4 = v161;
          a2 = v48->SchedulerAssist;
          v7 = 10;
          if ( a2 )
          {
            if ( v48->NestingLevel <= 1u )
            {
              v106 = a2[5] - 1;
              a2[5] = v106;
              if ( !v106 )
              {
                KiRemoveSystemWorkPriorityKick(v48, a2);
                v47 = v171;
              }
            }
          }
          v49 = v156;
          if ( v156 )
          {
            v83 = v164;
            do
            {
              v166 = 0;
              v84 = (_QWORD *)*(v49 - 18);
              v139 = (volatile signed __int32 *)(v49 - 27);
              v85 = KeGetCurrentPrcb();
              v154 = (_QWORD *)*v49;
              v142 = v84;
              v155 = v85;
              v86 = v85->SchedulerAssist;
              v146 = 0;
              if ( v86 )
              {
                if ( v85->NestingLevel <= 1u )
                {
                  v107 = v86[5];
                  v86[5] = v107 + 1;
                  if ( v107 == -1 )
LABEL_201:
                    KiRemoveSystemWorkPriorityKick(v85, v84);
                }
              }
              while ( _interlockedbittestandset64(v139 + 16, 0LL) )
              {
                v108 = v85->SchedulerAssist;
                if ( v108 )
                {
                  if ( v85->NestingLevel <= 1u )
                  {
                    v109 = v108[5] - 1;
                    v108[5] = v109;
                    if ( !v109 )
                      KiRemoveSystemWorkPriorityKick(v85, v84);
                  }
                }
                do
                  KeYieldProcessorEx(&v146);
                while ( *((_QWORD *)v139 + 8) );
                v85 = v155;
                v110 = v155->SchedulerAssist;
                if ( v110 )
                {
                  if ( v155->NestingLevel <= 1u )
                  {
                    v111 = v110[5];
                    v110[5] = v111 + 1;
                    if ( v111 == -1 )
                      goto LABEL_201;
                  }
                }
              }
              v87 = *((char *)v139 + 195);
              v88 = v83 - *((_DWORD *)v139 + 109);
              v49 = v154;
              v141 = v87;
              if ( v88 > 0 && v87 < 15 )
              {
                LOBYTE(v36) = 15;
                v166 = 1;
                KiSetPriorityBoost(0LL, v139, v36, v142);
              }
              KiReleaseThreadLockSafe(v139);
              if ( v166 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
                EtwTraceAntiStarvationBoost(v139, v141);
              KiDeferredReadyThread(CurrentPrcb, v139);
            }
            while ( v49 );
            v4 = v161;
            v35 = v157;
            v47 = v171;
          }
          if ( v47 && v167 )
          {
            v50 = 1;
          }
          else
          {
            v50 = 1;
            if ( v147 + 1 <= 0xE )
              v50 = v147 + 1;
          }
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v35, 0LL);
          v93 = KeGetCurrentPrcb();
          a2 = v93->SchedulerAssist;
          if ( a2 )
          {
            if ( v93->NestingLevel <= 1u )
            {
              v104 = a2[5] - 1;
              a2[5] = v104;
              if ( !v104 )
                KiRemoveSystemWorkPriorityKick(v93, a2);
            }
          }
          v50 = 1;
        }
        CurrentThread = v153;
        v3 = 0LL;
        v35->QueueIndex = v50;
        v9 = v148;
      }
    }
  }
  v140 = v3;
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread, v4, &v140);
  }
  else
  {
    v12 = KeGetCurrentPrcb();
    v149 = v3;
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v112 = v13[5];
        v13[5] = v112 + 1;
        if ( v112 == -1 )
LABEL_213:
          KiRemoveSystemWorkPriorityKick(v12, a2);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v65 = v12->SchedulerAssist;
      if ( v65 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v113 = v65[5] - 1;
          v65[5] = v113;
          if ( !v113 )
            KiRemoveSystemWorkPriorityKick(v12, a2);
        }
      }
      do
        KeYieldProcessorEx(&v149);
      while ( CurrentPrcb->PrcbLock );
      v66 = v12->SchedulerAssist;
      if ( v66 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v114 = v66[5];
          v66[5] = v114 + 1;
          if ( v114 == -1 )
            goto LABEL_213;
        }
      }
    }
    v7 = 10;
  }
  if ( !v8 )
    goto LABEL_10;
  ReadySummary = CurrentPrcb->ReadySummary;
  CurrentPrcb->ReadyScanTick = v9 + 75;
  v52 = ReadySummary & 0x7FFE;
  if ( !v52 )
    goto LABEL_10;
  DispatcherReadyListHead = (__int64)CurrentPrcb->DispatcherReadyListHead;
  v54 = CurrentPrcb->QueueIndex;
  v158 = 0LL;
  v55 = __ROR4__(v52, v54);
  v56 = MEMORY[0xFFFFF78000000320] - 300;
  v168 = MEMORY[0xFFFFF78000000320] - 300;
  do
  {
    _BitScanForward(&v57, v55);
    v55 ^= 1 << v57;
    v160 = v57;
    v58 = ((_BYTE)v57 + (_BYTE)v54) & 0x1F;
    v59 = (_QWORD **)(DispatcherReadyListHead + 16 * v58);
    v165 = ((_BYTE)v57 + (_BYTE)v54) & 0x1F;
    v60 = *v59;
    do
    {
      v61 = v60 - 27;
      LOBYTE(DispatcherReadyListHead) = 0;
      v46 = (*(_DWORD *)(v60 - 12) & 0x400000) == 0;
      v60 = (_QWORD *)*v60;
      v142 = v60;
      v172 = (__int64)v61;
      if ( !v46 )
      {
        v115 = KiReadGuestSchedulerAssistPriority(v61, DispatcherReadyListHead, v58);
        DispatcherReadyListHead = v172;
        v60 = v142;
        v58 = v165;
        v61 = (_QWORD *)v172;
        LOBYTE(DispatcherReadyListHead) = v115 != *(char *)(v172 + 195);
      }
      if ( v56 - *((_DWORD *)v61 + 109) > 0 || (_BYTE)DispatcherReadyListHead )
      {
        KiRemoveThreadFromReadyQueue(CurrentPrcb, v61 + 27);
        KiInsertDeferredReadyList((__int64 *)&v158, v172);
        if ( v70 > 0 )
          --v7;
      }
      --v10;
    }
    while ( v60 != v59 && v7 && v10 );
    if ( !v55 )
      break;
    if ( !v7 )
      break;
    DispatcherReadyListHead = (__int64)CurrentPrcb->DispatcherReadyListHead;
  }
  while ( v10 );
  v62 = v158;
  CurrentThread = v153;
  v4 = v161;
  if ( v158 )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v71 = KeGetCurrentPrcb();
    v72 = v71->SchedulerAssist;
    if ( v72 )
    {
      if ( v71->NestingLevel <= 1u )
      {
        v116 = v72[5] - 1;
        v72[5] = v116;
        if ( !v116 )
          KiRemoveSystemWorkPriorityKick(v71, v72);
      }
    }
    v73 = v168;
    do
    {
      v74 = (volatile signed __int32 *)(v62 - 27);
      v162 = 0;
      v75 = (_QWORD *)*(v62 - 18);
      v76 = KeGetCurrentPrcb();
      v173 = (_QWORD *)*v62;
      v142 = v75;
      v77 = v76->SchedulerAssist;
      v169 = v76;
      v150 = 0;
      if ( v77 )
      {
        if ( v76->NestingLevel <= 1u )
        {
          v117 = v77[5];
          v77[5] = v117 + 1;
          if ( v117 == -1 )
            KiRemoveSystemWorkPriorityKick(v76, v77);
        }
      }
      while ( _interlockedbittestandset64(v74 + 16, 0LL) )
      {
        v118 = v169->SchedulerAssist;
        if ( v118 )
        {
          if ( v169->NestingLevel <= 1u )
          {
            v119 = v118[5] - 1;
            v118[5] = v119;
            if ( !v119 )
              KiRemoveSystemWorkPriorityKick(v169, v77);
          }
        }
        do
          KeYieldProcessorEx(&v150);
        while ( *((_QWORD *)v74 + 8) );
        v120 = v169->SchedulerAssist;
        if ( v120 )
        {
          if ( v169->NestingLevel <= 1u )
          {
            v121 = v120[5];
            v120[5] = v121 + 1;
            if ( v121 == -1 )
              KiRemoveSystemWorkPriorityKick(v169, v77);
          }
        }
      }
      v62 = v173;
      v170 = *((char *)v74 + 195);
      if ( v73 - *((_DWORD *)v74 + 109) > 0 && *((char *)v74 + 195) < 15 )
      {
        LOBYTE(v75) = 15;
        v162 = 1;
        KiSetPriorityBoost(0LL, v74, v75, v142);
      }
      KiReleaseThreadLockSafe(v74);
      if ( v162 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v74, v170);
      KiDeferredReadyThread(CurrentPrcb, v74);
    }
    while ( v173 );
    v79 = KeGetCurrentPrcb();
    CurrentThread = v153;
    v151 = 0;
    v80 = v79->SchedulerAssist;
    if ( v80 )
    {
      if ( v79->NestingLevel <= 1u )
      {
        v122 = v80[5];
        v80[5] = v122 + 1;
        if ( v122 == -1 )
LABEL_237:
          KiRemoveSystemWorkPriorityKick(v79, v78);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v123 = v79->SchedulerAssist;
      if ( v123 )
      {
        if ( v79->NestingLevel <= 1u )
        {
          v124 = v123[5] - 1;
          v123[5] = v124;
          if ( !v124 )
            KiRemoveSystemWorkPriorityKick(v79, v78);
        }
      }
      do
        KeYieldProcessorEx(&v151);
      while ( CurrentPrcb->PrcbLock );
      v125 = v79->SchedulerAssist;
      if ( v125 )
      {
        if ( v79->NestingLevel <= 1u )
        {
          v126 = v125[5];
          v125[5] = v126 + 1;
          if ( v126 == -1 )
            goto LABEL_237;
        }
      }
    }
    LODWORD(v58) = v165;
  }
  if ( v10 && v7 )
  {
    v63 = 1;
  }
  else
  {
    v63 = 1;
    if ( (unsigned int)(v58 + 1) <= 0xE )
      v63 = v58 + 1;
  }
  CurrentPrcb->QueueIndex = v63;
  while ( 1 )
  {
LABEL_10:
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread )
    {
      if ( v4 )
        *(_BYTE *)(CurrentThread + 565) = 0;
LABEL_29:
      if ( !NextThread )
        goto LABEL_13;
      goto LABEL_30;
    }
    if ( !v4 || (NextThread = KiSelectReadyThread((unsigned int)*(char *)(CurrentThread + 195), CurrentPrcb)) == 0 )
    {
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x1000) == 0 )
        goto LABEL_13;
      if ( (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
        goto LABEL_13;
      }
      KiSelectNextThread(CurrentPrcb, &v140);
      NextThread = (__int64)CurrentPrcb->NextThread;
      goto LABEL_29;
    }
LABEL_30:
    if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread
      && *(_QWORD *)(NextThread + 568) != KiCpuSetSequence
      && (*(_DWORD *)(NextThread + 116) & 8) == 0 )
    {
      if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(CurrentThread, CurrentPrcb), v128 = 1, !IsThreadRankNonZero) )
      {
        v128 = *(_BYTE *)(CurrentThread + 195);
      }
      *CurrentPrcb->PriorityState = v128;
      if ( CurrentPrcb->SchedulerAssist )
      {
        v129 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
          v129 = (unsigned int)v128;
        KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v129, 0LL);
      }
      if ( CurrentPrcb->NextThread == (_KTHREAD *)NextThread )
        KiSelectNextThread(CurrentPrcb, &v140);
      KiInsertDeferredReadyList(&v140, NextThread);
      NextThread = 0LL;
    }
LABEL_13:
    if ( !v140 )
      break;
    if ( NextThread
      && (_KTHREAD *)NextThread != CurrentPrcb->IdleThread
      && CurrentPrcb->NextThread != (_KTHREAD *)NextThread )
    {
      if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
        || (v130 = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v131 = 1, !v130) )
      {
        v131 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v131;
      v132 = CurrentPrcb->SchedulerAssist;
      if ( v132 )
      {
        if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread )
          v133 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v133 = (unsigned int)v131;
        KiSetSchedulerAssistPriority(v132, v133, 0LL);
        v132 = CurrentPrcb->SchedulerAssist;
      }
      IdleThread = CurrentPrcb->IdleThread;
      CurrentPrcb->NextThread = (_KTHREAD *)NextThread;
      if ( v132 )
        v132[16] = NextThread == (_QWORD)IdleThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 3;
    }
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    KiReadyDeferredReadyList(CurrentPrcb, &v140);
    v136 = KeGetCurrentPrcb();
    v152 = 0;
    v140 = 0LL;
    while ( 1 )
    {
      LOBYTE(v135) = 1;
      KiSetVpThreadSpinLockCount(v136, v135);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v136, 0LL);
      do
        KeYieldProcessorEx(&v152);
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( !NextThread || (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    return KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  }
  else
  {
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
    _enable();
    if ( (*(_BYTE *)(NextThread + 2) & 4) == 0 || (v67 = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v16 = 1, !v67) )
      v16 = *(_BYTE *)(NextThread + 195);
    *CurrentPrcb->PriorityState = v16;
    if ( CurrentPrcb->SchedulerAssist )
    {
      v137 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
        v137 = (unsigned int)v16;
      KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v137, 0LL);
    }
    CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
    if ( *(_BYTE *)(NextThread + 388) == 1 )
      *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                    - *(_DWORD *)(NextThread + 436)
                                    + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(NextThread + 388) = 2;
    *(_BYTE *)(CurrentThread + 643) = 30;
    KiQueueReadyThread(CurrentPrcb, CurrentThread);
    KiAbProcessContextSwitch(CurrentThread, 1LL);
    IsUserVaAccessAllowed = KeIsUserVaAccessAllowed();
    if ( KeSmapEnabled )
      __asm { stac }
    LOBYTE(v18) = 1;
    result = KiSwapContext(CurrentThread, NextThread, v18);
    if ( !IsUserVaAccessAllowed )
    {
      if ( KeSmapEnabled )
        __asm { clac }
    }
  }
  return result;
}
