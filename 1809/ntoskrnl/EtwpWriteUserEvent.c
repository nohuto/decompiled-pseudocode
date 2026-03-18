/*
 * XREFs of EtwpWriteUserEvent @ 0x1406473F0
 * Callers:
 *     NtTraceEvent @ 0x1400CB490 (NtTraceEvent.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140002AA0 (PsGetCurrentProcessSessionId.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpReserveTraceBuffer @ 0x1400C75E0 (EtwpReserveTraceBuffer.c)
 *     IoGetStackLimits @ 0x1400CAAD0 (IoGetStackLimits.c)
 *     DecodeProviderTraits @ 0x1400CC190 (DecodeProviderTraits.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1400CC27C (EtwpIsEventNameFilterEnabled.c)
 *     EtwpCreateEventKey @ 0x1400CCB50 (EtwpCreateEventKey.c)
 *     PsGetProcessStartKey @ 0x1400CCB90 (PsGetProcessStartKey.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D7850 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F97F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpFailLogging @ 0x1401130FC (EtwpFailLogging.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14013F670 (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14030E3D4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpGetStackLookasideListEntry @ 0x14030F130 (EtwpGetStackLookasideListEntry.c)
 *     EtwpGetCurrentSiloState @ 0x140312604 (EtwpGetCurrentSiloState.c)
 *     EtwpTraceLostEvent @ 0x140312648 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x14031315C (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140313C54 (EtwpInvokeEventCallback.c)
 *     EtwpApplyEventNameFilter @ 0x1403140C8 (EtwpApplyEventNameFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140649050 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408B4E30 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1408C1B10 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpApplyLevelKwFilter @ 0x1408C1C24 (EtwpApplyLevelKwFilter.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1408C1EA0 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rdi
  unsigned int v21; // r13d
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // zf
  __int64 v29; // rcx
  char v30; // r12
  __int64 v31; // r14
  __int64 v32; // r13
  int v33; // ecx
  bool v34; // al
  int v35; // r11d
  _KPROCESS *Process; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  unsigned int v39; // esi
  char v40; // al
  unsigned int v41; // r11d
  int v42; // edi
  unsigned int v43; // r15d
  int v44; // ecx
  __int64 v45; // rcx
  int v46; // ecx
  char v47; // bl
  void *v48; // rsp
  void *v49; // rsp
  unsigned int v50; // r14d
  _OWORD *v51; // rbx
  unsigned int v52; // edx
  __int64 v53; // rax
  unsigned int v54; // r8d
  unsigned int v55; // r9d
  unsigned int v56; // edx
  unsigned __int8 v57; // di
  char v58; // al
  __int64 v59; // rsi
  __int64 v60; // r13
  __int64 v61; // r14
  unsigned int *v62; // r13
  signed int v63; // ecx
  unsigned __int16 *v64; // r14
  unsigned __int16 *v65; // rax
  unsigned __int16 *v66; // r12
  int ReserveTraceBufferStatus; // ebx
  BOOLEAN v68; // al
  signed int v69; // ecx
  unsigned int v70; // esi
  _OWORD *v71; // rax
  __int128 v72; // xmm0
  unsigned int v73; // r13d
  __int64 v74; // r13
  unsigned __int16 v75; // si
  unsigned __int16 v76; // si
  char *v77; // rcx
  int v78; // ebx
  char *v79; // rbx
  __int16 v80; // r11
  __int16 v81; // r8
  char *v82; // rdx
  unsigned __int64 ProcessStartKey; // rax
  unsigned __int16 *v84; // rdx
  unsigned __int16 *v85; // r9
  unsigned __int64 v86; // rax
  unsigned __int16 *v87; // rbx
  unsigned __int16 *v88; // rsi
  unsigned __int16 *v89; // rbx
  unsigned __int16 *v90; // rdi
  unsigned __int16 v91; // dx
  unsigned __int16 *v92; // rcx
  unsigned __int16 v93; // si
  unsigned __int16 v94; // si
  _WORD *v95; // rdi
  __int64 v96; // rbx
  unsigned __int16 *v97; // rcx
  unsigned __int16 *v98; // rbx
  __int64 v99; // rcx
  unsigned __int16 v100; // dx
  char *v101; // rdi
  unsigned int v102; // r14d
  unsigned int v103; // r11d
  size_t v104; // r8
  __int64 *v105; // rdx
  unsigned __int8 v106; // cl
  int v107; // ecx
  size_t v108; // rcx
  unsigned __int64 v109; // rbx
  unsigned int v110; // eax
  int v111; // ecx
  struct _KTHREAD *v112; // rdx
  unsigned int *v113; // r14
  __int64 v114; // r8
  signed __int64 *v115; // rdx
  signed __int64 v116; // rax
  signed __int64 v117; // rtt
  char v118; // [rsp+210h] [rbp-610h] BYREF
  char v119; // [rsp+640h] [rbp-1E0h] BYREF
  unsigned __int8 v120; // [rsp+820h] [rbp+0h]
  char v121; // [rsp+821h] [rbp+1h]
  int v122; // [rsp+824h] [rbp+4h]
  int v123; // [rsp+828h] [rbp+8h]
  signed int v124; // [rsp+82Ch] [rbp+Ch]
  unsigned __int8 v125; // [rsp+830h] [rbp+10h]
  unsigned __int16 v126; // [rsp+838h] [rbp+18h]
  __int64 v127; // [rsp+840h] [rbp+20h]
  __int16 v128; // [rsp+848h] [rbp+28h]
  int v129; // [rsp+84Ch] [rbp+2Ch]
  __int64 v130; // [rsp+850h] [rbp+30h]
  unsigned __int16 v131; // [rsp+858h] [rbp+38h]
  unsigned __int16 v132; // [rsp+85Ch] [rbp+3Ch] BYREF
  unsigned int i; // [rsp+860h] [rbp+40h]
  __int64 v134; // [rsp+868h] [rbp+48h]
  unsigned __int64 v135; // [rsp+870h] [rbp+50h]
  unsigned __int16 *v136; // [rsp+878h] [rbp+58h]
  __int64 v137; // [rsp+880h] [rbp+60h]
  void *StackLookasideListEntry; // [rsp+888h] [rbp+68h] BYREF
  char PreviousMode; // [rsp+891h] [rbp+71h]
  unsigned int v141; // [rsp+894h] [rbp+74h]
  __int64 v142; // [rsp+898h] [rbp+78h]
  __int64 v143; // [rsp+8A0h] [rbp+80h]
  unsigned int v144; // [rsp+8A8h] [rbp+88h]
  unsigned __int16 *v145; // [rsp+8B0h] [rbp+90h]
  __int64 v146; // [rsp+8B8h] [rbp+98h] BYREF
  unsigned __int64 v147; // [rsp+8C0h] [rbp+A0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+8C8h] [rbp+A8h]
  unsigned int v149; // [rsp+8D0h] [rbp+B0h]
  unsigned int v150; // [rsp+8D4h] [rbp+B4h]
  void *v151; // [rsp+8D8h] [rbp+B8h]
  unsigned __int16 *v152; // [rsp+8E0h] [rbp+C0h]
  __int64 CurrentSiloState; // [rsp+8E8h] [rbp+C8h]
  unsigned __int64 *v154; // [rsp+8F0h] [rbp+D0h]
  void *v155; // [rsp+8F8h] [rbp+D8h]
  char *v156; // [rsp+900h] [rbp+E0h]
  __int64 v157; // [rsp+908h] [rbp+E8h]
  __int64 v158; // [rsp+910h] [rbp+F0h]
  __int64 v159; // [rsp+918h] [rbp+F8h]
  __int128 v160; // [rsp+920h] [rbp+100h] BYREF
  __int64 v161; // [rsp+930h] [rbp+110h]
  unsigned __int64 HighLimit; // [rsp+938h] [rbp+118h] BYREF
  unsigned __int64 LowLimit; // [rsp+940h] [rbp+120h] BYREF
  unsigned __int64 v164; // [rsp+948h] [rbp+128h] BYREF
  unsigned __int64 v165; // [rsp+950h] [rbp+130h] BYREF
  unsigned __int16 *v166[3]; // [rsp+958h] [rbp+138h] BYREF
  _OWORD v167[24]; // [rsp+970h] [rbp+150h] BYREF
  unsigned int v168; // [rsp+AF0h] [rbp+2D0h]
  _WORD Src[40]; // [rsp+B00h] [rbp+2E0h] BYREF

  v131 = a3;
  v120 = a2;
  v17 = a1;
  v130 = a1;
  v18 = a13;
  v158 = a1;
  v19 = a6;
  v127 = a6;
  v159 = a6;
  v20 = a11;
  v135 = a11;
  v137 = a12;
  v155 = a15;
  v154 = a16;
  v21 = 0;
  v124 = 0;
  StackLookasideListEntry = 0LL;
  v151 = 0LL;
  v147 = 0LL;
  CurrentSiloState = EtwpGetCurrentSiloState();
  v128 = a14 & 0x200;
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
    v18 = v17;
  v143 = v18;
  Src[0] = 0;
  v121 = 0;
  v168 = 0;
  v23 = *(_QWORD *)(v17 + 392);
  v134 = v23;
  v157 = v23;
  if ( v154 && *v154 )
  {
    v147 = *v154;
    v121 = 16;
  }
  DecodeProviderTraits((unsigned __int16 *)v155, (a14 & 0x400) != 0, &v132, v166);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v24) = ~a4 & v120;
  v120 = v24;
  v25 = v143;
LABEL_13:
  v26 = v137;
LABEL_14:
  v27 = a9;
  while ( 1 )
  {
    v28 = !_BitScanForward((unsigned int *)&v29, (unsigned __int8)v24);
    i = v29;
    if ( v28 )
      break;
    v142 = 1LL;
    v160 = 0uLL;
    v161 = 0LL;
    v122 = 80;
    v30 = 0;
    v126 = 0;
    v129 = 0;
    v145 = 0LL;
    v156 = 0LL;
    v120 = (v24 - 1) & v24;
    v125 = v120;
    v31 = (unsigned int)v29;
    v32 = v25 + 32 * (v29 + 4);
    if ( v26
      && (v33 = *(_DWORD *)(v26 + 4LL * (*(unsigned __int16 *)(v32 + 6) >> 5)),
          LOBYTE(v24) = v120,
          _bittest(&v33, *(_WORD *)(v32 + 6) & 0x1F))
      || (v34 = EtwpLevelKeywordEnabled(v32, a8, v27), v24 = v120, v26 = v137, !v34) )
    {
      v21 = 0;
      v19 = v127;
      v17 = v130;
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (a5 & 2) == 0 && SLODWORD(Process[1].DirectoryTableBase) >= 0 || (*(_DWORD *)(v32 + 8) & 0x200) == 0 )
      {
        v37 = *(_QWORD *)(v25 + 384);
        if ( v37
          && ((v38 = *(_DWORD *)(104 * v31 + v37), (v38 & 0x80000200) == 0x80000200) || (v38 & 0x80000100) == 0x80000100) )
        {
          v39 = i;
          v40 = EtwpApplyEventIdPayloadFilterOnUserEvent(v25, i, v131, v127, v35, v20);
          v27 = a9;
          if ( !v40 )
            goto LABEL_34;
        }
        else
        {
          v39 = i;
        }
        if ( !v128
          || !EtwpIsEventNameFilterEnabled(v25, v39, a8, v27, 0)
          || EtwpApplyEventNameFilter(v25, v39, v41, v20, 1, 0, v26, v27, 0) )
        {
          v42 = 0;
          if ( a7 )
          {
            v43 = 104;
            v122 = 104;
            v42 = 8;
          }
          else
          {
            v43 = v122;
          }
          v44 = *(_DWORD *)(v32 + 8);
          if ( (v44 & 0xFFFFFF9F) != 0 )
          {
            if ( (v44 & 0x800) != 0 && CurrentSiloState && CurrentSiloState != EtwpHostSiloState )
            {
              v42 |= 0x80u;
              v43 += (*(unsigned __int16 *)(CurrentSiloState + 4200) + 15) & 0xFFFFFFF8;
              v122 = v43;
            }
            if ( (v44 & 1) != 0 )
            {
              if ( (v121 & 2) == 0 )
              {
                EtwpGetSidExtendedHeaderItem(Src, v24, v26, v27);
                v121 |= 2u;
                v44 = *(_DWORD *)(v32 + 8);
              }
              v42 |= 2u;
              v43 += Src[0];
              v122 = v43;
              v25 = v143;
            }
            if ( (v44 & 2) != 0 )
            {
              v42 |= 1u;
              v43 += 16;
              v122 = v43;
            }
            if ( (v44 & 0x80u) != 0 )
            {
              v42 |= 0x20u;
              v43 += 16;
              v122 = v43;
            }
            if ( (v44 & 0x100) != 0 )
            {
              v42 |= 0x40u;
              v43 += 16;
              v122 = v43;
            }
            if ( (v44 & 4) != 0 )
            {
              if ( (v45 = *(_QWORD *)(v25 + 384)) == 0
                || (v46 = *(_DWORD *)(104 * v31 + v45), (v46 & 0x80001000) != 0x80001000)
                && (v46 & 0x80002000) != 0x80002000
                && (v46 & 0x80004000) != 0x80004000
                || (unsigned __int8)EtwpApplyLevelKwFilter(v25, v39, a8, a9, 1)
                && (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v127, v25, v39)
                && EtwpApplyEventNameFilter(v25, v39, a10, v135, 1, 0, a8, a9, 1) )
              {
                v47 = v121;
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
                    v121 = (StackLookasideListEntry != 0LL ? 8 : 0) | v47 & 0xF7;
                  }
                  else
                  {
                    IoGetStackLimits(&LowLimit, &HighLimit);
                    if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                    {
                      v48 = alloca(1552LL);
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
                  v42 |= 4u;
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
                  v49 = alloca(480LL);
                  v151 = &v119;
                  EtwpGetPsmKeyExtendedHeaderItem();
                }
                v121 |= 4u;
              }
              if ( v151 )
              {
                v42 |= 0x10u;
                v43 += *(unsigned __int16 *)v151;
                v122 = v43;
              }
            }
          }
          v50 = *(unsigned __int16 *)(v32 + 6);
          v141 = v50;
          v51 = &v167[3 * v168];
          v52 = a10;
          if ( a10 )
          {
            if ( KeGetCurrentThread()->PreviousMode )
            {
              v53 = 16LL * a10;
              if ( v53 )
              {
                if ( (v135 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v135 + v53 > 0x7FFFFFFF0000LL || v135 + v53 < v135 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
            }
            v21 = 0;
            v54 = 0;
            v149 = 0;
            v43 = v122;
            while ( v54 < v52 )
            {
              v55 = v43;
              v144 = *(_DWORD *)(v135 + 16LL * v54 + 8);
              v56 = v144;
              if ( v144 > 0xFFFF )
              {
                v124 = -2147483643;
                v23 = v134;
                v19 = v127;
                v57 = v120;
                v17 = v130;
                goto LABEL_217;
              }
              if ( v128 )
              {
                v58 = *(_BYTE *)(v135 + 16LL * v54 + 12);
                v56 = v144;
              }
              else
              {
                v58 = 0;
              }
              if ( v58 )
              {
                if ( v58 == 1 )
                {
                  v126 += v56;
                  ++v129;
                }
                v43 = v122;
              }
              else
              {
                v43 = v56 + v122;
                v122 += v56;
              }
              if ( v43 < v55 )
              {
                v124 = -2147483643;
                v23 = v134;
                v19 = v127;
                v57 = v120;
                v17 = v130;
                goto LABEL_217;
              }
              v149 = ++v54;
              v52 = a10;
            }
            v50 = v141;
          }
          if ( v129 )
          {
            v43 += (v126 + 15) & 0xFFFFFFF8;
            v122 = v43;
          }
          if ( v132 )
          {
            v43 += (v132 + 15) & 0xFFFFFFF8;
            v122 = v43;
          }
          *((_DWORD *)v51 + 10) = v43;
          v59 = 8LL * v50;
          v60 = v134;
          if ( ExAcquireRundownProtectionCacheAwareEx(
                 *(PEX_RUNDOWN_REF_CACHE_AWARE *)(v59 + *(_QWORD *)(v134 + 448)),
                 1u) )
          {
            if ( v50 >= *(_DWORD *)(v60 + 16) )
            {
              v61 = 1LL;
            }
            else
            {
              _mm_lfence();
              v61 = *(_QWORD *)(v59 + *(_QWORD *)(v60 + 456));
              v43 = v122;
            }
            v142 = v61;
            v30 = 1;
            v50 = v141;
          }
          v62 = (unsigned int *)v142;
          if ( (v142 & 1) != 0 )
          {
            v23 = v134;
            if ( v30 )
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(v59 + *(_QWORD *)(v134 + 448)),
                1u);
            v28 = v50 == 3;
            v21 = 0;
            v20 = v135;
            v25 = v143;
            v19 = v127;
            LOBYTE(v24) = v120;
            v17 = v130;
            v26 = v137;
            if ( v28 )
            {
              v63 = -1073741058;
              if ( !*(_DWORD *)(v23 + 4068) )
                v63 = -1073741816;
              v124 = v63;
              break;
            }
          }
          else
          {
            v64 = 0LL;
            v65 = (unsigned __int16 *)EtwpReserveTraceBuffer((unsigned int *)v142, v43, (__int64)&v160, &v146, 0);
            v66 = v65;
            v166[1] = v65;
            if ( v65 )
            {
              *(_QWORD *)v51 = v62;
              *((_QWORD *)v51 + 1) = v65;
              v51[1] = v160;
              *((_QWORD *)v51 + 4) = v161;
              ++v168;
              v70 = 80;
              v123 = 80;
              v136 = 0LL;
              v71 = (_OWORD *)v127;
              *(_OWORD *)v66 = *(_OWORD *)v127;
              *((_OWORD *)v66 + 1) = v71[1];
              *((_OWORD *)v66 + 2) = v71[2];
              *((_OWORD *)v66 + 3) = v71[3];
              *((_OWORD *)v66 + 4) = v71[4];
              if ( v166[0] )
              {
                v72 = *(_OWORD *)v166[0];
                v66[2] |= 0x80u;
              }
              else
              {
                v72 = *(_OWORD *)(v130 + 40);
              }
              *(_OWORD *)(v66 + 12) = v72;
              *(_DWORD *)v66 = v43 | v62[v131 + 5];
              v73 = 80;
              if ( v42 )
              {
                if ( (v42 & 0x80u) != 0 )
                {
                  v64 = v66 + 40;
                  v74 = CurrentSiloState;
                  v75 = (*(_WORD *)(CurrentSiloState + 4200) + 15) & 0xFFF8;
                  v66[40] = v75;
                  v66[41] = 16;
                  v66[43] = *(_WORD *)(v74 + 4200);
                  v66[42] &= ~1u;
                  v66[42] &= 1u;
                  v76 = v75 - *(_WORD *)(v74 + 4200) - 8;
                  memmove(v66 + 44, *(const void **)(v74 + 4192), *(unsigned __int16 *)(v74 + 4200));
                  memset((char *)v66 + *(unsigned __int16 *)(v74 + 4200) + 88, 0, v76);
                  v66[2] |= 1u;
                  v70 = v66[40] + 80;
                  v123 = v70;
                  v136 = v66 + 40;
                  v73 = v70;
                }
                if ( (v42 & 8) != 0 )
                {
                  v77 = (char *)v66 + v73;
                  *(_DWORD *)v77 = 65560;
                  *((_WORD *)v77 + 3) = 16;
                  *((_WORD *)v77 + 2) &= ~1u;
                  *((_WORD *)v77 + 2) &= 1u;
                  *(_OWORD *)(v77 + 8) = *a7;
                  v66[2] |= 1u;
                  v70 = v73 + 24;
                  v123 = v73 + 24;
                  if ( v64 )
                    v64[2] |= 1u;
                  v64 = (unsigned __int16 *)((char *)v66 + v73);
                  v136 = v64;
                  v73 += 24;
                }
                if ( (v42 & 2) != 0 )
                {
                  v152 = (unsigned __int16 *)((char *)v66 + v73);
                  v78 = Src[0];
                  memmove(v152, Src, Src[0]);
                  v66[2] |= 1u;
                  v70 = v78 + v73;
                  v123 = v78 + v73;
                  v73 += v78;
                  if ( v64 )
                    v64[2] |= 1u;
                  v64 = v152;
                  v136 = v152;
                }
                if ( (v42 & 1) != 0 )
                {
                  v79 = (char *)v66 + v73;
                  *(_DWORD *)v79 = 196624;
                  *((_WORD *)v79 + 3) = 4;
                  *((_WORD *)v79 + 2) &= ~1u;
                  *((_WORD *)v79 + 2) &= 1u;
                  *((_DWORD *)v79 + 2) = PsGetCurrentProcessSessionId();
                  v66[2] |= 1u;
                  v70 = v73 + 16;
                  v123 = v73 + 16;
                  if ( v64 )
                    v64[2] |= 1u;
                  v64 = (unsigned __int16 *)((char *)v66 + v73);
                  v136 = v64;
                  v73 += 16;
                }
                v80 = 8;
                v81 = -2;
                if ( (v42 & 0x20) != 0 )
                {
                  v82 = (char *)v66 + v73;
                  *(_DWORD *)v82 = 851984;
                  *((_WORD *)v82 + 3) = 8;
                  *((_WORD *)v82 + 2) &= ~1u;
                  *((_WORD *)v82 + 2) &= 1u;
                  ProcessStartKey = PsGetProcessStartKey((__int64)KeGetCurrentThread()->ApcState.Process);
                  *((_QWORD *)v84 + 1) = ProcessStartKey;
                  v66[2] |= 1u;
                  v70 = v73 + 16;
                  v123 = v73 + 16;
                  if ( v64 )
                    v64[2] |= 1u;
                  v64 = v84;
                  v136 = v84;
                  v73 += 16;
                  v43 = v122;
                }
                if ( (v42 & 0x40) != 0 )
                {
                  v85 = (unsigned __int16 *)((char *)v66 + v73);
                  *(_DWORD *)v85 = 655376;
                  v85[3] = v80;
                  v85[2] &= v81;
                  v85[2] &= 1u;
                  if ( (v121 & 0x10) != 0 || (EtwpCreateEventKey(&v147), v121 |= 0x10u, !v154) )
                  {
                    v86 = v147;
                  }
                  else
                  {
                    v86 = v147;
                    *v154 = v147;
                  }
                  *((_QWORD *)v85 + 1) = v86;
                  v66[2] |= 1u;
                  v70 = v73 + 16;
                  v123 = v73 + 16;
                  if ( v64 )
                    v64[2] |= 1u;
                  v64 = v85;
                  v136 = v85;
                  v73 += 16;
                }
                if ( (v42 & 4) != 0 )
                {
                  v87 = (unsigned __int16 *)((char *)v66 + v73);
                  v88 = (unsigned __int16 *)StackLookasideListEntry;
                  memmove(v87, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
                  v66[2] |= 1u;
                  v70 = v73 + *v88;
                  v123 = v70;
                  v73 = v70;
                  if ( v64 )
                    v64[2] |= 1u;
                  v64 = v87;
                  v136 = v87;
                }
                if ( (v42 & 0x10) != 0 )
                {
                  v89 = (unsigned __int16 *)((char *)v66 + v73);
                  v90 = (unsigned __int16 *)v151;
                  memmove(v89, v151, *(unsigned __int16 *)v151);
                  v66[2] |= 1u;
                  v70 = v73 + *v90;
                  v123 = v70;
                  v73 = v70;
                  if ( v64 )
                    v64[2] |= 1u;
                  v64 = v89;
                  v136 = v89;
                }
              }
              v91 = v132;
              if ( v132 )
              {
                v92 = (unsigned __int16 *)((char *)v66 + v73);
                v152 = v92;
                v93 = (v132 + 15) & 0xFFF8;
                *v92 = v93;
                v92[1] = 12;
                v92[3] = v91;
                v92[2] &= ~1u;
                v92[2] &= 1u;
                v94 = v93 - v91 - 8;
                v95 = v92 + 4;
                v96 = v91;
                memmove(v92 + 4, v155, v91);
                memset((char *)v95 + v96, 0, v94);
                v66[2] |= 1u;
                v97 = v152;
                v70 = v73 + *v152;
                v123 = v70;
                v73 = v70;
                if ( v64 )
                  v64[2] |= 1u;
                v64 = v97;
                v136 = v97;
              }
              if ( v129 )
              {
                v98 = (unsigned __int16 *)((char *)v66 + v73);
                v99 = v126;
                v100 = (v126 + 15) & 0xFFF8;
                *v98 = v100;
                v98[1] = 11;
                v98[3] = v99;
                v98[2] &= ~1u;
                v98[2] &= 1u;
                v101 = (char *)(v98 + 4);
                v145 = v98 + 4;
                v156 = (char *)v98 + v99 + 8;
                memset(v156, 0, (unsigned __int16)(v100 - v99 - 8));
                v66[2] |= 1u;
                v70 = v73 + *v98;
                v123 = v70;
                if ( v64 )
                  v64[2] |= 1u;
              }
              else
              {
                v101 = (char *)v145;
              }
              v21 = 0;
              v102 = 0;
              v150 = 0;
              v103 = a10;
              while ( v102 < v103 )
              {
                v104 = *(unsigned int *)(v135 + 16LL * v102 + 8);
                v105 = *(__int64 **)(v135 + 16LL * v102);
                if ( v128 )
                {
                  v106 = *(_BYTE *)(v135 + 16LL * v102 + 12);
                  v43 = v122;
                  v101 = (char *)v145;
                  v70 = v123;
                }
                else
                {
                  v106 = 0;
                }
                if ( v106 )
                {
                  v107 = v106 - 1;
                  if ( v107 )
                  {
                    if ( v107 == 2 )
                    {
                      if ( (_DWORD)v104 == 8 )
                      {
                        if ( (unsigned __int64)(v105 + 1) > 0x7FFFFFFF0000LL || v105 + 1 < v105 )
                          MEMORY[0x7FFFFFFF0000] = 0;
                        v146 = *v105;
                      }
                      v150 = ++v102;
                    }
                    else
                    {
                      v150 = ++v102;
                    }
                  }
                  else
                  {
                    if ( !v101 )
                      goto LABEL_206;
                    v108 = *(unsigned int *)(v135 + 16LL * v102 + 8);
                    v109 = (unsigned __int64)&v101[v104];
                    if ( &v101[v104] < v101 || v109 > (unsigned __int64)v156 || !v129 )
                      goto LABEL_206;
                    if ( (_DWORD)v104
                      && ((unsigned __int64)v105 + v104 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v105 + v104) < v105) )
                    {
                      MEMORY[0x7FFFFFFF0000] = 0;
                    }
                    memmove(v101, v105, v108);
                    v101 = (char *)v109;
                    v145 = (unsigned __int16 *)v109;
                    --v129;
                    v103 = a10;
                    v150 = ++v102;
                  }
                }
                else
                {
                  v110 = v104 + v70;
                  if ( (unsigned int)v104 + v70 < v70 )
                  {
                    v123 = -1;
                    v111 = -1073741675;
                    v110 = -1;
                  }
                  else
                  {
                    v123 = v104 + v70;
                    v111 = 0;
                  }
                  if ( v111 || v110 > v43 )
                  {
LABEL_206:
                    v124 = -1073741820;
                    *(_DWORD *)v66 = v43 | *(_DWORD *)(v142 + 28);
                    *((_QWORD *)v66 + 2) = v146;
                    v23 = v134;
                    v19 = v127;
                    v57 = v120;
                    v17 = v130;
                    goto LABEL_217;
                  }
                  PreviousMode = KeGetCurrentThread()->PreviousMode;
                  if ( PreviousMode
                    && (_DWORD)v104
                    && ((unsigned __int64)v105 + v104 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v105 + v104) < v105) )
                  {
                    MEMORY[0x7FFFFFFF0000] = 0;
                  }
                  memmove((char *)v66 + v70, v105, v104);
                  v43 = v122;
                  v101 = (char *)v145;
                  v70 = v123;
                  v103 = a10;
                  v150 = ++v102;
                }
              }
              v26 = v137;
              if ( v137 )
                *(_DWORD *)(v137 + 4LL * (v141 >> 5)) |= 1 << (v141 & 0x1F);
              *((_QWORD *)v66 + 2) = v146;
              v112 = CurrentThread;
              *((_DWORD *)v66 + 14) = CurrentThread->SchedulerApc.SpareLong0;
              *((_DWORD *)v66 + 15) = v112->UserTime;
              *((_DWORD *)v66 + 2) = v112[1].CurrentRunTime;
              *((_DWORD *)v66 + 3) = v112[1].CycleTime;
              v113 = (unsigned int *)v142;
              if ( (*(_DWORD *)(v142 + 12) & 0x80000) != 0
                && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
              {
                EtwpSendTraceEvent(v142, (__int64)&v160);
                v26 = v137;
              }
              v20 = v135;
              v23 = v134;
              v25 = v143;
              LOBYTE(v24) = v120;
              v27 = a9;
              v17 = v130;
              if ( !*((_QWORD *)v113 + 159) )
              {
                v19 = v127;
                continue;
              }
              EtwpInvokeEventCallback((__int64)v113, (__int64 *)&v160);
              v19 = v127;
              LOBYTE(v24) = v120;
              goto LABEL_13;
            }
            ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus((__int64)v62, v43);
            v68 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
            v19 = v127;
            v17 = v130;
            if ( v68 )
              EtwpTraceLostEvent(
                (_QWORD *)(v130 + 40),
                (__int16 *)(v127 + 40),
                (unsigned __int16 *)v62 + 76,
                ReserveTraceBufferStatus);
            v69 = v124;
            if ( v124 >= 0 )
            {
              if ( (v62[3] & 0x8000000) == 0 )
                v69 = ReserveTraceBufferStatus;
              v124 = v69;
            }
            v23 = v134;
            ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v59 + *(_QWORD *)(v134 + 448)), 1u);
            v28 = ReserveTraceBufferStatus == -1073741675;
            v21 = 0;
            v20 = v135;
            v25 = v143;
            LOBYTE(v24) = v120;
            v26 = v137;
            if ( v28 )
            {
              v124 = -1073741675;
              break;
            }
          }
          goto LABEL_14;
        }
        v27 = a9;
      }
LABEL_34:
      v21 = 0;
      v19 = v127;
      LOBYTE(v24) = v120;
      v17 = v130;
      v26 = v137;
    }
  }
  v57 = v120;
LABEL_217:
  if ( (v121 & 8) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v124 < 0 )
  {
    EtwpFailLogging(a8, a9, v17, (__int64)v167, v57, v124, v19 + 40, 1);
  }
  else
  {
    for ( i = 0; i < v168; v21 = i )
    {
      v114 = *(_QWORD *)&v167[3 * v21 + 1];
      v115 = (signed __int64 *)*((_QWORD *)&v167[3 * v21 + 1] + 1);
      _m_prefetchw(v115);
      v116 = *v115;
      if ( (v114 ^ (unsigned __int64)*v115) >= 0xF )
      {
LABEL_224:
        _InterlockedDecrement((volatile signed __int32 *)(v114 + 12));
      }
      else
      {
        while ( 1 )
        {
          v117 = v116;
          v116 = _InterlockedCompareExchange64(v115, v116 + 1, v116);
          if ( v117 == v116 )
            break;
          if ( (v114 ^ (unsigned __int64)v116) >= 0xF )
            goto LABEL_224;
        }
      }
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v23 + 448) + 8LL * **(unsigned int **)&v167[3 * v21]),
        1u);
      ++i;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v124;
}
