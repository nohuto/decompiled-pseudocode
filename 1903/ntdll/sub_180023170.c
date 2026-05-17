/*
 * XREFs of sub_180023170 @ 0x180023170
 * Callers:
 *     sub_18001B990 @ 0x18001B990 (sub_18001B990.c)
 *     sub_180022F1C @ 0x180022F1C (sub_180022F1C.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180022698 @ 0x180022698 (sub_180022698.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_180025600 @ 0x180025600 (sub_180025600.c)
 *     sub_180025788 @ 0x180025788 (sub_180025788.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18002891C @ 0x18002891C (sub_18002891C.c)
 *     sub_180029560 @ 0x180029560 (sub_180029560.c)
 *     sub_180029974 @ 0x180029974 (sub_180029974.c)
 *     sub_18002AB70 @ 0x18002AB70 (sub_18002AB70.c)
 *     sub_18002E1A4 @ 0x18002E1A4 (sub_18002E1A4.c)
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035E30 @ 0x180035E30 (sub_180035E30.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlUTF8ToUnicodeN @ 0x18005F3A0 (RtlUTF8ToUnicodeN.c)
 *     sub_180064EEC @ 0x180064EEC (sub_180064EEC.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     sub_18006C7D4 @ 0x18006C7D4 (sub_18006C7D4.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180070218 @ 0x180070218 (sub_180070218.c)
 *     sub_1800709A4 @ 0x1800709A4 (sub_1800709A4.c)
 *     sub_18007DDBC @ 0x18007DDBC (sub_18007DDBC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800CDE60 @ 0x1800CDE60 (sub_1800CDE60.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 *     sub_1800D4DF4 @ 0x1800D4DF4 (sub_1800D4DF4.c)
 */

__int64 __fastcall sub_180023170(PCANSI_STRING SourceString, __int64 a2, __int64 a3, int a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 *v9; // r13
  _WORD *v10; // rbx
  __int64 v11; // rdx
  unsigned int v12; // esi
  int v13; // edi
  unsigned __int16 Length; // ax
  int v15; // r8d
  char *Buffer; // r9
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rdx
  struct _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  __int64 v21; // r9
  ULONG_PTR ActiveFrame; // rcx
  int v23; // r14d
  char v24; // si
  int *v25; // r12
  struct _PEB *v26; // r13
  bool v27; // r15
  int v28; // ebx
  void *ApiSetMap; // rdi
  char v30; // r14
  unsigned __int16 v31; // bx
  int *HotpatchInformation; // rcx
  __int64 v33; // rdi
  __int64 v34; // rbx
  unsigned __int64 v35; // rbx
  __int16 v36; // ax
  unsigned int v37; // ecx
  int v38; // esi
  unsigned int v39; // ecx
  int v40; // ebx
  char *v41; // rcx
  unsigned __int16 v42; // bx
  unsigned __int16 v43; // si
  unsigned int v44; // ecx
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  int *v46; // rbx
  unsigned __int64 v47; // rdx
  _WORD *v48; // rax
  __int16 v49; // cx
  unsigned int v50; // r14d
  _QWORD **v51; // rdi
  char v52; // cl
  _QWORD *v53; // r15
  volatile signed __int32 *v54; // rsi
  unsigned __int16 *v55; // rax
  _WORD *v56; // r9
  unsigned __int16 v57; // r10
  unsigned __int16 v58; // r11
  __int64 v59; // rax
  __int16 v60; // r15
  __int64 v61; // rcx
  int v62; // ebx
  __int64 v63; // rsi
  __int64 v64; // r12
  __int64 v65; // rbx
  signed __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  signed __int64 v69; // rax
  int v70; // r15d
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 *v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // r14
  int v78; // edx
  int v79; // ecx
  __int64 v80; // rax
  signed __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rdx
  _QWORD *v84; // rcx
  _QWORD *v85; // rbx
  _QWORD *v86; // rdi
  _QWORD *v87; // rdx
  _QWORD *v88; // rax
  __int64 *v89; // rdx
  _QWORD *v90; // rdx
  _QWORD *v91; // r8
  bool v92; // zf
  int v93; // eax
  signed __int64 v94; // r8
  __int64 v95; // rdx
  signed __int64 v96; // rdx
  signed __int64 v97; // rtt
  signed __int64 v98; // rcx
  __int64 v99; // rdx
  signed __int64 v100; // rtt
  _WORD *v101; // rcx
  _QWORD *v102; // rbx
  char *i; // r9
  char *v104; // rcx
  __int16 v105; // cx
  int v106; // r10d
  int v107; // r11d
  int v108; // eax
  unsigned __int16 v109; // r8
  __int64 Heap; // rax
  int v111; // ebx
  _WORD *v112; // rax
  unsigned int v113; // r12d
  unsigned int v114; // eax
  void *v115; // r13
  unsigned int v116; // edi
  unsigned int v117; // eax
  void *v118; // rsi
  unsigned int v119; // r14d
  unsigned int v120; // eax
  void *v121; // r12
  const char *v122; // rax
  char *v123; // rcx
  char v124; // al
  __int64 v125; // rbx
  __int64 v126; // rax
  __int64 v128; // rax
  _WORD *v129; // rax
  __int64 v130; // [rsp+30h] [rbp-528h]
  __int16 v131; // [rsp+58h] [rbp-500h]
  char v132; // [rsp+60h] [rbp-4F8h] BYREF
  char v133; // [rsp+61h] [rbp-4F7h]
  int v134; // [rsp+64h] [rbp-4F4h]
  int v135; // [rsp+68h] [rbp-4F0h]
  char v136; // [rsp+6Ch] [rbp-4ECh]
  char v137; // [rsp+6Dh] [rbp-4EBh]
  char v138; // [rsp+6Eh] [rbp-4EAh]
  char v139; // [rsp+6Fh] [rbp-4E9h]
  char v140; // [rsp+70h] [rbp-4E8h]
  char v141; // [rsp+71h] [rbp-4E7h]
  unsigned __int16 v142; // [rsp+72h] [rbp-4E6h]
  unsigned __int16 v143; // [rsp+74h] [rbp-4E4h]
  unsigned __int16 v144; // [rsp+76h] [rbp-4E2h]
  int v145; // [rsp+78h] [rbp-4E0h]
  int v146; // [rsp+7Ch] [rbp-4DCh]
  int v147; // [rsp+80h] [rbp-4D8h] BYREF
  unsigned int v148; // [rsp+84h] [rbp-4D4h]
  struct _PEB *v149; // [rsp+88h] [rbp-4D0h]
  int v150; // [rsp+90h] [rbp-4C8h]
  int v151; // [rsp+94h] [rbp-4C4h] BYREF
  int v152; // [rsp+98h] [rbp-4C0h]
  int v153; // [rsp+9Ch] [rbp-4BCh]
  int v154; // [rsp+A0h] [rbp-4B8h]
  int v155; // [rsp+A4h] [rbp-4B4h]
  int *v156; // [rsp+A8h] [rbp-4B0h]
  __int64 v157; // [rsp+B0h] [rbp-4A8h]
  __int64 v158; // [rsp+B8h] [rbp-4A0h]
  __int64 v159; // [rsp+C0h] [rbp-498h]
  int v160; // [rsp+C8h] [rbp-490h]
  int v161; // [rsp+CCh] [rbp-48Ch]
  int v162; // [rsp+D0h] [rbp-488h]
  int v163; // [rsp+D4h] [rbp-484h]
  int v164; // [rsp+D8h] [rbp-480h]
  int v165; // [rsp+DCh] [rbp-47Ch]
  int v166; // [rsp+E0h] [rbp-478h]
  int v167; // [rsp+E4h] [rbp-474h]
  char *v168; // [rsp+E8h] [rbp-470h]
  __int64 *v169; // [rsp+F0h] [rbp-468h]
  __int64 v170; // [rsp+F8h] [rbp-460h]
  __int64 v171; // [rsp+100h] [rbp-458h]
  __int64 v172; // [rsp+108h] [rbp-450h]
  __int64 v173; // [rsp+110h] [rbp-448h]
  __int64 v174; // [rsp+118h] [rbp-440h]
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp-438h] BYREF
  unsigned __int16 v176; // [rsp+130h] [rbp-428h] BYREF
  void *Src; // [rsp+138h] [rbp-420h]
  void *v178; // [rsp+140h] [rbp-418h]
  void *v179; // [rsp+148h] [rbp-410h]
  void *v180; // [rsp+150h] [rbp-408h]
  int *v181; // [rsp+158h] [rbp-400h]
  _WORD *v182; // [rsp+160h] [rbp-3F8h]
  _WORD *v183; // [rsp+168h] [rbp-3F0h]
  int v184; // [rsp+170h] [rbp-3E8h]
  char *v185; // [rsp+178h] [rbp-3E0h]
  unsigned __int16 *v186; // [rsp+180h] [rbp-3D8h]
  _WORD *v187; // [rsp+188h] [rbp-3D0h]
  __int64 v188; // [rsp+190h] [rbp-3C8h]
  __int64 v189; // [rsp+198h] [rbp-3C0h]
  __int64 v190; // [rsp+1A0h] [rbp-3B8h]
  _WORD *v191; // [rsp+1A8h] [rbp-3B0h]
  __int64 v192; // [rsp+1B0h] [rbp-3A8h]
  int v193; // [rsp+1B8h] [rbp-3A0h]
  __int64 v194; // [rsp+1C0h] [rbp-398h] BYREF
  int v195; // [rsp+1C8h] [rbp-390h]
  _QWORD v196[7]; // [rsp+1D0h] [rbp-388h] BYREF
  _BYTE v197[16]; // [rsp+210h] [rbp-348h] BYREF
  __int16 v198; // [rsp+220h] [rbp-338h]
  __int16 v199; // [rsp+222h] [rbp-336h]
  char *v200; // [rsp+228h] [rbp-330h]
  __int64 v201; // [rsp+230h] [rbp-328h]
  struct _TEB *v202; // [rsp+238h] [rbp-320h]
  __int128 v203; // [rsp+240h] [rbp-318h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+250h] [rbp-308h] BYREF
  int v205; // [rsp+2F0h] [rbp-268h] BYREF
  void *v206; // [rsp+2F8h] [rbp-260h]
  _WORD v207[128]; // [rsp+300h] [rbp-258h] BYREF
  int v208; // [rsp+400h] [rbp-158h] BYREF
  void *v209; // [rsp+408h] [rbp-150h]
  _WORD v210[128]; // [rsp+410h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+558h] [rbp+0h]

  v164 = a4;
  v6 = a3;
  v157 = a3;
  v7 = a2;
  v170 = a2;
  v9 = a5;
  v169 = a5;
  v158 = a6;
  v206 = v207;
  v205 = 0x1000000;
  v207[0] = 0;
  v10 = v210;
  v209 = v210;
  v11 = 0LL;
  v208 = 0x1000000;
  LOWORD(v12) = 256;
  v210[0] = 0;
  v13 = 0;
  Length = SourceString->Length;
  if ( !SourceString->Length )
    goto LABEL_10;
  v15 = Length;
  Buffer = SourceString->Buffer;
  v17 = 0;
  if ( byte_180162797 )
  {
    if ( !Length )
      goto LABEL_5;
    RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v147, (_DWORD)Buffer, Length);
    v10 = v209;
    LOWORD(v12) = HIWORD(v208);
    v11 = (unsigned __int16)v208;
    v17 = v147;
  }
  else
  {
    if ( !NlsMbCodePageTag )
    {
      v17 = 2 * Length;
      goto LABEL_5;
    }
    if ( Length )
    {
      do
      {
        --v15;
        v128 = (unsigned __int8)*Buffer++;
        if ( word_180163EE0[v128] )
        {
          if ( !v15 )
          {
            v17 += 2;
            break;
          }
          --v15;
          ++Buffer;
        }
        v17 += 2;
      }
      while ( v15 );
    }
LABEL_5:
    v147 = v17;
  }
  v18 = v17 + (unsigned int)(unsigned __int16)v11 + 2;
  v13 = 0;
  if ( (unsigned int)v18 > (unsigned __int16)v12 )
  {
    if ( (unsigned int)v18 > 0xFFFE )
    {
      v13 = -1073741562;
      goto LABEL_7;
    }
    v12 = (v18 + 63) & 0xFFFFFFC0;
    if ( v12 > 0xFFFE )
      v12 = 65534;
    if ( v10 == v210 )
    {
      v129 = (_WORD *)sub_18006D6B8(v12, v11);
      v10 = v129;
      if ( v129 )
      {
        LOWORD(v11) = v208;
        if ( !(_WORD)v208 )
          goto LABEL_351;
        memmove(v129, v209, (unsigned __int16)v208);
      }
    }
    else
    {
      v10 = (_WORD *)sub_1800D4DF4(v12, v10, v18, Buffer);
    }
    LOWORD(v11) = v208;
LABEL_351:
    if ( v10 )
    {
      v209 = v10;
      HIWORD(v208) = v12;
    }
    else
    {
      v13 = -1073741801;
      v10 = v209;
      LOWORD(v12) = HIWORD(v208);
    }
  }
LABEL_7:
  if ( v13 >= 0 )
  {
    DestinationString.Buffer = (_WORD *)((char *)v10 + (unsigned __int16)v11);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v12 - v11;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v208) = DestinationString.Length + v208;
    v10 = v209;
  }
  v6 = v157;
LABEL_10:
  if ( v13 < 0 )
    goto LABEL_321;
  v194 = 72LL;
  v195 = 1;
  memset(v196, 0, sizeof(v196));
  v19 = *(_QWORD *)(v6 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  v21 = 0LL;
  if ( ActivationContextStackPointer )
    ActiveFrame = (ULONG_PTR)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  v196[3] = ~ActiveFrame;
  v196[4] = ~v19;
  v196[5] = retaddr;
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (ULONG_PTR)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    v21 = 0LL;
    goto LABEL_17;
  }
  v196[0] = ActiveFrame;
  v196[1] = v19;
  LODWORD(v196[2]) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v19 )
      goto LABEL_16;
  }
  else if ( !v19 )
  {
LABEL_16:
    LODWORD(v196[2]) = 48;
    goto LABEL_17;
  }
  ActivationContextStackPointer->ActiveFrame = (struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v196;
LABEL_17:
  v131 = *(_WORD *)(v7 + 32) & 0x800;
  v134 = *(_DWORD *)(v7 + 32) & 0x1800800;
  v23 = v134;
  v13 = 0;
  v145 = 0;
  v24 = 0;
  if ( (v134 & 0x800008) == 0 )
  {
    v25 = &v208;
    v156 = &v208;
    v26 = NtCurrentPeb();
    v149 = v26;
    v27 = 1;
    v136 = 1;
    v28 = v157 + 88;
    ApiSetMap = v26->ApiSetMap;
    sub_1800255A8(0LL, &v208, 5328LL);
    v13 = sub_180025600((_DWORD)ApiSetMap, (unsigned int)&v208, v28, (unsigned int)&v132, (__int64)&v176);
    v30 = v132;
    if ( v13 >= 0 && v132 )
    {
      v31 = v176;
      if ( v176 )
        sub_1800255A8(0LL, &v208, 5329LL);
      else
        sub_1800255A8(0LL, &v208, 5330LL);
    }
    else
    {
      sub_1800255A8(0LL, &v208, 5331LL);
      v31 = v176;
    }
    v150 = v13;
    if ( !v30 )
    {
LABEL_49:
      if ( v13 >= 0 && v27 && !byte_180165430 )
      {
        v111 = RtlDosApplyFileIsolationRedirection_Ustr(
                 1,
                 (_DWORD)v25,
                 (unsigned int)L"\b\n",
                 0,
                 (__int64)v197,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
        if ( v111 >= 0 )
        {
          v24 = 1;
          sub_180029974(v197, &v205);
          sub_18002E1A4(v197);
        }
        if ( v111 != -1072365560 )
        {
          v13 = v111;
          v150 = v111;
        }
      }
      goto LABEL_51;
    }
    if ( !v31 )
    {
      v13 = -1073740671;
      v150 = -1073740671;
LABEL_51:
      v145 = v13;
      v23 = v134;
      v131 = v134;
      v9 = v169;
      v7 = v170;
      v6 = v157;
      goto LABEL_52;
    }
    LOWORD(v205) = 0;
    HotpatchInformation = (int *)NtCurrentPeb()->HotpatchInformation;
    if ( HotpatchInformation )
    {
      v165 = *HotpatchInformation;
      if ( v165 )
      {
        v33 = (__int64)NtCurrentPeb()->HotpatchInformation + 30;
        goto LABEL_27;
      }
    }
    else
    {
      v165 = 0;
    }
    v33 = 2147352624LL;
LABEL_27:
    v192 = v33;
    v173 = 0LL;
    v174 = v33;
    if ( v33 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( *(_WORD *)(v33 + 2 * v34) );
      v35 = 2 * v34;
      v171 = v35;
      v36 = v35;
      if ( v35 >= 0xFFFE )
      {
        LOWORD(v35) = -4;
        v171 = 65532LL;
        v36 = -4;
      }
      LOWORD(v173) = v35;
      WORD1(v173) = v36 + 2;
    }
    else
    {
      LOWORD(v35) = v173;
    }
    v166 = 0;
    if ( (_WORD)v35 )
    {
      v37 = (unsigned __int16)v35 + 2;
      v38 = 0;
      v152 = 0;
      if ( v37 > HIWORD(v205) )
      {
        if ( v37 <= 0xFFFE )
        {
          v113 = ((unsigned __int16)v35 + 65) & 0xFFFFFFC0;
          v114 = v113;
          if ( v113 > 0xFFFE )
          {
            LOWORD(v113) = -2;
            v114 = 65534;
          }
          if ( v206 == v207 )
          {
            v115 = (void *)sub_18006D6B8(v114, v206);
            v178 = v115;
            if ( v115 && (_WORD)v205 )
              memmove(v115, v206, (unsigned __int16)v205);
          }
          else
          {
            v115 = (void *)sub_1800D4DF4(v114, v206, ActivationContextStackPointer, v21);
            v178 = v115;
          }
          if ( v115 )
          {
            v206 = v115;
            HIWORD(v205) = v113;
          }
          else
          {
            v38 = -1073741801;
            v152 = -1073741801;
          }
          v26 = v149;
          LODWORD(v25) = (_DWORD)v156;
        }
        else
        {
          v38 = -1073741562;
          v152 = -1073741562;
        }
      }
      v166 = v38;
      if ( v38 >= 0 )
      {
        memmove((char *)v206 + (unsigned __int16)v205, (const void *)v33, (unsigned __int16)v35);
        LOWORD(v205) = v35 + v205;
        *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
      }
    }
    v167 = 0;
    v39 = (unsigned __int16)v205 + 22;
    LODWORD(v159) = v39;
    v40 = 0;
    v153 = 0;
    if ( v39 > HIWORD(v205) )
    {
      if ( v39 <= 0xFFFE )
      {
        v116 = ((unsigned __int16)v205 + 85) & 0xFFFFFFC0;
        LODWORD(v159) = v116;
        v117 = v116;
        if ( v116 > 0xFFFE )
        {
          LOWORD(v116) = -2;
          LODWORD(v159) = 65534;
          v117 = 65534;
        }
        if ( v206 == v207 )
        {
          v118 = (void *)sub_18006D6B8(v117, v206);
          v179 = v118;
          if ( v118 && (_WORD)v205 )
            memmove(v118, v206, (unsigned __int16)v205);
        }
        else
        {
          v118 = (void *)sub_1800D4DF4(v117, v206, ActivationContextStackPointer, v21);
          v179 = v118;
        }
        if ( v118 )
        {
          v206 = v118;
          HIWORD(v205) = v116;
        }
        else
        {
          v40 = -1073741801;
          v153 = -1073741801;
        }
      }
      else
      {
        v40 = -1073741562;
        v153 = -1073741562;
      }
    }
    v167 = v40;
    if ( v40 >= 0 )
    {
      v41 = (char *)v206 + (unsigned __int16)v205;
      *(_OWORD *)v41 = *(_OWORD *)L"\\SYSTEM32\\";
      *((_DWORD *)v41 + 4) = *(_DWORD *)L"2\\";
      LOWORD(v205) = v205 + 20;
      *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
    }
    v160 = 0;
    v42 = v176;
    v43 = v176;
    v44 = v176 + (unsigned __int16)v205 + 2;
    LODWORD(v149) = v44;
    v13 = 0;
    v154 = 0;
    if ( v44 > HIWORD(v205) )
    {
      if ( v44 <= 0xFFFE )
      {
        v119 = (v44 + 63) & 0xFFFFFFC0;
        LODWORD(v149) = v119;
        v120 = v119;
        if ( v119 > 0xFFFE )
        {
          LOWORD(v119) = -2;
          LODWORD(v149) = 65534;
          v120 = 65534;
        }
        if ( v206 == v207 )
        {
          v121 = (void *)sub_18006D6B8(v120, v206);
          v180 = v121;
          if ( v121 && (_WORD)v205 )
            memmove(v121, v206, (unsigned __int16)v205);
        }
        else
        {
          v121 = (void *)sub_1800D4DF4(v120, v206, ActivationContextStackPointer, v21);
          v180 = v121;
        }
        if ( v121 )
        {
          v206 = v121;
          HIWORD(v205) = v119;
        }
        else
        {
          v13 = -1073741801;
          v154 = -1073741801;
        }
        LODWORD(v25) = (_DWORD)v156;
      }
      else
      {
        v13 = -1073741562;
        v154 = -1073741562;
      }
    }
    v160 = v13;
    if ( v13 >= 0 )
    {
      memmove((char *)v206 + (unsigned __int16)v205, Src, v42);
      LOWORD(v205) = v43 + v205;
      *((_WORD *)v206 + ((unsigned __int64)(unsigned __int16)v205 >> 1)) = 0;
    }
    v150 = v13;
    if ( v13 >= 0 )
    {
      ProcessParameters = v26->ProcessParameters;
      v27 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
      v136 = v27;
      v25 = &v205;
      v156 = &v205;
    }
    v24 = 0;
    goto LABEL_49;
  }
LABEL_52:
  if ( v13 >= 0 )
  {
    v46 = &v208;
    v181 = &v208;
    if ( !(_WORD)v205 )
    {
      v112 = (char *)v209 + (unsigned __int16)v208;
      v182 = v112;
      while ( 1 )
      {
        v182 = --v112;
        if ( v112 < v209 )
          break;
        if ( *v112 == 92 || *v112 == 47 )
        {
          v137 = 0;
          if ( (unsigned int)sub_18002891C(&v208) != 5 )
          {
            v13 = sub_180029974(&v208, &v205);
            v145 = v13;
            if ( v13 >= 0 )
            {
              v23 |= 0x600u;
              v131 = v23;
              v134 = v23;
            }
            goto LABEL_58;
          }
LABEL_224:
          v145 = sub_180025788(&v205, &v208, ActivationContextStackPointer, v21);
          v13 = v145;
          goto LABEL_58;
        }
      }
      v137 = 1;
      v23 |= 0x20u;
      v131 = v23;
      v134 = v23;
      goto LABEL_224;
    }
    if ( (dword_18015FAB0 & 5) != 0 )
    {
      v122 = "SxS";
      if ( !v24 )
        v122 = "API set";
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2680,
        (unsigned int)"LdrpPreprocessDllName",
        2,
        (__int64)"DLL %wZ was redirected to %wZ by %s\n",
        &v208,
        &v205,
        v122);
    }
    v23 |= 0x200u;
    v131 = v23;
    v134 = v23;
    if ( v24 )
    {
      v23 |= 4u;
      v131 = v23;
      v134 = v23;
    }
    v46 = &v205;
    v181 = &v205;
LABEL_58:
    if ( v13 >= 0 )
    {
      v47 = *((_QWORD *)v46 + 1);
      v48 = (_WORD *)(v47 + *(unsigned __int16 *)v46);
      v183 = v48;
      v138 = 0;
      while ( 1 )
      {
        v183 = --v48;
        if ( (unsigned __int64)v48 < v47 )
        {
LABEL_225:
          v13 = sub_180025788(&v205, L"\b\n", ActivationContextStackPointer, v21);
          v145 = v13;
          goto LABEL_189;
        }
        v49 = *v48;
        if ( *v48 == 46 )
          break;
        if ( v49 == 47 || v49 == 92 )
          goto LABEL_225;
      }
      v138 = 1;
      v101 = (char *)v206 + (unsigned __int16)v205;
      v191 = v101;
      while ( 1 )
      {
        v191 = --v101;
        if ( v101 < v206 || *v101 != 46 )
          break;
        LOWORD(v205) = v205 - 2;
      }
      v101[1] = 0;
    }
  }
LABEL_189:
  if ( v13 < 0 )
  {
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      LODWORD(v130) = v13;
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2738,
        (unsigned int)"LdrpPreprocessDllName",
        0,
        (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
        &v208,
        v130);
    }
    if ( (dword_18015FAB0 & 0x10) != 0 )
      __debugbreak();
  }
  v135 = v13;
  if ( v13 < 0 )
    goto LABEL_320;
  if ( (v23 & 0x800000) != 0 )
  {
    v13 = sub_1800CDE60(
            *(_QWORD *)(v7 + 168),
            (unsigned int)&v205,
            *(_QWORD *)(v7 + 16),
            v23,
            v6,
            (__int64)v9,
            *(_QWORD *)(v7 + 40));
    v135 = v13;
    goto LABEL_320;
  }
  v102 = (_QWORD *)v158;
  if ( !*(_QWORD *)v158 )
  {
    v184 = dword_18016542C + 2621440;
    Heap = RtlAllocateHeap(qword_180165420, (unsigned int)(dword_18016542C + 2621440), 32LL);
    *v102 = Heap;
    if ( !Heap )
    {
      v13 = -1073741801;
      v135 = -1073741801;
      goto LABEL_320;
    }
  }
  v63 = *(_QWORD *)(v7 + 40);
  v171 = v63;
  v62 = v23;
  LODWORD(v149) = v23;
  v64 = *(_QWORD *)(v7 + 16);
  v159 = v64;
  *v9 = 0LL;
  v151 = 0;
  if ( (v23 & 0x20) != 0 )
  {
    v13 = sub_180022698((unsigned __int16 *)&v205, 0LL, v23, (__int64)v9, &v151);
    v146 = v13;
    v60 = v131;
    goto LABEL_98;
  }
  if ( (v23 & 0x200) == 0 )
  {
    v146 = -1073741515;
    v60 = v131;
    goto LABEL_164;
  }
  v168 = (char *)v206 + (unsigned __int16)v205;
  for ( i = v168 - 2; ; i -= 2 )
  {
    v104 = i;
    v168 = i;
    if ( i <= v206 )
      break;
    if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
    {
      i += 2;
      v168 = v104 + 2;
      LOWORD(v104) = (_WORD)v104 + 2;
      break;
    }
  }
  v105 = (_WORD)v104 - (_WORD)v206;
  v200 = i;
  v198 = v205 - v105;
  v199 = HIWORD(v205) - v105;
  v106 = 0;
  v162 = 0;
  v185 = i;
  v148 = 0;
  v107 = (unsigned __int16)(v205 - v105) >> 1;
  v161 = v107;
  while ( 1 )
  {
    v108 = v107--;
    v161 = v107;
    if ( !v108 )
      break;
    v109 = *(_WORD *)i;
    i += 2;
    v185 = i;
    if ( v109 < 0x61u )
      goto LABEL_206;
    if ( v109 <= 0x7Au )
    {
      v109 -= 32;
LABEL_206:
      v142 = v109;
      goto LABEL_207;
    }
    if ( !qword_180166510 || v109 < 0xC0u )
      goto LABEL_206;
    v109 += *(_WORD *)(qword_180166510
                     + 2LL
                     * ((v109 & 0xF)
                      + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                          + 2LL
                                                          * (((v109 >> 4) & 0xF)
                                                           + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                                               + 2
                                                                                               * ((unsigned __int64)v109 >> 8))))));
    v142 = v109;
LABEL_207:
    v106 = v109 + 65599 * v106;
    v162 = v106;
  }
  v148 = v106;
  v50 = v106;
  if ( !v106 )
  {
    v50 = 0x80000000;
    v148 = 0x80000000;
  }
  RtlAcquireSRWLockExclusive(&qword_1801660B0);
  v51 = (_QWORD **)((char *)&unk_180165040 + 16 * (v50 & 0x1F));
  v52 = 0;
  v53 = *v51;
  while ( 2 )
  {
    if ( v53 == v51 )
    {
      v60 = v131;
      v9 = v169;
      goto LABEL_90;
    }
    v54 = (volatile signed __int32 *)(v53 - 14);
    if ( v50 != *((_DWORD *)v53 + 38) || ((unsigned __int8)v149 & 8) != 0 && (v54[26] & 1) == 0 )
    {
LABEL_84:
      v53 = (_QWORD *)*v53;
      continue;
    }
    break;
  }
  if ( (unsigned __int16)v205 != *((unsigned __int16 *)v54 + 36) )
  {
LABEL_83:
    v52 = 0;
    goto LABEL_84;
  }
  v55 = (unsigned __int16 *)v206;
  v186 = (unsigned __int16 *)v206;
  v56 = (_WORD *)*((_QWORD *)v54 + 10);
  v187 = v56;
  while ( v55 < (unsigned __int16 *)((char *)v206 + (unsigned __int16)v205) )
  {
    v57 = *v55;
    v58 = *v56;
    if ( *v55 == *v56 )
      goto LABEL_75;
    if ( v57 < 0x61u )
      goto LABEL_79;
    if ( v57 <= 0x7Au )
    {
      v57 -= 32;
LABEL_79:
      v143 = v57;
      goto LABEL_80;
    }
    if ( !qword_180166510 || v57 < 0xC0u )
      goto LABEL_79;
    v57 += *(_WORD *)(qword_180166510
                    + 2LL
                    * ((v57 & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                         + 2LL
                                                         * (((v57 >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                                              + 2
                                                                                              * ((unsigned __int64)v57 >> 8))))));
    v143 = v57;
LABEL_80:
    if ( v58 < 0x61u )
      goto LABEL_81;
    if ( v58 <= 0x7Au )
    {
      v58 -= 32;
LABEL_81:
      v144 = v58;
      goto LABEL_82;
    }
    if ( !qword_180166510 || v58 < 0xC0u )
      goto LABEL_81;
    v58 += *(_WORD *)(qword_180166510
                    + 2LL
                    * ((v58 & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                         + 2LL
                                                         * (((v58 >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                                              + 2
                                                                                              * ((unsigned __int64)v58 >> 8))))));
    v144 = v58;
LABEL_82:
    if ( v57 != v58 )
      goto LABEL_83;
LABEL_75:
    v186 = ++v55;
    v187 = ++v56;
  }
  v52 = 1;
  v59 = *((_QWORD *)v54 + 19);
  if ( *(_DWORD *)(v59 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v59 - 56LL) & 0x20) != 0 )
  {
    v139 = 1;
    v60 = v131;
  }
  else
  {
    v139 = 0;
    _InterlockedIncrement(v54 + 69);
    v60 = v134;
  }
  v9 = v169;
  *v169 = (__int64)v54;
LABEL_90:
  if ( v52 )
  {
    v13 = 0;
    v151 = *(_DWORD *)(*(_QWORD *)(*v9 + 152) + 56LL);
  }
  else
  {
    v13 = -1073741515;
  }
  RtlReleaseSRWLockExclusive(&qword_1801660B0);
  if ( v13 < 0 )
    v155 = 3;
  else
    v155 = 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v61 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    v60 = v134;
  }
  else
  {
    v61 = 2147353476LL;
  }
  if ( *(_BYTE *)v61 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v123 = (unsigned int)RtlGetCurrentServiceSessionId()
           ? (char *)NtCurrentPeb()->HotpatchInformation + 555
           : (char *)2147353477;
      if ( (*v123 & 0x20) != 0 )
        sub_1800CFA48(5280, 0, 0, (unsigned __int8)v155, (__int64)&v205, 0LL);
    }
    v60 = v134;
  }
  v146 = v13;
  v62 = (int)v149;
  v63 = v171;
  LODWORD(v64) = v159;
LABEL_98:
  if ( v13 != -1073741515 )
  {
    if ( v151 < 0 )
    {
      v124 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        v203 = *(_OWORD *)(*v9 + 72);
        LODWORD(v130) = v151;
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          2945,
          (unsigned int)"LdrpFindOrPrepareLoadingModule",
          0,
          (__int64)"Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
          &v203,
          v130);
        v124 = dword_18015FAB0;
      }
      if ( (v124 & 0x10) != 0 )
        __debugbreak();
      v13 = -1073741595;
      v146 = -1073741595;
      sub_18001B678(*v9);
      *v9 = 0LL;
    }
    else
    {
      v65 = *v9;
      v163 = 0;
      RtlAcquireSRWLockExclusive(&qword_1801660B0);
      v67 = *(_QWORD *)(v65 + 152);
      v68 = *(_DWORD *)(v67 + 24);
      if ( v68 != -1 )
      {
        if ( v68 )
        {
          *(_DWORD *)(v67 + 24) = v68 + 1;
        }
        else
        {
          v202 = NtCurrentTeb();
          v66 = 4096LL;
          if ( (v202->SameTebFlags & 0x1000) != 0 )
            ++*(_DWORD *)(v67 + 28);
          else
            v163 = -1073741515;
        }
      }
      v69 = _InterlockedCompareExchange64(&qword_1801660B0, 0LL, 1LL);
      if ( v69 != 1 )
      {
        do
        {
          v98 = v69 & 6;
          v99 = 3LL;
          if ( v98 != 2 )
            v99 = -1LL;
          v66 = v69 + v99;
          v100 = v69;
          v69 = _InterlockedCompareExchange64(&qword_1801660B0, v66, v69);
        }
        while ( v100 != v69 );
        if ( v98 == 2 )
          sub_180035E30(&qword_1801660B0, v66, 0LL);
      }
      v60 = v134;
    }
    goto LABEL_103;
  }
LABEL_164:
  v13 = sub_18002AB70((unsigned int)&v205, v64, v62, v164, v157, (__int64)v9, v63);
  v146 = v13;
  if ( v13 >= 0 )
  {
    v13 = sub_180029560(*(_QWORD *)(*v9 + 176));
    v146 = v13;
  }
LABEL_103:
  v135 = v13;
  if ( *v9 )
  {
    v70 = v60 & 0x400;
    if ( v70 && v13 == -1073741515 )
    {
      v125 = *(_QWORD *)(*v9 + 176);
      v201 = v125;
      *(_DWORD *)(v125 + 32) |= 0x4000000u;
      LOBYTE(v66) = 1;
      sub_18002E26C(v125, v66);
      v13 = **(_DWORD **)(v125 + 40);
      v135 = v13;
    }
    RtlAcquireSRWLockExclusive(&qword_1801660B0);
    v71 = *v9;
    v72 = v71;
    v188 = *v9;
    if ( v71 )
    {
      v73 = *(_QWORD *)(v71 + 176);
      if ( v73 )
      {
        if ( (*(_DWORD *)(v73 + 32) & 0x80000) == 0 && *(_QWORD *)(v73 + 56) != v71 )
        {
          v72 = *(_QWORD *)(v73 + 56);
          v188 = v72;
          *(_QWORD *)(v73 + 56) = v71;
        }
      }
    }
    v190 = v72;
    v74 = (__int64 *)v158;
    *(_DWORD *)(*(_QWORD *)v158 + 24LL) &= ~1u;
    v75 = *v74;
    v172 = *v74;
    v7 = v170;
    v76 = *(_QWORD *)(v72 + 152);
    v77 = *(_QWORD *)(*(_QWORD *)(v170 + 56) + 152LL);
    if ( v77 == v76 )
      goto LABEL_111;
    if ( *(_DWORD *)(v76 + 56) != 9 )
      goto LABEL_145;
    if ( *(_DWORD *)(v76 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v76 - 56LL) & 0x20) != 0 )
    {
      v140 = 1;
      goto LABEL_111;
    }
    v140 = 0;
LABEL_145:
    v87 = *(_QWORD **)(v77 + 40);
    if ( !v87 )
    {
LABEL_149:
      v133 = 0;
      if ( !v75 )
      {
        v193 = dword_18016542C + 2359296;
        v126 = RtlAllocateHeap(qword_180165420, (unsigned int)(dword_18016542C + 2359296), 32LL);
        v75 = v126;
        v172 = v126;
        if ( !v126 )
        {
          MEMORY[0] = -1073741801;
          v75 = 0LL;
          v189 = 0LL;
          v74 = (__int64 *)v158;
          goto LABEL_114;
        }
        *(_DWORD *)(v126 + 24) |= 1u;
      }
      v89 = *(__int64 **)(v77 + 40);
      if ( v89 )
      {
        *(_QWORD *)v75 = *v89;
        *v89 = v75;
      }
      else
      {
        *(_QWORD *)v75 = v75;
      }
      *(_QWORD *)(v77 + 40) = v75;
      *(_QWORD *)(v75 + 8) = v76;
      v90 = (_QWORD *)(v75 + 16);
      v91 = *(_QWORD **)(v76 + 48);
      if ( v91 )
      {
        *v90 = *v91;
        *v91 = v90;
      }
      else
      {
        *v90 = v90;
      }
      *(_QWORD *)(v76 + 48) = v90;
      v92 = (*(_DWORD *)(v75 + 24) & 1) == 0;
      v93 = *(_DWORD *)(v75 + 24) & 1;
      *(_QWORD *)(v75 + 24) = v77;
      if ( !v92 )
        *(_DWORD *)(v75 + 24) = v93 | v77 & 0xFFFFFFFE;
      v75 = 0LL;
      v172 = 0LL;
      v74 = (__int64 *)v158;
      goto LABEL_113;
    }
    v88 = *(_QWORD **)(v77 + 40);
    while ( 1 )
    {
      v88 = (_QWORD *)*v88;
      if ( v88[1] == v76 )
        break;
      if ( v88 == v87 )
        goto LABEL_149;
    }
LABEL_111:
    v133 = 1;
    v78 = *(_DWORD *)(v76 + 24);
    if ( (unsigned int)(v78 - 2) <= 0xFFFFFFFC )
      *(_DWORD *)(v76 + 24) = v78 - 1;
LABEL_113:
    v189 = v75;
LABEL_114:
    *v74 = v75;
    if ( v13 != -1073741515 )
    {
      if ( v13 != -1073741267 )
        goto LABEL_116;
      v135 = 0;
      goto LABEL_117;
    }
    v13 = -1073741515;
    if ( !v70 )
    {
      sub_1800709A4(*(_QWORD *)(v72 + 176));
      v135 = 0;
      v74 = (__int64 *)v158;
      goto LABEL_117;
    }
LABEL_116:
    if ( v13 >= 0 )
    {
LABEL_117:
      v79 = *(_DWORD *)(v7 + 100);
      if ( v79 )
      {
        if ( *v74 || *(int *)(*(_QWORD *)(v72 + 152) + 56LL) >= 2 )
          *(_DWORD *)(v7 + 100) = v79 - 1;
      }
      else if ( *(int *)(*(_QWORD *)(v72 + 152) + 56LL) < 2 )
      {
        *(_QWORD *)(v7 + 80) = v72;
        *(_DWORD *)(v7 + 100) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 152LL) + 56LL) = 3;
        v135 = 259;
      }
    }
    v80 = *(_QWORD *)(v72 + 152);
    if ( *(_DWORD *)(v80 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v80 - 56LL) & 0x20) != 0 )
    {
      v141 = 1;
    }
    else
    {
      v141 = 0;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v72 + 276), 0xFFFFFFFF) == 1 )
      {
        RtlAcquireSRWLockExclusive(&qword_1801660B0);
        v83 = *(_QWORD *)(v72 + 160);
        v84 = *(_QWORD **)(v72 + 168);
        if ( *(_QWORD *)(v83 + 8) != v72 + 160 || *v84 != v72 + 160 )
          __fastfail(3u);
        *v84 = v83;
        *(_QWORD *)(v83 + 8) = v84;
        v85 = *(_QWORD **)(v72 + 152);
        v86 = (_QWORD *)*v85;
        RtlReleaseSRWLockExclusive(&qword_1801660B0);
        if ( *(_WORD *)(v72 + 110) )
          sub_18007DDBC(v72, 0LL);
        sub_180070218(v72);
        if ( (unsigned __int64)(*(_QWORD *)(v72 + 136) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext();
        if ( *(_QWORD *)(v72 + 80) )
          sub_18002E1A4(v72 + 72);
        RtlFreeHeap(qword_180165420, 0LL, v72);
        if ( v86 == v85 )
          sub_18006C7D4(v85);
      }
    }
    v81 = _InterlockedCompareExchange64(&qword_1801660B0, 0LL, 1LL);
    if ( v81 != 1 )
    {
      do
      {
        v94 = v81 & 6;
        v95 = 3LL;
        if ( v94 != 2 )
          v95 = -1LL;
        v96 = v81 + v95;
        v97 = v81;
        v81 = _InterlockedCompareExchange64(&qword_1801660B0, v96, v81);
      }
      while ( v97 != v81 );
      if ( v94 == 2 )
        sub_180035E30(&qword_1801660B0, v96, 0LL);
    }
    v82 = v190;
    if ( v190 != *v9 )
    {
      sub_180064EEC();
      *v9 = v82;
    }
    v13 = v135;
  }
  else
  {
    v7 = v170;
  }
LABEL_320:
  RtlDeactivateActivationContextUnsafeFast(&v194);
  v10 = v209;
LABEL_321:
  if ( v13 < 0 )
  {
    *v9 = 0LL;
    **(_DWORD **)(v7 + 40) = v13;
    v10 = v209;
  }
  if ( v210 != v10 )
    RtlDeleteBoundaryDescriptor(v10);
  v209 = v210;
  v208 = 0x1000000;
  v210[0] = 0;
  if ( v207 != v206 )
    RtlDeleteBoundaryDescriptor(v206);
  return (unsigned int)v13;
}
