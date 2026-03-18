/*
 * XREFs of RtlpWalkFrameChain @ 0x1400182A0
 * Callers:
 *     RtlWalkFrameChain @ 0x140017620 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     MmIsSessionExecutionValid @ 0x140017710 (MmIsSessionExecutionValid.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14001AC90 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x14001AE90 (RtlpIsFrameInBoundsEx.c)
 *     PspGetBaseTrapFrame @ 0x14001B7E0 (PspGetBaseTrapFrame.c)
 *     RtlpGetStackLimits @ 0x1400A2DD0 (RtlpGetStackLimits.c)
 *     RtlpUnwindEpilogue @ 0x14013CA58 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14013CC00 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x14018F100 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x1401CC670 (RtlpCaptureContext.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpWalkWowStack @ 0x14030DFF0 (RtlpWalkWowStack.c)
 *     PsWow64GetProcessMachine @ 0x1405E94D0 (PsWow64GetProcessMachine.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1406C90A4 (RtlWow64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // di
  unsigned int v6; // r12d
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // r13
  int v9; // esi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r13
  unsigned int *v16; // r11
  unsigned int v17; // r10d
  int v18; // ebx
  __int64 v19; // rdi
  char v20; // al
  unsigned int v21; // r14d
  unsigned int v22; // esi
  unsigned __int64 *v23; // r15
  unsigned int v24; // r13d
  __int64 v25; // rbx
  char v26; // r14
  unsigned int v27; // esi
  __int64 v28; // rdi
  unsigned int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  int v33; // eax
  bool v34; // zf
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // edx
  unsigned int v38; // edx
  int v39; // ebx
  __int16 v40; // ax
  int v41; // r10d
  int v42; // ecx
  unsigned int m; // r8d
  int v44; // edx
  int v45; // edx
  unsigned __int64 *v46; // rcx
  unsigned int k; // ecx
  unsigned __int64 *v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned __int64 *v50; // rcx
  _BYTE *v51; // rcx
  int v52; // r14d
  char v53; // r8
  char v54; // dl
  int v55; // ebx
  __int64 v56; // rdx
  _BYTE *v57; // r9
  unsigned __int8 *v58; // r8
  char v59; // dl
  char v60; // dl
  __int64 BaseTrapFrame; // rbx
  _WORD *v62; // rbx
  unsigned __int64 v63; // rdx
  int v64; // edx
  __int64 v66; // rax
  unsigned int v67; // r15d
  _BYTE *v68; // r8
  char v69; // al
  int v70; // eax
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rcx
  _DWORD *v73; // rax
  char v74; // al
  char v75; // r9
  char v76; // r10
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // r9
  __int64 v79; // rcx
  int v80; // [rsp+30h] [rbp-6B8h]
  int v81; // [rsp+38h] [rbp-6B0h]
  char v82; // [rsp+40h] [rbp-6A8h]
  bool v83; // [rsp+41h] [rbp-6A7h]
  int v84; // [rsp+44h] [rbp-6A4h]
  __int16 v85; // [rsp+4Ch] [rbp-69Ch]
  unsigned __int16 v86; // [rsp+4Ch] [rbp-69Ch]
  unsigned __int8 v87; // [rsp+51h] [rbp-697h]
  unsigned int v88; // [rsp+54h] [rbp-694h] BYREF
  unsigned int v89; // [rsp+58h] [rbp-690h]
  unsigned __int64 v90; // [rsp+60h] [rbp-688h] BYREF
  unsigned __int64 *v91; // [rsp+68h] [rbp-680h] BYREF
  int v92; // [rsp+70h] [rbp-678h]
  _BYTE *v93; // [rsp+78h] [rbp-670h]
  int v94; // [rsp+80h] [rbp-668h]
  int v95; // [rsp+84h] [rbp-664h]
  unsigned __int64 v96; // [rsp+88h] [rbp-660h]
  int v97; // [rsp+90h] [rbp-658h]
  unsigned int j; // [rsp+94h] [rbp-654h]
  _QWORD *i; // [rsp+98h] [rbp-650h]
  unsigned int *v100; // [rsp+A0h] [rbp-648h]
  int v101; // [rsp+A8h] [rbp-640h]
  unsigned int v102; // [rsp+ACh] [rbp-63Ch]
  int v103; // [rsp+B0h] [rbp-638h]
  int v104; // [rsp+B4h] [rbp-634h]
  unsigned int v105; // [rsp+B8h] [rbp-630h]
  _WORD *Teb; // [rsp+C0h] [rbp-628h]
  _QWORD *v107; // [rsp+C8h] [rbp-620h]
  unsigned __int64 *v108; // [rsp+D0h] [rbp-618h]
  unsigned __int64 v109; // [rsp+D8h] [rbp-610h]
  unsigned __int64 v110; // [rsp+E0h] [rbp-608h]
  struct _KTHREAD *v111; // [rsp+E8h] [rbp-600h]
  int v112; // [rsp+F0h] [rbp-5F8h]
  int v113; // [rsp+F4h] [rbp-5F4h]
  unsigned int v114; // [rsp+F8h] [rbp-5F0h]
  int v115; // [rsp+FCh] [rbp-5ECh]
  unsigned int v116; // [rsp+100h] [rbp-5E8h]
  __int64 v117; // [rsp+108h] [rbp-5E0h]
  _KPROCESS *Process; // [rsp+110h] [rbp-5D8h]
  __int128 v119; // [rsp+118h] [rbp-5D0h] BYREF
  __int64 v120; // [rsp+128h] [rbp-5C0h]
  _DWORD *v121; // [rsp+130h] [rbp-5B8h]
  _BYTE *v122; // [rsp+138h] [rbp-5B0h]
  _QWORD *v123; // [rsp+140h] [rbp-5A8h]
  __int64 v124; // [rsp+148h] [rbp-5A0h]
  unsigned __int64 *v125; // [rsp+158h] [rbp-590h]
  unsigned __int64 *v126; // [rsp+160h] [rbp-588h]
  __int64 v127; // [rsp+168h] [rbp-580h]
  __int64 v128; // [rsp+170h] [rbp-578h]
  _BYTE v129[32]; // [rsp+188h] [rbp-560h] BYREF
  _QWORD v130[7]; // [rsp+1A8h] [rbp-540h] BYREF
  _BYTE v131[144]; // [rsp+1E0h] [rbp-508h] BYREF
  __int64 v132; // [rsp+270h] [rbp-478h]
  unsigned __int64 *v133; // [rsp+278h] [rbp-470h]
  __int64 v134; // [rsp+280h] [rbp-468h]
  __int64 v135; // [rsp+288h] [rbp-460h]
  __int64 v136; // [rsp+290h] [rbp-458h]
  __int64 v137; // [rsp+2B8h] [rbp-430h]
  __int64 v138; // [rsp+2C0h] [rbp-428h]
  __int64 v139; // [rsp+2C8h] [rbp-420h]
  __int64 v140; // [rsp+2D0h] [rbp-418h]
  unsigned __int64 v141; // [rsp+2D8h] [rbp-410h]
  _QWORD v142[102]; // [rsp+380h] [rbp-368h]

  v4 = a4;
  v104 = a4;
  v5 = a3;
  v103 = a3;
  v6 = a2;
  v105 = a2;
  v7 = a1;
  v124 = a1;
  v119 = 0uLL;
  v120 = 0LL;
  memset(v129, 0, sizeof(v129));
  v102 = 0;
  i = 0LL;
  v107 = 0LL;
  v87 = 1;
  CurrentThread = KeGetCurrentThread();
  v111 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  v96 = 0LL;
  v95 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v91, &v90) )
    return 0LL;
  RtlpCaptureContext(v131);
  v82 = 0;
  v88 = 0;
  v83 = (v5 & 2) != 0;
  v9 = v5 & 1;
  v84 = v9;
  v113 = v9;
  if ( (v5 & 1) == 0 && (dword_140571184 & 1) == 0 )
    v102 = 0x80000000;
  v109 = 0LL;
  v110 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    BaseTrapFrame = PspGetBaseTrapFrame(CurrentThread);
    v96 = BaseTrapFrame;
    if ( !Teb || (Teb[3063] & 0x100) != 0 )
      return 0LL;
    if ( (unsigned __int16)PsWow64GetProcessMachine(Process) == 332
      && *(_BYTE *)(BaseTrapFrame + 43) != 2
      && *(_WORD *)(BaseTrapFrame + 368) == 35 )
    {
      v88 = 1;
      v64 = BaseTrapFrame + 360;
      v81 = *(_DWORD *)(BaseTrapFrame + 384);
      v80 = *(_DWORD *)(BaseTrapFrame + 344);
      v62 = Teb;
      if ( (unsigned __int8)RtlpWalkWowStack(v7, v64, (_DWORD)Teb, (unsigned int)&v88, v6, v4, v80, v81) )
        goto LABEL_325;
    }
    else
    {
      v62 = Teb;
    }
    v109 = *(_QWORD *)(v96 + 384);
    v63 = *((_QWORD *)v62 + 1);
    v110 = v63;
    if ( v63 <= v109 )
      return 0LL;
    if ( v63 > 0x7FFFFFFF0000LL && v63 != v109 )
      MEMORY[0x7FFFFFFF0000] = 0;
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v107 = (_QWORD *)i[4];
    v87 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
  }
  memset(v129, 0, sizeof(v129));
  v119 = xmmword_140589020;
  v120 = qword_140589030;
  while ( 1 )
  {
    v10 = i;
    v123 = i;
    if ( v95 != 1
      && v141 >= 0xFFFF800000000000uLL
      && byte_140467140[((v141 >> 39) & 0x1FF) - 256] == 1
      && !MmIsSessionExecutionValid((__int64)CurrentThread, (__int64)Process, v141) )
    {
      v9 = v84;
      goto LABEL_325;
    }
    if ( !(unsigned __int8)RtlpIsFrameInBoundsEx(&v91, v133, &v90, v129) )
    {
      v9 = v84;
      goto LABEL_325;
    }
    v11 = RtlpLookupFunctionEntryForStackWalks(v141, &v119);
    v12 = (_DWORD *)v11;
    v121 = (_DWORD *)v11;
    if ( v11 )
      break;
    if ( !*((_QWORD *)&v119 + 1) )
    {
      v9 = v84;
      goto LABEL_325;
    }
    if ( v141 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v133 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v141 = *v133++;
LABEL_47:
    if ( !v141 )
    {
      if ( (v5 & 1) == 0 )
        goto LABEL_139;
      if ( (unsigned __int16)PsWow64GetProcessMachine(Process) != 332 )
        goto LABEL_139;
      if ( *(_BYTE *)(v96 + 43) != 2 )
        goto LABEL_139;
      memset(v130, 0, 0x30uLL);
      v55 = (int)Teb;
      if ( (int)RtlWow64GetCpuAreaInfo(*((_QWORD *)Teb + 657), v56, v130) < 0 )
        goto LABEL_139;
      if ( (v130[0] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int8)RtlpWalkWowStack(
                              v124,
                              0,
                              v55,
                              (unsigned int)&v88,
                              v6,
                              v4,
                              *(_DWORD *)(v130[0] + 180LL),
                              *(_DWORD *)(v130[0] + 196LL) - 4) )
        v9 = v84;
      else
LABEL_139:
        v9 = v84;
      goto LABEL_325;
    }
    if ( v95 )
    {
      if ( v95 == 1 )
      {
        if ( v141 > 0x7FFFFFFEFFFFLL )
        {
          v9 = v84;
          goto LABEL_325;
        }
        if ( v107 && v141 == *(_QWORD *)(v96 + 360) )
        {
          v95 = 2;
          v141 = v107[39];
          v133 = v107 + 40;
          v134 = v107[31];
          v132 = v107[32];
          v136 = v107[33];
          v135 = v107[34];
          v137 = v107[35];
          v138 = v107[36];
          v139 = v107[37];
          v140 = v107[38];
          v107 = (_QWORD *)v10[4];
          v50 = (unsigned __int64 *)v10[5];
          if ( !v50 )
          {
            v9 = v84;
            goto LABEL_325;
          }
          i = (_QWORD *)v10[5];
          v91 = v133;
          v90 = *v50;
        }
      }
      else
      {
        if ( v95 != 2 )
        {
          v9 = v84;
          goto LABEL_325;
        }
        if ( v141 <= 0x7FFFFFFEFFFFLL )
        {
          if ( v141 != *(_QWORD *)(v96 + 360) )
          {
            v9 = v84;
            goto LABEL_325;
          }
          v128 = *(_QWORD *)(v96 + 384);
          if ( (v128 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v95 = 1;
          v133 = *(unsigned __int64 **)(v128 + 72);
          v91 = (unsigned __int64 *)v109;
          v90 = v110;
          if ( v107 )
            v96 = v107[26];
        }
      }
      goto LABEL_54;
    }
    if ( (v5 & 1) == 0 && v141 < 0xFFFF800000000000uLL )
    {
      v9 = v84;
      goto LABEL_325;
    }
    if ( (v5 & 1) != 0 )
    {
      if ( v141 < 0xFFFF800000000000uLL )
      {
        if ( v141 > 0x7FFFFFFEFFFFLL )
        {
          v9 = v84;
          goto LABEL_325;
        }
        if ( v141 != *(_QWORD *)(v96 + 360) )
        {
          v9 = v84;
          goto LABEL_325;
        }
        v95 = 1;
        if ( v107 )
        {
          v96 = v107[26];
          if ( v96 < 0xFFFF800000000000uLL )
          {
            v9 = v84;
            goto LABEL_325;
          }
        }
        v91 = (unsigned __int64 *)v109;
        v90 = v110;
        goto LABEL_54;
      }
      v34 = v88 == 0;
    }
    else
    {
      v34 = !v83;
    }
    if ( v34 )
    {
LABEL_54:
      if ( v88 >= v4 )
        *(_QWORD *)(v124 + 8LL * (v88 - v4)) = v141;
      if ( ++v88 >= v6 )
      {
        v9 = v84;
        goto LABEL_325;
      }
    }
  }
  v13 = v141;
  v14 = *((_QWORD *)&v119 + 1);
  v15 = *((_QWORD *)&v119 + 1);
  v117 = *((_QWORD *)&v119 + 1);
  v16 = (unsigned int *)v11;
  v100 = (unsigned int *)v11;
  v127 = v11;
  v17 = 0;
  v18 = 0;
  v101 = 0;
  v19 = *((_QWORD *)&v119 + 1) + *(unsigned int *)(v11 + 8);
  if ( v141 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v19 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = *((_QWORD *)&v119 + 1);
    v12 = v121;
  }
  v20 = *(_BYTE *)v19;
  v21 = *(_BYTE *)v19 & 7;
  if ( v82 )
  {
    if ( v21 < 2 )
    {
      v57 = (_BYTE *)v19;
      v116 = 0;
      v58 = (unsigned __int8 *)(v19 + 2);
      if ( !*(_BYTE *)(v19 + 2) )
      {
        while ( 1 )
        {
          if ( (v20 & 0x20) == 0 )
          {
            v18 = 1;
            v101 = 1;
            v16 = v100;
            v15 = v117;
            goto LABEL_18;
          }
          v66 = *v58;
          v112 = v66;
          if ( (v66 & 1) != 0 )
          {
            v66 = (unsigned int)(v66 + 1);
            v112 = v66;
          }
          v116 = ++v17;
          if ( v17 > 0x20 )
            RtlRaiseStatus(-1073741569);
          v57 = (_BYTE *)(*(unsigned int *)&v57[2 * v66 + 12] + v14);
          if ( v141 <= 0x7FFFFFFEFFFFLL )
          {
            if ( ((unsigned __int8)v57 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v14 = *((_QWORD *)&v119 + 1);
            v12 = v121;
          }
          v58 = v57 + 2;
          if ( v57[2] )
            break;
          v20 = *v57;
        }
        v16 = v100;
        v15 = v117;
      }
      if ( v102 )
      {
LABEL_163:
        v33 = -1073741784;
        goto LABEL_44;
      }
    }
  }
  else
  {
    v18 = 1;
    v101 = 1;
  }
LABEL_18:
  v22 = v141 - *v12 - DWORD2(v119);
  if ( (*(_BYTE *)(v19 + 3) & 0xF) == 0 )
  {
    v108 = v133;
    goto LABEL_20;
  }
  if ( v22 >= *(unsigned __int8 *)(v19 + 1) || (*(_BYTE *)v19 & 0x20) != 0 )
  {
    v46 = (unsigned __int64 *)(*(_QWORD *)&v131[8 * (*(_BYTE *)(v19 + 3) & 0xF) + 120] - (*(_BYTE *)(v19 + 3) & 0xF0));
    goto LABEL_81;
  }
  v67 = 0;
  for ( j = 0; v67 < *(unsigned __int8 *)(v19 + 2); j = v67 )
  {
    v86 = *(_WORD *)(v19 + 2LL * v67 + 4);
    if ( (HIBYTE(v86) & 0xF) == 3 )
      break;
    v67 += RtlpUnwindOpSlots(v86);
  }
  v16 = v100;
  if ( v22 < *(unsigned __int8 *)(v19 + 2LL * v67 + 4) )
  {
    v108 = v133;
  }
  else
  {
    v46 = (unsigned __int64 *)(*(_QWORD *)&v131[8 * (*(_BYTE *)(v19 + 3) & 0xF) + 120] - (*(_BYTE *)(v19 + 3) & 0xF0));
LABEL_81:
    v108 = v46;
  }
LABEL_20:
  if ( v18 )
  {
LABEL_21:
    v23 = v108;
    v24 = 0;
    v114 = 0;
    while ( 1 )
    {
      LODWORD(v25) = 0;
      v26 = 0;
      v27 = v13 - v117 - *v16;
      v28 = v117 + v16[2];
      if ( v13 <= 0x7FFFFFFEFFFFLL && (v28 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      while ( 1 )
      {
        v29 = *(unsigned __int8 *)(v28 + 2);
        if ( (unsigned int)v25 >= v29 )
          break;
        v30 = *(unsigned __int8 *)(v28 + 2LL * (unsigned int)v25 + 5) >> 4;
        v31 = v28 + 2LL * (unsigned int)v25;
        if ( v27 < *(unsigned __int8 *)(v31 + 4) )
        {
          LODWORD(v25) = RtlpUnwindOpSlots(*(unsigned __int16 *)(v31 + 4)) + v25;
        }
        else
        {
          if ( (*(_BYTE *)(v28 + 2LL * (unsigned int)v25 + 5) & 0xF) != 0 )
          {
            switch ( *(_BYTE *)(v28 + 2LL * (unsigned int)v25 + 5) & 0xF )
            {
              case 1:
                v25 = (unsigned int)(v25 + 1);
                v37 = *(unsigned __int16 *)(v28 + 2 * v25 + 4);
                v89 = v37;
                if ( (_DWORD)v30 )
                {
                  v25 = (unsigned int)(v25 + 1);
                  v38 = (*(unsigned __int16 *)(v28 + 2 * v25 + 4) << 16) + v37;
                }
                else
                {
                  v38 = 8 * v37;
                }
                v89 = v38;
                v133 = (unsigned __int64 *)((char *)v133 + v38);
                break;
              case 2:
                v133 = (unsigned __int64 *)((char *)v133 + (unsigned int)(8 * v30 + 8));
                break;
              case 3:
                v133 = *(unsigned __int64 **)&v131[8 * (*(_BYTE *)(v28 + 3) & 0xF) + 120];
                v133 = (unsigned __int64 *)((char *)v133 - (*(_BYTE *)(v28 + 3) & 0xF0));
                break;
              case 4:
                v25 = (unsigned int)(v25 + 1);
                v89 = 8 * *(unsigned __int16 *)(v28 + 2 * v25 + 4);
                v32 = (unsigned __int64)v23 + v89;
                if ( v13 <= 0x7FFFFFFEFFFFLL && (v32 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v32 < (unsigned __int64)v91 || v32 > v90 - 8 )
                  goto LABEL_307;
                *(_QWORD *)&v131[8 * v30 + 120] = *(_QWORD *)v32;
                break;
              case 5:
                v25 = (unsigned int)(v25 + 2);
                v89 = *(unsigned __int16 *)(v28 + 2LL * (unsigned int)(v25 - 1) + 4);
                v89 += *(unsigned __int16 *)(v28 + 2 * v25 + 4) << 16;
                v77 = (unsigned __int64)v23 + v89;
                if ( v13 <= 0x7FFFFFFEFFFFLL && (v77 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v77 < (unsigned __int64)v91 || v77 > v90 - 8 )
                  goto LABEL_307;
                *(_QWORD *)&v131[8 * v30 + 120] = *(_QWORD *)v77;
                break;
              case 6:
                LODWORD(v25) = v25 + 1;
                break;
              case 7:
                LODWORD(v25) = v25 + 2;
                break;
              case 8:
                v25 = (unsigned int)(v25 + 1);
                v89 = 16 * *(unsigned __int16 *)(v28 + 2 * v25 + 4);
                v35 = (unsigned __int64)v23 + v89;
                if ( v13 <= 0x7FFFFFFEFFFFLL && (v35 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v35 < (unsigned __int64)v91 || v35 > v90 - 16 )
                  goto LABEL_307;
                v36 = 2LL * (unsigned int)v30;
                v142[v36] = *(_QWORD *)v35;
                v142[v36 + 1] = *(_QWORD *)(v35 + 8);
                break;
              case 9:
                v25 = (unsigned int)(v25 + 2);
                v89 = *(unsigned __int16 *)(v28 + 2LL * (unsigned int)(v25 - 1) + 4);
                v89 += *(unsigned __int16 *)(v28 + 2 * v25 + 4) << 16;
                v78 = (unsigned __int64)v23 + v89;
                if ( v13 <= 0x7FFFFFFEFFFFLL && (v78 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v78 < (unsigned __int64)v91 || v78 > v90 - 16 )
                  goto LABEL_307;
                v79 = 2LL * (unsigned int)v30;
                v142[v79] = *(_QWORD *)v78;
                v142[v79 + 1] = *(_QWORD *)(v78 + 8);
                break;
              case 0xA:
                v26 = 1;
                v48 = v133;
                v125 = v133;
                v49 = (unsigned __int64)(v133 + 3);
                v126 = v133 + 3;
                if ( (_DWORD)v30 )
                {
                  v48 = v133 + 1;
                  v125 = v133 + 1;
                  v49 = (unsigned __int64)(v133 + 4);
                  v126 = v133 + 4;
                }
                if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v48 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v48 < v91 || (unsigned __int64)v48 > v90 - 8 )
                  goto LABEL_307;
                if ( v13 <= 0x7FFFFFFEFFFFLL && (v49 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v49 < (unsigned __int64)v91 || v49 > v90 - 8 )
                  goto LABEL_307;
                v141 = *v48;
                v133 = *(unsigned __int64 **)v49;
                break;
              default:
                RtlRaiseStatus(-1073741569);
            }
          }
          else
          {
            if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v133 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v133 < v91 || (unsigned __int64)v133 > v90 - 8 )
              goto LABEL_307;
            *(_QWORD *)&v131[8 * v30 + 120] = *v133++;
          }
          LODWORD(v25) = v25 + 1;
        }
      }
      if ( (*(_BYTE *)v28 & 0x20) == 0 )
        break;
      if ( (v29 & 1) != 0 )
        ++v29;
      v16 = (unsigned int *)(v28 + 2 * (v29 + 2LL));
      v100 = v16;
      if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v16 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v114 = ++v24;
      if ( v24 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( v26 )
    {
      for ( k = 0; k < 3; ++k )
      {
        if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))v28 == *(&RtlpSafeMachineFrameEntries
                                                                                        + k) )
        {
          v26 = 0;
          break;
        }
      }
    }
    else
    {
      if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v133 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v133 < v91 || (unsigned __int64)v133 > v90 - 8 )
      {
LABEL_307:
        v33 = -1073741784;
        goto LABEL_44;
      }
      v141 = *v133++;
    }
    v82 = v26;
    v127 = (__int64)v100;
    goto LABEL_43;
  }
  v39 = 0;
  v92 = 0;
  if ( v21 >= 2 )
  {
    if ( *(_BYTE *)(v19 + 2) )
    {
      v40 = *(_WORD *)(v19 + 4);
      if ( (HIBYTE(v40) & 0xF) == 6 )
      {
        v41 = v13 - v15;
        if ( (v40 & 0x1000) != 0 )
        {
          v42 = v16[1] - (unsigned __int8)v40;
          v97 = v42;
          if ( v41 - v42 < (unsigned int)(unsigned __int8)v40 )
          {
LABEL_170:
            v92 = 1;
            RtlpUnwindEpilogue(v15, v13, v41 - v42, (_DWORD)v16, (__int64)v131, 0LL, (__int64)&v91, (__int64)&v90);
            v82 = 0;
            goto LABEL_43;
          }
        }
        else
        {
          v97 = 0;
        }
        for ( m = 1; ; ++m )
        {
          j = m;
          if ( m >= *(unsigned __int8 *)(v19 + 2) )
            break;
          v85 = *(_WORD *)(v19 + 2LL * m + 4);
          if ( (HIBYTE(v85) & 0xF) != 6 )
            break;
          v44 = HIBYTE(v85) >> 4 << 8;
          v34 = (unsigned __int8)v85 + v44 == 0;
          v45 = (unsigned __int8)v85 + v44;
          v97 = v45;
          if ( v34 )
            break;
          v42 = v16[1] - v45;
          v97 = v42;
          if ( v41 - v42 < (unsigned int)(unsigned __int8)v40 )
            goto LABEL_170;
        }
      }
    }
    goto LABEL_21;
  }
  v51 = (_BYTE *)v13;
  v93 = (_BYTE *)v13;
  v52 = 0;
  v115 = 0;
  v53 = *(_BYTE *)v13;
  if ( *(_BYTE *)v13 == 72 )
  {
    if ( *(_BYTE *)(v13 + 1) == 0x83 && *(_BYTE *)(v13 + 2) == 0xC4 )
    {
      v51 = (_BYTE *)(v13 + 4);
      goto LABEL_230;
    }
    if ( *(_BYTE *)(v13 + 1) != 0x81 || *(_BYTE *)(v13 + 2) != 0xC4 )
      goto LABEL_114;
LABEL_229:
    v51 = (_BYTE *)(v13 + 7);
    goto LABEL_230;
  }
LABEL_114:
  if ( (v53 & 0xFE) == 0x48 && *(_BYTE *)(v13 + 1) == 0x8D )
  {
    v59 = *(_BYTE *)(v13 + 2);
    v52 = v59 & 7 | (8 * (v53 & 1));
    v115 = v52;
    if ( v52 )
    {
      if ( v52 == (*(_BYTE *)(v19 + 3) & 0xF) )
      {
        v60 = v59 & 0xF8;
        if ( v60 == 96 )
        {
          v51 = (_BYTE *)(v13 + 4);
LABEL_230:
          v93 = v51;
          goto LABEL_115;
        }
        if ( v60 != -96 )
          goto LABEL_115;
        goto LABEL_229;
      }
    }
  }
LABEL_115:
  while ( 2 )
  {
    v54 = *v51;
    if ( (*v51 & 0xF8) == 0x58 )
    {
      ++v51;
      goto LABEL_182;
    }
    if ( (v54 & 0xF0) == 0x40 && (v51[1] & 0xF8) == 0x58 )
    {
      v51 += 2;
LABEL_182:
      v93 = v51;
      continue;
    }
    break;
  }
  if ( v54 == -14 )
  {
    v93 = ++v51;
    v54 = *v51;
  }
  if ( (unsigned __int8)(v54 + 62) <= 1u || v54 == -13 && v51[1] == 0xC3 )
  {
LABEL_233:
    v92 = 1;
    goto LABEL_234;
  }
  if ( ((v54 + 23) & 0xFD) != 0 )
  {
    if ( v54 == -1 && v51[1] == 37 )
      goto LABEL_233;
    if ( (v54 & 0xF8) == 0x48 && v51[1] == 0xFF && (v51[2] & 0x38) == 0x20 )
    {
      v39 = 1;
      v92 = 1;
    }
  }
  else
  {
    v122 = &v51[-v15];
    if ( v54 == -21 )
      v70 = (char)v51[1] + 2;
    else
      v70 = *(_DWORD *)(v51 + 1) + 5;
    v71 = (unsigned __int64)&v51[v70 - v15];
    v122 = (_BYTE *)v71;
    v72 = *v16;
    if ( v71 < v72 || v71 >= v16[1] )
    {
      v73 = (_DWORD *)RtlpSameFunction(v16, v15, v71 + v15);
      if ( !v73 || v71 == *v73 )
        goto LABEL_233;
      v16 = v100;
    }
    else if ( v71 == v72 && (*(_BYTE *)v19 & 0x20) == 0 )
    {
      v39 = 1;
      v92 = 1;
    }
  }
  if ( !v39 )
    goto LABEL_21;
LABEL_234:
  v68 = (_BYTE *)v13;
  v93 = (_BYTE *)v13;
  if ( (*(_BYTE *)v13 & 0xF8) != 0x48 )
    goto LABEL_259;
  v69 = *(_BYTE *)(v13 + 1);
  if ( v69 == -125 )
  {
    v133 = (unsigned __int64 *)((char *)v133 + *(char *)(v13 + 3));
    v68 = (_BYTE *)(v13 + 4);
    goto LABEL_258;
  }
  if ( v69 == -127 )
  {
    v133 = (unsigned __int64 *)((char *)v133
                              + (((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8) | *(unsigned __int8 *)(v13 + 3)));
    goto LABEL_257;
  }
  if ( v69 != -115 )
    goto LABEL_259;
  v74 = *(_BYTE *)(v13 + 2) & 0xF8;
  if ( v74 == 96 )
  {
    v133 = *(unsigned __int64 **)&v131[8 * v52 + 120];
    v133 = (unsigned __int64 *)((char *)v133 + *(char *)(v13 + 3));
    v68 = (_BYTE *)(v13 + 4);
  }
  else
  {
    if ( v74 != -96 )
      goto LABEL_259;
    v133 = (unsigned __int64 *)(*(_QWORD *)&v131[8 * v52 + 120]
                              + (*(unsigned __int8 *)(v13 + 3) | ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8)));
LABEL_257:
    v68 = (_BYTE *)(v13 + 7);
  }
LABEL_258:
  v93 = v68;
LABEL_259:
  while ( 2 )
  {
    v75 = *v68;
    if ( (*v68 & 0xF8) == 0x58 )
    {
      if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v133 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v133 < v91 || (unsigned __int64)v133 > v90 - 8 )
        goto LABEL_266;
      *(_QWORD *)&v131[8 * (v75 & 7) + 120] = *v133++;
      ++v68;
      goto LABEL_275;
    }
    if ( (v75 & 0xF0) == 0x40 )
    {
      v76 = v68[1];
      if ( (v76 & 0xF8) == 0x58 )
      {
        if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v133 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v133 < v91 || (unsigned __int64)v133 > v90 - 8 )
          goto LABEL_163;
        *(_QWORD *)&v131[8 * (v76 & 7 | (8LL * (v75 & 1))) + 120] = *v133++;
        v68 += 2;
LABEL_275:
        v93 = v68;
        continue;
      }
    }
    break;
  }
  if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v133 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v133 < v91 || (unsigned __int64)v133 > v90 - 8 )
  {
LABEL_266:
    v33 = -1073741784;
    goto LABEL_44;
  }
  v141 = *v133++;
  v82 = 0;
LABEL_43:
  v33 = 0;
LABEL_44:
  v94 = v33;
  if ( v33 >= 0 )
  {
    v10 = v123;
    v5 = v103;
    v4 = v104;
    v6 = v105;
    CurrentThread = v111;
    if ( v82 )
      v83 = 0;
    goto LABEL_47;
  }
  v9 = v84;
  CurrentThread = v111;
LABEL_325:
  if ( v9 && !v87 )
    CurrentThread->MiscFlags &= ~0x20u;
  return v88;
}
