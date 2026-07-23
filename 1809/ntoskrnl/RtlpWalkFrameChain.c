/*
 * XREFs of RtlpWalkFrameChain @ 0x14009EAD0
 * Callers:
 *     RtlWalkFrameChain @ 0x1400CCC50 (RtlWalkFrameChain.c)
 * Callees:
 *     MmIsSessionExecutionValid @ 0x14009DA50 (MmIsSessionExecutionValid.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400A0350 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x1400A0550 (RtlpIsFrameInBoundsEx.c)
 *     PspGetBaseTrapFrame @ 0x1400A0E58 (PspGetBaseTrapFrame.c)
 *     RtlpGetStackLimits @ 0x1400CAC00 (RtlpGetStackLimits.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x14013A494 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14013A64C (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1401850C4 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x1401C5630 (RtlpCaptureContext.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpWalkWowStack @ 0x1402EFBE0 (RtlpWalkWowStack.c)
 *     PsWow64GetProcessMachine @ 0x140621BA0 (PsWow64GetProcessMachine.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1406AA364 (RtlWow64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int8 *v12; // r8
  _DWORD *v13; // rcx
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r13
  unsigned int *v17; // r11
  int v18; // ebx
  __int64 v19; // rdi
  char v20; // al
  unsigned int v21; // r14d
  unsigned int v22; // esi
  unsigned __int8 v23; // dl
  unsigned __int64 *v24; // r15
  unsigned int v25; // r13d
  __int64 v26; // rbx
  char v27; // r14
  unsigned int v28; // esi
  __int64 v29; // rdi
  unsigned int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  int v34; // eax
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // edx
  unsigned int v38; // edx
  int v39; // ebx
  __int16 v40; // ax
  unsigned int v41; // r9d
  int v42; // r10d
  int v43; // ecx
  unsigned int k; // r8d
  __int16 v45; // ax
  int v46; // edx
  bool v47; // zf
  int v48; // edx
  char v49; // cl
  int v50; // eax
  __int64 n; // rcx
  unsigned __int64 *v52; // rcx
  unsigned __int64 **v53; // rdx
  _BYTE *v54; // rcx
  __int64 v55; // r14
  char v56; // r8
  char v57; // dl
  unsigned __int64 *v58; // rcx
  _BYTE *v59; // r9
  unsigned int v60; // r10d
  __int64 v61; // rdx
  int v62; // ebx
  __int64 BaseTrapFrame; // rbx
  _WORD *v64; // rbx
  unsigned __int64 v65; // rdx
  int v66; // edx
  __int64 v68; // rax
  __int64 v69; // r15
  __int64 v70; // rcx
  char v71; // dl
  int v72; // eax
  char v73; // dl
  int v74; // eax
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rcx
  _DWORD *v77; // rax
  _BYTE *v78; // r8
  char v79; // al
  char v80; // al
  char v81; // r9
  char v82; // r10
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // r9
  __int64 v85; // rcx
  int v86; // [rsp+30h] [rbp-6A8h]
  int v87; // [rsp+38h] [rbp-6A0h]
  char v88; // [rsp+40h] [rbp-698h]
  bool v89; // [rsp+41h] [rbp-697h]
  int v90; // [rsp+44h] [rbp-694h]
  unsigned __int8 v91; // [rsp+4Dh] [rbp-68Bh]
  unsigned int v92; // [rsp+50h] [rbp-688h] BYREF
  unsigned int v93; // [rsp+54h] [rbp-684h]
  unsigned __int64 v94; // [rsp+58h] [rbp-680h] BYREF
  unsigned __int64 *v95; // [rsp+60h] [rbp-678h] BYREF
  int v96; // [rsp+68h] [rbp-670h]
  _BYTE *m; // [rsp+70h] [rbp-668h]
  __int16 v98; // [rsp+78h] [rbp-660h]
  int v99; // [rsp+7Ch] [rbp-65Ch]
  int v100; // [rsp+80h] [rbp-658h]
  unsigned __int64 v101; // [rsp+88h] [rbp-650h]
  int v102; // [rsp+90h] [rbp-648h]
  unsigned int j; // [rsp+94h] [rbp-644h]
  _QWORD *i; // [rsp+98h] [rbp-640h]
  int v105; // [rsp+A0h] [rbp-638h]
  unsigned int v106; // [rsp+A4h] [rbp-634h]
  int v107; // [rsp+A8h] [rbp-630h]
  int v108; // [rsp+ACh] [rbp-62Ch]
  unsigned int v109; // [rsp+B0h] [rbp-628h]
  unsigned int *v110; // [rsp+B8h] [rbp-620h]
  _WORD *Teb; // [rsp+C0h] [rbp-618h]
  _QWORD *v112; // [rsp+C8h] [rbp-610h]
  unsigned __int64 *v113; // [rsp+D0h] [rbp-608h]
  unsigned __int64 v114; // [rsp+D8h] [rbp-600h]
  unsigned __int64 v115; // [rsp+E0h] [rbp-5F8h]
  struct _KTHREAD *v116; // [rsp+E8h] [rbp-5F0h]
  int v117; // [rsp+F0h] [rbp-5E8h]
  int v118; // [rsp+F4h] [rbp-5E4h]
  unsigned int v119; // [rsp+F8h] [rbp-5E0h]
  int v120; // [rsp+FCh] [rbp-5DCh]
  unsigned int v121; // [rsp+100h] [rbp-5D8h]
  _KPROCESS *Process; // [rsp+108h] [rbp-5D0h]
  _DWORD *v123; // [rsp+110h] [rbp-5C8h]
  _BYTE *v124; // [rsp+118h] [rbp-5C0h]
  _QWORD *v125; // [rsp+120h] [rbp-5B8h]
  __int64 v126; // [rsp+128h] [rbp-5B0h]
  __int128 v127; // [rsp+130h] [rbp-5A8h] BYREF
  __int64 v128; // [rsp+140h] [rbp-598h]
  __int64 v129; // [rsp+150h] [rbp-588h]
  unsigned __int64 *v130; // [rsp+158h] [rbp-580h]
  unsigned __int64 *v131; // [rsp+160h] [rbp-578h]
  __int64 v132; // [rsp+168h] [rbp-570h]
  __int64 v133; // [rsp+170h] [rbp-568h]
  __int64 v134[5]; // [rsp+188h] [rbp-550h] BYREF
  _BYTE v135[32]; // [rsp+1B0h] [rbp-528h] BYREF
  _BYTE v136[144]; // [rsp+1D0h] [rbp-508h] BYREF
  __int64 v137; // [rsp+260h] [rbp-478h]
  unsigned __int64 *v138; // [rsp+268h] [rbp-470h]
  __int64 v139; // [rsp+270h] [rbp-468h]
  __int64 v140; // [rsp+278h] [rbp-460h]
  __int64 v141; // [rsp+280h] [rbp-458h]
  __int64 v142; // [rsp+2A8h] [rbp-430h]
  __int64 v143; // [rsp+2B0h] [rbp-428h]
  __int64 v144; // [rsp+2B8h] [rbp-420h]
  __int64 v145; // [rsp+2C0h] [rbp-418h]
  unsigned __int64 v146; // [rsp+2C8h] [rbp-410h]
  _QWORD v147[102]; // [rsp+370h] [rbp-368h]

  v4 = a4;
  v108 = a4;
  v5 = a3;
  v107 = a3;
  v6 = a2;
  v109 = a2;
  v7 = a1;
  v126 = a1;
  v106 = 0;
  i = 0LL;
  v112 = 0LL;
  v91 = 1;
  CurrentThread = KeGetCurrentThread();
  v116 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  v101 = 0LL;
  v100 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v95, &v94) )
    return 0LL;
  RtlpCaptureContext(v136);
  v88 = 0;
  v92 = 0;
  v89 = (v5 & 2) != 0;
  v9 = v5 & 1;
  v90 = v9;
  v120 = v9;
  if ( (v5 & 1) == 0 && (dword_140541174 & 1) == 0 )
    v106 = 0x80000000;
  v114 = 0LL;
  v115 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    BaseTrapFrame = PspGetBaseTrapFrame(CurrentThread);
    v101 = BaseTrapFrame;
    if ( !Teb || (Teb[3063] & 0x100) != 0 )
      return 0LL;
    if ( (unsigned __int16)PsWow64GetProcessMachine(Process) == 332
      && *(_BYTE *)(BaseTrapFrame + 43) != 2
      && *(_WORD *)(BaseTrapFrame + 368) == 35 )
    {
      v92 = 1;
      v66 = BaseTrapFrame + 360;
      v87 = *(_DWORD *)(BaseTrapFrame + 384);
      v86 = *(_DWORD *)(BaseTrapFrame + 344);
      v64 = Teb;
      if ( (unsigned __int8)RtlpWalkWowStack(v7, v66, (_DWORD)Teb, (unsigned int)&v92, v6, v4, v86, v87) )
        goto LABEL_303;
    }
    else
    {
      v64 = Teb;
    }
    v114 = *(_QWORD *)(v101 + 384);
    v65 = *((_QWORD *)v64 + 1);
    v115 = v65;
    if ( v65 <= v114 )
      return 0LL;
    if ( v65 > 0x7FFFFFFF0000LL && v65 != v114 )
      MEMORY[0x7FFFFFFF0000] = 0;
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v112 = (_QWORD *)i[4];
    v91 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
  }
  memset(v135, 0, sizeof(v135));
  v127 = *(_OWORD *)&xmmword_140559020;
  v128 = qword_140559030;
  while ( 1 )
  {
    v10 = i;
    v125 = i;
    if ( v100 != 1
      && v146 >= 0xFFFF800000000000uLL
      && byte_14043CA10[((v146 >> 39) & 0x1FF) - 256] == 1
      && !MmIsSessionExecutionValid((__int64)CurrentThread, (__int64)Process, v146) )
    {
      v9 = v90;
      goto LABEL_303;
    }
    if ( !(unsigned __int8)RtlpIsFrameInBoundsEx(&v95, v138, &v94, v135) )
    {
      v9 = v90;
      goto LABEL_303;
    }
    v11 = RtlpLookupFunctionEntryForStackWalks(v146, &v127);
    v13 = (_DWORD *)v11;
    v123 = (_DWORD *)v11;
    if ( v11 )
      break;
    if ( !*((_QWORD *)&v127 + 1) )
    {
      v9 = v90;
      goto LABEL_303;
    }
    if ( v146 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v138 & 3) != 0 )
      goto LABEL_166;
    v146 = *v138++;
LABEL_47:
    if ( !v146 )
    {
      if ( (v5 & 1) == 0 )
        goto LABEL_141;
      if ( (unsigned __int16)PsWow64GetProcessMachine(Process) != 332 )
        goto LABEL_141;
      if ( *(_BYTE *)(v101 + 43) != 2 )
        goto LABEL_141;
      v62 = (int)Teb;
      if ( (int)RtlWow64GetCpuAreaInfo(*((_QWORD *)Teb + 657), v61, v134) < 0 )
        goto LABEL_141;
      if ( (v134[0] & 3) != 0 )
        goto LABEL_166;
      if ( (unsigned __int8)RtlpWalkWowStack(
                              v126,
                              0,
                              v62,
                              (unsigned int)&v92,
                              v6,
                              v4,
                              *(_DWORD *)(v134[0] + 180),
                              *(_DWORD *)(v134[0] + 196) - 4) )
        v9 = v90;
      else
LABEL_141:
        v9 = v90;
      goto LABEL_303;
    }
    if ( v100 )
    {
      if ( v100 == 1 )
      {
        if ( v146 > 0x7FFFFFFEFFFFLL )
        {
          v9 = v90;
          goto LABEL_303;
        }
        if ( v112 && v146 == *(_QWORD *)(v101 + 360) )
        {
          v100 = 2;
          v146 = v112[39];
          v138 = v112 + 40;
          v139 = v112[31];
          v137 = v112[32];
          v141 = v112[33];
          v140 = v112[34];
          v142 = v112[35];
          v143 = v112[36];
          v144 = v112[37];
          v145 = v112[38];
          v112 = (_QWORD *)v10[4];
          v58 = (unsigned __int64 *)v10[5];
          if ( !v58 )
          {
            v9 = v90;
            goto LABEL_303;
          }
          i = (_QWORD *)v10[5];
          v95 = v138;
          v94 = *v58;
        }
      }
      else
      {
        if ( v100 != 2 )
        {
          v9 = v90;
          goto LABEL_303;
        }
        if ( v146 <= 0x7FFFFFFEFFFFLL )
        {
          if ( v146 != *(_QWORD *)(v101 + 360) )
          {
            v9 = v90;
            goto LABEL_303;
          }
          v133 = *(_QWORD *)(v101 + 384);
          if ( (v133 & 3) != 0 )
            goto LABEL_166;
          v100 = 1;
          v138 = *(unsigned __int64 **)(v133 + 72);
          v95 = (unsigned __int64 *)v114;
          v94 = v115;
          if ( v112 )
            v101 = v112[26];
        }
      }
      goto LABEL_53;
    }
    if ( (v5 & 1) == 0 && v146 < 0xFFFF800000000000uLL )
    {
      v9 = v90;
      goto LABEL_303;
    }
    if ( (v5 & 1) != 0 )
    {
      if ( v146 < 0xFFFF800000000000uLL )
      {
        if ( v146 > 0x7FFFFFFEFFFFLL )
        {
          v9 = v90;
          goto LABEL_303;
        }
        if ( v146 != *(_QWORD *)(v101 + 360) )
        {
          v9 = v90;
          goto LABEL_303;
        }
        v100 = 1;
        if ( v112 )
        {
          v101 = v112[26];
          if ( v101 < 0xFFFF800000000000uLL )
          {
            v9 = v90;
            goto LABEL_303;
          }
        }
        v95 = (unsigned __int64 *)v114;
        v94 = v115;
        goto LABEL_53;
      }
      if ( !v92 )
      {
LABEL_53:
        if ( v92 >= v4 )
          *(_QWORD *)(v126 + 8LL * (v92 - v4)) = v146;
        if ( ++v92 >= v6 )
        {
          v9 = v90;
          goto LABEL_303;
        }
      }
    }
    else if ( !v89 )
    {
      goto LABEL_53;
    }
  }
  v14 = v146;
  v15 = *((_QWORD *)&v127 + 1);
  v16 = *((_QWORD *)&v127 + 1);
  v129 = *((_QWORD *)&v127 + 1);
  v17 = (unsigned int *)v11;
  v110 = (unsigned int *)v11;
  v132 = v11;
  v18 = 0;
  v105 = 0;
  v19 = *((_QWORD *)&v127 + 1) + *(unsigned int *)(v11 + 8);
  if ( v146 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v19 & 3) != 0 )
      goto LABEL_166;
    v15 = *((_QWORD *)&v127 + 1);
    v13 = v123;
  }
  v20 = *(_BYTE *)v19;
  v21 = *(_BYTE *)v19 & 7;
  if ( v88 )
  {
    if ( v21 < 2 )
    {
      v59 = (_BYTE *)v19;
      v60 = 0;
      v121 = 0;
      v12 = (unsigned __int8 *)(v19 + 2);
      if ( *(_BYTE *)(v19 + 2) )
      {
LABEL_149:
        if ( v106 )
          goto LABEL_150;
      }
      else
      {
        while ( (v20 & 0x20) != 0 )
        {
          v68 = *v12;
          v117 = v68;
          if ( (v68 & 1) != 0 )
          {
            v68 = (unsigned int)(v68 + 1);
            v117 = v68;
          }
          v121 = ++v60;
          if ( v60 > 0x20 )
LABEL_104:
            RtlRaiseStatus(-1073741569);
          v59 = (_BYTE *)(*(unsigned int *)&v59[2 * v68 + 12] + v15);
          if ( v146 <= 0x7FFFFFFEFFFFLL )
          {
            if ( ((unsigned __int8)v59 & 3) != 0 )
              goto LABEL_166;
            v15 = *((_QWORD *)&v127 + 1);
            v13 = v123;
          }
          v12 = v59 + 2;
          if ( v59[2] )
            goto LABEL_149;
          v20 = *v59;
        }
        v18 = 1;
        v105 = 1;
      }
    }
  }
  else
  {
    v18 = 1;
    v105 = 1;
  }
  v22 = v146 - *v13 - DWORD2(v127);
  v23 = *(_BYTE *)(v19 + 3);
  if ( (v23 & 0xF) != 0 )
  {
    if ( v22 >= *(unsigned __int8 *)(v19 + 1) || (*(_BYTE *)v19 & 0x20) != 0 )
    {
      v49 = *(_BYTE *)(v19 + 3);
      v50 = v23;
    }
    else
    {
      v69 = 0LL;
      for ( j = 0; (unsigned int)v69 < *(unsigned __int8 *)(v19 + 2); j = v69 )
      {
        v70 = *(unsigned __int16 *)(v19 + 2 * v69 + 4);
        v98 = v70;
        if ( (BYTE1(v70) & 0xF) == 3 )
          break;
        v69 = (unsigned int)RtlpUnwindOpSlots(v70, (unsigned int)v69, v12) + (unsigned int)v69;
      }
      v17 = v110;
      if ( v22 < *(unsigned __int8 *)(v19 + 2 * v69 + 4) )
        goto LABEL_19;
      v50 = *(unsigned __int8 *)(v19 + 3);
      v49 = *(_BYTE *)(v19 + 3);
    }
    v113 = (unsigned __int64 *)(*(_QWORD *)&v136[8 * (v49 & 0xF) + 120] - (v50 & 0xFFFFFFF0));
  }
  else
  {
LABEL_19:
    v113 = v138;
  }
  if ( v18 )
    goto LABEL_21;
  v39 = 0;
  v96 = 0;
  if ( v21 >= 2 )
  {
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_21;
    v40 = *(_WORD *)(v19 + 4);
    v98 = v40;
    if ( (HIBYTE(v40) & 0xF) != 6 )
      goto LABEL_21;
    v41 = (unsigned __int8)v40;
    v42 = v14 - v16;
    if ( (v40 & 0x1000) == 0 )
    {
      v102 = 0;
LABEL_71:
      for ( k = 1; ; ++k )
      {
        j = k;
        if ( k >= *(unsigned __int8 *)(v19 + 2) )
          break;
        v45 = *(_WORD *)(v19 + 2LL * k + 4);
        v98 = v45;
        if ( (HIBYTE(v45) & 0xF) != 6 )
          break;
        v46 = HIBYTE(v45) >> 4 << 8;
        v47 = (unsigned __int8)v45 + v46 == 0;
        v48 = (unsigned __int8)v45 + v46;
        v102 = v48;
        if ( v47 )
          break;
        v43 = v17[1] - v48;
        v102 = v43;
        if ( v42 - v43 < v41 )
          goto LABEL_167;
      }
      goto LABEL_21;
    }
    v43 = v17[1] - (unsigned __int8)v40;
    v102 = v43;
    if ( v42 - v43 >= (unsigned int)(unsigned __int8)v40 )
      goto LABEL_71;
LABEL_167:
    v96 = 1;
    RtlpUnwindEpilogue(v16, v14, v42 - v43, (_DWORD)v17, (__int64)v136, 0LL, (__int64)&v95, (__int64)&v94);
    v88 = 0;
LABEL_43:
    v34 = 0;
    goto LABEL_44;
  }
  v54 = (_BYTE *)v14;
  m = (_BYTE *)v14;
  v55 = 0LL;
  v118 = 0;
  v56 = *(_BYTE *)v14;
  if ( *(_BYTE *)v14 == 72 )
  {
    if ( *(_BYTE *)(v14 + 1) == 0x83 && *(_BYTE *)(v14 + 2) == 0xC4 )
    {
      v54 = (_BYTE *)(v14 + 4);
LABEL_222:
      m = v54;
      goto LABEL_107;
    }
    if ( *(_BYTE *)(v14 + 1) != 0x81 || *(_BYTE *)(v14 + 2) != 0xC4 )
      goto LABEL_106;
LABEL_221:
    v54 = (_BYTE *)(v14 + 7);
    goto LABEL_222;
  }
LABEL_106:
  if ( (v56 & 0xFE) == 0x48 && *(_BYTE *)(v14 + 1) == 0x8D )
  {
    v71 = *(_BYTE *)(v14 + 2);
    v72 = v71 & 7;
    v55 = v72 | (8 * (v56 & 1u));
    v118 = v72 | (8 * (v56 & 1));
    if ( v118 )
    {
      if ( (_DWORD)v55 == (*(_BYTE *)(v19 + 3) & 0xF) )
      {
        v73 = v71 & 0xF8;
        if ( v73 == 96 )
        {
          v54 = (_BYTE *)(v14 + 4);
          goto LABEL_222;
        }
        if ( v73 != -96 )
          goto LABEL_107;
        goto LABEL_221;
      }
    }
  }
LABEL_107:
  while ( 2 )
  {
    v57 = *v54;
    if ( (*v54 & 0xF8) == 0x58 )
    {
      ++v54;
      goto LABEL_174;
    }
    if ( (v57 & 0xF0) == 0x40 && (v54[1] & 0xF8) == 0x58 )
    {
      v54 += 2;
LABEL_174:
      m = v54;
      continue;
    }
    break;
  }
  if ( v57 == -14 )
  {
    m = ++v54;
    v57 = *v54;
  }
  if ( (unsigned __int8)(v57 + 62) <= 1u || v57 == -13 && v54[1] == 0xC3 )
    goto LABEL_242;
  if ( ((v57 + 23) & 0xFD) != 0 )
  {
    if ( v57 != -1 || v54[1] != 37 )
    {
      if ( (v57 & 0xF8) == 0x48 && v54[1] == 0xFF && (v54[2] & 0x38) == 0x20 )
      {
        v39 = 1;
        v96 = 1;
      }
      goto LABEL_116;
    }
LABEL_242:
    v96 = 1;
    goto LABEL_243;
  }
  v124 = &v54[-v16];
  if ( v57 == -21 )
    v74 = (char)v54[1] + 2;
  else
    v74 = *(_DWORD *)(v54 + 1) + 5;
  v75 = (unsigned __int64)&v54[v74 - v16];
  v124 = (_BYTE *)v75;
  v76 = *v17;
  if ( v75 < v76 || v75 >= v17[1] )
  {
    v77 = (_DWORD *)RtlpSameFunction(v17, v16, v75 + v16);
    if ( v77 && v75 != *v77 )
    {
      v17 = v110;
      goto LABEL_116;
    }
    goto LABEL_242;
  }
  if ( v75 == v76 && (*(_BYTE *)v19 & 0x20) == 0 )
  {
    v39 = 1;
    v96 = 1;
  }
LABEL_116:
  if ( v39 )
  {
LABEL_243:
    v78 = (_BYTE *)v14;
    m = (_BYTE *)v14;
    if ( (*(_BYTE *)v14 & 0xF8) != 0x48 )
      goto LABEL_255;
    v79 = *(_BYTE *)(v14 + 1);
    if ( v79 == -125 )
    {
      v138 = (unsigned __int64 *)((char *)v138 + *(char *)(v14 + 3));
      v78 = (_BYTE *)(v14 + 4);
LABEL_254:
      for ( m = v78; ; m = v78 )
      {
LABEL_255:
        v81 = *v78;
        if ( (*v78 & 0xF8) == 0x58 )
        {
          if ( v14 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v138 & 3) != 0 )
            goto LABEL_166;
          if ( v138 < v95 || (unsigned __int64)v138 > v94 - 8 )
            goto LABEL_150;
          *(_QWORD *)&v136[8 * (v81 & 7) + 120] = *v138++;
          ++v78;
        }
        else
        {
          if ( (v81 & 0xF0) != 0x40 || (v82 = v78[1], (v82 & 0xF8) != 0x58) )
          {
            if ( v14 > 0x7FFFFFFEFFFFLL || ((unsigned __int8)v138 & 3) == 0 )
            {
              if ( v138 >= v95 && (unsigned __int64)v138 <= v94 - 8 )
              {
                v146 = *v138++;
                v88 = 0;
                goto LABEL_43;
              }
LABEL_150:
              v34 = -1073741784;
              goto LABEL_44;
            }
LABEL_166:
            ExRaiseDatatypeMisalignment();
          }
          if ( v14 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v138 & 3) != 0 )
            goto LABEL_166;
          if ( v138 < v95 || (unsigned __int64)v138 > v94 - 8 )
          {
            v34 = -1073741784;
            goto LABEL_44;
          }
          *(_QWORD *)&v136[8 * (v82 & 7 | (8LL * (v81 & 1))) + 120] = *v138++;
          v78 += 2;
        }
      }
    }
    if ( v79 == -127 )
    {
      v138 = (unsigned __int64 *)((char *)v138
                                + (((*(unsigned __int8 *)(v14 + 4) | (*(unsigned __int16 *)(v14 + 5) << 8)) << 8) | *(unsigned __int8 *)(v14 + 3)));
    }
    else
    {
      if ( v79 != -115 )
        goto LABEL_255;
      v80 = *(_BYTE *)(v14 + 2) & 0xF8;
      if ( v80 == 96 )
      {
        v138 = *(unsigned __int64 **)&v136[8 * v55 + 120];
        v138 = (unsigned __int64 *)((char *)v138 + *(char *)(v14 + 3));
        v78 = (_BYTE *)(v14 + 4);
        goto LABEL_254;
      }
      if ( v80 != -96 )
        goto LABEL_255;
      v138 = (unsigned __int64 *)(*(_QWORD *)&v136[8 * v55 + 120]
                                + (((*(unsigned __int8 *)(v14 + 4) | (*(unsigned __int16 *)(v14 + 5) << 8)) << 8) | *(unsigned __int8 *)(v14 + 3)));
    }
    v78 = (_BYTE *)(v14 + 7);
    goto LABEL_254;
  }
LABEL_21:
  v24 = v113;
  v25 = 0;
  v119 = 0;
  while ( 1 )
  {
    v26 = 0LL;
    v27 = 0;
    v28 = v14 - v129 - *v17;
    v29 = v129 + v17[2];
    if ( v14 <= 0x7FFFFFFEFFFFLL && (v29 & 3) != 0 )
      goto LABEL_166;
    while ( 1 )
    {
      v30 = *(unsigned __int8 *)(v29 + 2);
      if ( (unsigned int)v26 >= v30 )
        break;
      v31 = *(unsigned __int8 *)(v29 + 2 * v26 + 5) >> 4;
      v32 = v29 + 2 * v26;
      if ( v28 < *(unsigned __int8 *)(v32 + 4) )
      {
        v26 = (unsigned int)RtlpUnwindOpSlots(*(unsigned __int16 *)(v32 + 4), v32, v31) + (unsigned int)v26;
      }
      else
      {
        if ( (*(_BYTE *)(v29 + 2 * v26 + 5) & 0xF) != 0 )
        {
          switch ( *(_BYTE *)(v29 + 2 * v26 + 5) & 0xF )
          {
            case 1:
              v26 = (unsigned int)(v26 + 1);
              v37 = *(unsigned __int16 *)(v29 + 2 * v26 + 4);
              v93 = v37;
              if ( (_DWORD)v31 )
              {
                v26 = (unsigned int)(v26 + 1);
                v38 = (*(unsigned __int16 *)(v29 + 2 * v26 + 4) << 16) + v37;
              }
              else
              {
                v38 = 8 * v37;
              }
              v93 = v38;
              v138 = (unsigned __int64 *)((char *)v138 + v38);
              break;
            case 2:
              v138 = (unsigned __int64 *)((char *)v138 + (unsigned int)(8 * v31 + 8));
              break;
            case 3:
              v138 = *(unsigned __int64 **)&v136[8 * (*(_BYTE *)(v29 + 3) & 0xF) + 120];
              v138 = (unsigned __int64 *)((char *)v138 - (*(_BYTE *)(v29 + 3) & 0xF0));
              break;
            case 4:
              v26 = (unsigned int)(v26 + 1);
              v93 = 8 * *(unsigned __int16 *)(v29 + 2 * v26 + 4);
              v33 = (unsigned __int64)v24 + v93;
              if ( v14 <= 0x7FFFFFFEFFFFLL && (v33 & 3) != 0 )
                goto LABEL_166;
              if ( v33 < (unsigned __int64)v95 || v33 > v94 - 8 )
                goto LABEL_290;
              *(_QWORD *)&v136[8 * v31 + 120] = *(_QWORD *)v33;
              break;
            case 5:
              v26 = (unsigned int)(v26 + 2);
              v93 = *(unsigned __int16 *)(v29 + 2LL * (unsigned int)(v26 - 1) + 4);
              v93 += *(unsigned __int16 *)(v29 + 2 * v26 + 4) << 16;
              v83 = (unsigned __int64)v24 + v93;
              if ( v14 <= 0x7FFFFFFEFFFFLL && (v83 & 3) != 0 )
                goto LABEL_166;
              if ( v83 < (unsigned __int64)v95 || v83 > v94 - 8 )
                goto LABEL_290;
              *(_QWORD *)&v136[8 * v31 + 120] = *(_QWORD *)v83;
              break;
            case 6:
              LODWORD(v26) = v26 + 1;
              break;
            case 7:
              LODWORD(v26) = v26 + 2;
              break;
            case 8:
              v26 = (unsigned int)(v26 + 1);
              v93 = 16 * *(unsigned __int16 *)(v29 + 2 * v26 + 4);
              v35 = (unsigned __int64)v24 + v93;
              if ( v14 <= 0x7FFFFFFEFFFFLL && (v35 & 3) != 0 )
                goto LABEL_166;
              if ( v35 < (unsigned __int64)v95 || v35 > v94 - 16 )
                goto LABEL_290;
              v36 = 2LL * (unsigned int)v31;
              v147[v36] = *(_QWORD *)v35;
              v147[v36 + 1] = *(_QWORD *)(v35 + 8);
              break;
            case 9:
              v26 = (unsigned int)(v26 + 2);
              v93 = *(unsigned __int16 *)(v29 + 2LL * (unsigned int)(v26 - 1) + 4);
              v93 += *(unsigned __int16 *)(v29 + 2 * v26 + 4) << 16;
              v84 = (unsigned __int64)v24 + v93;
              if ( v14 <= 0x7FFFFFFEFFFFLL && (v84 & 3) != 0 )
                goto LABEL_166;
              if ( v84 < (unsigned __int64)v95 || v84 > v94 - 16 )
                goto LABEL_290;
              v85 = 2LL * (unsigned int)v31;
              v147[v85] = *(_QWORD *)v84;
              v147[v85 + 1] = *(_QWORD *)(v84 + 8);
              break;
            case 0xA:
              v27 = 1;
              v52 = v138;
              v130 = v138;
              v53 = (unsigned __int64 **)(v138 + 3);
              v131 = v138 + 3;
              if ( (_DWORD)v31 )
              {
                v52 = v138 + 1;
                v130 = v138 + 1;
                v53 = (unsigned __int64 **)(v138 + 4);
                v131 = v138 + 4;
              }
              if ( v14 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v52 & 3) != 0 )
                goto LABEL_166;
              if ( v52 < v95 || (unsigned __int64)v52 > v94 - 8 )
                goto LABEL_290;
              if ( v14 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v53 & 3) != 0 )
                goto LABEL_166;
              if ( v53 < (unsigned __int64 **)v95 || (unsigned __int64)v53 > v94 - 8 )
                goto LABEL_290;
              v146 = *v52;
              v138 = *v53;
              break;
            default:
              goto LABEL_104;
          }
        }
        else
        {
          if ( v14 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v138 & 3) != 0 )
            goto LABEL_166;
          if ( v138 < v95 || (unsigned __int64)v138 > v94 - 8 )
            goto LABEL_290;
          *(_QWORD *)&v136[8 * v31 + 120] = *v138++;
        }
        v26 = (unsigned int)(v26 + 1);
      }
    }
    if ( (*(_BYTE *)v29 & 0x20) == 0 )
      break;
    if ( (v30 & 1) != 0 )
      ++v30;
    v17 = (unsigned int *)(v29 + 2 * (v30 + 2LL));
    v110 = v17;
    if ( v14 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v17 & 3) != 0 )
      goto LABEL_166;
    v119 = ++v25;
    if ( v25 > 0x20 )
      goto LABEL_104;
  }
  if ( v27 )
  {
    for ( n = 0LL; (unsigned int)n < 3; n = (unsigned int)(n + 1) )
    {
      if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))v29 == *(&RtlpSafeMachineFrameEntries + n) )
      {
        v27 = 0;
        break;
      }
    }
LABEL_42:
    v88 = v27;
    v132 = (__int64)v110;
    goto LABEL_43;
  }
  if ( v14 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v138 & 3) != 0 )
    goto LABEL_166;
  if ( v138 >= v95 && (unsigned __int64)v138 <= v94 - 8 )
  {
    v146 = *v138++;
    goto LABEL_42;
  }
LABEL_290:
  v34 = -1073741784;
LABEL_44:
  v99 = v34;
  if ( v34 >= 0 )
  {
    v10 = v125;
    v5 = v107;
    v4 = v108;
    v6 = v109;
    CurrentThread = v116;
    if ( v88 )
      v89 = 0;
    goto LABEL_47;
  }
  v9 = v90;
  CurrentThread = v116;
LABEL_303:
  if ( v9 && !v91 )
    CurrentThread->MiscFlags &= ~0x20u;
  return v92;
}
