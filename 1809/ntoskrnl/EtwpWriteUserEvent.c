/*
 * XREFs of EtwpWriteUserEvent @ 0x1406483F0
 * Callers:
 *     NtTraceEvent @ 0x1400CB590 (NtTraceEvent.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140002AA0 (PsGetCurrentProcessSessionId.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpReserveTraceBuffer @ 0x1400C7540 (EtwpReserveTraceBuffer.c)
 *     IoGetStackLimits @ 0x1400CABD0 (IoGetStackLimits.c)
 *     DecodeProviderTraits @ 0x1400CC290 (DecodeProviderTraits.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1400CC37C (EtwpIsEventNameFilterEnabled.c)
 *     EtwpCreateEventKey @ 0x1400CCBF0 (EtwpCreateEventKey.c)
 *     PsGetProcessStartKey @ 0x1400CCC30 (PsGetProcessStartKey.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D78F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x14011318C (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14013F790 (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x1401B3F70 (EvaluateCurrentState.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14030E6C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x14030F420 (EtwpGetStackLookasideListEntry.c)
 *     EtwpGetCurrentSiloState @ 0x1403128F4 (EtwpGetCurrentSiloState.c)
 *     EtwpTraceLostEvent @ 0x140312938 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x14031344C (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140313F44 (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventNameFilter @ 0x1403143B8 (EtwpApplyEventNameFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14064A1F0 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408B60D0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1408C2DB0 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpApplyLevelKwFilter @ 0x1408C2EC4 (EtwpApplyLevelKwFilter.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1408C3140 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int16 a3,
        char a4,
        char a5,
        __int64 a6,
        _OWORD *a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        __int64 a12,
        __int64 a13,
        __int16 a14,
        void *a15,
        unsigned __int64 *a16)
{
  unsigned int v16; // r14d
  int v18; // edi
  __int64 v20; // rsi
  void *v21; // r15
  _QWORD *v23; // r13
  __int64 v24; // r12
  unsigned int v25; // ebx
  __int64 v26; // r10
  __int64 v27; // r8
  __int64 v28; // r9
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // r13
  int v33; // ecx
  bool v34; // al
  __int64 v35; // rdx
  int v36; // r11d
  _KPROCESS *Process; // rcx
  __int64 v38; // rcx
  int v39; // ecx
  unsigned __int64 v40; // r14
  unsigned int v41; // r15d
  char v42; // al
  unsigned int v43; // r11d
  int v44; // edi
  int v45; // ecx
  __int64 v46; // rbx
  __int64 v47; // rcx
  int v48; // ecx
  char v49; // bl
  void *v50; // rsp
  void *v51; // rsp
  _OWORD *v52; // r13
  unsigned int v53; // edx
  unsigned __int64 v54; // r8
  __int64 v55; // rax
  unsigned int v56; // esi
  unsigned int v57; // r15d
  unsigned int v58; // ebx
  __int64 v59; // rsi
  char v60; // al
  unsigned int v61; // eax
  int v62; // edi
  int v63; // eax
  unsigned __int16 v64; // bx
  unsigned int v65; // eax
  __int64 v66; // rsi
  signed int v67; // ecx
  unsigned __int16 *v68; // rax
  unsigned __int16 *v69; // r12
  __int64 v70; // rdi
  int ReserveTraceBufferStatus; // ebx
  signed int v72; // ecx
  BOOL v73; // eax
  __int64 v74; // rbx
  BOOL v75; // eax
  unsigned __int8 v76; // cl
  unsigned int v77; // r10d
  _OWORD *v78; // rax
  __int128 v79; // xmm0
  unsigned int v80; // r13d
  __int64 v81; // r13
  unsigned __int16 v82; // si
  unsigned __int16 v83; // si
  char *v84; // rcx
  char *v85; // rsi
  int v86; // ebx
  char *v87; // rbx
  __int16 v88; // r11
  char *v89; // rdx
  unsigned __int64 ProcessStartKey; // rax
  _QWORD *v91; // rdx
  char *v92; // r9
  unsigned __int64 v93; // rax
  char *v94; // rbx
  unsigned __int16 *v95; // rsi
  char *v96; // rbx
  unsigned __int16 *v97; // rdi
  unsigned __int16 v98; // dx
  unsigned __int16 *v99; // rcx
  unsigned __int16 v100; // si
  unsigned __int16 v101; // si
  _WORD *v102; // rdi
  __int64 v103; // rbx
  unsigned __int16 *v104; // rcx
  unsigned __int16 *v105; // rbx
  __int64 v106; // rcx
  unsigned __int16 v107; // dx
  char *v108; // rdi
  unsigned int v109; // esi
  unsigned int v110; // r11d
  unsigned __int64 v111; // r13
  size_t v112; // r8
  __int64 *v113; // rdx
  unsigned __int8 v114; // cl
  int v115; // ecx
  unsigned __int64 v116; // rbx
  unsigned int v117; // eax
  int v118; // ecx
  struct _KTHREAD *v119; // rdx
  __int64 v120; // rbx
  __int64 v121; // r8
  signed __int64 *v122; // rdx
  signed __int64 v123; // rax
  signed __int64 v124; // rtt
  char v125; // [rsp+210h] [rbp-610h] BYREF
  char v126; // [rsp+640h] [rbp-1E0h] BYREF
  char v127; // [rsp+820h] [rbp+0h]
  int v128; // [rsp+824h] [rbp+4h]
  signed int v129; // [rsp+828h] [rbp+8h]
  unsigned __int8 v130; // [rsp+82Ch] [rbp+Ch]
  unsigned int v131; // [rsp+830h] [rbp+10h]
  unsigned int v132; // [rsp+834h] [rbp+14h]
  int v133; // [rsp+838h] [rbp+18h]
  int v134; // [rsp+83Ch] [rbp+1Ch]
  char v135; // [rsp+840h] [rbp+20h]
  __int16 v136; // [rsp+848h] [rbp+28h]
  unsigned __int16 *v137; // [rsp+850h] [rbp+30h]
  unsigned int v138; // [rsp+858h] [rbp+38h]
  int v139; // [rsp+85Ch] [rbp+3Ch]
  _QWORD *v140; // [rsp+860h] [rbp+40h]
  unsigned int i; // [rsp+868h] [rbp+48h]
  __int64 v142; // [rsp+870h] [rbp+50h]
  unsigned __int16 v143[2]; // [rsp+878h] [rbp+58h] BYREF
  unsigned __int16 v144; // [rsp+87Ch] [rbp+5Ch]
  __int64 v145; // [rsp+880h] [rbp+60h]
  void *v146; // [rsp+888h] [rbp+68h]
  __int64 v147; // [rsp+890h] [rbp+70h]
  unsigned __int64 v148; // [rsp+898h] [rbp+78h]
  __int64 v149; // [rsp+8A0h] [rbp+80h]
  void *StackLookasideListEntry; // [rsp+8A8h] [rbp+88h] BYREF
  char PreviousMode; // [rsp+8B0h] [rbp+90h]
  char v152; // [rsp+8B1h] [rbp+91h]
  __int64 v153; // [rsp+8B8h] [rbp+98h]
  unsigned int v154; // [rsp+8C0h] [rbp+A0h]
  unsigned int v155; // [rsp+8C4h] [rbp+A4h]
  unsigned __int16 *v156; // [rsp+8C8h] [rbp+A8h]
  __int64 v157; // [rsp+8D0h] [rbp+B0h] BYREF
  unsigned __int64 v158; // [rsp+8D8h] [rbp+B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+8E0h] [rbp+C0h]
  unsigned int v160; // [rsp+8E8h] [rbp+C8h]
  unsigned int v161; // [rsp+8ECh] [rbp+CCh]
  void *v162; // [rsp+8F0h] [rbp+D0h]
  __int64 CurrentSiloState; // [rsp+8F8h] [rbp+D8h]
  unsigned __int64 *v164; // [rsp+900h] [rbp+E0h]
  void *v165; // [rsp+908h] [rbp+E8h]
  char *v166; // [rsp+910h] [rbp+F0h]
  _QWORD *v167; // [rsp+918h] [rbp+F8h]
  __int64 v168; // [rsp+920h] [rbp+100h]
  __int64 v169; // [rsp+928h] [rbp+108h]
  __int128 v170; // [rsp+930h] [rbp+110h] BYREF
  __int64 v171; // [rsp+940h] [rbp+120h]
  unsigned __int64 HighLimit; // [rsp+948h] [rbp+128h] BYREF
  unsigned __int64 LowLimit; // [rsp+950h] [rbp+130h] BYREF
  unsigned __int64 v174; // [rsp+958h] [rbp+138h] BYREF
  unsigned __int64 v175; // [rsp+960h] [rbp+140h] BYREF
  unsigned __int16 *v176[3]; // [rsp+968h] [rbp+148h] BYREF
  _OWORD v177[24]; // [rsp+980h] [rbp+160h] BYREF
  unsigned int v178; // [rsp+B00h] [rbp+2E0h]
  _WORD Src[40]; // [rsp+B10h] [rbp+2F0h] BYREF

  v144 = a3;
  v18 = a2;
  v153 = a1;
  v20 = a13;
  v168 = a1;
  v142 = a6;
  v169 = a6;
  v148 = a11;
  v149 = a12;
  v165 = a15;
  v164 = a16;
  LODWORD(v21) = 0;
  v129 = 0;
  StackLookasideListEntry = 0LL;
  v162 = 0LL;
  v158 = 0LL;
  CurrentSiloState = EtwpGetCurrentSiloState();
  v136 = a14 & 0x200;
  LOBYTE(v16) = 0;
  if ( !a11 )
  {
    if ( !a10 )
      goto LABEL_5;
    return 3221225485LL;
  }
  if ( !a10 )
    return 3221225485LL;
LABEL_5:
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a13 )
    v20 = a1;
  v145 = v20;
  Src[0] = 0;
  v127 = 0;
  v178 = 0;
  v23 = *(_QWORD **)(a1 + 392);
  v140 = v23;
  v167 = v23;
  if ( v164 && *v164 )
  {
    v158 = *v164;
    v127 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v165, (a14 & 0x400) != 0, v143, v176);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v18) = ~a4 & v18;
  v24 = 1LL;
  v25 = 0;
  v26 = v20;
  while ( 2 )
  {
    v27 = v149;
LABEL_14:
    v28 = a9;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_15:
        v29 = !_BitScanForward((unsigned int *)&v30, (unsigned __int8)v18);
        i = v30;
        if ( v29 )
          goto LABEL_238;
        v170 = 0uLL;
        v171 = 0LL;
        v128 = 80;
        v138 = 0;
        v139 = 0;
        v156 = 0LL;
        v166 = 0LL;
        LOBYTE(v16) = 0;
        v131 = v16;
        v130 = 0;
        v147 = 1LL;
        LOBYTE(v18) = (v18 - 1) & v18;
        v134 = v18;
        v135 = v18;
        v31 = (unsigned int)v30;
        v32 = v26 + 32 * (v30 + 4);
        if ( !v27
          || (v33 = *(_DWORD *)(v27 + 4LL * (*(unsigned __int16 *)(v32 + 6) >> 5)),
              !_bittest(&v33, *(_WORD *)(v32 + 6) & 0x1F)) )
        {
          v34 = EtwpLevelKeywordEnabled(v32, a8, v28);
          v27 = v149;
          if ( v34 )
            break;
        }
        v23 = v140;
        v24 = 1LL;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (a5 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
        break;
      if ( (*(_DWORD *)(v32 + 8) & 0x200) == 0 )
        break;
LABEL_35:
      v23 = v140;
      v24 = 1LL;
      v27 = v149;
    }
    v38 = *(_QWORD *)(v26 + 384);
    if ( v38
      && ((v39 = *(_DWORD *)(104 * v31 + v38), (v39 & 0x80000200) == 0x80000200) || (v39 & 0x80000100) == 0x80000100) )
    {
      v40 = v148;
      v41 = i;
      v42 = EtwpApplyEventIdPayloadFilterOnUserEvent(v26, i, v144, v142, v36, v148);
      v26 = v145;
      v28 = a9;
      if ( !v42 )
      {
LABEL_34:
        v16 = v131;
        LODWORD(v21) = 0;
        goto LABEL_35;
      }
    }
    else
    {
      v41 = i;
      v40 = v148;
    }
    if ( v136
      && EtwpIsEventNameFilterEnabled(v26, v41, a8, v28, 0)
      && !EtwpApplyEventNameFilter(v145, v41, v43, v40, 1, 0, v27, v28, 0) )
    {
      v26 = v145;
      v28 = a9;
      goto LABEL_34;
    }
    v44 = 0;
    if ( a7 )
    {
      v16 = 104;
      v128 = 104;
      v44 = 8;
    }
    else
    {
      v16 = v128;
    }
    v45 = *(_DWORD *)(v32 + 8);
    if ( (v45 & 0xFFFFFF9F) != 0 )
    {
      if ( (v45 & 0x800) != 0 && CurrentSiloState && CurrentSiloState != EtwpHostSiloState )
      {
        v44 |= 0x80u;
        v16 += (*(unsigned __int16 *)(CurrentSiloState + 4200) + 15) & 0xFFFFFFF8;
        v128 = v16;
      }
      if ( (v45 & 1) != 0 )
      {
        if ( (v127 & 2) == 0 )
        {
          EtwpGetSidExtendedHeaderItem(Src, v35, v27, v28);
          v127 |= 2u;
          v45 = *(_DWORD *)(v32 + 8);
        }
        v44 |= 2u;
        v16 += Src[0];
        v128 = v16;
      }
      if ( (v45 & 2) != 0 )
      {
        v44 |= 1u;
        v16 += 16;
        v128 = v16;
      }
      if ( (v45 & 0x80u) != 0 )
      {
        v44 |= 0x20u;
        v16 += 16;
        v128 = v16;
      }
      if ( (v45 & 0x100) != 0 )
      {
        v44 |= 0x40u;
        v16 += 16;
        v128 = v16;
      }
      if ( (v45 & 4) != 0 )
      {
        if ( (v46 = v145, (v47 = *(_QWORD *)(v145 + 384)) == 0)
          || (v48 = *(_DWORD *)(104 * v31 + v47), (v48 & 0x80001000) != 0x80001000)
          && (v48 & 0x80002000) != 0x80002000
          && (v48 & 0x80004000) != 0x80004000
          || (unsigned __int8)EtwpApplyLevelKwFilter(v145, v41, a8, a9, 1)
          && (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v142, v46, v41)
          && EtwpApplyEventNameFilter(v46, v41, a10, v148, 1, 0, a8, a9, 1) )
        {
          v49 = v127;
          if ( (v127 & 1) == 0 )
          {
            StackLookasideListEntry = EtwpGetStackLookasideListEntry();
            if ( StackLookasideListEntry )
            {
              EtwpGetStackExtendedHeaderItem(
                (__int64)CurrentThread,
                0,
                0x100u,
                (__int64)&StackLookasideListEntry,
                0,
                0LL);
              v127 = (StackLookasideListEntry != 0LL ? 8 : 0) | v49 & 0xF7;
            }
            else
            {
              IoGetStackLimits(&LowLimit, &HighLimit);
              if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
              {
                v50 = alloca(1552LL);
                StackLookasideListEntry = &v125;
                EtwpGetStackExtendedHeaderItem(
                  (__int64)CurrentThread,
                  0,
                  0xC0u,
                  (__int64)&StackLookasideListEntry,
                  0,
                  0LL);
              }
            }
            v127 |= 1u;
          }
          if ( StackLookasideListEntry )
          {
            v44 |= 4u;
            v16 += *(unsigned __int16 *)StackLookasideListEntry;
            v128 = v16;
          }
        }
      }
      if ( (*(_DWORD *)(v32 + 8) & 8) != 0 )
      {
        if ( (v127 & 4) == 0 )
        {
          IoGetStackLimits(&v175, &v174);
          if ( (unsigned __int64)&v174 - v175 > 0x1E0 )
          {
            v51 = alloca(480LL);
            v162 = &v126;
            EtwpGetPsmKeyExtendedHeaderItem();
          }
          v127 |= 4u;
        }
        if ( v162 )
        {
          v44 |= 0x10u;
          v16 += *(unsigned __int16 *)v162;
          v128 = v16;
        }
      }
    }
    v25 = *(unsigned __int16 *)(v32 + 6);
    v132 = v25;
    v155 = v25;
    v52 = &v177[3 * v178];
    v53 = a10;
    if ( a10 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      v54 = v148;
      if ( PreviousMode )
      {
        v55 = 16LL * a10;
        if ( v55 )
        {
          if ( (v148 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v148 + v55 > 0x7FFFFFFF0000LL || v148 + v55 < v148 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v56 = 0;
      v16 = v128;
      while ( 1 )
      {
        v161 = v56;
        if ( v56 >= v53 )
          break;
        v57 = v16;
        v154 = *(_DWORD *)(v54 + 16LL * v56 + 8);
        v58 = v154;
        if ( v154 > 0xFFFF )
          goto LABEL_87;
        if ( v136 )
        {
          v60 = *(_BYTE *)(v54 + 16LL * v56 + 12);
          v58 = v154;
        }
        else
        {
          v60 = 0;
        }
        if ( v60 )
        {
          if ( v60 == 1 )
          {
            v138 += EvaluateCurrentState((_DWORD **)&g_Feature_1748494648_61231940_FeatureDescriptorDetails)
                  ? v58
                  : (unsigned __int16)v58;
            ++v139;
            v16 = v128;
            v53 = a10;
            v54 = v148;
          }
          else
          {
            v16 = v128;
          }
        }
        else
        {
          v16 = v58 + v128;
          v128 += v58;
        }
        if ( v16 < v57 )
        {
LABEL_87:
          v129 = -2147483643;
          LODWORD(v21) = 0;
          LOBYTE(v18) = v134;
          v25 = v132;
          LOBYTE(v16) = v131;
          v23 = v140;
          v59 = v142;
          goto LABEL_239;
        }
        ++v56;
      }
      LOBYTE(v41) = i;
      v24 = v147;
      v25 = v132;
    }
    if ( !v139 )
      goto LABEL_111;
    if ( !EvaluateCurrentState((_DWORD **)&g_Feature_1748494648_61231940_FeatureDescriptorDetails) )
    {
      v61 = (v138 + 15) & 0xFFFFFFF8;
LABEL_110:
      v16 += v61;
      v128 = v16;
LABEL_111:
      v64 = v143[0];
      if ( v143[0] )
      {
        if ( EvaluateCurrentState((_DWORD **)&g_Feature_1748494648_61231940_FeatureDescriptorDetails) )
        {
          v65 = (v64 + 15) & 0xFFFFFFF8;
          if ( v65 > 0xFFFF )
          {
            v62 = (unsigned __int8)v134;
            v25 = v132;
            goto LABEL_106;
          }
        }
        else
        {
          v65 = (v64 + 15) & 0xFFFFFFF8;
        }
        v16 += v65;
        v128 = v16;
      }
      *((_DWORD *)v52 + 10) = v16;
      v25 = v132;
      v66 = 8LL * v132;
      v21 = v140;
      if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v66 + v140[56]), 1u) )
      {
        if ( v25 >= *((_DWORD *)v21 + 4) )
        {
          v24 = 1LL;
        }
        else
        {
          _mm_lfence();
          v24 = *(_QWORD *)(v66 + *((_QWORD *)v21 + 57));
          v16 = v128;
        }
        v147 = v24;
        LOBYTE(v131) = 1;
      }
      if ( (v24 & 1) != 0 )
      {
        v16 = v131;
        v24 = 1LL;
        if ( (_BYTE)v131 )
        {
          v23 = v21;
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v66 + *((_QWORD *)v21 + 56)), 1u);
          v16 = (unsigned __int8)v16;
          LODWORD(v21) = 0;
          if ( EvaluateCurrentState((_DWORD **)&g_Feature_1748494648_61231940_FeatureDescriptorDetails) )
            v16 = 0;
        }
        else
        {
          LODWORD(v21) = 0;
          v23 = v140;
        }
        v18 = v134;
        v26 = v145;
        v27 = v149;
        if ( v25 == 3 )
        {
          v67 = -1073741058;
          if ( !*((_DWORD *)v23 + 1017) )
            v67 = -1073741816;
          v129 = v67;
          goto LABEL_237;
        }
      }
      else
      {
        v21 = 0LL;
        v68 = (unsigned __int16 *)EtwpReserveTraceBuffer((unsigned int *)v24, v16, (__int64)&v170, &v157, 0);
        v69 = v68;
        v176[1] = v68;
        if ( v68 )
        {
          v74 = v147;
          *(_QWORD *)v52 = v147;
          *((_QWORD *)v52 + 1) = v68;
          v52[1] = v170;
          *((_QWORD *)v52 + 4) = v171;
          ++v178;
          v75 = EvaluateCurrentState((_DWORD **)&g_Feature_1748494648_61231940_FeatureDescriptorDetails);
          v76 = v131;
          if ( v75 )
            v76 = 0;
          v131 = v76;
          v130 = v76;
          v77 = 80;
          LODWORD(v137) = 80;
          v133 = 80;
          v146 = 0LL;
          v78 = (_OWORD *)v142;
          *(_OWORD *)v69 = *(_OWORD *)v142;
          *((_OWORD *)v69 + 1) = v78[1];
          *((_OWORD *)v69 + 2) = v78[2];
          *((_OWORD *)v69 + 3) = v78[3];
          *((_OWORD *)v69 + 4) = v78[4];
          if ( v176[0] )
          {
            v79 = *(_OWORD *)v176[0];
            v69[2] |= 0x80u;
          }
          else
          {
            v79 = *(_OWORD *)(v153 + 40);
          }
          *(_OWORD *)(v69 + 12) = v79;
          *(_DWORD *)v69 = v16 | *(_DWORD *)(v74 + 4LL * v144 + 20);
          v80 = 80;
          if ( v44 )
          {
            if ( (v44 & 0x80u) != 0 )
            {
              v21 = v69 + 40;
              v81 = CurrentSiloState;
              v82 = (*(_WORD *)(CurrentSiloState + 4200) + 15) & 0xFFF8;
              v69[40] = v82;
              v69[41] = 16;
              v69[43] = *(_WORD *)(v81 + 4200);
              v69[42] &= ~1u;
              v69[42] &= 1u;
              v83 = v82 - *(_WORD *)(v81 + 4200) - 8;
              memmove(v69 + 44, *(const void **)(v81 + 4192), *(unsigned __int16 *)(v81 + 4200));
              memset((char *)v69 + *(unsigned __int16 *)(v81 + 4200) + 88, 0, v83);
              v69[2] |= 1u;
              v77 = v69[40] + 80;
              LODWORD(v137) = v77;
              v133 = v77;
              v146 = v69 + 40;
              v80 = v77;
            }
            if ( (v44 & 8) != 0 )
            {
              v84 = (char *)v69 + v80;
              *(_DWORD *)v84 = 65560;
              *((_WORD *)v84 + 3) = 16;
              *((_WORD *)v84 + 2) &= ~1u;
              *((_WORD *)v84 + 2) &= 1u;
              *(_OWORD *)(v84 + 8) = *a7;
              v69[2] |= 1u;
              v77 = v80 + 24;
              LODWORD(v137) = v80 + 24;
              v133 = v80 + 24;
              if ( v21 )
                *((_WORD *)v21 + 2) |= 1u;
              v21 = (char *)v69 + v80;
              v146 = v21;
              v80 += 24;
            }
            if ( (v44 & 2) != 0 )
            {
              v85 = (char *)v69 + v80;
              v86 = Src[0];
              memmove(v85, Src, Src[0]);
              v69[2] |= 1u;
              v77 = v86 + v80;
              LODWORD(v137) = v86 + v80;
              v133 = v86 + v80;
              v80 += v86;
              if ( v21 )
                *((_WORD *)v21 + 2) |= 1u;
              v21 = v85;
              v146 = v85;
            }
            if ( (v44 & 1) != 0 )
            {
              v87 = (char *)v69 + v80;
              *(_DWORD *)v87 = 196624;
              *((_WORD *)v87 + 3) = 4;
              *((_WORD *)v87 + 2) &= ~1u;
              *((_WORD *)v87 + 2) &= 1u;
              *((_DWORD *)v87 + 2) = PsGetCurrentProcessSessionId();
              v69[2] |= 1u;
              v77 = v80 + 16;
              LODWORD(v137) = v80 + 16;
              v133 = v80 + 16;
              if ( v21 )
                *((_WORD *)v21 + 2) |= 1u;
              v21 = (char *)v69 + v80;
              v146 = v21;
              v80 += 16;
            }
            v88 = 8;
            if ( (v44 & 0x20) != 0 )
            {
              v89 = (char *)v69 + v80;
              *(_DWORD *)v89 = 851984;
              *((_WORD *)v89 + 3) = 8;
              *((_WORD *)v89 + 2) &= ~1u;
              *((_WORD *)v89 + 2) &= 1u;
              ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
              v91[1] = ProcessStartKey;
              v69[2] |= 1u;
              v77 = v80 + 16;
              LODWORD(v137) = v80 + 16;
              v133 = v80 + 16;
              if ( v21 )
                *((_WORD *)v21 + 2) |= 1u;
              v21 = v91;
              v146 = v91;
              v80 += 16;
              v16 = v128;
            }
            if ( (v44 & 0x40) != 0 )
            {
              v92 = (char *)v69 + v80;
              *(_DWORD *)v92 = 655376;
              *((_WORD *)v92 + 3) = v88;
              *((_WORD *)v92 + 2) &= ~1u;
              *((_WORD *)v92 + 2) &= 1u;
              if ( (v127 & 0x10) != 0 || (EtwpCreateEventKey(&v158), v127 |= 0x10u, !v164) )
              {
                v93 = v158;
              }
              else
              {
                v93 = v158;
                *v164 = v158;
              }
              *((_QWORD *)v92 + 1) = v93;
              v69[2] |= 1u;
              v77 = v80 + 16;
              LODWORD(v137) = v80 + 16;
              v133 = v80 + 16;
              if ( v21 )
                *((_WORD *)v21 + 2) |= 1u;
              v21 = v92;
              v146 = v92;
              v80 += 16;
            }
            if ( (v44 & 4) != 0 )
            {
              v94 = (char *)v69 + v80;
              v95 = (unsigned __int16 *)StackLookasideListEntry;
              memmove(v94, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
              v69[2] |= 1u;
              v77 = v80 + *v95;
              LODWORD(v137) = v77;
              v133 = v77;
              v80 = v77;
              if ( v21 )
                *((_WORD *)v21 + 2) |= 1u;
              v21 = v94;
              v146 = v94;
            }
            if ( (v44 & 0x10) != 0 )
            {
              v96 = (char *)v69 + v80;
              v97 = (unsigned __int16 *)v162;
              memmove(v96, v162, *(unsigned __int16 *)v162);
              v69[2] |= 1u;
              v77 = v80 + *v97;
              LODWORD(v137) = v77;
              v133 = v77;
              v80 = v77;
              if ( v21 )
                *((_WORD *)v21 + 2) |= 1u;
              v21 = v96;
              v146 = v96;
            }
          }
          v98 = v143[0];
          if ( v143[0] )
          {
            v99 = (unsigned __int16 *)((char *)v69 + v80);
            v137 = v99;
            v100 = (v143[0] + 15) & 0xFFF8;
            *v99 = v100;
            v99[1] = 12;
            v99[3] = v98;
            v99[2] &= ~1u;
            v99[2] &= 1u;
            v101 = v100 - v98 - 8;
            v102 = v99 + 4;
            v103 = v98;
            memmove(v99 + 4, v165, v98);
            memset((char *)v102 + v103, 0, v101);
            v69[2] |= 1u;
            v104 = v137;
            v77 = v80 + *v137;
            LODWORD(v137) = v77;
            v133 = v77;
            v80 = v77;
            if ( v21 )
              *((_WORD *)v21 + 2) |= 1u;
            v21 = v104;
            v146 = v104;
          }
          if ( v139 )
          {
            v105 = (unsigned __int16 *)((char *)v69 + v80);
            v106 = v138;
            v107 = (v138 + 15) & 0xFFF8;
            *v105 = v107;
            v105[1] = 11;
            v105[3] = v106;
            v105[2] &= ~1u;
            v105[2] &= 1u;
            v108 = (char *)(v105 + 4);
            v156 = v105 + 4;
            v166 = (char *)v105 + v106 + 8;
            memset(v166, 0, (unsigned __int16)(v107 - v106 - 8));
            v69[2] |= 1u;
            v77 = v80 + *v105;
            LODWORD(v137) = v77;
            v133 = v77;
            if ( v21 )
              *((_WORD *)v21 + 2) |= 1u;
          }
          else
          {
            v108 = (char *)v156;
          }
          LODWORD(v21) = 0;
          v109 = 0;
          v160 = 0;
          v110 = a10;
          v111 = v148;
          while ( v109 < v110 )
          {
            v112 = *(unsigned int *)(v111 + 16LL * v109 + 8);
            v113 = *(__int64 **)(v111 + 16LL * v109);
            if ( v136 )
            {
              v114 = *(_BYTE *)(v111 + 16LL * v109 + 12);
              v16 = v128;
              v108 = (char *)v156;
              v77 = v133;
              LODWORD(v137) = v133;
            }
            else
            {
              v114 = 0;
            }
            if ( v114 )
            {
              v115 = v114 - 1;
              if ( v115 )
              {
                if ( v115 == 2 )
                {
                  if ( (_DWORD)v112 == 8 )
                  {
                    if ( (unsigned __int64)(v113 + 1) > 0x7FFFFFFF0000LL || v113 + 1 < v113 )
                      MEMORY[0x7FFFFFFF0000] = 0;
                    v157 = *v113;
                  }
                  v160 = ++v109;
                }
                else
                {
                  v160 = ++v109;
                }
              }
              else
              {
                if ( !v108 )
                  goto LABEL_227;
                v116 = (unsigned __int64)&v108[v112];
                if ( &v108[v112] < v108 || v116 > (unsigned __int64)v166 || !v139 )
                  goto LABEL_227;
                if ( (_DWORD)v112
                  && ((unsigned __int64)v113 + v112 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v113 + v112) < v113) )
                {
                  MEMORY[0x7FFFFFFF0000] = 0;
                }
                memmove(v108, v113, v112);
                v108 = (char *)v116;
                v156 = (unsigned __int16 *)v116;
                --v139;
                v77 = (unsigned int)v137;
                v110 = a10;
                v160 = ++v109;
              }
            }
            else
            {
              v117 = v112 + v77;
              if ( (unsigned int)v112 + v77 < v77 )
              {
                v133 = -1;
                v118 = -1073741675;
                v117 = -1;
              }
              else
              {
                v133 = v112 + v77;
                v118 = 0;
              }
              if ( v118 || v117 > v16 )
              {
LABEL_227:
                v129 = -1073741820;
                *(_DWORD *)v69 = v16 | *(_DWORD *)(v147 + 28);
                *((_QWORD *)v69 + 2) = v157;
                LOBYTE(v18) = v134;
                v25 = v132;
                LOBYTE(v16) = v131;
                v23 = v140;
                v59 = v142;
                goto LABEL_239;
              }
              v152 = KeGetCurrentThread()->PreviousMode;
              if ( v152
                && (_DWORD)v112
                && ((unsigned __int64)v113 + v112 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v113 + v112) < v113) )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove((char *)v69 + v77, v113, v112);
              v16 = v128;
              v108 = (char *)v156;
              v77 = v133;
              LODWORD(v137) = v133;
              v110 = a10;
              v160 = ++v109;
            }
          }
          if ( v149 )
            *(_DWORD *)(v149 + 4LL * (v132 >> 5)) |= 1 << (v132 & 0x1F);
          *((_QWORD *)v69 + 2) = v157;
          v119 = CurrentThread;
          *((_DWORD *)v69 + 14) = CurrentThread->SchedulerApc.SpareLong0;
          *((_DWORD *)v69 + 15) = v119->UserTime;
          *((_DWORD *)v69 + 2) = v119[1].CurrentRunTime;
          *((_DWORD *)v69 + 3) = v119[1].CycleTime;
          v120 = v147;
          if ( (*(_DWORD *)(v147 + 12) & 0x80000) != 0
            && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
          {
            EtwpSendTraceEvent(v147, (__int64)&v170);
          }
          v18 = v134;
          v16 = v131;
          v23 = v140;
          v26 = v145;
          v24 = 1LL;
          v28 = a9;
          v27 = v149;
          if ( !*(_QWORD *)(v120 + 1272) )
          {
            v25 = v132;
            goto LABEL_15;
          }
          EtwpInvokeEventCallback(v120, (__int64 *)&v170);
          v25 = v132;
          v26 = v145;
          continue;
        }
        v70 = v147;
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v147, v16);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(
            (_QWORD *)(v153 + 40),
            (__int16 *)(v142 + 40),
            (unsigned __int16 *)(v70 + 152),
            ReserveTraceBufferStatus);
        v72 = v129;
        if ( v129 >= 0 )
        {
          if ( (*(_DWORD *)(v70 + 12) & 0x8000000) == 0 )
            v72 = ReserveTraceBufferStatus;
          v129 = v72;
        }
        v23 = v140;
        v24 = 1LL;
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v66 + v140[56]), 1u);
        v73 = EvaluateCurrentState((_DWORD **)&g_Feature_1748494648_61231940_FeatureDescriptorDetails);
        v16 = (unsigned __int8)v131;
        if ( v73 )
          v16 = 0;
        v29 = ReserveTraceBufferStatus == -1073741675;
        v18 = v134;
        v25 = v132;
        v26 = v145;
        v27 = v149;
        if ( v29 )
        {
          v129 = -1073741675;
LABEL_237:
          LOBYTE(v18) = v134;
          goto LABEL_238;
        }
      }
      goto LABEL_14;
    }
    break;
  }
  v61 = (v138 + 15) & 0xFFFFFFF8;
  if ( v61 <= 0xFFFF )
    goto LABEL_110;
  v62 = (unsigned __int8)v134;
LABEL_106:
  v63 = v129;
  if ( v129 >= 0 )
    v63 = -1073741675;
  v18 = v62 | (1 << v41);
  LODWORD(v21) = 0;
  v129 = v63;
  LOBYTE(v16) = v131;
  v23 = v140;
LABEL_238:
  v59 = v142;
LABEL_239:
  if ( EvaluateCurrentState((_DWORD **)&g_Feature_1748494648_61231940_FeatureDescriptorDetails) && (_BYTE)v16 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v23[56] + 8LL * v25), 1u);
  if ( (v127 & 8) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v129 < 0 )
  {
    EtwpFailLogging(a8, a9, v153, (__int64)v177, v18, v129, v59 + 40, 1);
  }
  else
  {
    for ( i = 0; i < v178; LODWORD(v21) = i )
    {
      v121 = *(_QWORD *)&v177[3 * (unsigned int)v21 + 1];
      v122 = (signed __int64 *)*((_QWORD *)&v177[3 * (unsigned int)v21 + 1] + 1);
      _m_prefetchw(v122);
      v123 = *v122;
      if ( (v121 ^ (unsigned __int64)*v122) >= 0xF )
      {
LABEL_249:
        _InterlockedDecrement((volatile signed __int32 *)(v121 + 12));
      }
      else
      {
        while ( 1 )
        {
          v124 = v123;
          v123 = _InterlockedCompareExchange64(v122, v123 + 1, v123);
          if ( v124 == v123 )
            break;
          if ( (v121 ^ (unsigned __int64)v123) >= 0xF )
            goto LABEL_249;
        }
      }
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(v23[56] + 8LL * **(unsigned int **)&v177[3 * (unsigned int)v21]),
        1u);
      ++i;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v129;
}
