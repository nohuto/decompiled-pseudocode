/*
 * XREFs of KiQuantumEnd @ 0x1400D00A0
 * Callers:
 *     KiIdleLoop @ 0x1401C0680 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x1401C41B0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredReadyList @ 0x1400ACB08 (KiInsertDeferredReadyList.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400BC720 (KiSetVpThreadSpinLockCount.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400D0D34 (KiCheckPreferredHeteroProcessor.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400D0D74 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400D0EC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1400D0F10 (KiComputeNewPriority.c)
 *     KiShouldScanSharedReadyQueue @ 0x1400D0FA0 (KiShouldScanSharedReadyQueue.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0FC4 (KiGroupSchedulingQuantumEnd.c)
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiSetPriorityBoost @ 0x140117558 (KiSetPriorityBoost.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140117848 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1401604C8 (KiRemoveThreadFromReadyQueue.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1401B4B10 (KiReadGuestSchedulerAssistPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     EtwTraceAntiStarvationBoost @ 0x1401B72CC (EtwTraceAntiStarvationBoost.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiQuantumEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *CurrentThread; // r15
  volatile unsigned __int64 CycleTime; // r14
  struct _KPRCB *v7; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  int SpareByte1; // edi
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KPRCB *v16; // rdi
  char v17; // si
  _DWORD *v18; // rcx
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  struct _KPRCB *v22; // rdx
  __int64 v23; // r9
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  int v26; // eax
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  char v29; // r14
  int v30; // r13d
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  struct _KPRCB *v32; // rdi
  volatile signed __int64 *ReadyListHead; // r13
  unsigned __int8 QueueIndex; // r12
  _DWORD *v35; // rcx
  int v36; // eax
  volatile signed __int64 *v37; // rbx
  _DWORD *v38; // rcx
  int v39; // eax
  _DWORD *v40; // rcx
  int v41; // eax
  int v42; // r15d
  int v43; // r15d
  struct _KPRCB *v44; // rcx
  int v45; // eax
  char v46; // cl
  int v47; // edx
  unsigned int v48; // r15d
  unsigned int v49; // ecx
  unsigned int v50; // r12d
  volatile signed __int64 *v51; // r14
  volatile signed __int64 *v52; // rsi
  volatile signed __int64 *v53; // rdi
  bool v54; // cl
  bool v55; // zf
  int GuestSchedulerAssistPriority; // eax
  __int64 v57; // rdx
  int v58; // r11d
  struct _KPRCB *v59; // rcx
  int v60; // eax
  _QWORD *v61; // r14
  int v62; // r13d
  __int64 v63; // rdi
  char v64; // r15
  __int64 v65; // r12
  struct _KPRCB *v66; // rsi
  _DWORD *v67; // rcx
  int v68; // eax
  _DWORD *v69; // rcx
  int v70; // eax
  int v71; // esi
  __int64 v72; // r8
  unsigned __int64 v73; // r9
  unsigned int ReadySummary; // r15d
  int v75; // r15d
  unsigned int v76; // r12d
  _LIST_ENTRY *DispatcherReadyListHead; // r13
  unsigned int v78; // r15d
  unsigned int v79; // ecx
  int v80; // r15d
  unsigned int v81; // r12d
  _LIST_ENTRY *v82; // r14
  _LIST_ENTRY *Flink; // rsi
  __int64 p_Blink; // rdi
  bool v85; // cl
  int v86; // eax
  int v87; // r11d
  struct _KPRCB *v88; // rsi
  unsigned int v89; // edi
  _DWORD *v90; // rcx
  int v91; // eax
  _DWORD *v92; // rcx
  int v93; // eax
  _QWORD *v94; // r14
  struct _KPRCB *v95; // rcx
  __int64 v96; // rdx
  int v97; // eax
  __int64 v98; // rdi
  char v99; // r15
  __int64 v100; // r12
  struct _KPRCB *v101; // rsi
  _DWORD *v102; // rcx
  int v103; // eax
  _DWORD *v104; // rcx
  int v105; // eax
  int v106; // esi
  __int64 v107; // r8
  unsigned __int64 v108; // r9
  struct _KPRCB *v109; // rdi
  _DWORD *v110; // rcx
  int v111; // eax
  _DWORD *v112; // rcx
  int v113; // eax
  int v114; // ecx
  __int64 v115; // rsi
  _KTHREAD *NextThread; // rdi
  char IsThreadRankNonZero; // al
  char v118; // cl
  __int64 v119; // rdx
  __int64 v120; // r8
  unsigned __int64 v121; // r9
  struct _KPRCB *v122; // rdi
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r8
  struct _KPRCB *v126; // rcx
  _DWORD *v127; // rdx
  int v128; // eax
  int v129; // [rsp+20h] [rbp-59h]
  int v130; // [rsp+24h] [rbp-55h]
  unsigned int v131; // [rsp+28h] [rbp-51h]
  int v132; // [rsp+2Ch] [rbp-4Dh]
  char v133; // [rsp+2Ch] [rbp-4Dh]
  _QWORD *v134; // [rsp+30h] [rbp-49h] BYREF
  int v135; // [rsp+38h] [rbp-41h]
  volatile signed __int64 *v136; // [rsp+40h] [rbp-39h]
  int v137; // [rsp+48h] [rbp-31h] BYREF
  int v138; // [rsp+4Ch] [rbp-2Dh] BYREF
  int v139; // [rsp+50h] [rbp-29h] BYREF
  int v140; // [rsp+54h] [rbp-25h]
  int v141; // [rsp+58h] [rbp-21h] BYREF
  int v142; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v143; // [rsp+60h] [rbp-19h] BYREF
  int v144; // [rsp+64h] [rbp-15h] BYREF
  struct _KPRCB *v145; // [rsp+68h] [rbp-11h]
  _QWORD *v146; // [rsp+70h] [rbp-9h] BYREF
  _QWORD *v147; // [rsp+78h] [rbp-1h] BYREF
  __int64 v148; // [rsp+80h] [rbp+7h]
  unsigned int v149; // [rsp+88h] [rbp+Fh]
  unsigned int v150; // [rsp+8Ch] [rbp+13h]
  unsigned __int8 v151; // [rsp+E0h] [rbp+67h]
  unsigned int v152; // [rsp+E8h] [rbp+6Fh]
  int v153; // [rsp+F0h] [rbp+77h]
  int v154; // [rsp+F0h] [rbp+77h]
  unsigned int v155; // [rsp+F8h] [rbp+7Fh]
  int v156; // [rsp+F8h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  v151 = 0;
  v145 = CurrentPrcb;
  CurrentThread = CurrentPrcb->CurrentThread;
  v148 = (__int64)CurrentThread;
  if ( CurrentThread != CurrentPrcb->IdleThread )
  {
    CycleTime = CurrentThread->CycleTime;
    if ( CycleTime >= CurrentThread->QuantumTarget || CurrentThread->SystemHeteroCpuPolicy )
    {
      v7 = KeGetCurrentPrcb();
      v137 = 0;
      while ( 1 )
      {
        SchedulerAssist = v7->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v7->NestingLevel <= 1u )
          {
            v9 = SchedulerAssist[5];
            SchedulerAssist[5] = v9 + 1;
            if ( v9 == -1 )
              KiRemoveSystemWorkPriorityKick(v7);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        v10 = v7->SchedulerAssist;
        if ( v10 )
        {
          if ( v7->NestingLevel <= 1u )
          {
            v11 = v10[5] - 1;
            v10[5] = v11;
            if ( !v11 )
              KiRemoveSystemWorkPriorityKick(v7);
          }
        }
        do
          KeYieldProcessorEx(&v137, a2, a3);
        while ( CurrentThread->ThreadLock );
      }
      if ( CycleTime >= CurrentThread->QuantumTarget )
      {
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x100) != 0 && CurrentThread->Priority >= 16 )
        {
          SpareByte1 = 127;
        }
        else
        {
          LOBYTE(a2) = 1;
          v13 = KiComputeNewPriority(CurrentThread, a2);
          v16 = KeGetCurrentPrcb();
          v17 = v13;
          v138 = 0;
          while ( 1 )
          {
            v18 = v16->SchedulerAssist;
            if ( v18 )
            {
              if ( v16->NestingLevel <= 1u )
              {
                v19 = v18[5];
                v18[5] = v19 + 1;
                if ( v19 == -1 )
                  KiRemoveSystemWorkPriorityKick(v16);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
              break;
            v20 = v16->SchedulerAssist;
            if ( v20 )
            {
              if ( v16->NestingLevel <= 1u )
              {
                v21 = v20[5] - 1;
                v20[5] = v21;
                if ( !v21 )
                  KiRemoveSystemWorkPriorityKick(v16);
              }
            }
            do
              KeYieldProcessorEx(&v138, v14, v15);
            while ( CurrentPrcb->PrcbLock );
          }
          v22 = 0LL;
          if ( !CurrentPrcb->NextThread )
            v22 = CurrentPrcb;
          if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread, v22, 0LL) )
          {
            LOBYTE(v23) = CurrentPrcb->NextThread == 0LL;
            KiUpdateThreadPriority(CurrentPrcb, CurrentThread, (unsigned int)v17, v23);
          }
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          if ( v25 )
          {
            if ( v24->NestingLevel <= 1u )
            {
              v26 = v25[5] - 1;
              v25[5] = v26;
              if ( !v26 )
                KiRemoveSystemWorkPriorityKick(v24);
            }
          }
          SpareByte1 = CurrentThread->SchedulerApc.SpareByte1;
          v151 = 1;
          KiTryScheduleNextForegroundBoost(CurrentThread);
        }
        v27 = CycleTime + (unsigned int)(SpareByte1 * KiCyclesPerClockQuantum);
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
        CurrentThread->QuantumTarget = v27;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)&CurrentThread->116, 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v28 = *(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192);
          if ( (*(_QWORD *)(v28 + 8) & *(_QWORD *)(v28 + 80) & CurrentThread->Affinity.Mask) != 0 )
          {
            CurrentThread->MiscFlags |= 0x80u;
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
          }
        }
      }
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL) )
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
      KiReleaseThreadLockSafe(CurrentThread);
    }
  }
  v130 = 16;
  v29 = 0;
  v129 = 10;
  v30 = MEMORY[0xFFFFF78000000320];
  v132 = MEMORY[0xFFFFF78000000320];
  if ( (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0 )
  {
    v29 = 1;
    if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    {
      SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
      v136 = (volatile signed __int64 *)SharedReadyQueue;
      if ( (SharedReadyQueue->ReadySummary & 0x7FFE) != 0 )
      {
        v32 = KeGetCurrentPrcb();
        ReadyListHead = (volatile signed __int64 *)SharedReadyQueue->ReadyListHead;
        QueueIndex = SharedReadyQueue->QueueIndex;
        v140 = QueueIndex;
        v139 = 0;
        v35 = v32->SchedulerAssist;
        if ( v35 )
        {
          if ( v32->NestingLevel <= 1u )
          {
            v36 = v35[5];
            v35[5] = v36 + 1;
            if ( v36 == -1 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        v37 = v136;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v37, 0LL) )
        {
          v38 = v32->SchedulerAssist;
          if ( v38 )
          {
            if ( v32->NestingLevel <= 1u )
            {
              v39 = v38[5] - 1;
              v38[5] = v39;
              if ( !v39 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
          do
            KeYieldProcessorEx(&v139, a2, a3);
          while ( *v37 );
          v40 = v32->SchedulerAssist;
          if ( v40 )
          {
            if ( v32->NestingLevel <= 1u )
            {
              v41 = v40[5];
              v40[5] = v41 + 1;
              if ( v41 == -1 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
        }
        v42 = *((_DWORD *)v37 + 2);
        CurrentPrcb = v145;
        v43 = v42 & 0x7FFE;
        if ( v43 )
        {
          v47 = 16;
          v153 = 16;
          v146 = 0LL;
          v135 = MEMORY[0xFFFFF78000000320] - 300;
          a3 = 10LL;
          v48 = __ROR4__(v43, QueueIndex);
          v155 = 10;
          do
          {
            _BitScanForward(&v49, v48);
            v149 = v49;
            v50 = ((_BYTE)v49 + QueueIndex) & 0x1F;
            v48 ^= 1 << v49;
            v51 = &ReadyListHead[2 * v50];
            v131 = v50;
            v52 = (volatile signed __int64 *)*v51;
            do
            {
              v53 = v52 - 27;
              v54 = 0;
              v55 = (*(_DWORD *)(v52 - 12) & 0x400000) == 0;
              v52 = (volatile signed __int64 *)*v52;
              if ( !v55 )
              {
                GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v53);
                v47 = v153;
                a3 = v155;
                v54 = GuestSchedulerAssistPriority != *((char *)v53 + 195);
              }
              if ( v135 - *((_DWORD *)v53 + 109) > 0 || v54 )
              {
                KiRemoveThreadFromSharedReadyQueue(v136, v53, v50);
                KiInsertDeferredReadyList((__int64)&v146, v57);
                a3 = v155;
                v47 = v153;
                if ( v58 > 0 )
                  a3 = --v155;
              }
              v153 = --v47;
            }
            while ( v52 != v51 && (_DWORD)a3 && v47 );
            QueueIndex = v140;
            ReadyListHead = v136 + 2;
          }
          while ( v48 && (_DWORD)a3 && v47 );
          _InterlockedAnd64(v136, 0LL);
          v59 = KeGetCurrentPrcb();
          CurrentPrcb = v145;
          a2 = (__int64)v59->SchedulerAssist;
          if ( a2 )
          {
            if ( v59->NestingLevel <= 1u )
            {
              v60 = *(_DWORD *)(a2 + 20) - 1;
              *(_DWORD *)(a2 + 20) = v60;
              if ( !v60 )
                KiRemoveSystemWorkPriorityKick(v59);
            }
          }
          v61 = v146;
          if ( v146 )
          {
            v62 = v135;
            do
            {
              v63 = (__int64)(v61 - 27);
              v64 = 0;
              v65 = *(v61 - 18);
              v66 = KeGetCurrentPrcb();
              v61 = (_QWORD *)*v61;
              v141 = 0;
              while ( 1 )
              {
                v67 = v66->SchedulerAssist;
                if ( v67 )
                {
                  if ( v66->NestingLevel <= 1u )
                  {
                    v68 = v67[5];
                    v67[5] = v68 + 1;
                    if ( v68 == -1 )
                      KiRemoveSystemWorkPriorityKick(v66);
                  }
                }
                if ( !_interlockedbittestandset64((volatile signed __int32 *)(v63 + 64), 0LL) )
                  break;
                v69 = v66->SchedulerAssist;
                if ( v69 )
                {
                  if ( v66->NestingLevel <= 1u )
                  {
                    v70 = v69[5] - 1;
                    v69[5] = v70;
                    if ( !v70 )
                      KiRemoveSystemWorkPriorityKick(v66);
                  }
                }
                do
                  KeYieldProcessorEx(&v141, a2, a3);
                while ( *(_QWORD *)(v63 + 64) );
              }
              v71 = *(char *)(v63 + 195);
              if ( v62 - *(_DWORD *)(v63 + 436) > 0 && v71 < 15 )
              {
                LOBYTE(a3) = 15;
                v64 = 1;
                KiSetPriorityBoost(0LL, v63, a3, v65);
              }
              KiReleaseThreadLockSafe(v63);
              if ( v64 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
                EtwTraceAntiStarvationBoost(v63, (unsigned int)v71);
              KiDeferredReadyThread((__int64)CurrentPrcb, v63, v72, v73);
            }
            while ( v61 );
          }
          if ( v153 && v155 )
          {
            v46 = 1;
            v29 = 1;
          }
          else
          {
            v46 = 1;
            v29 = 1;
            if ( v131 + 1 <= 0xE )
              v46 = v131 + 1;
          }
        }
        else
        {
          _InterlockedAnd64(v136, 0LL);
          v44 = KeGetCurrentPrcb();
          a2 = (__int64)v44->SchedulerAssist;
          if ( a2 )
          {
            if ( v44->NestingLevel <= 1u )
            {
              v45 = *(_DWORD *)(a2 + 20) - 1;
              *(_DWORD *)(a2 + 20) = v45;
              if ( !v45 )
                KiRemoveSystemWorkPriorityKick(v44);
            }
          }
          v46 = 1;
        }
        CurrentThread = (_KTHREAD *)v148;
        v30 = v132;
        *((_BYTE *)v136 + 594) = v46;
      }
    }
  }
  v134 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread, v151, &v134);
  }
  else
  {
    v88 = KeGetCurrentPrcb();
    v89 = 0;
    while ( 1 )
    {
      v90 = v88->SchedulerAssist;
      if ( v90 )
      {
        if ( v88->NestingLevel <= 1u )
        {
          v91 = v90[5];
          v90[5] = v91 + 1;
          if ( v91 == -1 )
            KiRemoveSystemWorkPriorityKick(v88);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v92 = v88->SchedulerAssist;
      if ( v92 )
      {
        if ( v88->NestingLevel <= 1u )
        {
          v93 = v92[5] - 1;
          v92[5] = v93;
          if ( !v93 )
            KiRemoveSystemWorkPriorityKick(v88);
        }
      }
      do
      {
        if ( (++v89 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v92, a2, a3) )
        {
          HvlNotifyLongSpinWait(v89);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( v29 )
  {
    ReadySummary = CurrentPrcb->ReadySummary;
    CurrentPrcb->ReadyScanTick = v30 + 75;
    v75 = ReadySummary & 0x7FFE;
    if ( v75 )
    {
      v76 = CurrentPrcb->QueueIndex;
      DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
      v133 = v76;
      v154 = MEMORY[0xFFFFF78000000320] - 300;
      v78 = __ROR4__(v75, v76);
      v147 = 0LL;
      do
      {
        _BitScanForward(&v79, v78);
        v150 = v79;
        v156 = v78 ^ (1 << v79);
        v80 = v130;
        v81 = ((_BYTE)v79 + (_BYTE)v76) & 0x1F;
        v82 = &DispatcherReadyListHead[v81];
        v152 = v81;
        Flink = v82->Flink;
        do
        {
          p_Blink = (__int64)&Flink[-14].Blink;
          v85 = 0;
          v55 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
          Flink = Flink->Flink;
          if ( !v55 )
            v85 = (unsigned int)KiReadGuestSchedulerAssistPriority(p_Blink) != *(char *)(p_Blink + 195);
          if ( v154 - *(_DWORD *)(p_Blink + 436) > 0 || v85 )
          {
            KiRemoveThreadFromReadyQueue(CurrentPrcb, p_Blink + 216, v81);
            KiInsertDeferredReadyList((__int64)&v147, p_Blink);
            v86 = v129;
            if ( v87 > 0 )
              v86 = --v129;
          }
          else
          {
            v86 = v129;
          }
          --v80;
        }
        while ( Flink != v82 && v86 && v80 );
        LOBYTE(v76) = v133;
        DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
        v130 = v80;
        v78 = v156;
      }
      while ( v156 && v86 && v130 );
      v94 = v147;
      if ( v147 )
      {
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        v95 = KeGetCurrentPrcb();
        v96 = (__int64)v95->SchedulerAssist;
        if ( v96 )
        {
          if ( v95->NestingLevel <= 1u )
          {
            v97 = *(_DWORD *)(v96 + 20) - 1;
            *(_DWORD *)(v96 + 20) = v97;
            if ( !v97 )
              KiRemoveSystemWorkPriorityKick(v95);
          }
        }
        do
        {
          v98 = (__int64)(v94 - 27);
          v99 = 0;
          v100 = *(v94 - 18);
          v101 = KeGetCurrentPrcb();
          v94 = (_QWORD *)*v94;
          v142 = 0;
          while ( 1 )
          {
            v102 = v101->SchedulerAssist;
            if ( v102 )
            {
              if ( v101->NestingLevel <= 1u )
              {
                v103 = v102[5];
                v102[5] = v103 + 1;
                if ( v103 == -1 )
                  KiRemoveSystemWorkPriorityKick(v101);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v98 + 64), 0LL) )
              break;
            v104 = v101->SchedulerAssist;
            if ( v104 )
            {
              if ( v101->NestingLevel <= 1u )
              {
                v105 = v104[5] - 1;
                v104[5] = v105;
                if ( !v105 )
                  KiRemoveSystemWorkPriorityKick(v101);
              }
            }
            do
              KeYieldProcessorEx(&v142, v96, a3);
            while ( *(_QWORD *)(v98 + 64) );
          }
          v106 = *(char *)(v98 + 195);
          if ( v154 - *(_DWORD *)(v98 + 436) > 0 && v106 < 15 )
          {
            LOBYTE(a3) = 15;
            v99 = 1;
            KiSetPriorityBoost(0LL, v98, a3, v100);
          }
          KiReleaseThreadLockSafe(v98);
          if ( v99 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
            EtwTraceAntiStarvationBoost(v98, (unsigned int)v106);
          KiDeferredReadyThread((__int64)CurrentPrcb, v98, v107, v108);
        }
        while ( v94 );
        v109 = KeGetCurrentPrcb();
        v143 = 0;
        while ( 1 )
        {
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
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          v112 = v109->SchedulerAssist;
          if ( v112 )
          {
            if ( v109->NestingLevel <= 1u )
            {
              v113 = v112[5] - 1;
              v112[5] = v113;
              if ( !v113 )
                KiRemoveSystemWorkPriorityKick(v109);
            }
          }
          do
            KeYieldProcessorEx(&v143, v96, a3);
          while ( CurrentPrcb->PrcbLock );
        }
      }
      if ( v130 && v129 )
      {
        v114 = 1;
      }
      else
      {
        v114 = 1;
        if ( v152 + 1 <= 0xE )
          v114 = v152 + 1;
      }
      CurrentPrcb->QueueIndex = v114;
    }
  }
  v115 = v148;
  while ( 1 )
  {
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread )
    {
      if ( v151 )
        *(_BYTE *)(v115 + 565) = 0;
      goto LABEL_208;
    }
    if ( !v151 || (NextThread = (_KTHREAD *)KiSelectReadyThread(*(char *)(v115 + 195), (__int64)CurrentPrcb, a3)) == 0LL )
    {
      if ( (*(_DWORD *)(v115 + 120) & 0x1000) == 0 )
        goto LABEL_222;
      if ( (_KTHREAD *)v115 == CurrentPrcb->IdleThread )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(v115 + 120), 0xCu);
        goto LABEL_222;
      }
      KiSelectNextThread(CurrentPrcb, &v134);
      NextThread = CurrentPrcb->NextThread;
LABEL_208:
      if ( !NextThread )
        goto LABEL_222;
    }
    if ( NextThread != CurrentPrcb->IdleThread
      && NextThread->AffinityVersion != KiCpuSetSequence
      && (NextThread->MiscFlags & 8) == 0 )
    {
      if ( (*(_BYTE *)(v115 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(v115, CurrentPrcb), v118 = 1, !IsThreadRankNonZero) )
      {
        v118 = *(_BYTE *)(v115 + 195);
      }
      *CurrentPrcb->PriorityState = v118;
      if ( CurrentPrcb->SchedulerAssist )
      {
        v119 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)v115 != CurrentPrcb->IdleThread )
          v119 = (unsigned int)v118;
        KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v119, 0LL, a4);
      }
      if ( CurrentPrcb->NextThread == NextThread )
        KiSelectNextThread(CurrentPrcb, &v134);
      KiInsertDeferredReadyList((__int64)&v134, (__int64)NextThread);
      NextThread = 0LL;
    }
LABEL_222:
    if ( !v134 )
      break;
    if ( NextThread && NextThread != CurrentPrcb->IdleThread && CurrentPrcb->NextThread != NextThread )
      KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 2LL, 3LL);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v134, v120, v121);
    v122 = KeGetCurrentPrcb();
    v144 = 0;
    v134 = 0LL;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)v122, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)v122, 0);
      do
        KeYieldProcessorEx(&v144, v123, v124);
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( !NextThread || (_KTHREAD *)v115 == CurrentPrcb->IdleThread )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v126 = KeGetCurrentPrcb();
    v127 = v126->SchedulerAssist;
    if ( v127 )
    {
      if ( v126->NestingLevel <= 1u )
      {
        v128 = v127[5] - 1;
        v127[5] = v128;
        if ( !v128 )
          KiRemoveSystemWorkPriorityKick(v126);
      }
    }
  }
  else
  {
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, v115, 0LL);
    _enable();
    KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 2LL, 2LL);
    *(_BYTE *)(v115 + 643) = 30;
    KiQueueReadyThread(CurrentPrcb, v115);
    KiAbProcessContextSwitch(v115, 1);
    LOBYTE(v125) = 1;
    KiSwapContext(v115, NextThread, v125);
  }
}
