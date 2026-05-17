/*
 * XREFs of LdrpLoadDependentModule @ 0x180023AC0
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpMapAndSnapDependency @ 0x18002385C (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x18000A7C8 (LdrpFindLoadedDllByName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18000B060 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18000E8BC (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLoadKnownDll @ 0x1800223F4 (LdrpLoadKnownDll.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180025950 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025AA0 (RtlAnsiStringToUnicodeString.c)
 *     ApiSetpSearchForApiSetHost @ 0x180025EF4 (ApiSetpSearchForApiSetHost.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180026510 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpAllocatePlaceHolder @ 0x180026CE4 (LdrpAllocatePlaceHolder.c)
 *     LdrpGetFullPath @ 0x180028FE4 (LdrpGetFullPath.c)
 *     RtlReleaseActivationContext @ 0x18002D7A0 (RtlReleaseActivationContext.c)
 *     RtlUTF8ToUnicodeN @ 0x180068120 (RtlUTF8ToUnicodeN.c)
 *     LdrpProcessWork @ 0x180070CEC (LdrpProcessWork.c)
 *     LdrpFreeUnicodeString @ 0x1800713F4 (LdrpFreeUnicodeString.c)
 *     LdrpQueueWork @ 0x1800718CC (LdrpQueueWork.c)
 *     RtlpWakeSRWLock @ 0x180075250 (RtlpWakeSRWLock.c)
 *     LdrpUnmapModule @ 0x180076B98 (LdrpUnmapModule.c)
 *     LdrpDestroyNode @ 0x180080A3C (LdrpDestroyNode.c)
 *     LdrpReleaseTlsEntry @ 0x1800818BC (LdrpReleaseTlsEntry.c)
 *     LdrpFreeReplacedModule @ 0x1800864F8 (LdrpFreeReplacedModule.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CF658 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800D1238 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D7028 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpLoadDependentModule(
        PCANSI_STRING SourceString,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 *v9; // r12
  _WORD *v10; // rbx
  unsigned __int16 v11; // dx
  unsigned int v12; // esi
  int FullPath; // edi
  unsigned __int16 Length; // ax
  int v15; // r8d
  char *Buffer; // r9
  int v17; // ecx
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 ActivationContextStackPointer; // r8
  unsigned __int64 v22; // rcx
  int v23; // esi
  int *v24; // r15
  bool v25; // bl
  __int64 v26; // r13
  _DWORD *ApiSetMap; // rsi
  int *SharedData; // rcx
  __int64 v29; // rcx
  char v30; // r12
  unsigned __int16 v31; // di
  unsigned __int16 *v32; // r10
  unsigned __int64 v33; // rax
  unsigned int v34; // ecx
  _WORD *v35; // rax
  unsigned int v36; // edx
  unsigned int v37; // esi
  unsigned __int16 *v38; // rdx
  unsigned __int64 v39; // r8
  unsigned __int16 *v40; // r9
  _QWORD **v41; // rdi
  char v42; // cl
  _QWORD *k; // r14
  volatile signed __int32 *v44; // rbx
  unsigned __int64 v45; // r10
  __int64 v46; // rax
  __int64 *v47; // rax
  signed __int64 v48; // rax
  int *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // r14
  __int64 *v53; // r14
  __int64 v54; // rbx
  unsigned __int64 v55; // rdx
  unsigned __int64 *v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  int v59; // eax
  signed __int64 v60; // rax
  int v61; // esi
  __int64 v62; // r9
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r14
  __int64 v65; // rcx
  unsigned __int64 *v66; // r8
  unsigned __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // r15
  unsigned __int64 v70; // rdx
  int v71; // ecx
  __int64 v72; // rax
  signed __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rdx
  _QWORD *v76; // rcx
  _QWORD *v77; // rbx
  _QWORD *v78; // rdi
  __int64 v79; // rcx
  _QWORD *v80; // rdx
  _QWORD *v81; // rax
  unsigned __int64 *v82; // rdx
  unsigned __int64 *v83; // r8
  bool v84; // zf
  int v85; // eax
  __int64 *v86; // rax
  signed __int64 v87; // r8
  __int64 v88; // rdx
  signed __int64 v89; // rdx
  signed __int64 v90; // rtt
  signed __int64 v91; // rcx
  __int64 v92; // rdx
  signed __int64 v93; // rtt
  signed __int64 v94; // rcx
  __int64 v95; // rdx
  signed __int64 v96; // rtt
  unsigned __int16 v97; // di
  unsigned int v98; // r11d
  unsigned int v99; // eax
  unsigned __int16 v100; // r9
  unsigned int *v101; // r15
  int v102; // ebx
  unsigned int *v103; // rcx
  unsigned __int16 *v104; // rdx
  unsigned __int64 v105; // rcx
  unsigned int v106; // r14d
  unsigned __int64 v107; // r8
  __int64 v108; // rcx
  int *v109; // rcx
  __int64 v110; // rcx
  int *v111; // rcx
  __int64 v112; // rdi
  __int64 v113; // rbx
  unsigned __int64 v114; // rbx
  __int16 v115; // ax
  unsigned int v116; // ecx
  int v117; // esi
  unsigned int v118; // ecx
  int v119; // ebx
  char *v120; // rcx
  unsigned __int16 v121; // bx
  __int16 v122; // si
  unsigned int v123; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  __int128 *v125; // rdx
  int *v126; // rbx
  unsigned __int64 v127; // rdx
  _WORD *v128; // rax
  __int16 v129; // cx
  _WORD *v130; // rcx
  _QWORD *v131; // rbx
  int v132; // r13d
  __int64 v133; // r9
  unsigned __int64 *j; // r8
  unsigned __int64 v135; // rdx
  unsigned __int64 *v136; // rcx
  unsigned int v137; // r10d
  int v138; // r11d
  int v139; // eax
  int v140; // eax
  __int64 Heap; // rax
  int v142; // ebx
  __int64 v143; // r8
  _WORD *v144; // rax
  char *v145; // rcx
  char *v146; // rcx
  unsigned int v147; // r15d
  unsigned int v148; // eax
  void *v149; // r12
  unsigned int v150; // edi
  unsigned int v151; // eax
  void *v152; // rsi
  unsigned int v153; // r15d
  unsigned int v154; // eax
  void *v155; // r14
  const char *v156; // rax
  char *v157; // rax
  char v158; // al
  __int64 v159; // rbx
  __int64 v160; // rax
  _WORD *v161; // rbx
  __int64 v163; // rax
  _WORD *StringRoutine; // rax
  __int64 v165; // [rsp+30h] [rbp-588h]
  char v166; // [rsp+51h] [rbp-567h]
  int v167; // [rsp+54h] [rbp-564h]
  int v168; // [rsp+58h] [rbp-560h]
  int v169; // [rsp+7Ch] [rbp-53Ch] BYREF
  char v170; // [rsp+80h] [rbp-538h]
  int v171; // [rsp+84h] [rbp-534h]
  int v172; // [rsp+88h] [rbp-530h] BYREF
  unsigned __int16 v173; // [rsp+8Ch] [rbp-52Ch]
  int *v174; // [rsp+90h] [rbp-528h]
  int v175; // [rsp+98h] [rbp-520h]
  int v176; // [rsp+A0h] [rbp-518h]
  int v177; // [rsp+A8h] [rbp-510h]
  int v178; // [rsp+B0h] [rbp-508h]
  int v179; // [rsp+B8h] [rbp-500h]
  int v180; // [rsp+C0h] [rbp-4F8h]
  int v181; // [rsp+C4h] [rbp-4F4h]
  __int64 v182; // [rsp+C8h] [rbp-4F0h]
  __int64 v183; // [rsp+D0h] [rbp-4E8h]
  __int64 v184; // [rsp+D8h] [rbp-4E0h]
  __int64 v185; // [rsp+E0h] [rbp-4D8h]
  void *Src; // [rsp+E8h] [rbp-4D0h]
  __int64 v187; // [rsp+F0h] [rbp-4C8h]
  int v188; // [rsp+F8h] [rbp-4C0h]
  int v189; // [rsp+FCh] [rbp-4BCh]
  int v190; // [rsp+100h] [rbp-4B8h]
  int v191; // [rsp+104h] [rbp-4B4h]
  int v192; // [rsp+108h] [rbp-4B0h]
  int v193; // [rsp+10Ch] [rbp-4ACh]
  unsigned int v194; // [rsp+110h] [rbp-4A8h]
  int v195; // [rsp+114h] [rbp-4A4h]
  int v196; // [rsp+118h] [rbp-4A0h]
  int v197; // [rsp+11Ch] [rbp-49Ch]
  int v198; // [rsp+120h] [rbp-498h]
  unsigned int v199; // [rsp+124h] [rbp-494h]
  unsigned int v200; // [rsp+128h] [rbp-490h]
  int v201; // [rsp+12Ch] [rbp-48Ch]
  int v202; // [rsp+130h] [rbp-488h]
  unsigned __int64 *v203; // [rsp+138h] [rbp-480h]
  __int64 v204; // [rsp+140h] [rbp-478h]
  int v205; // [rsp+148h] [rbp-470h]
  unsigned __int64 v206; // [rsp+150h] [rbp-468h]
  struct _PEB *v207; // [rsp+158h] [rbp-460h]
  __int64 v208; // [rsp+160h] [rbp-458h]
  __int64 v209; // [rsp+168h] [rbp-450h]
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp-448h] BYREF
  _WORD *v211; // [rsp+180h] [rbp-438h]
  unsigned __int64 i; // [rsp+188h] [rbp-430h]
  unsigned __int16 *v213; // [rsp+190h] [rbp-428h]
  unsigned __int16 *v214; // [rsp+198h] [rbp-420h]
  __int64 v215; // [rsp+1A0h] [rbp-418h]
  void *v216; // [rsp+1A8h] [rbp-410h]
  void *v217; // [rsp+1B0h] [rbp-408h]
  void *v218; // [rsp+1B8h] [rbp-400h]
  int *v219; // [rsp+1C0h] [rbp-3F8h]
  _WORD *v220; // [rsp+1C8h] [rbp-3F0h]
  _WORD *v221; // [rsp+1D0h] [rbp-3E8h]
  _WORD *v222; // [rsp+1D8h] [rbp-3E0h]
  unsigned __int64 *v223; // [rsp+1E0h] [rbp-3D8h]
  unsigned __int16 *v224; // [rsp+1E8h] [rbp-3D0h]
  unsigned __int16 *v225; // [rsp+1F0h] [rbp-3C8h]
  unsigned __int64 v226; // [rsp+1F8h] [rbp-3C0h]
  unsigned __int64 v227; // [rsp+200h] [rbp-3B8h]
  unsigned __int64 v228; // [rsp+208h] [rbp-3B0h]
  int v229; // [rsp+210h] [rbp-3A8h]
  int v230; // [rsp+214h] [rbp-3A4h]
  int v231; // [rsp+218h] [rbp-3A0h]
  __int64 v232; // [rsp+220h] [rbp-398h] BYREF
  int v233; // [rsp+228h] [rbp-390h]
  _QWORD v234[7]; // [rsp+230h] [rbp-388h] BYREF
  _BYTE v235[16]; // [rsp+270h] [rbp-348h] BYREF
  __int16 v236; // [rsp+280h] [rbp-338h]
  __int16 v237; // [rsp+282h] [rbp-336h]
  unsigned __int64 *v238; // [rsp+288h] [rbp-330h]
  __int64 v239; // [rsp+290h] [rbp-328h]
  struct _TEB *v240; // [rsp+298h] [rbp-320h]
  __int128 v241; // [rsp+2A0h] [rbp-318h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+2B0h] [rbp-308h] BYREF
  int v243; // [rsp+350h] [rbp-268h] BYREF
  void *v244; // [rsp+358h] [rbp-260h]
  _WORD v245[128]; // [rsp+360h] [rbp-258h] BYREF
  int v246; // [rsp+460h] [rbp-158h] BYREF
  void *v247; // [rsp+468h] [rbp-150h]
  _WORD v248[128]; // [rsp+470h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+5B8h] [rbp+0h]

  v197 = a4;
  v6 = a3;
  v182 = a3;
  v7 = a2;
  v184 = a2;
  v9 = a5;
  v183 = a6;
  v244 = v245;
  v243 = 0x1000000;
  v245[0] = 0;
  v10 = v248;
  v247 = v248;
  v11 = 0;
  v246 = 0x1000000;
  LOWORD(v12) = 256;
  v248[0] = 0;
  FullPath = 0;
  Length = SourceString->Length;
  if ( !SourceString->Length )
    goto LABEL_10;
  v15 = Length;
  Buffer = SourceString->Buffer;
  v17 = 0;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( !Length )
      goto LABEL_5;
    RtlUTF8ToUnicodeN(0, 0, (unsigned int)&v169, (_DWORD)Buffer, Length);
    v10 = v247;
    LOWORD(v12) = HIWORD(v246);
    v11 = v246;
    v17 = v169;
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
        v163 = (unsigned __int8)*Buffer++;
        if ( NlsLeadByteInfoTable[v163] )
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
    v169 = v17;
  }
  v18 = v17 + (unsigned int)v11 + 2;
  FullPath = 0;
  if ( (unsigned int)v18 > (unsigned __int16)v12 )
  {
    if ( (unsigned int)v18 > 0xFFFE )
    {
      FullPath = -1073741562;
      goto LABEL_7;
    }
    v12 = (v18 + 63) & 0xFFFFFFC0;
    if ( v12 > 0xFFFE )
      v12 = 65534;
    if ( v10 == v248 )
    {
      StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(v12);
      v10 = StringRoutine;
      if ( StringRoutine )
      {
        v11 = v246;
        if ( !(_WORD)v246 )
          goto LABEL_420;
        memmove(StringRoutine, v247, (unsigned __int16)v246);
      }
    }
    else
    {
      v10 = (_WORD *)NtdllpReallocateStringRoutine(v12, v10, v18, Buffer);
    }
    v11 = v246;
LABEL_420:
    if ( v10 )
    {
      v247 = v10;
      HIWORD(v246) = v12;
    }
    else
    {
      FullPath = -1073741801;
      v10 = v247;
      LOWORD(v12) = HIWORD(v246);
    }
  }
LABEL_7:
  if ( FullPath >= 0 )
  {
    DestinationString.Buffer = (_WORD *)((char *)v10 + v11);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v12 - v11;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v246) = DestinationString.Length + v246;
  }
  v6 = v182;
LABEL_10:
  if ( FullPath < 0 )
    goto LABEL_423;
  v232 = 72LL;
  v233 = 1;
  memset(v234, 0, sizeof(v234));
  v20 = *(_QWORD *)(v6 + 136);
  ActivationContextStackPointer = (unsigned __int64)NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    v22 = *(_QWORD *)ActivationContextStackPointer;
  else
    v22 = 0LL;
  v234[3] = ~v22;
  v234[4] = ~v20;
  v234[5] = retaddr;
  if ( v22 && (*(_DWORD *)(v22 + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = v22;
    ExceptionRecord.ExceptionInformation[2] = v22;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(v22 + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    goto LABEL_17;
  }
  v234[0] = v22;
  v234[1] = v20;
  LODWORD(v234[2]) = 32;
  if ( v22 )
  {
    if ( *(_QWORD *)(v22 + 8) == v20 )
      goto LABEL_16;
  }
  else if ( !v20 )
  {
LABEL_16:
    LODWORD(v234[2]) = 48;
    goto LABEL_17;
  }
  *(_QWORD *)ActivationContextStackPointer = v234;
LABEL_17:
  v23 = *(_DWORD *)(v7 + 32) & 0x1800800;
  v168 = v23;
  FullPath = 0;
  v166 = 0;
  if ( (*(_DWORD *)(v7 + 32) & 0x800000) == 0 )
  {
    v24 = &v246;
    v174 = &v246;
    v207 = NtCurrentPeb();
    v166 = 0;
    v25 = 1;
    v26 = v182 + 88;
    ApiSetMap = v207->ApiSetMap;
    SharedData = (int *)v207->SharedData;
    if ( SharedData )
    {
      v198 = *SharedData;
      if ( v198 )
      {
        v29 = (__int64)NtCurrentPeb()->SharedData + 554;
LABEL_21:
        if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v145 = (unsigned int)RtlGetCurrentServiceSessionId()
               ? (char *)NtCurrentPeb()->SharedData + 555
               : (char *)2147353477;
          if ( (*v145 & 0x20) != 0 )
            LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&v246, 0LL);
        }
        v185 = 0LL;
        Src = 0LL;
        v30 = 0;
        v31 = v246;
        if ( (unsigned __int16)v246 < 8u )
          goto LABEL_180;
        v32 = (unsigned __int16 *)v247;
        v33 = *(_QWORD *)v247 & 0xFFFFFFDFFFDFFFDFuLL;
        if ( v33 != 0x2D004900500041LL && v33 != 0x2D005400580045LL )
          goto LABEL_180;
        v34 = (unsigned __int16)v246;
        v35 = (char *)v247 + (unsigned __int16)v246;
        v211 = v35;
        v199 = (unsigned __int16)v246;
        v36 = (unsigned __int16)v246;
        do
        {
          if ( v36 <= 1 )
            break;
          v34 -= 2;
          v36 = v34;
          v199 = v34;
          v31 = v34;
          v211 = --v35;
        }
        while ( *v35 != 45 );
        v97 = v31 >> 1;
        if ( !v97 )
        {
LABEL_180:
          v170 = v30;
          if ( v30 )
          {
            if ( (_WORD)v185 )
            {
              v109 = (int *)NtCurrentPeb()->SharedData;
              if ( v109 )
              {
                v188 = *v109;
                if ( v188 )
                {
                  v110 = (__int64)NtCurrentPeb()->SharedData + 554;
LABEL_185:
                  if ( *(_BYTE *)v110 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
                  {
                    v146 = (unsigned int)RtlGetCurrentServiceSessionId()
                         ? (char *)NtCurrentPeb()->SharedData + 555
                         : (char *)2147353477;
                    if ( (*v146 & 0x20) != 0 )
                      LdrpLogEtwEvent(5329, 0, 0, 0, (__int64)v24, 0LL);
                  }
LABEL_186:
                  FullPath = 0;
                  v171 = 0;
                  if ( !v30 )
                    goto LABEL_261;
                  if ( !(_WORD)v185 )
                  {
                    FullPath = -1073740671;
                    v171 = -1073740671;
LABEL_214:
                    v23 = v168;
                    v7 = v184;
                    goto LABEL_215;
                  }
                  LOWORD(v243) = 0;
                  v111 = (int *)NtCurrentPeb()->SharedData;
                  if ( v111 )
                  {
                    v189 = *v111;
                    if ( v189 )
                    {
                      v112 = (__int64)NtCurrentPeb()->SharedData + 30;
                      goto LABEL_191;
                    }
                  }
                  else
                  {
                    v189 = 0;
                  }
                  v112 = 2147352624LL;
LABEL_191:
                  v215 = v112;
                  v208 = 0LL;
                  v209 = v112;
                  if ( v112 )
                  {
                    v113 = -1LL;
                    do
                      ++v113;
                    while ( *(_WORD *)(v112 + 2 * v113) );
                    v114 = 2 * v113;
                    v204 = v114;
                    v115 = v114;
                    if ( v114 >= 0xFFFE )
                    {
                      LOWORD(v114) = -4;
                      v204 = 65532LL;
                      v115 = -4;
                    }
                    LOWORD(v208) = v114;
                    WORD1(v208) = v115 + 2;
                  }
                  else
                  {
                    LOWORD(v114) = v208;
                  }
                  v190 = 0;
                  if ( (_WORD)v114 )
                  {
                    v116 = (unsigned __int16)v114 + 2;
                    v175 = v116;
                    v117 = 0;
                    v176 = 0;
                    if ( v116 > HIWORD(v243) )
                    {
                      if ( v116 <= 0xFFFE )
                      {
                        v147 = ((unsigned __int16)v114 + 65) & 0xFFFFFFC0;
                        v175 = v147;
                        v148 = v147;
                        if ( v147 > 0xFFFE )
                        {
                          LOWORD(v147) = -2;
                          v175 = 65534;
                          v148 = 65534;
                        }
                        if ( v244 == v245 )
                        {
                          v149 = (void *)NtdllpAllocateStringRoutine(v148);
                          v216 = v149;
                          if ( v149 && (_WORD)v243 )
                            memmove(v149, v244, (unsigned __int16)v243);
                        }
                        else
                        {
                          v149 = (void *)NtdllpReallocateStringRoutine(v148, v244, ActivationContextStackPointer, v19);
                          v216 = v149;
                        }
                        if ( v149 )
                        {
                          v244 = v149;
                          HIWORD(v243) = v147;
                        }
                        else
                        {
                          v117 = -1073741801;
                          v176 = -1073741801;
                        }
                      }
                      else
                      {
                        v117 = -1073741562;
                        v176 = -1073741562;
                      }
                    }
                    v190 = v117;
                    if ( v117 >= 0 )
                    {
                      memmove((char *)v244 + (unsigned __int16)v243, (const void *)v112, (unsigned __int16)v114);
                      LOWORD(v243) = v114 + v243;
                      *((_WORD *)v244 + ((unsigned __int64)(unsigned __int16)v243 >> 1)) = 0;
                    }
                  }
                  v191 = 0;
                  v118 = (unsigned __int16)v243 + 22;
                  v177 = v118;
                  v119 = 0;
                  v178 = 0;
                  if ( v118 > HIWORD(v243) )
                  {
                    if ( v118 <= 0xFFFE )
                    {
                      v150 = ((unsigned __int16)v243 + 85) & 0xFFFFFFC0;
                      v177 = v150;
                      v151 = v150;
                      if ( v150 > 0xFFFE )
                      {
                        LOWORD(v150) = -2;
                        v177 = 65534;
                        v151 = 65534;
                      }
                      if ( v244 == v245 )
                      {
                        v152 = (void *)NtdllpAllocateStringRoutine(v151);
                        v217 = v152;
                        if ( v152 && (_WORD)v243 )
                          memmove(v152, v244, (unsigned __int16)v243);
                      }
                      else
                      {
                        v152 = (void *)NtdllpReallocateStringRoutine(v151, v244, ActivationContextStackPointer, v19);
                        v217 = v152;
                      }
                      if ( v152 )
                      {
                        v244 = v152;
                        HIWORD(v243) = v150;
                      }
                      else
                      {
                        v119 = -1073741801;
                        v178 = -1073741801;
                      }
                    }
                    else
                    {
                      v119 = -1073741562;
                      v178 = -1073741562;
                    }
                  }
                  v191 = v119;
                  if ( v119 >= 0 )
                  {
                    v120 = (char *)v244 + (unsigned __int16)v243;
                    *(_OWORD *)v120 = *(_OWORD *)L"\\SYSTEM32\\";
                    *((_DWORD *)v120 + 4) = *(_DWORD *)L"2\\";
                    LOWORD(v243) = v243 + 20;
                    *((_WORD *)v244 + ((unsigned __int64)(unsigned __int16)v243 >> 1)) = 0;
                  }
                  v192 = 0;
                  v121 = v185;
                  v122 = v185;
                  v123 = (unsigned __int16)v185 + (unsigned __int16)v243 + 2;
                  v179 = v123;
                  FullPath = 0;
                  v180 = 0;
                  if ( v123 > HIWORD(v243) )
                  {
                    if ( v123 <= 0xFFFE )
                    {
                      v153 = (v123 + 63) & 0xFFFFFFC0;
                      v179 = v153;
                      v154 = v153;
                      if ( v153 > 0xFFFE )
                      {
                        LOWORD(v153) = -2;
                        v179 = 65534;
                        v154 = 65534;
                      }
                      if ( v244 == v245 )
                      {
                        v155 = (void *)NtdllpAllocateStringRoutine(v154);
                        v218 = v155;
                        if ( v155 && (_WORD)v243 )
                          memmove(v155, v244, (unsigned __int16)v243);
                      }
                      else
                      {
                        v155 = (void *)NtdllpReallocateStringRoutine(v154, v244, ActivationContextStackPointer, v19);
                        v218 = v155;
                      }
                      if ( v155 )
                      {
                        v244 = v155;
                        HIWORD(v243) = v153;
                      }
                      else
                      {
                        FullPath = -1073741801;
                        v180 = -1073741801;
                      }
                    }
                    else
                    {
                      FullPath = -1073741562;
                      v180 = -1073741562;
                    }
                  }
                  v192 = FullPath;
                  if ( FullPath >= 0 )
                  {
                    memmove((char *)v244 + (unsigned __int16)v243, Src, v121);
                    LOWORD(v243) = v122 + v243;
                    *((_WORD *)v244 + ((unsigned __int64)(unsigned __int16)v243 >> 1)) = 0;
                  }
                  v171 = FullPath;
                  if ( FullPath >= 0 )
                  {
                    ProcessParameters = v207->ProcessParameters;
                    v25 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
                    v125 = (__int128 *)&v243;
                    v174 = &v243;
LABEL_212:
                    if ( FullPath >= 0 && v25 && !LdrpIsSecureProcess )
                    {
                      v142 = RtlDosApplyFileIsolationRedirection_Ustr(
                               1,
                               v125,
                               L"\b\n",
                               0LL,
                               (__int64)v235,
                               0LL,
                               0LL,
                               0LL,
                               0LL);
                      if ( v142 >= 0 )
                      {
                        v166 = 1;
                        LdrpGetFullPath(v235, &v243);
                        LdrpFreeUnicodeString(v235);
                      }
                      if ( v142 != -1072365560 )
                      {
                        FullPath = v142;
                        v171 = v142;
                      }
                    }
                    goto LABEL_214;
                  }
                  v25 = 1;
LABEL_261:
                  v125 = (__int128 *)v174;
                  goto LABEL_212;
                }
              }
              else
              {
                v188 = 0;
              }
              v110 = 2147353476LL;
              goto LABEL_185;
            }
            v143 = 5330LL;
          }
          else
          {
            v143 = 5331LL;
          }
          LdrpLogDllState(0LL, v24, v143);
          goto LABEL_186;
        }
        v98 = 0;
        v99 = 0;
        ActivationContextStackPointer = (unsigned __int64)v247;
        for ( i = (unsigned __int64)v247; ; i = ActivationContextStackPointer )
        {
          v200 = v99;
          if ( v99 >= v97 )
            break;
          v173 = *(_WORD *)ActivationContextStackPointer;
          v100 = v173;
          if ( (unsigned __int16)(v173 - 65) <= 0x19u )
          {
            v100 = v173 + 32;
            v173 += 32;
          }
          v98 = v98 * ApiSetMap[6] + v100;
          ++v99;
          ActivationContextStackPointer += 2LL;
        }
        v101 = 0LL;
        v102 = 0;
        v205 = 0;
        v19 = (unsigned int)(ApiSetMap[3] - 1);
        v201 = ApiSetMap[3] - 1;
        while ( v102 <= (int)v19 )
        {
          ActivationContextStackPointer = (unsigned int)(((int)v19 + v102) >> 1);
          v103 = (_DWORD *)((char *)&ApiSetMap[2 * (int)ActivationContextStackPointer] + (unsigned int)ApiSetMap[5]);
          if ( v98 < *v103 )
          {
            v19 = (unsigned int)(ActivationContextStackPointer - 1);
            v201 = ActivationContextStackPointer - 1;
          }
          else
          {
            if ( v98 <= *v103 )
            {
              v101 = (_DWORD *)((char *)&ApiSetMap[6 * v103[1]] + (unsigned int)ApiSetMap[4]);
              break;
            }
            v102 = ActivationContextStackPointer + 1;
            v205 = ActivationContextStackPointer + 1;
          }
        }
        if ( v101 )
        {
          v104 = (unsigned __int16 *)((char *)ApiSetMap + v101[1]);
          v105 = v101[3] >> 1;
          v106 = v101[3] >> 1;
          v213 = (unsigned __int16 *)v247;
          v214 = v104;
          if ( v97 <= v105 )
            v105 = v97;
          while ( 1 )
          {
            if ( v32 >= (unsigned __int16 *)((char *)v247 + 2 * v105) )
            {
              ActivationContextStackPointer = v97 - v106;
              goto LABEL_173;
            }
            v107 = *v32;
            v196 = v107;
            v19 = *v104;
            LODWORD(v187) = v19;
            if ( (_DWORD)v107 != (_DWORD)v19 )
            {
              if ( (unsigned int)v107 >= 0x61 )
              {
                if ( (unsigned int)v107 > 0x7A )
                  LODWORD(v107) = (unsigned __int16)(v107
                                                   + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                              + 2
                                                              * ((v107 & 0xF)
                                                               + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                     + 2LL
                                                                                     * (((unsigned __int8)v107 >> 4)
                                                                                      + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v107 >> 8)))))));
                else
                  LODWORD(v107) = v107 - 32;
              }
              v196 = v107;
              if ( (unsigned int)v19 >= 0x61 )
              {
                if ( (unsigned int)v19 > 0x7A )
                  v19 = (unsigned __int16)(v19
                                         + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                    + 2
                                                    * ((v19 & 0xF)
                                                     + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                           + 2LL
                                                                           * (((unsigned __int8)v19 >> 4)
                                                                            + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v19 >> 8)))))));
                else
                  v19 = (unsigned int)(v19 - 32);
              }
              LODWORD(v187) = v19;
              if ( (_DWORD)v107 != (_DWORD)v19 )
                break;
            }
            v213 = ++v32;
            v214 = ++v104;
          }
          ActivationContextStackPointer = (unsigned int)(v107 - v19);
LABEL_173:
          if ( !(_DWORD)ActivationContextStackPointer )
          {
            if ( v26 && v101[5] > 1 )
            {
              v108 = ApiSetpSearchForApiSetHost(v101, *(_QWORD *)(v26 + 8), *(_WORD *)v26 >> 1, ApiSetMap);
              goto LABEL_178;
            }
            if ( v101[5] )
            {
              v108 = (__int64)ApiSetMap + v101[4];
LABEL_178:
              Src = (char *)ApiSetMap + *(unsigned int *)(v108 + 12);
              WORD1(v185) = *(_WORD *)(v108 + 16);
              LOWORD(v185) = WORD1(v185);
              v30 = 1;
              v25 = 1;
LABEL_179:
              v24 = v174;
              goto LABEL_180;
            }
          }
        }
        v25 = 1;
        goto LABEL_179;
      }
    }
    else
    {
      v198 = 0;
    }
    v29 = 2147353476LL;
    goto LABEL_21;
  }
LABEL_215:
  if ( FullPath < 0 )
    goto LABEL_354;
  v126 = &v246;
  v219 = &v246;
  if ( !(_WORD)v243 )
  {
    v144 = (char *)v247 + (unsigned __int16)v246;
    v220 = v144;
    while ( 1 )
    {
      v220 = --v144;
      if ( v144 < v247 )
        break;
      if ( *v144 == 92 || *v144 == 47 )
      {
        if ( (unsigned int)RtlDetermineDosPathNameType_Ustr((unsigned __int16 *)&v246) != 5 )
        {
          FullPath = LdrpGetFullPath(&v246, &v243);
          if ( FullPath >= 0 )
          {
            v23 |= 0x600u;
            LOWORD(v168) = v23;
          }
          goto LABEL_221;
        }
LABEL_269:
        FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v243, &v246);
        goto LABEL_221;
      }
    }
    v23 |= 0x20u;
    LOWORD(v168) = v23;
    goto LABEL_269;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
  {
    v156 = "SxS";
    if ( !v166 )
      v156 = "API set";
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      2680,
      (unsigned int)"LdrpPreprocessDllName",
      2,
      "DLL %wZ was redirected to %wZ by %s\n",
      &v246,
      &v243,
      v156);
  }
  v23 |= 0x200u;
  LOWORD(v168) = v23;
  if ( v166 )
  {
    v23 |= 4u;
    LOWORD(v168) = v23;
  }
  v126 = &v243;
  v219 = &v243;
LABEL_221:
  if ( FullPath < 0 )
    goto LABEL_354;
  v127 = *((_QWORD *)v126 + 1);
  v128 = (_WORD *)(v127 + *(unsigned __int16 *)v126);
  v221 = v128;
  while ( 1 )
  {
    v221 = --v128;
    if ( (unsigned __int64)v128 < v127 )
    {
LABEL_271:
      FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&v243, L"\b\n");
      goto LABEL_232;
    }
    v129 = *v128;
    if ( *v128 == 46 )
      break;
    if ( v129 == 47 || v129 == 92 )
      goto LABEL_271;
  }
  v130 = (char *)v244 + (unsigned __int16)v243;
  v222 = v130;
  while ( 1 )
  {
    v222 = --v130;
    if ( v130 < v244 || *v130 != 46 )
      break;
    LOWORD(v243) = v243 - 2;
  }
  v130[1] = 0;
LABEL_232:
  if ( FullPath < 0 )
  {
LABEL_354:
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(v165) = FullPath;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2738,
        (unsigned int)"LdrpPreprocessDllName",
        0,
        "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
        &v246,
        v165);
    }
    if ( (LdrpDebugFlags & 0x10) != 0 )
      __debugbreak();
  }
  if ( FullPath < 0 )
  {
LABEL_388:
    v9 = a5;
    goto LABEL_389;
  }
  if ( (v23 & 0x800000) != 0 )
  {
    v9 = a5;
    FullPath = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v7 + 168),
                 (unsigned int)&v243,
                 *(_QWORD *)(v7 + 16),
                 v23,
                 v182,
                 (__int64)a5,
                 *(_QWORD *)(v7 + 40));
    goto LABEL_389;
  }
  v131 = (_QWORD *)v183;
  if ( !*(_QWORD *)v183 )
  {
    v230 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 32LL);
    *v131 = Heap;
    if ( !Heap )
    {
      FullPath = -1073741801;
      goto LABEL_388;
    }
  }
  v51 = *(_QWORD *)(v7 + 40);
  v204 = v51;
  v132 = v23;
  v52 = *(_QWORD *)(v184 + 16);
  v187 = v52;
  v86 = a5;
  v133 = 0LL;
  *a5 = 0LL;
  v172 = 0;
  if ( (v23 & 0x20) != 0 )
  {
    FullPath = LdrpFindLoadedDllByName(&v243, 0LL, v23, (__int64)a5, &v172);
    goto LABEL_62;
  }
  if ( (v23 & 0x200) == 0 )
    goto LABEL_126;
  v203 = (unsigned __int64 *)((char *)v244 + (unsigned __int16)v243);
  for ( j = (unsigned __int64 *)((char *)v203 - 2); ; j = (unsigned __int64 *)((char *)j - 2) )
  {
    v135 = (unsigned __int16)j;
    v136 = j;
    v203 = j;
    if ( j <= v244 )
      break;
    if ( *(_WORD *)j == 92 || *(_WORD *)j == 47 )
    {
      j = (unsigned __int64 *)((char *)j + 2);
      v203 = (unsigned __int64 *)((char *)v136 + 2);
      v135 = (unsigned __int16)((_WORD)v136 + 2);
      break;
    }
  }
  LOWORD(v135) = v135 - (_WORD)v244;
  v238 = j;
  v236 = v243 - v135;
  v237 = HIWORD(v243) - v135;
  v137 = 0;
  v194 = 0;
  v223 = j;
  v138 = (unsigned __int16)(v243 - v135) >> 1;
  v193 = v138;
  while ( 1 )
  {
    v139 = v138--;
    v193 = v138;
    if ( !v139 )
      break;
    v133 = *(unsigned __int16 *)j;
    j = (unsigned __int64 *)((char *)j + 2);
    v223 = j;
    if ( (unsigned __int16)v133 < 0x61u )
    {
      v140 = (unsigned __int16)v133;
    }
    else if ( (unsigned __int16)v133 > 0x7Au )
    {
      v135 = v133 & 0xF;
      v140 = (unsigned __int16)(v133
                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                         + 2LL
                                         * ((unsigned int)v135
                                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                + 2LL
                                                                * ((((unsigned __int16)v133 >> 4) & 0xF)
                                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)(unsigned __int16)v133 >> 8)))))));
    }
    else
    {
      v140 = (unsigned __int16)v133 - 32;
    }
    v137 = v140 + 65599 * v137;
    v194 = v137;
  }
  v37 = v137;
  if ( !v137 )
    v37 = 0x80000000;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v135, j, v133);
  v41 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v37 & 0x1F));
  v42 = 0;
  for ( k = *v41; ; k = (_QWORD *)*k )
  {
    if ( k == v41 )
    {
      v47 = a5;
      goto LABEL_50;
    }
    v44 = (volatile signed __int32 *)(k - 14);
    if ( v37 == *((_DWORD *)k + 38) && ((v132 & 8) == 0 || (v44[26] & 1) != 0) )
      break;
LABEL_45:
    ;
  }
  if ( (unsigned __int16)v243 != *((unsigned __int16 *)v44 + 36) )
  {
LABEL_44:
    v42 = 0;
    goto LABEL_45;
  }
  v38 = (unsigned __int16 *)v244;
  v224 = (unsigned __int16 *)v244;
  v40 = (unsigned __int16 *)*((_QWORD *)v44 + 10);
  v225 = v40;
  while ( v38 < (unsigned __int16 *)((char *)v244 + (unsigned __int16)v243) )
  {
    v39 = *v38;
    v231 = v39;
    v45 = *v40;
    LODWORD(v207) = v45;
    if ( (_DWORD)v39 != (_DWORD)v45 )
    {
      if ( (unsigned int)v39 >= 0x61 )
      {
        if ( (unsigned int)v39 > 0x7A )
          v39 = (unsigned __int16)(v39
                                 + *(_WORD *)(Nls844UnicodeUpcaseTable
                                            + 2
                                            * ((v39 & 0xF)
                                             + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                   + 2LL
                                                                   * (((unsigned __int8)v39 >> 4)
                                                                    + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v39 >> 8)))))));
        else
          v39 = (unsigned int)(v39 - 32);
      }
      if ( (unsigned int)v45 >= 0x61 )
      {
        if ( (unsigned int)v45 > 0x7A )
          LODWORD(v45) = (unsigned __int16)(v45
                                          + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                     + 2
                                                     * ((v45 & 0xF)
                                                      + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                            + 2LL
                                                                            * (((unsigned __int8)v45 >> 4)
                                                                             + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v45 >> 8)))))));
        else
          LODWORD(v45) = v45 - 32;
      }
      if ( (_DWORD)v39 != (_DWORD)v45 )
        goto LABEL_44;
    }
    v224 = ++v38;
    v225 = ++v40;
  }
  v42 = 1;
  v46 = *((_QWORD *)v44 + 19);
  if ( *(_DWORD *)(v46 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v46 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v44 + 69);
  v47 = a5;
  *a5 = (__int64)v44;
LABEL_50:
  if ( v42 )
    FullPath = 0;
  else
    FullPath = -1073741515;
  if ( FullPath >= 0 )
    v172 = *(_DWORD *)(*(_QWORD *)(*v47 + 152) + 56LL);
  v48 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v48 != 1 )
  {
    v39 = -1LL;
    do
    {
      v91 = v48 & 6;
      v92 = 3LL;
      if ( v91 != 2 )
        v92 = -1LL;
      v38 = (unsigned __int16 *)(v48 + v92);
      v93 = v48;
      v48 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, (signed __int64)v38, v48);
    }
    while ( v93 != v48 );
    if ( v91 == 2 )
      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v38, 0LL);
  }
  if ( FullPath < 0 )
    v181 = 3;
  else
    v181 = 0;
  v49 = (int *)NtCurrentPeb()->SharedData;
  if ( !v49 )
  {
    v195 = 0;
    goto LABEL_59;
  }
  v195 = *v49;
  if ( v195 )
    v50 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
LABEL_59:
    v50 = 2147353476LL;
  if ( *(_BYTE *)v50 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v157 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v157 & 0x20) != 0 )
      LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v181, (__int64)&v243, 0LL);
  }
  LOWORD(v23) = v168;
  v51 = v204;
  LODWORD(v52) = v187;
LABEL_62:
  if ( FullPath != -1073741515 )
  {
    v53 = a5;
    if ( v172 < 0 )
    {
      v158 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v241 = *(_OWORD *)(*a5 + 72);
        LODWORD(v165) = v172;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          2936,
          (unsigned int)"LdrpFindOrPrepareLoadingModule",
          0,
          "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
          &v241,
          v165);
        v158 = LdrpDebugFlags;
      }
      if ( (v158 & 0x10) != 0 )
        __debugbreak();
      FullPath = -1073741595;
      LdrpDereferenceModule(*a5);
      *a5 = 0LL;
    }
    else
    {
      v54 = *a5;
      v202 = 0;
      RtlAcquireSRWLockExclusive(
        (unsigned __int64)&LdrpModuleDatatableLock,
        (unsigned __int64)v38,
        (unsigned __int64 *)v39,
        (__int64)v40);
      v58 = *(_QWORD *)(v54 + 152);
      v59 = *(_DWORD *)(v58 + 24);
      if ( v59 != -1 )
      {
        if ( v59 )
        {
          *(_DWORD *)(v58 + 24) = v59 + 1;
        }
        else
        {
          v240 = NtCurrentTeb();
          if ( (v240->SameTebFlags & 0x1000) != 0 )
            ++*(_DWORD *)(v58 + 28);
          else
            v202 = -1073741515;
        }
      }
      v60 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
      if ( v60 != 1 )
      {
        do
        {
          v94 = v60 & 6;
          v95 = 3LL;
          if ( v94 != 2 )
            v95 = -1LL;
          v55 = v60 + v95;
          v96 = v60;
          v60 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v55, v60);
        }
        while ( v96 != v60 );
        if ( v94 == 2 )
          RtlpWakeSRWLock(&LdrpModuleDatatableLock, v55, 0LL);
      }
      LOWORD(v23) = v168;
    }
    goto LABEL_67;
  }
  v86 = a5;
LABEL_126:
  FullPath = LdrpAllocatePlaceHolder((unsigned int)&v243, v52, v132, v197, v182, (__int64)v86, v51);
  v53 = a5;
  if ( FullPath >= 0 )
    FullPath = LdrpLoadKnownDll(*(_BYTE **)(*a5 + 176));
LABEL_67:
  v167 = FullPath;
  if ( !*v53 )
  {
    v7 = v184;
    goto LABEL_388;
  }
  v61 = v23 & 0x400;
  if ( v61 && FullPath == -1073741515 )
  {
    v159 = *(_QWORD *)(*v53 + 176);
    v239 = v159;
    *(_DWORD *)(v159 + 32) |= 0x4000000u;
    LOBYTE(v55) = 1;
    LdrpProcessWork(v159, v55);
    FullPath = **(_DWORD **)(v159 + 40);
    v167 = FullPath;
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v55, v56, v57);
  v63 = *v53;
  v64 = v63;
  v226 = v63;
  if ( v63 )
  {
    v65 = *(_QWORD *)(v63 + 176);
    if ( v65 )
    {
      if ( (*(_DWORD *)(v65 + 32) & 0x80000) == 0 && *(_QWORD *)(v65 + 56) != v63 )
      {
        v64 = *(_QWORD *)(v65 + 56);
        v226 = v64;
        *(_QWORD *)(v65 + 56) = v63;
      }
    }
  }
  v228 = v64;
  v66 = (unsigned __int64 *)v183;
  *(_DWORD *)(*(_QWORD *)v183 + 24LL) &= ~1u;
  v67 = *v66;
  v206 = *v66;
  v7 = v184;
  v68 = *(_QWORD *)(v64 + 152);
  v69 = *(_QWORD *)(*(_QWORD *)(v184 + 56) + 152LL);
  if ( v69 == v68
    || *(_DWORD *)(v68 + 56) == 9 && (*(_DWORD *)(v68 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v68 - 56LL) & 0x20) != 0) )
  {
    goto LABEL_74;
  }
  v80 = *(_QWORD **)(v69 + 40);
  if ( v80 )
  {
    v81 = *(_QWORD **)(v69 + 40);
    while ( 1 )
    {
      v81 = (_QWORD *)*v81;
      if ( v81[1] == v68 )
        break;
      if ( v81 == v80 )
        goto LABEL_110;
    }
LABEL_74:
    v70 = *(unsigned int *)(v68 + 24);
    if ( (unsigned int)(v70 - 2) <= 0xFFFFFFFC )
      *(_DWORD *)(v68 + 24) = v70 - 1;
  }
  else
  {
LABEL_110:
    if ( !v67 )
    {
      v229 = NtdllBaseTag + 2359296;
      v160 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 32LL);
      v67 = v160;
      v206 = v160;
      if ( !v160 )
      {
        MEMORY[0] = -1073741801;
        v67 = 0LL;
        v66 = (unsigned __int64 *)v183;
        goto LABEL_76;
      }
      *(_DWORD *)(v160 + 24) |= 1u;
    }
    v82 = *(unsigned __int64 **)(v69 + 40);
    if ( v82 )
    {
      *(_QWORD *)v67 = *v82;
      *v82 = v67;
    }
    else
    {
      *(_QWORD *)v67 = v67;
    }
    *(_QWORD *)(v69 + 40) = v67;
    *(_QWORD *)(v67 + 8) = v68;
    v70 = v67 + 16;
    v83 = *(unsigned __int64 **)(v68 + 48);
    if ( v83 )
    {
      *(_QWORD *)v70 = *v83;
      *v83 = v70;
    }
    else
    {
      *(_QWORD *)v70 = v70;
    }
    *(_QWORD *)(v68 + 48) = v70;
    v84 = (*(_DWORD *)(v67 + 24) & 1) == 0;
    v85 = *(_DWORD *)(v67 + 24) & 1;
    *(_QWORD *)(v67 + 24) = v69;
    if ( !v84 )
      *(_DWORD *)(v67 + 24) = v85 | v69 & 0xFFFFFFFE;
    v67 = 0LL;
    v206 = 0LL;
    v66 = (unsigned __int64 *)v183;
  }
LABEL_76:
  v227 = v67;
  *v66 = v67;
  if ( FullPath != -1073741515 )
  {
    if ( FullPath != -1073741267 )
      goto LABEL_78;
    v167 = 0;
    goto LABEL_79;
  }
  FullPath = -1073741515;
  if ( !v61 )
  {
    LdrpQueueWork(*(_QWORD *)(v64 + 176));
    v167 = 0;
    v66 = (unsigned __int64 *)v183;
    goto LABEL_79;
  }
LABEL_78:
  if ( FullPath >= 0 )
  {
LABEL_79:
    v71 = *(_DWORD *)(v7 + 100);
    if ( v71 )
    {
      if ( *v66 || *(int *)(*(_QWORD *)(v64 + 152) + 56LL) >= 2 )
        *(_DWORD *)(v7 + 100) = v71 - 1;
    }
    else if ( *(int *)(*(_QWORD *)(v64 + 152) + 56LL) < 2 )
    {
      *(_QWORD *)(v7 + 80) = v64;
      *(_DWORD *)(v7 + 100) = 1;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 152LL) + 56LL) = 3;
      v167 = 259;
    }
  }
  v72 = *(_QWORD *)(v64 + 152);
  if ( *(_DWORD *)(v72 + 24) != -1
    && (*(_BYTE *)(*(_QWORD *)v72 - 56LL) & 0x20) == 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(v64 + 276), 0xFFFFFFFF) == 1 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v70, v66, v62);
    v75 = *(_QWORD *)(v64 + 160);
    v76 = *(_QWORD **)(v64 + 168);
    if ( *(_QWORD *)(v75 + 8) != v64 + 160 || *v76 != v64 + 160 )
      __fastfail(3u);
    *v76 = v75;
    *(_QWORD *)(v75 + 8) = v76;
    v77 = *(_QWORD **)(v64 + 152);
    v78 = (_QWORD *)*v77;
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( *(_WORD *)(v64 + 110) )
      LdrpReleaseTlsEntry(v64, 0LL);
    LdrpUnmapModule(v64);
    v79 = *(_QWORD *)(v64 + 136);
    if ( (unsigned __int64)(v79 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v79);
    if ( *(_QWORD *)(v64 + 80) )
      LdrpFreeUnicodeString(v64 + 72);
    RtlFreeHeap(LdrpHeap, 0, v64);
    if ( v78 == v77 )
      LdrpDestroyNode(v77);
  }
  v73 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v73 != 1 )
  {
    do
    {
      v87 = v73 & 6;
      v88 = 3LL;
      if ( v87 != 2 )
        v88 = -1LL;
      v89 = v73 + v88;
      v90 = v73;
      v73 = _InterlockedCompareExchange64(&LdrpModuleDatatableLock, v89, v73);
    }
    while ( v90 != v73 );
    if ( v87 == 2 )
      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v89, 0LL);
  }
  v9 = a5;
  v74 = v228;
  if ( v228 != *a5 )
  {
    LdrpFreeReplacedModule();
    *a5 = v74;
  }
  FullPath = v167;
LABEL_389:
  RtlDeactivateActivationContextUnsafeFast(&v232);
  v161 = v247;
  if ( FullPath < 0 )
  {
LABEL_423:
    *v9 = 0LL;
    **(_DWORD **)(v7 + 40) = FullPath;
    v161 = v247;
  }
  if ( v248 != v161 )
    NtdllpFreeStringRoutine((__int64)v161);
  v247 = v248;
  v246 = 0x1000000;
  v248[0] = 0;
  if ( v245 != v244 )
    NtdllpFreeStringRoutine((__int64)v244);
  return (unsigned int)FullPath;
}
