/*
 * XREFs of EtwpWriteUserEvent @ 0x140643270
 * Callers:
 *     NtTraceEvent @ 0x14008C650 (NtTraceEvent.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1400366C0 (EtwpLevelKeywordEnabled.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     DecodeProviderTraits @ 0x14008D36C (DecodeProviderTraits.c)
 *     EtwpReleaseTraceBuffer @ 0x14008D3B0 (EtwpReleaseTraceBuffer.c)
 *     EtwpIsEventNameFilterEnabled @ 0x14008D3F4 (EtwpIsEventNameFilterEnabled.c)
 *     EtwpCreateEventKey @ 0x14008D410 (EtwpCreateEventKey.c)
 *     PsGetProcessStartKey @ 0x14008D450 (PsGetProcessStartKey.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140096A80 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     IoGetStackLimits @ 0x1400C2F20 (IoGetStackLimits.c)
 *     EtwpReserveTraceBuffer @ 0x1400C31E0 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentProcessSessionId @ 0x1400EC3B0 (PsGetCurrentProcessSessionId.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x14013B424 (EtwpFailLogging.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14032C0DC (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x14032CED0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpGetCurrentSiloState @ 0x140330954 (EtwpGetCurrentSiloState.c)
 *     EtwpTraceLostEvent @ 0x140330998 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x1403314A8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140332024 (EtwpInvokeEventCallback.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14033213C (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpApplyEventNameFilter @ 0x14033254C (EtwpApplyEventNameFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1406446E0 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408F1CC0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1408FED30 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpApplyLevelKwFilter @ 0x1408FEE44 (EtwpApplyLevelKwFilter.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1408FF078 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v18; // r15
  __int64 v19; // r12
  unsigned int v20; // edi
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 v27; // r11
  bool v28; // zf
  __int64 v29; // rcx
  char v30; // r12
  __int64 v31; // r14
  __int64 v32; // r13
  int v33; // ecx
  bool v34; // al
  _KPROCESS *Process; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  unsigned int v38; // esi
  unsigned __int8 v39; // r11
  unsigned int v40; // r8d
  int v41; // ebx
  int v42; // eax
  unsigned int v43; // r15d
  int v44; // ecx
  __int64 v45; // rcx
  int v46; // ecx
  __int64 v47; // r11
  char v48; // di
  void *v49; // rsp
  void *v50; // rsp
  unsigned int v51; // r14d
  _OWORD *v52; // rsi
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // r9d
  unsigned __int64 v56; // rcx
  unsigned int v57; // edx
  unsigned __int8 v58; // di
  __int64 v59; // rbx
  char v60; // al
  __int64 v61; // rdi
  __int64 v62; // r13
  __int64 v63; // r14
  unsigned int *v64; // r13
  signed int v65; // ecx
  __int64 v66; // rax
  __int64 v67; // r12
  int ReserveTraceBufferStatus; // ebx
  BOOLEAN v69; // al
  signed int v70; // ecx
  unsigned int v71; // r10d
  _WORD *v72; // r14
  _OWORD *v73; // rax
  __int128 v74; // xmm0
  unsigned int v75; // r13d
  __int64 v76; // r13
  __int16 v77; // si
  unsigned __int16 v78; // si
  __int64 v79; // rcx
  void *v80; // rsi
  int v81; // edi
  __int64 v82; // rdi
  __int16 v83; // r11
  __int64 v84; // rdx
  unsigned __int64 ProcessStartKey; // rax
  _QWORD *v86; // rdx
  _WORD *v87; // r9
  unsigned __int64 v88; // rax
  void *v89; // rdi
  unsigned __int16 *v90; // rsi
  void *v91; // rbx
  unsigned __int16 *v92; // rdi
  unsigned __int16 v93; // dx
  unsigned __int16 *v94; // rcx
  unsigned __int16 v95; // si
  unsigned __int16 v96; // si
  _WORD *v97; // rdi
  __int64 v98; // rbx
  unsigned __int16 *v99; // rcx
  unsigned __int16 *v100; // rbx
  __int64 v101; // rcx
  unsigned __int16 v102; // dx
  char *v103; // rdi
  unsigned int v104; // esi
  unsigned __int64 v105; // r13
  size_t v106; // r8
  __int64 *v107; // rdx
  unsigned __int8 v108; // cl
  int v109; // ecx
  unsigned __int64 v110; // rbx
  unsigned int v111; // eax
  int v112; // ecx
  struct _KTHREAD *v113; // rdx
  unsigned int *v114; // r14
  signed __int64 *v115; // rbx
  __int64 v116; // rdi
  struct _KTHREAD *v117; // rcx
  char v118; // [rsp+1E0h] [rbp-610h] BYREF
  char v119; // [rsp+610h] [rbp-1E0h] BYREF
  unsigned __int8 v120; // [rsp+7F0h] [rbp+0h]
  char v121; // [rsp+7F1h] [rbp+1h]
  int v122; // [rsp+7F4h] [rbp+4h]
  int v123; // [rsp+7F8h] [rbp+8h]
  signed int v124; // [rsp+7FCh] [rbp+Ch]
  unsigned __int8 v125; // [rsp+800h] [rbp+10h]
  int v126; // [rsp+808h] [rbp+18h]
  unsigned __int16 v127; // [rsp+80Ch] [rbp+1Ch]
  __int64 v128; // [rsp+810h] [rbp+20h]
  unsigned __int16 *v129; // [rsp+818h] [rbp+28h]
  __int16 v130; // [rsp+820h] [rbp+30h]
  int v131; // [rsp+824h] [rbp+34h]
  unsigned __int16 v132; // [rsp+828h] [rbp+38h]
  unsigned __int16 v133; // [rsp+82Ch] [rbp+3Ch] BYREF
  unsigned __int64 v134; // [rsp+830h] [rbp+40h]
  __int64 v135; // [rsp+838h] [rbp+48h]
  __int64 v136; // [rsp+840h] [rbp+50h]
  __int64 v137; // [rsp+848h] [rbp+58h]
  void *v138; // [rsp+850h] [rbp+60h]
  void *StackLookasideListEntry; // [rsp+858h] [rbp+68h] BYREF
  char PreviousMode; // [rsp+860h] [rbp+70h]
  char v141; // [rsp+861h] [rbp+71h]
  unsigned int v142; // [rsp+864h] [rbp+74h]
  __int64 v143; // [rsp+868h] [rbp+78h]
  __int64 v144; // [rsp+870h] [rbp+80h]
  __int64 v145; // [rsp+878h] [rbp+88h] BYREF
  unsigned int v146; // [rsp+880h] [rbp+90h]
  unsigned int v147; // [rsp+884h] [rbp+94h]
  unsigned __int16 *v148; // [rsp+888h] [rbp+98h]
  unsigned __int64 v149; // [rsp+890h] [rbp+A0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+898h] [rbp+A8h]
  unsigned int v151; // [rsp+8A0h] [rbp+B0h]
  unsigned int v152; // [rsp+8A4h] [rbp+B4h]
  void *v153; // [rsp+8A8h] [rbp+B8h]
  __int64 CurrentSiloState; // [rsp+8B0h] [rbp+C0h]
  void *v155; // [rsp+8B8h] [rbp+C8h]
  char *v156; // [rsp+8C0h] [rbp+D0h]
  __int64 v157; // [rsp+8C8h] [rbp+D8h]
  __int64 v158; // [rsp+8D0h] [rbp+E0h]
  __int64 v159; // [rsp+8D8h] [rbp+E8h]
  __int128 v160; // [rsp+8E0h] [rbp+F0h] BYREF
  __int64 v161; // [rsp+8F0h] [rbp+100h]
  unsigned __int64 HighLimit; // [rsp+8F8h] [rbp+108h] BYREF
  unsigned __int64 LowLimit; // [rsp+900h] [rbp+110h] BYREF
  unsigned __int64 v164; // [rsp+908h] [rbp+118h] BYREF
  unsigned __int64 v165; // [rsp+910h] [rbp+120h] BYREF
  unsigned __int16 *v166; // [rsp+918h] [rbp+128h] BYREF
  unsigned __int64 *v167; // [rsp+920h] [rbp+130h]
  __int64 v168; // [rsp+928h] [rbp+138h]
  _OWORD v169[25]; // [rsp+930h] [rbp+140h] BYREF
  _WORD Src[40]; // [rsp+AC0h] [rbp+2D0h] BYREF

  v132 = a3;
  v120 = a2;
  v136 = a1;
  v18 = a13;
  v158 = a1;
  v19 = a6;
  v128 = a6;
  v159 = a6;
  v134 = a11;
  v137 = a12;
  v155 = a15;
  v167 = a16;
  v124 = 0;
  memset(v169, 0, 0x188uLL);
  memset(Src, 0, sizeof(Src));
  StackLookasideListEntry = 0LL;
  v153 = 0LL;
  v149 = 0LL;
  CurrentSiloState = EtwpGetCurrentSiloState();
  v130 = a14 & 0x200;
  v20 = a10;
  if ( a11 )
  {
    if ( a10 )
      goto LABEL_6;
    return 3221225485LL;
  }
  if ( a10 )
    return 3221225485LL;
LABEL_6:
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( !a13 )
    v18 = a1;
  v144 = v18;
  v121 = 0;
  v22 = *(_QWORD *)(a1 + 392);
  v135 = v22;
  v157 = v22;
  if ( a16 && *a16 )
  {
    v149 = *a16;
    v121 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v155, (a14 & 0x400) != 0, &v133, &v166);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v23) = ~a4 & v120;
  v120 = v23;
  v24 = v134;
LABEL_16:
  v25 = v137;
LABEL_17:
  while ( 2 )
  {
    v26 = a9;
    v27 = a8;
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = !_BitScanForward((unsigned int *)&v29, (unsigned __int8)v23);
        v146 = v29;
        if ( v28 )
          goto LABEL_217;
        v143 = 1LL;
        v160 = 0uLL;
        v161 = 0LL;
        v145 = 0LL;
        v122 = 80;
        v30 = 0;
        v127 = 0;
        v131 = 0;
        v148 = 0LL;
        v156 = 0LL;
        v120 = (v23 - 1) & v23;
        v125 = v120;
        v31 = (unsigned int)v29;
        v32 = v18 + 32 * (v29 + 4);
        if ( !v25
          || (v33 = *(_DWORD *)(v25 + 4LL * (*(unsigned __int16 *)(v32 + 6) >> 5)),
              LOBYTE(v23) = v120,
              !_bittest(&v33, *(_WORD *)(v32 + 6) & 0x1F)) )
        {
          v34 = EtwpLevelKeywordEnabled(v32, v27, v26);
          v23 = v120;
          v25 = v137;
          if ( v34 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( (a5 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 )
              break;
            v23 = v120;
            if ( (*(_DWORD *)(v32 + 8) & 0x200) == 0 )
              break;
          }
        }
        v19 = v128;
      }
      v36 = *(_QWORD *)(v18 + 384);
      if ( v36
        && ((v37 = *(_DWORD *)(104 * v31 + v36), (v37 & 0x80000200) == 0x80000200) || (v37 & 0x80000100) == 0x80000100) )
      {
        v38 = v146;
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v18, v146, v132, v128, v20, v24) )
          goto LABEL_34;
        v26 = a9;
        v27 = a8;
      }
      else
      {
        v38 = v146;
      }
      if ( v130
        && EtwpIsEventNameFilterEnabled(v18, v38, v27, v26, 0)
        && !EtwpApplyEventNameFilter(v18, v38, v20, v24, 1, 0, v39, v26, 0) )
      {
LABEL_34:
        v22 = v135;
        v19 = v128;
LABEL_15:
        LOBYTE(v23) = v120;
        goto LABEL_16;
      }
      v40 = 0;
      v41 = 0;
      v126 = 0;
      v42 = 0;
      if ( a7 )
      {
        v43 = 104;
        v122 = 104;
        v42 = 8;
        v41 = 8;
        v126 = 8;
      }
      else
      {
        v43 = v122;
      }
      v44 = *(_DWORD *)(v32 + 8);
      if ( (v44 & 0xFFFFFF9F) != 0 )
      {
        if ( (v44 & 0x800) != 0 )
        {
          v23 = CurrentSiloState;
          if ( CurrentSiloState != EtwpHostSiloState )
          {
            v41 = v42 | 0x80;
            v126 = v42 | 0x80;
            v43 += (*(unsigned __int16 *)(CurrentSiloState + 4200) + 15) & 0xFFFFFFF8;
            v122 = v43;
          }
        }
        if ( (v44 & 1) != 0 )
        {
          if ( (v121 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem(Src, v23, 0LL, v26);
            v121 |= 2u;
            v44 = *(_DWORD *)(v32 + 8);
          }
          v41 |= 2u;
          v126 = v41;
          v43 += Src[0];
          v122 = v43;
          v20 = a10;
        }
        if ( (v44 & 2) != 0 )
        {
          v41 |= 1u;
          v126 = v41;
          v43 += 16;
          v122 = v43;
        }
        if ( (v44 & 0x80u) != 0 )
        {
          v41 |= 0x20u;
          v126 = v41;
          v43 += 16;
          v122 = v43;
        }
        if ( (v44 & 0x100) != 0 )
        {
          v41 |= 0x40u;
          v126 = v41;
          v43 += 16;
          v122 = v43;
        }
        if ( (v44 & 4) != 0 )
        {
          if ( (v45 = *(_QWORD *)(v144 + 384)) == 0
            || (v46 = *(_DWORD *)(104 * v31 + v45), (v46 & 0x80001000) != 0x80001000)
            && (v46 & 0x80002000) != 0x80002000
            && (v46 & 0x80004000) != 0x80004000
            || (unsigned __int8)EtwpApplyLevelKwFilter(v144, v38, a8, a9)
            && (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v128, v47, v38)
            && EtwpApplyEventNameFilter(v144, v38, v20, v134, 1, 0, a8, a9, 1) )
          {
            v48 = v121;
            if ( (v121 & 1) == 0 )
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
                v121 = (StackLookasideListEntry != 0LL ? 8 : 0) | v48 & 0xF7;
              }
              else
              {
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v49 = alloca(1552LL);
                  StackLookasideListEntry = &v118;
                  EtwpGetStackExtendedHeaderItem(
                    (__int64)CurrentThread,
                    0,
                    0xC0u,
                    (__int64)&StackLookasideListEntry,
                    0,
                    0LL);
                }
              }
              v121 |= 1u;
            }
            if ( StackLookasideListEntry )
            {
              v41 |= 4u;
              v126 = v41;
              v43 += *(unsigned __int16 *)StackLookasideListEntry;
              v122 = v43;
            }
          }
        }
        if ( (*(_DWORD *)(v32 + 8) & 8) != 0 )
        {
          if ( (v121 & 4) == 0 )
          {
            IoGetStackLimits(&v165, &v164);
            if ( (unsigned __int64)&v164 - v165 > 0x1E0 )
            {
              v50 = alloca(480LL);
              v153 = &v119;
              EtwpGetPsmKeyExtendedHeaderItem();
            }
            v121 |= 4u;
          }
          v20 = a10;
          if ( v153 )
          {
            v41 |= 0x10u;
            v126 = v41;
            v43 += *(unsigned __int16 *)v153;
            v122 = v43;
          }
        }
        else
        {
          v20 = a10;
        }
        v40 = 0;
      }
      v51 = *(unsigned __int16 *)(v32 + 6);
      v142 = v51;
      v52 = &v169[3 * LODWORD(v169[24])];
      if ( v20 )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v53 = v134;
        if ( PreviousMode )
        {
          v54 = 16LL * v20;
          if ( v54 )
          {
            if ( (v134 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v134 + v54 > 0x7FFFFFFF0000LL || v134 + v54 < v134 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v43 = v122;
        while ( 1 )
        {
          v152 = v40;
          if ( v40 >= v20 )
            break;
          v55 = v43;
          v56 = v53 + 16LL * v40;
          v147 = *(_DWORD *)(v56 + 8);
          v57 = v147;
          if ( v147 > 0xFFFF )
          {
            v124 = -2147483643;
            v22 = v135;
            v19 = v128;
            v58 = v120;
            v59 = v136;
            goto LABEL_218;
          }
          if ( v130 )
          {
            v60 = *(_BYTE *)(v56 + 12);
            v57 = v147;
          }
          else
          {
            v60 = 0;
          }
          if ( v60 )
          {
            if ( v60 == 1 )
            {
              v127 += v57;
              ++v131;
            }
            v43 = v122;
          }
          else
          {
            v43 = v57 + v122;
            v122 += v57;
          }
          if ( v43 < v55 )
          {
            v124 = -2147483643;
            v22 = v135;
            v19 = v128;
            v58 = v120;
            v59 = v136;
            goto LABEL_218;
          }
          ++v40;
          v53 = v134;
        }
        v41 = v126;
        v51 = v142;
      }
      if ( v131 )
      {
        v43 += (v127 + 15) & 0xFFFFFFF8;
        v122 = v43;
      }
      if ( v133 )
      {
        v43 += (v133 + 15) & 0xFFFFFFF8;
        v122 = v43;
      }
      *((_DWORD *)v52 + 10) = v43;
      v61 = 8LL * v51;
      v62 = v135;
      if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v135 + 448) + v61), 1u) )
      {
        if ( v51 >= *(_DWORD *)(v62 + 16) )
        {
          v63 = 1LL;
        }
        else
        {
          _mm_lfence();
          v63 = *(_QWORD *)(v61 + *(_QWORD *)(v62 + 456));
          v43 = v122;
          v41 = v126;
        }
        v143 = v63;
        v30 = 1;
        v51 = v142;
      }
      v64 = (unsigned int *)v143;
      if ( (v143 & 1) != 0 )
      {
        v22 = v135;
        if ( v30 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v135 + 448) + v61), 1u);
        v20 = a10;
        v24 = v134;
        v18 = v144;
        v19 = v128;
        LOBYTE(v23) = v120;
        v25 = v137;
        if ( v51 == 3 )
        {
          v65 = -1073741058;
          if ( !*(_DWORD *)(v22 + 4068) )
            v65 = -1073741816;
          v124 = v65;
          goto LABEL_217;
        }
        goto LABEL_17;
      }
      v66 = EtwpReserveTraceBuffer((unsigned int *)v143, v43, (__int64)&v160, &v145, 0);
      v67 = v66;
      v168 = v66;
      if ( !v66 )
        break;
      *(_QWORD *)v52 = v64;
      *((_QWORD *)v52 + 1) = v66;
      v52[1] = v160;
      *((_QWORD *)v52 + 4) = v161;
      ++LODWORD(v169[24]);
      v71 = 80;
      LODWORD(v129) = 80;
      v123 = 80;
      v72 = 0LL;
      v138 = 0LL;
      v73 = (_OWORD *)v128;
      *(_OWORD *)v67 = *(_OWORD *)v128;
      *(_OWORD *)(v67 + 16) = v73[1];
      *(_OWORD *)(v67 + 32) = v73[2];
      *(_OWORD *)(v67 + 48) = v73[3];
      *(_OWORD *)(v67 + 64) = v73[4];
      if ( v166 )
      {
        v74 = *(_OWORD *)v166;
        *(_WORD *)(v67 + 4) |= 0x80u;
      }
      else
      {
        v74 = *(_OWORD *)(v136 + 40);
      }
      *(_OWORD *)(v67 + 24) = v74;
      *(_DWORD *)v67 = v43 | v64[v132 + 5];
      v75 = 80;
      if ( v41 )
      {
        if ( (v41 & 0x80u) != 0 )
        {
          v72 = (_WORD *)(v67 + 80);
          v76 = CurrentSiloState;
          v77 = (*(_WORD *)(CurrentSiloState + 4200) + 15) & 0xFFF8;
          *(_WORD *)(v67 + 80) = v77;
          *(_WORD *)(v67 + 82) = 16;
          *(_WORD *)(v67 + 86) = *(_WORD *)(v76 + 4200);
          *(_WORD *)(v67 + 84) &= ~1u;
          *(_WORD *)(v67 + 84) &= 1u;
          v78 = v77 - *(_WORD *)(v76 + 4200) - 8;
          memmove((void *)(v67 + 88), *(const void **)(v76 + 4192), *(unsigned __int16 *)(v76 + 4200));
          memset((void *)(v67 + 88 + *(unsigned __int16 *)(v76 + 4200)), 0, v78);
          *(_WORD *)(v67 + 4) |= 1u;
          v71 = *(unsigned __int16 *)(v67 + 80) + 80;
          LODWORD(v129) = v71;
          v123 = v71;
          v138 = (void *)(v67 + 80);
          v75 = v71;
        }
        if ( (v41 & 8) != 0 )
        {
          v79 = v67 + v75;
          *(_DWORD *)v79 = 65560;
          *(_WORD *)(v79 + 6) = 16;
          *(_WORD *)(v79 + 4) &= ~1u;
          *(_WORD *)(v79 + 4) &= 1u;
          *(_OWORD *)(v79 + 8) = *a7;
          *(_WORD *)(v67 + 4) |= 1u;
          v71 = v75 + 24;
          LODWORD(v129) = v75 + 24;
          v123 = v75 + 24;
          if ( v72 )
            v72[2] |= 1u;
          v72 = (_WORD *)(v67 + v75);
          v138 = v72;
          v75 += 24;
        }
        if ( (v41 & 2) != 0 )
        {
          v80 = (void *)(v67 + v75);
          v81 = Src[0];
          memmove(v80, Src, Src[0]);
          *(_WORD *)(v67 + 4) |= 1u;
          v71 = v81 + v75;
          LODWORD(v129) = v81 + v75;
          v123 = v81 + v75;
          v75 += v81;
          if ( v72 )
            v72[2] |= 1u;
          v72 = v80;
          v138 = v80;
        }
        if ( (v41 & 1) != 0 )
        {
          v82 = v67 + v75;
          *(_DWORD *)v82 = 196624;
          *(_WORD *)(v82 + 6) = 4;
          *(_WORD *)(v82 + 4) &= ~1u;
          *(_WORD *)(v82 + 4) &= 1u;
          *(_DWORD *)(v82 + 8) = PsGetCurrentProcessSessionId();
          *(_WORD *)(v67 + 4) |= 1u;
          v71 = v75 + 16;
          LODWORD(v129) = v75 + 16;
          v123 = v75 + 16;
          if ( v72 )
            v72[2] |= 1u;
          v72 = (_WORD *)(v67 + v75);
          v138 = v72;
          v75 += 16;
        }
        v83 = 8;
        if ( (v41 & 0x20) != 0 )
        {
          v84 = v67 + v75;
          *(_DWORD *)v84 = 851984;
          *(_WORD *)(v84 + 6) = 8;
          *(_WORD *)(v84 + 4) &= ~1u;
          *(_WORD *)(v84 + 4) &= 1u;
          ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
          v86[1] = ProcessStartKey;
          *(_WORD *)(v67 + 4) |= 1u;
          v71 = v75 + 16;
          LODWORD(v129) = v75 + 16;
          v123 = v75 + 16;
          if ( v72 )
            v72[2] |= 1u;
          v72 = v86;
          v138 = v86;
          v75 += 16;
          v43 = v122;
          LOBYTE(v41) = v126;
        }
        if ( (v41 & 0x40) != 0 )
        {
          v87 = (_WORD *)(v67 + v75);
          *(_DWORD *)v87 = 655376;
          v87[3] = v83;
          v87[2] &= ~1u;
          v87[2] &= 1u;
          if ( (v121 & 0x10) != 0 || (EtwpCreateEventKey(&v149), v121 |= 0x10u, !v167) )
          {
            v88 = v149;
          }
          else
          {
            v88 = v149;
            *v167 = v149;
          }
          *((_QWORD *)v87 + 1) = v88;
          *(_WORD *)(v67 + 4) |= 1u;
          v71 = v75 + 16;
          LODWORD(v129) = v75 + 16;
          v123 = v75 + 16;
          if ( v72 )
            v72[2] |= 1u;
          v72 = v87;
          v138 = v87;
          v75 += 16;
        }
        if ( (v41 & 4) != 0 )
        {
          v89 = (void *)(v67 + v75);
          v90 = (unsigned __int16 *)StackLookasideListEntry;
          memmove(v89, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
          *(_WORD *)(v67 + 4) |= 1u;
          v71 = v75 + *v90;
          LODWORD(v129) = v71;
          v123 = v71;
          v75 = v71;
          if ( v72 )
            v72[2] |= 1u;
          v72 = v89;
          v138 = v89;
        }
        if ( (v41 & 0x10) != 0 )
        {
          v91 = (void *)(v67 + v75);
          v92 = (unsigned __int16 *)v153;
          memmove(v91, v153, *(unsigned __int16 *)v153);
          *(_WORD *)(v67 + 4) |= 1u;
          v71 = v75 + *v92;
          LODWORD(v129) = v71;
          v123 = v71;
          v75 = v71;
          if ( v72 )
            v72[2] |= 1u;
          v72 = v91;
          v138 = v91;
        }
      }
      v93 = v133;
      if ( v133 )
      {
        v94 = (unsigned __int16 *)(v67 + v75);
        v129 = v94;
        v95 = (v133 + 15) & 0xFFF8;
        *v94 = v95;
        v94[1] = 12;
        v94[3] = v93;
        v94[2] &= ~1u;
        v94[2] &= 1u;
        v96 = v95 - v93 - 8;
        v97 = v94 + 4;
        v98 = v93;
        memmove(v94 + 4, v155, v93);
        memset((char *)v97 + v98, 0, v96);
        *(_WORD *)(v67 + 4) |= 1u;
        v99 = v129;
        v71 = v75 + *v129;
        LODWORD(v129) = v71;
        v123 = v71;
        v75 = v71;
        if ( v72 )
          v72[2] |= 1u;
        v72 = v99;
        v138 = v99;
      }
      if ( v131 )
      {
        v100 = (unsigned __int16 *)(v67 + v75);
        v101 = v127;
        v102 = (v127 + 15) & 0xFFF8;
        *v100 = v102;
        v100[1] = 11;
        v100[3] = v101;
        v100[2] &= ~1u;
        v100[2] &= 1u;
        v103 = (char *)(v100 + 4);
        v148 = v100 + 4;
        v156 = (char *)v100 + v101 + 8;
        memset(v156, 0, (unsigned __int16)(v102 - v101 - 8));
        *(_WORD *)(v67 + 4) |= 1u;
        v71 = v75 + *v100;
        LODWORD(v129) = v71;
        v123 = v71;
        if ( v72 )
          v72[2] |= 1u;
      }
      else
      {
        v103 = (char *)v148;
      }
      v104 = 0;
      v151 = 0;
      v105 = v134;
      while ( v104 < a10 )
      {
        v106 = *(unsigned int *)(v105 + 16LL * v104 + 8);
        v107 = *(__int64 **)(v105 + 16LL * v104);
        if ( v130 )
        {
          v108 = *(_BYTE *)(v105 + 16LL * v104 + 12);
          v43 = v122;
          v103 = (char *)v148;
          v71 = v123;
          LODWORD(v129) = v123;
        }
        else
        {
          v108 = 0;
        }
        if ( v108 )
        {
          v109 = v108 - 1;
          if ( v109 )
          {
            if ( v109 == 2 )
            {
              if ( (_DWORD)v106 == 8 )
              {
                if ( (unsigned __int64)(v107 + 1) > 0x7FFFFFFF0000LL || v107 + 1 < v107 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v145 = *v107;
              }
              v151 = ++v104;
            }
            else
            {
              v151 = ++v104;
            }
          }
          else
          {
            if ( !v103 )
              goto LABEL_207;
            v110 = (unsigned __int64)&v103[v106];
            if ( &v103[v106] < v103 || v110 > (unsigned __int64)v156 || !v131 )
              goto LABEL_207;
            if ( (_DWORD)v106
              && ((unsigned __int64)v107 + v106 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v107 + v106) < v107) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove(v103, v107, v106);
            v103 = (char *)v110;
            v148 = (unsigned __int16 *)v110;
            --v131;
            v71 = (unsigned int)v129;
            v151 = ++v104;
          }
        }
        else
        {
          v111 = v106 + v71;
          if ( (unsigned int)v106 + v71 < v71 )
          {
            v123 = -1;
            v112 = -1073741675;
            v111 = -1;
          }
          else
          {
            v123 = v106 + v71;
            v112 = 0;
          }
          if ( v112 || v111 > v43 )
          {
LABEL_207:
            v124 = -1073741820;
            *(_DWORD *)v67 = v43 | *(_DWORD *)(v143 + 28);
            *(_QWORD *)(v67 + 16) = v145;
            v22 = v135;
            v19 = v128;
            v58 = v120;
            v59 = v136;
            goto LABEL_218;
          }
          v141 = KeGetCurrentThread()->PreviousMode;
          if ( v141
            && (_DWORD)v106
            && ((unsigned __int64)v107 + v106 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v107 + v106) < v107) )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          memmove((void *)(v67 + v71), v107, v106);
          v43 = v122;
          v103 = (char *)v148;
          v71 = v123;
          LODWORD(v129) = v123;
          v151 = ++v104;
        }
      }
      v25 = v137;
      if ( v137 )
        *(_DWORD *)(v137 + 4LL * (v142 >> 5)) |= 1 << (v142 & 0x1F);
      *(_QWORD *)(v67 + 16) = v145;
      v113 = CurrentThread;
      *(_DWORD *)(v67 + 56) = CurrentThread->SchedulerApc.SpareLong0;
      *(_DWORD *)(v67 + 60) = v113->UserTime;
      *(_DWORD *)(v67 + 8) = v113[1].CurrentRunTime;
      *(_DWORD *)(v67 + 12) = v113[1].CycleTime;
      v114 = (unsigned int *)v143;
      if ( (*(_DWORD *)(v143 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v143, (__int64)&v160);
        v25 = v137;
      }
      v20 = a10;
      v24 = v134;
      v22 = v135;
      v18 = v144;
      v19 = v128;
      LOBYTE(v23) = v120;
      v26 = a9;
      v27 = a8;
      if ( *((_QWORD *)v114 + 163) )
      {
        EtwpInvokeEventCallback((__int64)v114, (__int64 *)&v160, v136 + 40);
        goto LABEL_15;
      }
    }
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus((__int64)v64, v43);
    v69 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
    v19 = v128;
    if ( v69 )
      EtwpTraceLostEvent(
        (_QWORD *)(v136 + 40),
        (__int16 *)(v128 + 40),
        (unsigned __int16 *)v64 + 76,
        ReserveTraceBufferStatus);
    v70 = v124;
    if ( v124 >= 0 )
    {
      if ( (v64[3] & 0x8000000) == 0 )
        v70 = ReserveTraceBufferStatus;
      v124 = v70;
    }
    v22 = v135;
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v135 + 448) + v61), 1u);
    v28 = ReserveTraceBufferStatus == -1073741675;
    v20 = a10;
    v24 = v134;
    v18 = v144;
    LOBYTE(v23) = v120;
    v25 = v137;
    if ( !v28 )
      continue;
    break;
  }
  v124 = -1073741675;
LABEL_217:
  v58 = v120;
  v59 = v136;
LABEL_218:
  if ( (v121 & 8) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v124 < 0 )
  {
    EtwpFailLogging(a8, a9, v59, (__int64)v169, v58, v124, v19 + 40, 1);
  }
  else if ( LODWORD(v169[24]) )
  {
    v115 = (signed __int64 *)v169;
    v116 = LODWORD(v169[24]);
    do
    {
      EtwpReleaseTraceBuffer(v115 + 2);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v22 + 448) + 8LL * *(unsigned int *)*v115),
        1u);
      v115 += 6;
      --v116;
    }
    while ( v116 );
  }
  v117 = CurrentThread;
  v28 = CurrentThread->KernelApcDisable++ == -1;
  if ( v28
    && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v117->ApcState.ApcListHead[0].Flink != &v117->152
    && !v117->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v117);
  }
  return (unsigned int)v124;
}
