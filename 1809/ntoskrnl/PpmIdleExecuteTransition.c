/*
 * XREFs of PpmIdleExecuteTransition @ 0x14005DC80
 * Callers:
 *     PoIdle @ 0x14005D6B0 (PoIdle.c)
 * Callees:
 *     PpmGetExitSamplingCountdown @ 0x140005FFC (PpmGetExitSamplingCountdown.c)
 *     PpmExitCoordinatedIdle @ 0x14005F330 (PpmExitCoordinatedIdle.c)
 *     PpmUpdatePerformanceFeedback @ 0x14005FA00 (PpmUpdatePerformanceFeedback.c)
 *     KeAccumulateTicks @ 0x1400601D0 (KeAccumulateTicks.c)
 *     KeResumeClockTimerFromIdle @ 0x140060910 (KeResumeClockTimerFromIdle.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400EDAF0 (KeRemoveProcessorAffinityEx.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     KePrepareClockTimerForIdle @ 0x1400FC8F0 (KePrepareClockTimerForIdle.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1401755E0 (PpmPerfArbitratorApplyProcessorState.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1401BD290 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KdCallPowerHandlers @ 0x14028C048 (KdCallPowerHandlers.c)
 *     KdPowerTransitionEx @ 0x14028C3F0 (KdPowerTransitionEx.c)
 *     KeQueryWakeSource @ 0x14028F10C (KeQueryWakeSource.c)
 *     KeWakeProcessor @ 0x140293E80 (KeWakeProcessor.c)
 *     KeUpdatePendingQosRequest @ 0x1402981E4 (KeUpdatePendingQosRequest.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402D4BC0 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1402D50A0 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmIdleSetSynchronizationState @ 0x1402D5350 (PpmIdleSetSynchronizationState.c)
 *     PpmIdleTransitionStall @ 0x1402D5508 (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateConcurrency @ 0x1402D55A8 (PpmIdleUpdateConcurrency.c)
 *     PpmTestAndLockProcessor @ 0x1402D5EB8 (PpmTestAndLockProcessor.c)
 *     PpmPerfFeedbackCounterUpdate @ 0x1402DB548 (PpmPerfFeedbackCounterUpdate.c)
 *     PpmEventEnterPlatformIdleState @ 0x1402E5874 (PpmEventEnterPlatformIdleState.c)
 */

__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR BugCheckParameter4,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rbp
  char v9; // r12
  ULONG_PTR v10; // r14
  int v11; // r13d
  unsigned __int16 *v12; // r15
  unsigned int v13; // esi
  __int64 v14; // rbx
  unsigned int v15; // edi
  _BYTE *v16; // rbx
  __int64 v17; // rcx
  __int64 Prcb; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  unsigned __int16 v21; // bx
  unsigned __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned __int8 (__fastcall *v26)(__int64); // rax
  unsigned int v27; // edi
  unsigned __int8 v28; // bl
  unsigned __int64 v29; // rdx
  char v30; // bp
  char v31; // si
  bool v32; // di
  __int64 v33; // rbx
  unsigned __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // eax
  int v37; // eax
  unsigned __int8 v38; // r11
  unsigned int v39; // edi
  __int64 v40; // r10
  __int64 v41; // rbp
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rbx
  int v44; // eax
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  signed __int64 v47; // rax
  __int64 v48; // rbx
  char v49; // di
  signed __int64 v50; // rsi
  int v51; // r8d
  unsigned __int16 v52; // ax
  unsigned __int64 *v53; // r9
  __int64 v54; // r10
  unsigned __int64 v55; // rdx
  int v56; // eax
  int v57; // eax
  int ExitSamplingCountdown; // eax
  char v59; // r9
  unsigned __int8 v60; // r11
  struct _KPRCB *CurrentPrcb; // rbx
  int v62; // esi
  bool v63; // al
  KSPIN_LOCK *v64; // rax
  KSPIN_LOCK *v65; // rcx
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // rsi
  unsigned __int64 v68; // rbx
  unsigned __int64 v69; // rcx
  __int64 (__fastcall *v70)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  __int64 v71; // rsi
  __int64 v72; // rsi
  __int64 v73; // rbx
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rdx
  int v77; // eax
  __int16 v78; // cx
  unsigned __int8 v79; // bl
  char v80; // r8
  struct _KPRCB *v91; // rbx
  __int64 Number; // rax
  __int64 v93; // rdx
  unsigned __int64 v94; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // rax
  unsigned __int16 v98; // bx
  __int16 v99; // di
  unsigned __int16 v100; // ax
  __int64 v101; // rdx
  signed __int16 v102; // tt
  bool v103; // zf
  __int64 v104; // rdx
  signed __int16 v105; // tt
  __int16 v106; // ax
  struct _KPRCB *v107; // rax
  __int64 v108; // rcx
  unsigned __int64 v109; // rcx
  unsigned __int64 v110; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v112; // rsi
  bool v113; // di
  __int64 v114; // rax
  ULONG_PTR v115; // rbx
  unsigned __int64 v116; // rbx
  unsigned __int64 v117; // rcx
  unsigned __int8 v118; // al
  int v119; // eax
  int v120; // ecx
  int *v121; // rcx
  int v122; // r8d
  __int64 v123; // rbx
  unsigned int v124; // eax
  __int64 v125; // r8
  unsigned __int16 v126; // di
  unsigned __int64 v127; // rsi
  __int64 v128; // r14
  unsigned int v129; // ecx
  unsigned __int64 v130; // rdx
  unsigned int v131; // ebp
  __int64 v132; // rbx
  __int64 v133; // r12
  unsigned __int32 v134; // eax
  unsigned __int32 v135; // r8d
  signed __int32 v136; // ecx
  unsigned __int16 v137; // r12
  int v138; // r14d
  __int64 result; // rax
  volatile unsigned __int8 DeepSleep; // [rsp+50h] [rbp-2C8h]
  unsigned __int8 v141; // [rsp+51h] [rbp-2C7h]
  char v142; // [rsp+52h] [rbp-2C6h]
  char v143; // [rsp+53h] [rbp-2C5h]
  unsigned __int8 v144; // [rsp+54h] [rbp-2C4h]
  char v145; // [rsp+55h] [rbp-2C3h]
  char v146; // [rsp+56h] [rbp-2C2h]
  int v148; // [rsp+60h] [rbp-2B8h]
  signed __int64 v149; // [rsp+60h] [rbp-2B8h]
  unsigned int v151; // [rsp+68h] [rbp-2B0h]
  __int64 v152; // [rsp+70h] [rbp-2A8h]
  bool v153; // [rsp+78h] [rbp-2A0h]
  int v154; // [rsp+7Ch] [rbp-29Ch] BYREF
  int v155; // [rsp+80h] [rbp-298h]
  unsigned int v156; // [rsp+84h] [rbp-294h]
  int v157; // [rsp+88h] [rbp-290h]
  PKSPIN_LOCK SpinLock; // [rsp+90h] [rbp-288h]
  int v159; // [rsp+98h] [rbp-280h] BYREF
  __int64 v160; // [rsp+A0h] [rbp-278h]
  __int64 v161; // [rsp+A8h] [rbp-270h]
  _DWORD v162[2]; // [rsp+B0h] [rbp-268h] BYREF
  __int64 v163; // [rsp+B8h] [rbp-260h]
  __int64 QuadPart; // [rsp+C0h] [rbp-258h]
  __int64 v165; // [rsp+C8h] [rbp-250h]
  ULONG_PTR v166; // [rsp+D0h] [rbp-248h]
  _QWORD v167[2]; // [rsp+D8h] [rbp-240h] BYREF
  _QWORD v168[3]; // [rsp+E8h] [rbp-230h] BYREF
  int v169; // [rsp+100h] [rbp-218h]
  int v170; // [rsp+104h] [rbp-214h]
  __int64 v171; // [rsp+108h] [rbp-210h]
  _QWORD v172[3]; // [rsp+110h] [rbp-208h] BYREF
  __int64 v173; // [rsp+128h] [rbp-1F0h]
  int v174; // [rsp+130h] [rbp-1E8h]
  int v175; // [rsp+134h] [rbp-1E4h]
  int v176; // [rsp+138h] [rbp-1E0h]
  int v177; // [rsp+13Ch] [rbp-1DCh]
  unsigned int v178; // [rsp+140h] [rbp-1D8h] BYREF
  __int16 v179; // [rsp+144h] [rbp-1D4h]
  __int16 v180; // [rsp+146h] [rbp-1D2h]
  __int64 v181; // [rsp+148h] [rbp-1D0h]
  __int64 v182; // [rsp+150h] [rbp-1C8h] BYREF
  int v183; // [rsp+158h] [rbp-1C0h]
  int v184; // [rsp+15Ch] [rbp-1BCh]
  _QWORD v185[2]; // [rsp+160h] [rbp-1B8h] BYREF
  _QWORD v186[2]; // [rsp+170h] [rbp-1A8h] BYREF
  _DWORD v187[44]; // [rsp+180h] [rbp-198h] BYREF
  _BYTE v188[144]; // [rsp+230h] [rbp-E8h] BYREF
  int v189; // [rsp+310h] [rbp-8h]

  v8 = *(_QWORD *)(BugCheckParameter4 + 23808);
  v9 = 0;
  v10 = BugCheckParameter4;
  v166 = BugCheckParameter4;
  v171 = a4;
  v11 = 0;
  v160 = *(_QWORD *)(v8 + 488);
  v163 = v8 + 792;
  LODWORD(SpinLock) = 0;
  QuadPart = 0LL;
  v155 = 0;
  DeepSleep = 0;
  v142 = 0;
  v153 = 0;
  v145 = 0;
  v143 = 0;
  v154 = 7;
  v159 = -1;
  v152 = v8;
  v161 = v8 + 248LL * a2;
  v146 = 0;
  v148 = 0;
  if ( !a8 || *(_BYTE *)(v8 + 539) || *(_BYTE *)(v8 + 248LL * a2 + 1061) )
  {
    v141 = 0;
    v144 = 3;
  }
  else
  {
    v141 = 1;
    v144 = 4;
  }
  v156 = 3;
  if ( !*(_BYTE *)v8 )
  {
    if ( a8 )
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 23872, 1LL);
    v12 = (unsigned __int16 *)(v8 + 240);
    *(_QWORD *)(v8 + 240) = 1310721LL;
    memset((void *)(v8 + 248), 0, 0xA0uLL);
    v13 = *(_DWORD *)(v8 + 548);
    v14 = *(_QWORD *)(v8 + 552);
    v168[1] = 0LL;
    v168[2] = 0LL;
    v167[0] = 1LL;
    v168[0] = 65537LL;
    v15 = 0;
    v167[1] = v168;
    if ( v13 )
    {
      v16 = (_BYTE *)(v14 + 4);
      while ( 1 )
      {
        if ( *v16 != 0xFF )
        {
          v17 = *((unsigned int *)v16 - 1);
          HIDWORD(v168[0]) = (unsigned __int8)*v16;
          Prcb = KeGetPrcb(v17);
          v148 = PpmTestAndLockProcessor(Prcb, v8 + 240, v167);
          v11 = v148;
          if ( v148 < 0 )
            break;
        }
        ++v15;
        v16 += 8;
        if ( v15 >= v13 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      v20 = *(_QWORD *)(v8 + 248);
      v21 = 0;
LABEL_15:
      while ( 1 )
      {
        v19 = v12 ? *v12 : (unsigned int)v21 + 1;
        if ( !v20 )
          break;
LABEL_21:
        _BitScanForward64(&v22, v20);
        v20 &= ~(1LL << v22);
        v169 = v22;
        v23 = KeGetPrcb((unsigned int)KiProcessorNumberToIndexMappingTable[64 * v21 + (unsigned __int8)v22]);
        v172[2] = v23;
        v24 = *(_QWORD *)(v23 + 23808);
        v173 = 0LL;
        v172[0] = 0LL;
        v25 = *(_QWORD *)(v24 + 488);
        v172[1] = PopIdleTransitionTimeout;
        v26 = *(unsigned __int8 (__fastcall **)(__int64))(v24 + 472);
        BYTE4(v173) = 1;
        if ( !v26(v25) )
        {
          while ( (*(_DWORD *)(v23 + 23872) & 0xFF000000) == 0x5000000 )
          {
            PpmIdleTransitionStall(v172);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v24 + 472))(*(_QWORD *)(v24 + 488)) )
              goto LABEL_15;
          }
          v11 = -1073741782;
          goto LABEL_27;
        }
      }
      while ( ++v21 < (unsigned int)v19 )
      {
        v20 = *(_QWORD *)&v12[4 * v21 + 4];
        if ( v20 )
          goto LABEL_21;
      }
      v11 = 0;
LABEL_27:
      v148 = v11;
      v8 = v152;
    }
    if ( v11 < 0 )
    {
      if ( a8 )
        PpmIdleSetSynchronizationState(v10 + 23872, 0LL);
      v27 = 1;
      v156 = 1;
      goto LABEL_32;
    }
  }
  v12 = (unsigned __int16 *)(v8 + 240);
  v19 = 0LL;
  v29 = *(unsigned __int16 *)(v8 + 240);
  if ( (_WORD)v29 )
  {
    while ( !*(_QWORD *)&v12[4 * (unsigned __int16)v19 + 4] )
    {
      LOWORD(v19) = v19 + 1;
      if ( (unsigned __int16)v19 >= (unsigned __int16)v29 )
        goto LABEL_38;
    }
    *(_WORD *)(v8 + 48) |= 0x20u;
  }
LABEL_38:
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0LL;
  v165 = 2LL;
  if ( PpmPerfQosEnabled && PpmPerfQosManageIdleProcessors && *(_DWORD *)(v10 + 24304) != 2 )
  {
    v33 = *(_QWORD *)(v10 + 24184);
    if ( v33 && *(_BYTE *)(v33 + 121) )
    {
      v31 = 1;
      _disable();
      v32 = (v189 & 0x200) != 0;
      KxAcquireSpinLock((PKSPIN_LOCK)(v33 + 128));
    }
    if ( (*(_BYTE *)(v10 + 24312) & 4) == 0 )
    {
      v29 = __rdtsc();
      v19 = v29 - *(_QWORD *)(v10 + 24288);
      v34 = *(_QWORD *)(v10 + 24296);
      if ( v19 < v34 && !*(_BYTE *)(v10 + 24229) )
      {
        v35 = *(_DWORD *)(v10 + 236);
        v9 = 1;
        if ( (v35 & 0xC) == 0 )
        {
          v30 = 1;
          v36 = v35 & 0xFFFFFFF3 | 8;
LABEL_53:
          *(_DWORD *)(v10 + 236) = v36;
          KeUpdatePendingQosRequest(v10);
          goto LABEL_54;
        }
        goto LABEL_54;
      }
      *(_QWORD *)(v10 + 24288) = v29;
      *(_BYTE *)(v10 + 24229) = v19 >= 2 * v34;
    }
    *(_DWORD *)(v10 + 24304) = 2;
    LOBYTE(v29) = 1;
    PpmPerfArbitratorApplyProcessorState(v10, v29, 0LL);
    *(_DWORD *)(v10 + 236) = *(_DWORD *)(v10 + 236) & 0xFFFFFFFC | 2;
  }
  v37 = *(_DWORD *)(v10 + 236);
  if ( (v37 & 0xC) != 0 )
  {
    v36 = v37 & 0xFFFFFFF3;
    goto LABEL_53;
  }
LABEL_54:
  if ( v31 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v33 + 128));
    if ( v32 )
      _enable();
  }
  if ( !v30 )
  {
    v38 = v141;
    v39 = a2;
    v40 = v161;
    *(_BYTE *)(v10 + 23856) = v141;
    *(_DWORD *)(v10 + 23860) = a2;
    if ( a8 )
    {
      LOBYTE(v29) = 2;
      *(_BYTE *)(v10 + 23857) = *(_BYTE *)(v40 + 1058) == 0;
      PpmIdleSetSynchronizationState(v10 + 23872, v29);
    }
    v41 = v152;
    if ( v9 || *(_BYTE *)(v152 + 6) || *(_BYTE *)(v152 + 7) )
    {
      v42 = -1LL;
      v145 = 1;
      if ( *(_BYTE *)(v152 + 6) )
      {
        v43 = *(_QWORD *)(v152 + 520);
        if ( v43 <= KeMaximumIncrement )
          v43 = KeMaximumIncrement;
        v42 = a7 + KeMaximumIncrement + v43;
      }
      if ( *(_BYTE *)(v152 + 7) )
      {
        v44 = HIDWORD(PpmCurrentProfile[341 * dword_14041918C + 23]);
        if ( v42 >= a7 + (unsigned __int64)(unsigned int)(10 * v44) )
          v42 = a7 + (unsigned int)(10 * v44);
      }
      if ( v9 && v42 >= a7 + PpmPerfQosIdleExpirationTimeout )
        v42 = a7 + PpmPerfQosIdleExpirationTimeout;
      *(_QWORD *)(v10 + 23848) = v42;
      _interlockedbittestandset64(
        (volatile signed __int32 *)(*(_QWORD *)(v10 + 192) + 72LL),
        *(unsigned __int8 *)(v10 + 209));
    }
    if ( *(_BYTE *)(v40 + 1057) || v9 )
      goto LABEL_120;
    v45 = *(_QWORD *)(v10 + 200);
    v46 = *(_QWORD *)(v10 + 192);
    v142 = 1;
    _m_prefetchw((const void *)(v46 + 64));
    v47 = _InterlockedOr64((volatile signed __int64 *)(v46 + 64), v45);
    v48 = *(_QWORD *)(v10 + 23808);
    v49 = 0;
    v149 = v47;
    v155 = 0;
    v50 = v47;
    if ( v38 )
    {
      v155 = 1;
    }
    else if ( a3 == -1 )
    {
      v51 = 0;
      v52 = *(_WORD *)(v48 + 240);
      if ( v52 )
      {
        v53 = (unsigned __int64 *)(v48 + 248);
        v54 = v52;
        do
        {
          v55 = *v53++;
          v51 += (unsigned int)((0x101010101010101LL
                               * ((((v55 - ((v55 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v55 - ((v55 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                 + ((((v55 - ((v55 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                   + (((v55 - ((v55 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          --v54;
        }
        while ( v54 );
        v10 = v166;
        v50 = v149;
        v41 = v152;
      }
      if ( v51 != (_DWORD)KeNumberProcessors_0 - 1 )
        goto LABEL_95;
      v38 = v141;
      v155 = 2;
    }
    v56 = *(_DWORD *)(v48 + 12);
    v49 = 0;
    if ( !v56 || (v57 = v56 - 1, (*(_DWORD *)(v48 + 12) = v57) == 0) )
    {
      ExitSamplingCountdown = PpmGetExitSamplingCountdown();
      v49 = 0;
      *(_DWORD *)(v48 + 12) = ExitSamplingCountdown;
      if ( ExitSamplingCountdown )
        v49 = v59;
    }
    if ( v49 )
    {
      *(_BYTE *)(v48 + 3) = 1;
      if ( !v38 )
        goto LABEL_95;
      *(_QWORD *)(v48 + 56) = -1LL;
    }
    if ( v38 )
    {
LABEL_96:
      v11 = ((__int64 (__fastcall *)(_QWORD))off_1403FF480[0])((unsigned int)SpinLock);
      v148 = v11;
      if ( *(_DWORD *)(v10 + 11800) )
      {
        v11 = -2147483631;
LABEL_98:
        v148 = v11;
LABEL_99:
        if ( a8 )
          PpmIdleSetSynchronizationState(v10 + 23872, 0LL);
        v27 = 0;
        v156 = 0;
        v28 = 0;
        goto LABEL_237;
      }
      if ( v11 < 0 )
        goto LABEL_99;
      if ( *(_BYTE *)v41 == 1
        && (unsigned __int8)PpmIdleRecheckCoordinatedIdleMask(
                              v41,
                              *(unsigned __int8 *)(v10 + 208),
                              *(_QWORD *)(v10 + 200) | v50) )
      {
        v11 = -1073741802;
        goto LABEL_98;
      }
      if ( v49 )
        *(_WORD *)(v41 + 48) |= 0x200u;
      v60 = v141;
      if ( v141 )
      {
        v146 = 1;
        _InterlockedIncrement(&PpmNonInterruptibleCount);
        CurrentPrcb = KeGetCurrentPrcb();
        v62 = KiClockTimerOwner;
        if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
        {
          off_1403FF5C8[0]();
          CurrentPrcb->PendingTickFlags &= ~1u;
          v60 = v141;
        }
        if ( CurrentPrcb->Number == v62 )
          ++dword_140422708;
        if ( CurrentPrcb->ClockOwner )
          CurrentPrcb->ClockOwner = 0;
      }
      if ( *(_BYTE *)(v41 + 540) )
      {
        v63 = 0;
        if ( v49 )
        {
          v63 = v60 == 0;
          v153 = v60 == 0;
        }
        KePrepareClockTimerForIdle(a5, *(_QWORD *)(v41 + 520), v63);
      }
      v39 = a2;
LABEL_120:
      v64 = *(KSPIN_LOCK **)(v10 + 24192);
      SpinLock = v64;
      if ( v64 )
      {
        PpmIdleUpdateConcurrency(v64);
        v65 = *(KSPIN_LOCK **)(v10 + 24200);
        if ( v65 )
          PpmIdleUpdateConcurrency(v65);
      }
      *(_DWORD *)(v152 + 20) = v39;
      v66 = __rdtsc();
      if ( (*(_QWORD *)(v10 + 25248) & 0x8000000000LL) != 0 )
        v67 = __readmsr(0xDB2u);
      else
        v67 = 0LL;
      v68 = a6 - *(_QWORD *)(v10 + 23920);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 23936), v68);
      if ( (*(_QWORD *)(v10 + 25248) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v10 + 24008) += PpmConvertTime(
                                      v68,
                                      v66 - *(_QWORD *)(v10 + 23888),
                                      v67 - *(_QWORD *)(v10 + 24000),
                                      a4);
      v69 = *(_QWORD *)(v10 + 23888);
      *(_QWORD *)(v10 + 23920) = a6;
      if ( v66 > v69 )
        *(_QWORD *)(v10 + 23896) += v66 - v69;
      *(_QWORD *)(v10 + 23888) = v66;
      if ( (*(_QWORD *)(v10 + 25248) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v10 + 24000) = v67;
      LOBYTE(a4) = 1;
      PpmUpdatePerformanceFeedback(v10, 0, 0, a4, 0LL);
      if ( PopSnapEnergyCounters )
        PopSnapEnergyCounters(*(unsigned int *)(v10 + 36), 0LL, 0LL);
      _InterlockedExchange64((volatile __int64 *)(v10 + 23840), a6);
      v70 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v152 + 416);
      if ( v70 )
      {
        v71 = v152 + 792;
        v11 = v70(v160, a2, a3, *(unsigned int *)(v152 + 796), *(_QWORD *)(v152 + 808));
        v148 = v11;
      }
      else
      {
        v71 = v163;
      }
      if ( v11 >= 0 )
      {
        v72 = *(_QWORD *)(v71 + 16);
        v143 = 1;
        LODWORD(v73) = *(_DWORD *)(v163 + 4);
        if ( a3 != -1 )
        {
          v74 = PpmPlatformStates + 384LL * a3;
          PpmEventEnterPlatformIdleState(a3);
          if ( !qword_14043D540 && a3 == dword_14043D580 )
            _InterlockedCompareExchange64(&qword_14043D540, MEMORY[0xFFFFF78000000008], 0LL);
          if ( a5 )
          {
            *(_BYTE *)(PpmPlatformStates + 56) = 1;
            ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
          }
          if ( *(_BYTE *)(v74 + 120) )
          {
            LOBYTE(v75) = 1;
            KdPowerTransitionEx(2147483652LL, v75);
            KdCallPowerHandlers(4LL);
          }
        }
        if ( (_DWORD)v73 )
        {
          if ( *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
          {
            v182 = v72;
            v183 = 4 * v73;
            v184 = 0;
            EtwTraceKernelEvent((unsigned int)&v182, 1, 1073774592, 4671, 1538);
          }
          do
          {
            v73 = (unsigned int)(v73 - 1);
            v76 = PpmPlatformStates + 384LL * *(unsigned int *)(v72 + 4 * v73);
            *(_QWORD *)(v76 + 328) = a6;
            v77 = *(_DWORD *)(v76 + 320);
            if ( !*(_DWORD *)(PpmPlatformStates + 4) )
              v77 ^= ((unsigned __int16)v77 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
            *(_DWORD *)(v76 + 320) = v77 & 0xF8FFFFFF | 0x4000000;
          }
          while ( (_DWORD)v73 );
        }
        if ( a3 != -1 )
          *(_WORD *)(v152 + 48) |= 0x10u;
        v78 = *(_WORD *)(v152 + 48);
        v79 = *(_BYTE *)(v152 + 541);
        if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          v181 = *(_QWORD *)(v152 + 512);
          v178 = a2;
          v185[0] = &v178;
          v179 = v78;
          v180 = v79;
          v185[1] = 16LL;
          EtwTraceKernelEvent((unsigned int)v185, 1, 1073774592, 4665, 1538);
        }
        if ( a8 )
          PpmIdleSetSynchronizationState(v10 + 23872, v144);
        if ( v142 )
        {
          DeepSleep = 0;
          if ( *(_BYTE *)(v161 + 1056) >= 2u && (HvlEnlightenments & 4) == 0 )
          {
            v80 = byte_1404049C8;
            if ( byte_1404049C8 == -1 )
            {
              _RAX = 1LL;
              __asm { cpuid }
              v80 = 0;
              v174 = _RAX;
              v175 = _RBX;
              v176 = _RCX;
              v177 = _RDX;
              if ( (int)_RCX < 0 )
              {
                _RAX = 1073741825LL;
                __asm { cpuid }
                v174 = _RAX;
                v175 = _RBX;
                v80 = (_DWORD)_RAX == 1986945624;
                v176 = _RCX;
                v177 = _RDX;
              }
              byte_1404049C8 = v80;
            }
            if ( !v80 )
            {
              v91 = KeGetCurrentPrcb();
              if ( v91->CpuVendor == 1 )
              {
                DeepSleep = 0;
              }
              else
              {
                Number = v91->Number;
                v91->DeepSleep = 1;
                _InterlockedOr64(
                  (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                            + 4310280
                                            + 0x140000000LL),
                  1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F));
                if ( !v91->DeepSleep )
                {
                  v93 = 8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[v91->Number] >> 6) + 4310280;
                  _InterlockedAnd64(
                    (volatile signed __int64 *)(v93 + 0x140000000LL),
                    ~(1LL << (KiProcessorIndexToNumberMappingTable[v91->Number] & 0x3F)));
                  if ( KiFlushPcid )
                  {
                    v94 = __readcr3();
                    __writecr3(v94);
                    Process = KeGetCurrentThread()->ApcState.Process;
                    if ( !Process->AddressPolicy )
                      KiSetUserTbFlushPending(Process, v93, 0x140000000uLL, 1LL);
                  }
                  else
                  {
                    v96 = __readcr4();
                    if ( (v96 & 0x20080) != 0 )
                    {
                      __writecr4(v96 ^ 0x80);
                      __writecr4(v96);
                    }
                    else
                    {
                      v97 = __readcr3();
                      __writecr3(v97);
                    }
                  }
                }
                DeepSleep = v91->DeepSleep;
              }
            }
          }
        }
        v98 = 0;
        if ( (*(_BYTE *)(v10 + 1762) & 1) != 0 && *(_WORD *)(v10 + 1764) )
          *(_WORD *)(v10 + 1760) |= 1u;
        _m_prefetchw((const void *)(v10 + 1772));
        v99 = *(_WORD *)(v10 + 1772) & 4;
        if ( v99 )
        {
          if ( (*(_BYTE *)(v10 + 1760) & 1) != 0 )
          {
            v100 = *(_WORD *)(v10 + 1764);
            if ( (v100 & 3) == 0 )
            {
              v98 = 2;
              *(_WORD *)(v10 + 1764) = v100 | 2;
              __writemsr(0x48u, v100 | 2u);
            }
          }
          _InterlockedOr16((volatile signed __int16 *)(v10 + 1772), 2u);
          v101 = *(_QWORD *)(v10 + 11696);
          _m_prefetchw((const void *)(v101 + 1772));
          do
            v102 = *(_WORD *)(v101 + 1772);
          while ( v102 != _InterlockedCompareExchange16(
                            (volatile signed __int16 *)(v101 + 1772),
                            v102 & 0xFFE4 | 0xA,
                            v102) );
        }
        v103 = (*(_BYTE *)(v10 + 1762) & 0x40) == 0;
        v157 = v98;
        if ( !v103 )
          HIWORD(v157) = *(_WORD *)(v10 + 28316);
        v148 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, _QWORD))(v152 + 424))(
                 v160,
                 v171,
                 a2,
                 a3,
                 v157,
                 *(_DWORD *)(v152 + 796),
                 *(_QWORD *)(v152 + 808));
        v11 = v148;
        if ( v99 )
        {
          v104 = *(_QWORD *)(v10 + 11696);
          _m_prefetchw((const void *)(v104 + 1772));
          do
            v105 = *(_WORD *)(v104 + 1772);
          while ( v105 != _InterlockedCompareExchange16(
                            (volatile signed __int16 *)(v104 + 1772),
                            v105 & 0xFFF5 | 2,
                            v105) );
          if ( (*(_WORD *)(v10 + 1772) & 0x10) == 0 )
          {
            v106 = *(_WORD *)(v10 + 1764);
            if ( (v106 & 2) != 0 )
            {
              *(_WORD *)(v10 + 1764) = v106 & 0xFFFD;
              __writemsr(0x48u, v106 & 0xFFFD);
            }
          }
        }
        *(_WORD *)(v10 + 1760) &= ~1u;
        if ( DeepSleep && *(_BYTE *)(v10 + 23450) )
        {
          v107 = KeGetCurrentPrcb();
          v108 = v107->Number;
          v107->DeepSleep = 0;
          _InterlockedAnd64(
            &qword_14041C508[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v108] >> 6],
            ~(1LL << (KiProcessorIndexToNumberMappingTable[v108] & 0x3F)));
          v109 = __readcr4();
          if ( (v109 & 0x20080) != 0 )
          {
            __writecr4(v109 ^ 0x80);
            __writecr4(v109);
          }
          else
          {
            v110 = __readcr3();
            __writecr3(v110);
          }
        }
        if ( *(int *)(v152 + 64) < 0 )
        {
          if ( v148 >= 0 )
            v11 = *(_DWORD *)(v152 + 64);
          v148 = v11;
        }
        if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          v186[1] = 8LL;
          v162[0] = a2;
          v162[1] = v11;
          v186[0] = v162;
          EtwTraceKernelEvent((unsigned int)v186, 1, 1073774592, 4666, 1538);
        }
      }
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      QuadPart = PerformanceCounter.QuadPart;
      _InterlockedExchange64((volatile __int64 *)(v10 + 23840), 0LL);
      v112 = PerformanceCounter;
      if ( *(_BYTE *)(v10 + 24017) )
      {
        _disable();
        v113 = (v189 & 0x200) != 0;
        KxAcquireSpinLock((PKSPIN_LOCK)(v10 + 23880));
        v114 = 2LL;
        v115 = v10 + 23904;
        do
        {
          if ( *(_QWORD *)v115 && *(_BYTE *)(*(_QWORD *)v115 + 34LL) )
          {
            PpmPerfFeedbackCounterUpdate();
            v114 = v165;
          }
          v115 += 8LL;
          v165 = --v114;
        }
        while ( v114 );
        KxReleaseSpinLock((PKSPIN_LOCK)(v10 + 23880));
        if ( v113 )
          _enable();
      }
      v116 = __rdtsc();
      if ( (*(_QWORD *)(v10 + 25248) & 0x8000000000LL) != 0 )
        v117 = __readmsr(0xDB2u);
      else
        v117 = 0LL;
      *(LARGE_INTEGER *)(v10 + 23920) = v112;
      *(_QWORD *)(v10 + 23888) = v116;
      if ( (*(_QWORD *)(v10 + 25248) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v10 + 24000) = v117;
      v19 = (unsigned __int64)SpinLock;
      if ( SpinLock )
      {
        PpmIdleUpdateConcurrency(SpinLock);
        v19 = *(_QWORD *)(v10 + 24200);
        if ( v19 )
          PpmIdleUpdateConcurrency((PKSPIN_LOCK)v19);
      }
      *(_QWORD *)(v10 + 23824) = v112.QuadPart - a6;
      if ( a8 )
      {
        v118 = PpmIdleSetSynchronizationState(v10 + 23872, 0LL);
        if ( v11 >= 0 && v118 != 8 && v141 )
          KeBugCheckEx(0xA0u, 0x702uLL, a2, v118, v10);
        *(_BYTE *)(v10 + 23857) = 0;
      }
      v28 = v143;
      if ( !v142 )
      {
        v27 = 3;
        goto LABEL_243;
      }
      if ( v143
        && v11 >= 0
        && PpmPlatformStates
        && *(_BYTE *)(PpmPlatformStates + 56)
        && PpmDripsStateIndex != -1
        && *(_DWORD *)(384LL * (unsigned int)PpmDripsStateIndex + PpmPlatformStates + 320) )
      {
        v119 = KeQueryWakeSource(&v154, v188);
        v120 = v154;
        v27 = 3;
        if ( v119 < 0 )
          v120 = 3;
        v154 = v120;
      }
      else
      {
        v27 = 3;
      }
LABEL_237:
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(v10 + 192) + 64LL),
        *(unsigned __int8 *)(v10 + 209));
      if ( v153 && v11 >= 0 )
        v121 = &v159;
      else
        v121 = 0LL;
      KeResumeClockTimerFromIdle(v121);
      off_1403FF490();
      KeAccumulateTicks(v10, *(_DWORD *)(v10 + 11892), MEMORY[0xFFFFF78000000320], 0, 0);
      goto LABEL_243;
    }
LABEL_95:
    LODWORD(SpinLock) = 1;
    goto LABEL_96;
  }
  v11 = -1073741802;
  v27 = 0;
  v156 = 0;
  v148 = -1073741802;
  if ( a8 )
  {
    PpmIdleSetSynchronizationState(v10 + 23872, 0LL);
    v28 = 0;
    goto LABEL_243;
  }
LABEL_32:
  v28 = 0;
LABEL_243:
  LOBYTE(v19) = 1;
  ((void (__fastcall *)(unsigned __int64))off_1403FF6E8[0])(v19);
  if ( v145 )
  {
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(v10 + 192) + 72LL),
      *(unsigned __int8 *)(v10 + 209));
    *(_QWORD *)(v10 + 23848) = -1LL;
  }
  v122 = v28;
  v123 = v163;
  v124 = PpmExitCoordinatedIdle(v10, v163, v122, v11, v27 != 3, QuadPart, a5, (__int64)v188, v154);
  v151 = v124;
  if ( v27 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v152 + 456))(
      v160,
      a2,
      v124,
      *(unsigned int *)(v123 + 4),
      *(_QWORD *)(v123 + 16));
  }
  else if ( !*(_BYTE *)v152 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(v152 + 464))(v160, v27);
  }
  v125 = *(_QWORD *)(v123 + 16);
  for ( LODWORD(v123) = *(_DWORD *)(v123 + 4);
        (_DWORD)v123;
        *(_DWORD *)(384LL * *(unsigned int *)(v125 + 4 * v123) + PpmPlatformStates + 320) = 0 )
  {
    v123 = (unsigned int)(v123 - 1);
  }
  if ( v146 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v187[0] = 1310721;
  memset(&v187[1], 0, 0xA4uLL);
  v126 = 0;
  v127 = *((_QWORD *)v12 + 1);
  v128 = KeGetPcr()->Prcb.Number;
  while ( 1 )
  {
    v129 = v12 ? *v12 : v126 + 1;
    if ( !v127 )
      break;
LABEL_260:
    _BitScanForward64(&v130, v127);
    v127 &= ~(1LL << v130);
    v170 = v130;
    v131 = KiProcessorNumberToIndexMappingTable[64 * v126 + (unsigned __int8)v130];
    v132 = KeGetPrcb(v131);
    v133 = *(_QWORD *)(v132 + 23808);
    _m_prefetchw((const void *)(v132 + 23872));
    v134 = *(_DWORD *)(v132 + 23872);
    do
    {
      v135 = v134;
      v136 = v134 ^ (v134 ^ (v134 - 1)) & 0xFFFFFF;
      if ( (v136 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v134) == 5 )
        {
          v136 = v136 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v134) == 7 )
        {
          v136 = v136 & 0xFFFFFF | 0x6000000;
        }
      }
      v134 = _InterlockedCompareExchange((volatile signed __int32 *)(v132 + 23872), v136, v134);
    }
    while ( v134 != v135 );
    if ( HIBYTE(v136) == 6 )
      KeAddProcessorAffinityEx(v187, v131);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v133
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v128] >> 6)
                                + 80),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v128] & 0x3F)));
    KeRemoveProcessorAffinityEx(v12, v131);
  }
  while ( ++v126 < v129 )
  {
    v127 = *(_QWORD *)&v12[4 * v126 + 4];
    if ( v127 )
      goto LABEL_260;
  }
  v137 = 0;
  v138 = v166;
  if ( LOWORD(v187[0]) )
  {
    while ( !*(_QWORD *)&v187[2 * v137 + 2] )
    {
      if ( ++v137 >= LOWORD(v187[0]) )
        goto LABEL_275;
    }
    HalRequestIpi(0LL, v187);
  }
LABEL_275:
  if ( *(_BYTE *)(v152 + 3) )
    PpmIdleCompleteExitLatencyTrace(v138, v148, v141, QuadPart, v159, v155, a2, v151);
  result = v156;
  *(_DWORD *)(v152 + 68) = v156;
  *(_DWORD *)(v152 + 64) = v148;
  return result;
}
