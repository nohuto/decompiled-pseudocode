/*
 * XREFs of PpmIdleExecuteTransition @ 0x140031530
 * Callers:
 *     PoIdle @ 0x140031020 (PoIdle.c)
 * Callees:
 *     PpmConvertTime @ 0x140004E24 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     PpmExitCoordinatedIdle @ 0x140032C80 (PpmExitCoordinatedIdle.c)
 *     KeAccumulateTicks @ 0x140033360 (KeAccumulateTicks.c)
 *     KeResumeClockTimerFromIdle @ 0x140033A00 (KeResumeClockTimerFromIdle.c)
 *     PpmUpdatePerformanceFeedback @ 0x140033D20 (PpmUpdatePerformanceFeedback.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400BA2E0 (KeRemoveProcessorAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1400BE1E0 (KeAddProcessorAffinityEx.c)
 *     PpmGetExitSamplingCountdown @ 0x1400EDD18 (PpmGetExitSamplingCountdown.c)
 *     KePrepareClockTimerForIdle @ 0x1401129E0 (KePrepareClockTimerForIdle.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140175CE4 (PpmPerfArbitratorApplyProcessorState.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1401C4CD0 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KdCallPowerHandlers @ 0x1402A1EE8 (KdCallPowerHandlers.c)
 *     KdPowerTransitionEx @ 0x1402A2290 (KdPowerTransitionEx.c)
 *     KeQueryWakeSource @ 0x1402A59DC (KeQueryWakeSource.c)
 *     KeWakeProcessor @ 0x1402AA670 (KeWakeProcessor.c)
 *     KeUpdatePendingQosRequest @ 0x1402AEEA4 (KeUpdatePendingQosRequest.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402EF07C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x1402EF560 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmIdleSetSynchronizationState @ 0x1402EF800 (PpmIdleSetSynchronizationState.c)
 *     PpmIdleTransitionStall @ 0x1402EF9B8 (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateConcurrency @ 0x1402EFA58 (PpmIdleUpdateConcurrency.c)
 *     PpmTestAndLockProcessor @ 0x1402F039C (PpmTestAndLockProcessor.c)
 *     PpmPerfFeedbackCounterUpdate @ 0x1402F6F74 (PpmPerfFeedbackCounterUpdate.c)
 *     PpmEventEnterPlatformIdleState @ 0x140302100 (PpmEventEnterPlatformIdleState.c)
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
  __int64 v8; // rbx
  ULONG_PTR v9; // r14
  int v10; // r9d
  __int64 v11; // rbp
  char v12; // r12
  int v13; // r13d
  unsigned __int16 *v14; // r15
  unsigned int v15; // esi
  __int64 v16; // rbx
  unsigned int v17; // edi
  _BYTE *v18; // rbx
  ULONG v19; // ecx
  __int64 Prcb; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned int v23; // edx
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned __int8 (__fastcall *v28)(__int64); // rax
  unsigned int v29; // edi
  unsigned __int8 v30; // bl
  unsigned __int64 v31; // rdx
  char v32; // bp
  char v33; // si
  bool v34; // di
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // eax
  int v39; // eax
  unsigned __int8 v40; // r11
  unsigned int v41; // edi
  __int64 v42; // r10
  __int64 v43; // rbp
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  int v46; // eax
  unsigned __int64 v47; // rbx
  __int64 v48; // rdx
  signed __int64 v49; // rax
  __int64 v50; // rbx
  char v51; // di
  signed __int64 v52; // rsi
  int v53; // r8d
  unsigned __int16 v54; // ax
  unsigned __int64 *v55; // r9
  __int64 v56; // r10
  unsigned __int64 v57; // rdx
  int v58; // eax
  int v59; // eax
  int ExitSamplingCountdown; // eax
  char v61; // r9
  unsigned __int8 v62; // r11
  struct _KPRCB *CurrentPrcb; // rbx
  int v64; // esi
  bool v65; // al
  KSPIN_LOCK *v66; // rax
  KSPIN_LOCK *v67; // rcx
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rbx
  unsigned __int64 v71; // rcx
  __int64 (__fastcall *v72)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  __int64 v73; // rsi
  __int64 v74; // rsi
  __int64 v75; // rbx
  __int64 v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rdx
  int v79; // ecx
  __int16 v80; // cx
  __int64 v81; // rdx
  unsigned __int8 v82; // bl
  char v83; // r8
  struct _KPRCB *v94; // rbx
  __int64 Number; // rax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rax
  unsigned __int8 v99; // al
  unsigned __int8 v100; // r8
  __int16 v101; // di
  unsigned __int8 v102; // al
  __int64 v103; // rbx
  signed __int16 v104; // tt
  __int64 v105; // rdx
  signed __int16 v106; // tt
  char v107; // al
  struct _KPRCB *v108; // rax
  __int64 v109; // rcx
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v113; // rsi
  bool v114; // di
  __int64 v115; // rax
  ULONG_PTR v116; // rbx
  unsigned __int64 v117; // rbx
  unsigned __int64 v118; // rcx
  unsigned __int8 v119; // al
  int v120; // eax
  int v121; // ecx
  int *v122; // rcx
  int v123; // r8d
  __int64 v124; // rbx
  unsigned int v125; // eax
  __int64 v126; // r8
  unsigned __int64 v127; // rsi
  unsigned __int16 v128; // di
  __int64 v129; // r14
  unsigned int v130; // ecx
  unsigned __int64 v131; // rdx
  ULONG v132; // ebp
  __int64 v133; // rbx
  __int64 v134; // r12
  unsigned __int32 v135; // eax
  unsigned __int32 v136; // r8d
  signed __int32 v137; // ecx
  unsigned __int16 v138; // r12
  int v139; // r14d
  __int64 result; // rax
  volatile unsigned __int8 DeepSleep; // [rsp+50h] [rbp-2E8h]
  unsigned __int8 v142; // [rsp+51h] [rbp-2E7h]
  char v143; // [rsp+52h] [rbp-2E6h]
  char v144; // [rsp+53h] [rbp-2E5h]
  unsigned __int8 v145; // [rsp+54h] [rbp-2E4h]
  char v146; // [rsp+55h] [rbp-2E3h]
  char v147; // [rsp+56h] [rbp-2E2h]
  int v149; // [rsp+60h] [rbp-2D8h]
  signed __int64 v150; // [rsp+60h] [rbp-2D8h]
  bool v151; // [rsp+68h] [rbp-2D0h]
  unsigned int v152; // [rsp+68h] [rbp-2D0h]
  __int64 v153; // [rsp+70h] [rbp-2C8h]
  bool v155; // [rsp+7Ch] [rbp-2BCh]
  int v156; // [rsp+80h] [rbp-2B8h] BYREF
  int v157; // [rsp+84h] [rbp-2B4h]
  unsigned int v158; // [rsp+88h] [rbp-2B0h]
  PKSPIN_LOCK SpinLock; // [rsp+90h] [rbp-2A8h]
  int v160; // [rsp+98h] [rbp-2A0h] BYREF
  __int64 v161; // [rsp+A0h] [rbp-298h]
  __int64 v162; // [rsp+A8h] [rbp-290h]
  unsigned __int64 v163; // [rsp+B0h] [rbp-288h]
  unsigned __int16 v164; // [rsp+B8h] [rbp-280h]
  int v165; // [rsp+BAh] [rbp-27Eh]
  __int16 v166; // [rsp+BEh] [rbp-27Ah]
  __int64 v167; // [rsp+C0h] [rbp-278h]
  unsigned __int64 v168; // [rsp+C8h] [rbp-270h] BYREF
  __int64 v169; // [rsp+D0h] [rbp-268h]
  __int64 QuadPart; // [rsp+D8h] [rbp-260h]
  __int64 v171; // [rsp+E0h] [rbp-258h]
  ULONG_PTR v172; // [rsp+E8h] [rbp-250h]
  __int64 v173; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v174; // [rsp+F8h] [rbp-240h]
  __int64 v175; // [rsp+100h] [rbp-238h]
  __int64 v176; // [rsp+108h] [rbp-230h]
  _QWORD v177[3]; // [rsp+110h] [rbp-228h] BYREF
  int v178; // [rsp+128h] [rbp-210h]
  int v179; // [rsp+12Ch] [rbp-20Ch]
  __int64 v180; // [rsp+130h] [rbp-208h]
  _QWORD v181[2]; // [rsp+138h] [rbp-200h] BYREF
  unsigned __int64 v182; // [rsp+148h] [rbp-1F0h]
  unsigned __int64 v183; // [rsp+150h] [rbp-1E8h]
  __int64 v184; // [rsp+158h] [rbp-1E0h] BYREF
  __int64 v185; // [rsp+160h] [rbp-1D8h]
  __int64 v186; // [rsp+168h] [rbp-1D0h] BYREF
  int v187; // [rsp+170h] [rbp-1C8h]
  int v188; // [rsp+174h] [rbp-1C4h]
  _QWORD v189[2]; // [rsp+178h] [rbp-1C0h] BYREF
  _QWORD v190[3]; // [rsp+188h] [rbp-1B0h] BYREF
  _DWORD v191[44]; // [rsp+1A0h] [rbp-198h] BYREF
  _BYTE v192[144]; // [rsp+250h] [rbp-E8h] BYREF
  int v193; // [rsp+330h] [rbp-8h]

  v8 = a2;
  v9 = BugCheckParameter4;
  v172 = BugCheckParameter4;
  v180 = a4;
  memset(v192, 0, 0x88uLL);
  v11 = *(_QWORD *)(v9 + 23808);
  v12 = 0;
  LODWORD(SpinLock) = 0;
  v13 = 0;
  QuadPart = 0LL;
  v157 = 0;
  v161 = *(_QWORD *)(v11 + 488);
  v169 = v11 + 792;
  DeepSleep = 0;
  v143 = 0;
  v151 = 0;
  v155 = 0;
  v146 = 0;
  v144 = 0;
  v156 = 7;
  v160 = -1;
  v153 = v11;
  v167 = v11 + 248 * v8;
  v147 = 0;
  v149 = 0;
  if ( !a8 || *(_BYTE *)(v11 + 539) || *(_BYTE *)(v11 + 248 * v8 + 1061) )
  {
    v142 = 0;
    v145 = 3;
  }
  else
  {
    v142 = 1;
    v145 = 4;
  }
  v158 = 3;
  if ( !*(_BYTE *)v11 )
  {
    if ( a8 )
      PpmIdleSetSynchronizationState(v9 + 23872, 1LL);
    v14 = (unsigned __int16 *)(v11 + 240);
    *(_QWORD *)(v11 + 240) = 1310721LL;
    memset((void *)(v11 + 248), 0, 0xA0uLL);
    v15 = *(_DWORD *)(v11 + 548);
    v16 = *(_QWORD *)(v11 + 552);
    v177[1] = 0LL;
    v177[2] = 0LL;
    v181[0] = 1LL;
    v177[0] = 65537LL;
    v17 = 0;
    v181[1] = v177;
    if ( v15 )
    {
      v18 = (_BYTE *)(v16 + 4);
      while ( 1 )
      {
        if ( *v18 != 0xFF )
        {
          v19 = *((_DWORD *)v18 - 1);
          HIDWORD(v177[0]) = (unsigned __int8)*v18;
          Prcb = KeGetPrcb(v19);
          v149 = PpmTestAndLockProcessor(Prcb, v11 + 240, v181);
          v13 = v149;
          if ( v149 < 0 )
            break;
        }
        ++v17;
        v18 += 8;
        if ( v17 >= v15 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      v22 = *(_QWORD *)(v11 + 248);
      v163 = v22;
      v173 = 0LL;
      v174 = 0LL;
      v175 = 0LL;
      v176 = 0LL;
      v165 = 0;
      v166 = 0;
      v164 = 0;
      v162 = v11 + 240;
LABEL_15:
      while ( 1 )
      {
        v23 = v11 == -240 ? v164 + 1 : *v14;
        if ( !v22 )
          break;
LABEL_21:
        _BitScanForward64(&v24, v22);
        v22 &= ~(1LL << v24);
        v178 = v24;
        v163 = v22;
        v25 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * v164 + (unsigned __int8)v24]);
        v175 = v25;
        v26 = *(_QWORD *)(v25 + 23808);
        v176 = 0LL;
        v173 = 0LL;
        v27 = *(_QWORD *)(v26 + 488);
        v174 = PopIdleTransitionTimeout;
        v28 = *(unsigned __int8 (__fastcall **)(__int64))(v26 + 472);
        BYTE4(v176) = 1;
        if ( !v28(v27) )
        {
          while ( (*(_DWORD *)(v25 + 23872) & 0xFF000000) == 0x5000000 )
          {
            PpmIdleTransitionStall(&v173);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v26 + 472))(*(_QWORD *)(v26 + 488)) )
            {
              v22 = v163;
              goto LABEL_15;
            }
          }
          v13 = -1073741782;
          v149 = -1073741782;
          goto LABEL_27;
        }
      }
      while ( 1 )
      {
        v21 = ++v164;
        if ( v164 >= v23 )
          break;
        v163 = *(_QWORD *)&v14[4 * v164 + 4];
        v22 = v163;
        if ( v163 )
          goto LABEL_21;
      }
      v13 = 0;
      v149 = 0;
    }
LABEL_27:
    if ( v13 < 0 )
    {
      if ( a8 )
        PpmIdleSetSynchronizationState(v9 + 23872, 0LL);
      v29 = 1;
      v158 = 1;
      goto LABEL_31;
    }
  }
  v14 = (unsigned __int16 *)(v11 + 240);
  v21 = 0LL;
  v31 = *(unsigned __int16 *)(v11 + 240);
  if ( (_WORD)v31 )
  {
    while ( !*(_QWORD *)&v14[4 * (unsigned __int16)v21 + 4] )
    {
      LOWORD(v21) = v21 + 1;
      if ( (unsigned __int16)v21 >= (unsigned __int16)v31 )
        goto LABEL_37;
    }
    *(_WORD *)(v11 + 48) |= 0x20u;
  }
LABEL_37:
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0LL;
  v171 = 2LL;
  if ( PpmPerfQosEnabled && PpmPerfQosManageIdleProcessors && *(_DWORD *)(v9 + 24304) != 2 )
  {
    v35 = *(_QWORD *)(v9 + 24184);
    if ( v35 && *(_BYTE *)(v35 + 121) )
    {
      v33 = 1;
      _disable();
      v34 = (v193 & 0x200) != 0;
      KxAcquireSpinLock((PKSPIN_LOCK)(v35 + 128));
    }
    if ( (*(_BYTE *)(v9 + 24312) & 4) == 0 )
    {
      v31 = __rdtsc();
      v21 = v31 - *(_QWORD *)(v9 + 24288);
      v36 = *(_QWORD *)(v9 + 24296);
      if ( v21 < v36 && !*(_BYTE *)(v9 + 24229) )
      {
        v37 = *(_DWORD *)(v9 + 236);
        v12 = 1;
        if ( (v37 & 0xC) == 0 )
        {
          v32 = 1;
          v38 = v37 & 0xFFFFFFF3 | 8;
LABEL_52:
          *(_DWORD *)(v9 + 236) = v38;
          KeUpdatePendingQosRequest(v9);
          goto LABEL_53;
        }
        goto LABEL_53;
      }
      *(_QWORD *)(v9 + 24288) = v31;
      *(_BYTE *)(v9 + 24229) = v21 >= 2 * v36;
    }
    *(_DWORD *)(v9 + 24304) = 2;
    LOBYTE(v31) = 1;
    PpmPerfArbitratorApplyProcessorState(v9, v31, 0LL);
    *(_DWORD *)(v9 + 236) = *(_DWORD *)(v9 + 236) & 0xFFFFFFFC | 2;
  }
  v39 = *(_DWORD *)(v9 + 236);
  if ( (v39 & 0xC) != 0 )
  {
    v38 = v39 & 0xFFFFFFF3;
    goto LABEL_52;
  }
LABEL_53:
  if ( v33 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v35 + 128));
    if ( v34 )
      _enable();
  }
  if ( !v32 )
  {
    v40 = v142;
    v41 = a2;
    v42 = v167;
    *(_BYTE *)(v9 + 23856) = v142;
    *(_DWORD *)(v9 + 23860) = a2;
    if ( a8 )
    {
      LOBYTE(v31) = 2;
      *(_BYTE *)(v9 + 23857) = *(_BYTE *)(v42 + 1058) == 0;
      PpmIdleSetSynchronizationState(v9 + 23872, v31);
    }
    v43 = v153;
    if ( v12 || *(_BYTE *)(v153 + 6) || *(_BYTE *)(v153 + 7) )
    {
      v44 = -1LL;
      v146 = 1;
      if ( *(_BYTE *)(v153 + 6) )
      {
        v45 = *(_QWORD *)(v153 + 520);
        if ( v45 <= KeMaximumIncrement )
          v45 = KeMaximumIncrement;
        v44 = a7 + KeMaximumIncrement + v45;
      }
      if ( *(_BYTE *)(v153 + 7) )
      {
        v46 = HIDWORD(PpmCurrentProfile[341 * dword_140443ACC + 23]);
        if ( v44 >= a7 + (unsigned __int64)(unsigned int)(10 * v46) )
          v44 = a7 + (unsigned int)(10 * v46);
      }
      if ( v12 && v44 >= a7 + PpmPerfQosIdleExpirationTimeout )
        v44 = a7 + PpmPerfQosIdleExpirationTimeout;
      *(_QWORD *)(v9 + 23848) = v44;
      _interlockedbittestandset64(
        (volatile signed __int32 *)(*(_QWORD *)(v9 + 192) + 72LL),
        *(unsigned __int8 *)(v9 + 209));
    }
    if ( *(_BYTE *)(v42 + 1057) || v12 )
      goto LABEL_123;
    v47 = *(_QWORD *)(v9 + 200);
    v48 = *(_QWORD *)(v9 + 192);
    v143 = 1;
    _m_prefetchw((const void *)(v48 + 64));
    v49 = _InterlockedOr64((volatile signed __int64 *)(v48 + 64), v47);
    v50 = *(_QWORD *)(v9 + 23808);
    v51 = 0;
    v150 = v49;
    v157 = 0;
    v52 = v49;
    if ( v40 )
    {
      v157 = 1;
    }
    else if ( a3 == -1 )
    {
      v53 = 0;
      v54 = *(_WORD *)(v50 + 240);
      if ( v54 )
      {
        v55 = (unsigned __int64 *)(v50 + 248);
        v56 = v54;
        do
        {
          v57 = *v55++;
          v53 += (unsigned int)((0x101010101010101LL
                               * ((((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                 + ((((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                   + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          --v56;
        }
        while ( v56 );
        v9 = v172;
        v52 = v150;
        v43 = v153;
      }
      if ( v53 != (_DWORD)KeNumberProcessors_0 - 1 )
        goto LABEL_94;
      v40 = v142;
      v157 = 2;
    }
    v58 = *(_DWORD *)(v50 + 12);
    v51 = 0;
    if ( !v58 || (v59 = v58 - 1, (*(_DWORD *)(v50 + 12) = v59) == 0) )
    {
      ExitSamplingCountdown = PpmGetExitSamplingCountdown();
      v51 = 0;
      *(_DWORD *)(v50 + 12) = ExitSamplingCountdown;
      if ( ExitSamplingCountdown )
        v51 = v61;
    }
    if ( v51 )
    {
      *(_BYTE *)(v50 + 3) = 1;
      if ( !v40 )
        goto LABEL_94;
      *(_QWORD *)(v50 + 56) = -1LL;
    }
    if ( v40 )
    {
LABEL_95:
      v13 = ((__int64 (__fastcall *)(_QWORD))off_140424480[0])((unsigned int)SpinLock);
      v149 = v13;
      if ( *(_DWORD *)(v9 + 11800) )
      {
        v13 = -2147483631;
LABEL_97:
        v149 = v13;
LABEL_98:
        if ( a8 )
          PpmIdleSetSynchronizationState(v9 + 23872, 0LL);
        v29 = 0;
        v158 = 0;
        v30 = 0;
        goto LABEL_239;
      }
      if ( v13 < 0 )
        goto LABEL_98;
      if ( *(_BYTE *)v43 == 1
        && (unsigned __int8)PpmIdleRecheckCoordinatedIdleMask(
                              v43,
                              *(unsigned __int8 *)(v9 + 208),
                              *(_QWORD *)(v9 + 200) | v52) )
      {
        v13 = -1073741802;
        goto LABEL_97;
      }
      if ( v51 )
        *(_WORD *)(v43 + 48) |= 0x200u;
      v62 = v142;
      if ( v142 )
      {
        v147 = 1;
        _InterlockedIncrement(&PpmNonInterruptibleCount);
        CurrentPrcb = KeGetCurrentPrcb();
        v64 = KiClockTimerOwner;
        if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
        {
          off_1404245C8[0]();
          CurrentPrcb->PendingTickFlags &= ~1u;
          v62 = v142;
        }
        if ( CurrentPrcb->Number == v64 )
          ++dword_14044D2C8;
        if ( CurrentPrcb->ClockOwner )
          CurrentPrcb->ClockOwner = 0;
      }
      if ( *(_BYTE *)(v43 + 540) )
      {
        v65 = 0;
        if ( v51 )
        {
          v65 = v62 == 0;
          v155 = v62 == 0;
        }
        if ( a5 && a3 != -1 && PpmDripsStateIndex != -1 )
          v151 = *(_BYTE *)v43 == 1;
        KePrepareClockTimerForIdle(a5, v151, *(_QWORD *)(v43 + 520), v65);
      }
      v41 = a2;
LABEL_123:
      v66 = *(KSPIN_LOCK **)(v9 + 24192);
      SpinLock = v66;
      if ( v66 )
      {
        PpmIdleUpdateConcurrency(v66);
        v67 = *(KSPIN_LOCK **)(v9 + 24200);
        if ( v67 )
          PpmIdleUpdateConcurrency(v67);
      }
      *(_DWORD *)(v153 + 20) = v41;
      v68 = __rdtsc();
      if ( (*(_QWORD *)(v9 + 25248) & 0x8000000000LL) != 0 )
        v69 = __readmsr(0xDB2u);
      else
        v69 = 0LL;
      v70 = a6 - *(_QWORD *)(v9 + 23920);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 23936), v70);
      if ( (*(_QWORD *)(v9 + 25248) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v9 + 24008) += PpmConvertTime(v70, v68 - *(_QWORD *)(v9 + 23888), v69 - *(_QWORD *)(v9 + 24000));
      v71 = *(_QWORD *)(v9 + 23888);
      *(_QWORD *)(v9 + 23920) = a6;
      if ( v68 > v71 )
        *(_QWORD *)(v9 + 23896) += v68 - v71;
      *(_QWORD *)(v9 + 23888) = v68;
      if ( (*(_QWORD *)(v9 + 25248) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v9 + 24000) = v69;
      LOBYTE(v10) = 1;
      PpmUpdatePerformanceFeedback(v9, 0, 0, v10, 0LL);
      if ( PopSnapEnergyCounters )
        PopSnapEnergyCounters(*(unsigned int *)(v9 + 36), 0LL, 0LL);
      _InterlockedExchange64((volatile __int64 *)(v9 + 23840), a6);
      v72 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v153 + 416);
      if ( v72 )
      {
        v73 = v153 + 792;
        v13 = v72(v161, a2, a3, *(unsigned int *)(v153 + 796), *(_QWORD *)(v153 + 808));
        v149 = v13;
      }
      else
      {
        v73 = v169;
      }
      if ( v13 >= 0 )
      {
        v74 = *(_QWORD *)(v73 + 16);
        v144 = 1;
        LODWORD(v75) = *(_DWORD *)(v169 + 4);
        if ( a3 != -1 )
        {
          v76 = PpmPlatformStates + 384LL * a3;
          PpmEventEnterPlatformIdleState(a3);
          if ( !qword_140467F80 && a3 == dword_140467FC0 )
            _InterlockedCompareExchange64(&qword_140467F80, MEMORY[0xFFFFF78000000008], 0LL);
          if ( a5 )
          {
            *(_BYTE *)(PpmPlatformStates + 56) = 1;
            ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
          }
          if ( *(_BYTE *)(v76 + 120) )
          {
            LOBYTE(v77) = 1;
            KdPowerTransitionEx(2147483652LL, v77);
            KdCallPowerHandlers(4LL);
          }
        }
        if ( (_DWORD)v75 )
        {
          if ( *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
          {
            v186 = v74;
            v187 = 4 * v75;
            v188 = 0;
            EtwTraceKernelEvent((unsigned int)&v186, 1, 1073774592, 4671, 1538);
          }
          do
          {
            v75 = (unsigned int)(v75 - 1);
            v78 = PpmPlatformStates + 384LL * *(unsigned int *)(v74 + 4 * v75);
            *(_QWORD *)(v78 + 328) = a6;
            v79 = *(_DWORD *)(v78 + 320);
            if ( !*(_DWORD *)(PpmPlatformStates + 4) )
              v79 ^= ((unsigned __int16)v79 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
            *(_DWORD *)(v78 + 320) = v79 & 0xF8FFFFFF | 0x4000000;
          }
          while ( (_DWORD)v75 );
        }
        if ( a3 != -1 )
          *(_WORD *)(v153 + 48) |= 0x10u;
        v80 = *(_WORD *)(v153 + 48);
        v81 = *(_QWORD *)(v153 + 512);
        v82 = *(_BYTE *)(v153 + 541);
        v184 = 0LL;
        v185 = 0LL;
        if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          LODWORD(v184) = a2;
          WORD2(v184) = v80;
          v185 = v81;
          v189[0] = &v184;
          HIWORD(v184) = v82;
          v189[1] = 16LL;
          EtwTraceKernelEvent((unsigned int)v189, 1, 1073774592, 4665, 1538);
        }
        if ( a8 )
          PpmIdleSetSynchronizationState(v9 + 23872, v145);
        if ( v143 )
        {
          DeepSleep = 0;
          if ( *(_BYTE *)(v167 + 1056) >= 2u && (HvlEnlightenments & 4) == 0 )
          {
            v83 = byte_140429E20;
            v182 = 0LL;
            v183 = 0LL;
            if ( byte_140429E20 == -1 )
            {
              _RAX = 1LL;
              __asm { cpuid }
              v83 = 0;
              v182 = __PAIR64__(_RBX, _RAX);
              v183 = __PAIR64__(_RDX, _RCX);
              if ( (int)_RCX < 0 )
              {
                _RAX = 1073741825LL;
                __asm { cpuid }
                v182 = __PAIR64__(_RBX, _RAX);
                v83 = (_DWORD)_RAX == 1986945624;
                v183 = __PAIR64__(_RDX, _RCX);
              }
              byte_140429E20 = v83;
            }
            if ( !v83 )
            {
              v94 = KeGetCurrentPrcb();
              if ( v94->CpuVendor == 1 )
              {
                DeepSleep = 0;
              }
              else
              {
                Number = v94->Number;
                v94->DeepSleep = 1;
                _InterlockedOr64(
                  (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                            + 4485320
                                            + 0x140000000LL),
                  1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F));
                if ( !v94->DeepSleep )
                {
                  _InterlockedAnd64(
                    (volatile signed __int64 *)(8LL
                                              * ((unsigned int)KiProcessorIndexToNumberMappingTable[v94->Number] >> 6)
                                              + 4485320
                                              + 0x140000000LL),
                    ~(1LL << (KiProcessorIndexToNumberMappingTable[v94->Number] & 0x3F)));
                  if ( KiFlushPcid )
                  {
                    v96 = __readcr3();
                    __writecr3(v96);
                    if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                      KiSetUserTbFlushPending();
                  }
                  else
                  {
                    v97 = __readcr4();
                    if ( (v97 & 0x20080) != 0 )
                    {
                      __writecr4(v97 ^ 0x80);
                      __writecr4(v97);
                    }
                    else
                    {
                      v98 = __readcr3();
                      __writecr3(v98);
                    }
                  }
                }
                DeepSleep = v94->DeepSleep;
              }
            }
          }
        }
        if ( (*(_BYTE *)(v9 + 249) & 1) != 0 && (v99 = *(_BYTE *)(v9 + 250)) != 0 )
        {
          *(_BYTE *)(v9 + 248) |= 1u;
          v100 = v99;
        }
        else
        {
          v100 = 0;
        }
        _m_prefetchw((const void *)(v9 + 254));
        v101 = *(_WORD *)(v9 + 254) & 4;
        if ( v101 )
        {
          if ( (*(_BYTE *)(v9 + 248) & 1) != 0 )
          {
            v102 = *(_BYTE *)(v9 + 250);
            if ( (v102 & 3) == 0 )
            {
              v100 |= 2u;
              *(_BYTE *)(v9 + 250) = v102 | 2;
              __writemsr(0x48u, v102 | 2u);
            }
          }
          _InterlockedOr16((volatile signed __int16 *)(v9 + 254), 2u);
          v103 = *(_QWORD *)(v9 + 11696);
          _m_prefetchw((const void *)(v103 + 254));
          do
            v104 = *(_WORD *)(v103 + 254);
          while ( v104 != _InterlockedCompareExchange16(
                            (volatile signed __int16 *)(v103 + 254),
                            v104 & 0xFFE4 | 0xA,
                            v104) );
        }
        v149 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(v153 + 424))(
                 v161,
                 v180,
                 a2,
                 a3,
                 v100,
                 *(_DWORD *)(v153 + 796),
                 *(_QWORD *)(v153 + 808));
        v13 = v149;
        if ( v101 )
        {
          v105 = *(_QWORD *)(v9 + 11696);
          _m_prefetchw((const void *)(v105 + 254));
          do
            v106 = *(_WORD *)(v105 + 254);
          while ( v106 != _InterlockedCompareExchange16(
                            (volatile signed __int16 *)(v105 + 254),
                            v106 & 0xFFF5 | 2,
                            v106) );
          if ( (*(_WORD *)(v9 + 254) & 0x10) == 0 )
          {
            v107 = *(_BYTE *)(v9 + 250);
            if ( (v107 & 2) != 0 )
            {
              *(_BYTE *)(v9 + 250) = v107 & 0xFD;
              __writemsr(0x48u, v107 & 0xFD);
            }
          }
        }
        *(_BYTE *)(v9 + 248) &= ~1u;
        if ( DeepSleep && *(_BYTE *)(v9 + 23450) )
        {
          v108 = KeGetCurrentPrcb();
          v109 = v108->Number;
          v108->DeepSleep = 0;
          _InterlockedAnd64(
            &qword_1404470C8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v109] >> 6],
            ~(1LL << (KiProcessorIndexToNumberMappingTable[v109] & 0x3F)));
          v110 = __readcr4();
          if ( (v110 & 0x20080) != 0 )
          {
            __writecr4(v110 ^ 0x80);
            __writecr4(v110);
          }
          else
          {
            v111 = __readcr3();
            __writecr3(v111);
          }
        }
        if ( *(int *)(v153 + 64) < 0 )
        {
          if ( v149 >= 0 )
            v13 = *(_DWORD *)(v153 + 64);
          v149 = v13;
        }
        v168 = 0LL;
        if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
        {
          v168 = __PAIR64__(v13, a2);
          v190[0] = &v168;
          v190[1] = 8LL;
          EtwTraceKernelEvent((unsigned int)v190, 1, 1073774592, 4666, 1538);
        }
      }
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      QuadPart = PerformanceCounter.QuadPart;
      _InterlockedExchange64((volatile __int64 *)(v9 + 23840), 0LL);
      v113 = PerformanceCounter;
      if ( *(_BYTE *)(v9 + 24017) )
      {
        _disable();
        v114 = (v193 & 0x200) != 0;
        KxAcquireSpinLock((PKSPIN_LOCK)(v9 + 23880));
        v115 = 2LL;
        v116 = v9 + 23904;
        do
        {
          if ( *(_QWORD *)v116 && *(_BYTE *)(*(_QWORD *)v116 + 34LL) )
          {
            PpmPerfFeedbackCounterUpdate();
            v115 = v171;
          }
          v116 += 8LL;
          v171 = --v115;
        }
        while ( v115 );
        KxReleaseSpinLock((PKSPIN_LOCK)(v9 + 23880));
        if ( v114 )
          _enable();
      }
      v117 = __rdtsc();
      if ( (*(_QWORD *)(v9 + 25248) & 0x8000000000LL) != 0 )
        v118 = __readmsr(0xDB2u);
      else
        v118 = 0LL;
      *(LARGE_INTEGER *)(v9 + 23920) = v113;
      *(_QWORD *)(v9 + 23888) = v117;
      if ( (*(_QWORD *)(v9 + 25248) & 0x8000000000LL) != 0 )
        *(_QWORD *)(v9 + 24000) = v118;
      v21 = (unsigned __int64)SpinLock;
      if ( SpinLock )
      {
        PpmIdleUpdateConcurrency(SpinLock);
        v21 = *(_QWORD *)(v9 + 24200);
        if ( v21 )
          PpmIdleUpdateConcurrency((PKSPIN_LOCK)v21);
      }
      *(_QWORD *)(v9 + 23824) = v113.QuadPart - a6;
      if ( a8 )
      {
        v119 = PpmIdleSetSynchronizationState(v9 + 23872, 0LL);
        if ( v13 >= 0 && v119 != 8 && v142 )
          KeBugCheckEx(0xA0u, 0x702uLL, a2, v119, v9);
        *(_BYTE *)(v9 + 23857) = 0;
      }
      v30 = v144;
      if ( !v143 )
      {
        v29 = 3;
        goto LABEL_245;
      }
      if ( v144
        && v13 >= 0
        && PpmPlatformStates
        && *(_BYTE *)(PpmPlatformStates + 56)
        && PpmDripsStateIndex != -1
        && *(_DWORD *)(384LL * (unsigned int)PpmDripsStateIndex + PpmPlatformStates + 320) )
      {
        v120 = KeQueryWakeSource(&v156, v192);
        v121 = v156;
        v29 = 3;
        if ( v120 < 0 )
          v121 = 3;
        v156 = v121;
      }
      else
      {
        v29 = 3;
      }
LABEL_239:
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(v9 + 192) + 64LL),
        *(unsigned __int8 *)(v9 + 209));
      if ( v155 && v13 >= 0 )
        v122 = &v160;
      else
        v122 = 0LL;
      KeResumeClockTimerFromIdle(v122);
      off_140424490();
      KeAccumulateTicks(v9, *(_DWORD *)(v9 + 11892), MEMORY[0xFFFFF78000000320], 0, 0);
      goto LABEL_245;
    }
LABEL_94:
    LODWORD(SpinLock) = 1;
    goto LABEL_95;
  }
  v13 = -1073741802;
  v29 = 0;
  v158 = 0;
  v149 = -1073741802;
  if ( a8 )
  {
    PpmIdleSetSynchronizationState(v9 + 23872, 0LL);
    v30 = 0;
    goto LABEL_245;
  }
LABEL_31:
  v30 = 0;
LABEL_245:
  LOBYTE(v21) = 1;
  ((void (__fastcall *)(unsigned __int64))off_1404246E8[0])(v21);
  if ( v146 )
  {
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(v9 + 192) + 72LL),
      *(unsigned __int8 *)(v9 + 209));
    *(_QWORD *)(v9 + 23848) = -1LL;
  }
  v123 = v30;
  v124 = v169;
  v125 = PpmExitCoordinatedIdle(v9, v169, v123, v13, v29 != 3, QuadPart, a5, (__int64)v192, v156);
  v152 = v125;
  if ( v29 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v153 + 456))(
      v161,
      a2,
      v125,
      *(unsigned int *)(v124 + 4),
      *(_QWORD *)(v124 + 16));
  }
  else if ( !*(_BYTE *)v153 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(v153 + 464))(v161, v29);
  }
  v126 = *(_QWORD *)(v124 + 16);
  for ( LODWORD(v124) = *(_DWORD *)(v124 + 4);
        (_DWORD)v124;
        *(_DWORD *)(384LL * *(unsigned int *)(v126 + 4 * v124) + PpmPlatformStates + 320) = 0 )
  {
    v124 = (unsigned int)(v124 - 1);
  }
  if ( v147 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v191[0] = 1310721;
  memset(&v191[1], 0, 0xA4uLL);
  v127 = *((_QWORD *)v14 + 1);
  v128 = 0;
  v129 = KeGetPcr()->Prcb.Number;
  while ( 1 )
  {
    v130 = v14 ? *v14 : v128 + 1;
    if ( !v127 )
      break;
LABEL_262:
    _BitScanForward64(&v131, v127);
    v127 &= ~(1LL << v131);
    v179 = v131;
    v132 = KiProcessorNumberToIndexMappingTable[64 * v128 + (unsigned __int8)v131];
    v133 = KeGetPrcb(v132);
    v134 = *(_QWORD *)(v133 + 23808);
    _m_prefetchw((const void *)(v133 + 23872));
    v135 = *(_DWORD *)(v133 + 23872);
    do
    {
      v136 = v135;
      v137 = v135 ^ (v135 ^ (v135 - 1)) & 0xFFFFFF;
      if ( (v137 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v135) == 5 )
        {
          v137 = v137 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v135) == 7 )
        {
          v137 = v137 & 0xFFFFFF | 0x6000000;
        }
      }
      v135 = _InterlockedCompareExchange((volatile signed __int32 *)(v133 + 23872), v137, v135);
    }
    while ( v135 != v136 );
    if ( HIBYTE(v137) == 6 )
      KeAddProcessorAffinityEx(v191, v132);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v134
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v129] >> 6)
                                + 80),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v129] & 0x3F)));
    KeRemoveProcessorAffinityEx(v14, v132);
  }
  while ( ++v128 < v130 )
  {
    v127 = *(_QWORD *)&v14[4 * v128 + 4];
    if ( v127 )
      goto LABEL_262;
  }
  v138 = 0;
  v139 = v172;
  if ( LOWORD(v191[0]) )
  {
    while ( !*(_QWORD *)&v191[2 * v138 + 2] )
    {
      if ( ++v138 >= LOWORD(v191[0]) )
        goto LABEL_277;
    }
    HalRequestIpi(0LL, v191);
  }
LABEL_277:
  if ( *(_BYTE *)(v153 + 3) )
    PpmIdleCompleteExitLatencyTrace(v139, v149, v142, QuadPart, v160, v157, a2, v152);
  result = v158;
  *(_DWORD *)(v153 + 68) = v158;
  *(_DWORD *)(v153 + 64) = v149;
  return result;
}
