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
 *     RtlpWakeSRWLock @ 0x180075260 (RtlpWakeSRWLock.c)
 *     LdrpUnmapModule @ 0x180076BA8 (LdrpUnmapModule.c)
 *     LdrpDestroyNode @ 0x180080A4C (LdrpDestroyNode.c)
 *     LdrpReleaseTlsEntry @ 0x1800818CC (LdrpReleaseTlsEntry.c)
 *     LdrpFreeReplacedModule @ 0x180086508 (LdrpFreeReplacedModule.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
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
        char **a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // r13
  char **v9; // r12
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
  unsigned int v23; // esi
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
  _QWORD **v38; // rdi
  char v39; // cl
  _QWORD *k; // r14
  volatile signed __int32 *v41; // rbx
  wchar_t *v42; // rdx
  unsigned __int16 *v43; // r9
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // r10
  __int64 v46; // rax
  char **v47; // rax
  signed __int64 v48; // rax
  int *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // r14
  char **v53; // r14
  char *v54; // rbx
  signed __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // eax
  signed __int64 v58; // rax
  int v59; // esi
  char *v60; // rax
  char *v61; // r14
  __int64 v62; // rcx
  _QWORD *v63; // r8
  _DWORD *v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // r15
  int v67; // edx
  int v68; // ecx
  __int64 v69; // rax
  signed __int64 v70; // rax
  char *v71; // rbx
  __int64 v72; // rdx
  char **v73; // rcx
  _QWORD *v74; // rbx
  _QWORD *v75; // rdi
  _ACTIVATION_CONTEXT *v76; // rcx
  _QWORD *v77; // rdx
  _QWORD *v78; // rax
  _QWORD *v79; // rdx
  _QWORD *v80; // rdx
  _QWORD *v81; // r8
  bool v82; // zf
  int v83; // eax
  char **v84; // rax
  signed __int64 v85; // r8
  __int64 v86; // rdx
  signed __int64 v87; // rdx
  signed __int64 v88; // rtt
  signed __int64 v89; // rcx
  __int64 v90; // rdx
  signed __int64 v91; // rdx
  signed __int64 v92; // rtt
  signed __int64 v93; // rcx
  __int64 v94; // rdx
  signed __int64 v95; // rtt
  unsigned __int16 v96; // di
  unsigned int v97; // r11d
  unsigned int v98; // eax
  unsigned __int16 v99; // r9
  unsigned int *v100; // r15
  int v101; // ebx
  unsigned int *v102; // rcx
  unsigned __int16 *v103; // rdx
  unsigned __int64 v104; // rcx
  unsigned int v105; // r14d
  unsigned __int64 v106; // r8
  __int64 v107; // rcx
  int *v108; // rcx
  __int64 v109; // rcx
  int *v110; // rcx
  __int64 v111; // rdi
  __int64 v112; // rbx
  unsigned __int64 v113; // rbx
  __int16 v114; // ax
  unsigned int v115; // ecx
  int v116; // esi
  unsigned int v117; // ecx
  int v118; // ebx
  char *v119; // rcx
  unsigned __int16 v120; // bx
  __int16 v121; // si
  unsigned int v122; // ecx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _UNICODE_STRING *p_OriginalName; // rdx
  _UNICODE_STRING *v125; // rbx
  wchar_t *v126; // rdx
  wchar_t *v127; // rax
  wchar_t v128; // cx
  wchar_t *v129; // rcx
  _QWORD *v130; // rbx
  unsigned int v131; // r13d
  wchar_t *j; // r8
  __int16 v133; // dx
  wchar_t *v134; // rcx
  __int16 v135; // dx
  unsigned int v136; // r10d
  int v137; // r11d
  int v138; // eax
  wchar_t v139; // r9
  int v140; // eax
  PVOID Heap; // rax
  NTSTATUS v142; // ebx
  __int64 v143; // r8
  _WORD *v144; // rax
  char *v145; // rcx
  char *v146; // rcx
  unsigned int v147; // r15d
  unsigned int v148; // eax
  PVOID v149; // r12
  unsigned int v150; // edi
  unsigned int v151; // eax
  PVOID v152; // rsi
  unsigned int v153; // r15d
  unsigned int v154; // eax
  PVOID v155; // r14
  const char *v156; // rax
  char *v157; // rax
  char v158; // al
  __int64 v159; // rbx
  _DWORD *v160; // rax
  _WORD *v161; // rbx
  __int64 v163; // rax
  _WORD *StringRoutine; // rax
  PULONG NewFlags; // [rsp+30h] [rbp-588h]
  char v166; // [rsp+51h] [rbp-567h]
  int v167; // [rsp+54h] [rbp-564h]
  unsigned int v168; // [rsp+58h] [rbp-560h]
  ULONG UnicodeStringActualByteCount; // [rsp+7Ch] [rbp-53Ch] BYREF
  char v170; // [rsp+80h] [rbp-538h]
  int v171; // [rsp+84h] [rbp-534h]
  int v172; // [rsp+88h] [rbp-530h] BYREF
  unsigned __int16 v173; // [rsp+8Ch] [rbp-52Ch]
  _UNICODE_STRING *v174; // [rsp+90h] [rbp-528h]
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
  wchar_t *v203; // [rsp+138h] [rbp-480h]
  __int64 v204; // [rsp+140h] [rbp-478h]
  int v205; // [rsp+148h] [rbp-470h]
  _DWORD *v206; // [rsp+150h] [rbp-468h]
  struct _PEB *v207; // [rsp+158h] [rbp-460h]
  __int64 v208; // [rsp+160h] [rbp-458h]
  __int64 v209; // [rsp+168h] [rbp-450h]
  _UNICODE_STRING DestinationString; // [rsp+170h] [rbp-448h] BYREF
  _WORD *v211; // [rsp+180h] [rbp-438h]
  unsigned __int64 i; // [rsp+188h] [rbp-430h]
  unsigned __int16 *v213; // [rsp+190h] [rbp-428h]
  unsigned __int16 *v214; // [rsp+198h] [rbp-420h]
  __int64 v215; // [rsp+1A0h] [rbp-418h]
  PVOID v216; // [rsp+1A8h] [rbp-410h]
  PVOID v217; // [rsp+1B0h] [rbp-408h]
  PVOID v218; // [rsp+1B8h] [rbp-400h]
  _UNICODE_STRING *v219; // [rsp+1C0h] [rbp-3F8h]
  _WORD *v220; // [rsp+1C8h] [rbp-3F0h]
  wchar_t *v221; // [rsp+1D0h] [rbp-3E8h]
  wchar_t *v222; // [rsp+1D8h] [rbp-3E0h]
  wchar_t *v223; // [rsp+1E0h] [rbp-3D8h]
  wchar_t *v224; // [rsp+1E8h] [rbp-3D0h]
  unsigned __int16 *v225; // [rsp+1F0h] [rbp-3C8h]
  char *v226; // [rsp+1F8h] [rbp-3C0h]
  _DWORD *v227; // [rsp+200h] [rbp-3B8h]
  char *v228; // [rsp+208h] [rbp-3B0h]
  ULONG v229; // [rsp+210h] [rbp-3A8h]
  ULONG v230; // [rsp+214h] [rbp-3A4h]
  int v231; // [rsp+218h] [rbp-3A0h]
  __int64 v232; // [rsp+220h] [rbp-398h] BYREF
  int v233; // [rsp+228h] [rbp-390h]
  _QWORD v234[7]; // [rsp+230h] [rbp-388h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+270h] [rbp-348h] BYREF
  __int16 v236; // [rsp+280h] [rbp-338h]
  __int16 v237; // [rsp+282h] [rbp-336h]
  wchar_t *v238; // [rsp+288h] [rbp-330h]
  __int64 v239; // [rsp+290h] [rbp-328h]
  struct _TEB *v240; // [rsp+298h] [rbp-320h]
  __int128 v241; // [rsp+2A0h] [rbp-318h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+2B0h] [rbp-308h] BYREF
  _UNICODE_STRING OriginalName; // [rsp+350h] [rbp-268h] BYREF
  _WORD v244[128]; // [rsp+360h] [rbp-258h] BYREF
  int v245; // [rsp+460h] [rbp-158h] BYREF
  void *v246; // [rsp+468h] [rbp-150h]
  _WORD v247[128]; // [rsp+470h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+5B8h] [rbp+0h]

  v197 = a4;
  v6 = a3;
  v182 = a3;
  v7 = a2;
  v184 = a2;
  v9 = a5;
  v183 = a6;
  OriginalName.Buffer = v244;
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  v244[0] = 0;
  v10 = v247;
  v246 = v247;
  v11 = 0;
  v245 = 0x1000000;
  LOWORD(v12) = 256;
  v247[0] = 0;
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
    RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, Length);
    v10 = v246;
    LOWORD(v12) = HIWORD(v245);
    v11 = v245;
    v17 = UnicodeStringActualByteCount;
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
    UnicodeStringActualByteCount = v17;
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
    if ( v10 == v247 )
    {
      StringRoutine = NtdllpAllocateStringRoutine(v12);
      v10 = StringRoutine;
      if ( StringRoutine )
      {
        v11 = v245;
        if ( !(_WORD)v245 )
          goto LABEL_419;
        memmove(StringRoutine, v246, (unsigned __int16)v245);
      }
    }
    else
    {
      v10 = (_WORD *)NtdllpReallocateStringRoutine(v12, v10, v18, Buffer);
    }
    v11 = v245;
LABEL_419:
    if ( v10 )
    {
      v246 = v10;
      HIWORD(v245) = v12;
    }
    else
    {
      FullPath = -1073741801;
      v10 = v246;
      LOWORD(v12) = HIWORD(v245);
    }
  }
LABEL_7:
  if ( FullPath >= 0 )
  {
    DestinationString.Buffer = (_WORD *)((char *)v10 + v11);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v12 - v11;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    LOWORD(v245) = DestinationString.Length + v245;
  }
  v6 = v182;
LABEL_10:
  if ( FullPath < 0 )
    goto LABEL_422;
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
    v24 = &v245;
    v174 = (_UNICODE_STRING *)&v245;
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
          v145 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
          if ( (*v145 & 0x20) != 0 )
            LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&v245, 0LL);
        }
        v185 = 0LL;
        Src = 0LL;
        v30 = 0;
        v31 = v245;
        if ( (unsigned __int16)v245 < 8u )
          goto LABEL_179;
        v32 = (unsigned __int16 *)v246;
        v33 = *(_QWORD *)v246 & 0xFFFFFFDFFFDFFFDFuLL;
        if ( v33 != 0x2D004900500041LL && v33 != 0x2D005400580045LL )
          goto LABEL_179;
        v34 = (unsigned __int16)v245;
        v35 = (char *)v246 + (unsigned __int16)v245;
        v211 = v35;
        v199 = (unsigned __int16)v245;
        v36 = (unsigned __int16)v245;
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
        v96 = v31 >> 1;
        if ( !v96 )
        {
LABEL_179:
          v170 = v30;
          if ( v30 )
          {
            if ( (_WORD)v185 )
            {
              v108 = (int *)NtCurrentPeb()->SharedData;
              if ( v108 )
              {
                v188 = *v108;
                if ( v188 )
                {
                  v109 = (__int64)NtCurrentPeb()->SharedData + 554;
LABEL_184:
                  if ( *(_BYTE *)v109 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
                  {
                    v146 = RtlGetCurrentServiceSessionId()
                         ? (char *)NtCurrentPeb()->SharedData + 555
                         : (char *)2147353477;
                    if ( (*v146 & 0x20) != 0 )
                      LdrpLogEtwEvent(5329, 0, 0, 0, (__int64)v24, 0LL);
                  }
LABEL_185:
                  FullPath = 0;
                  v171 = 0;
                  if ( !v30 )
                    goto LABEL_260;
                  if ( !(_WORD)v185 )
                  {
                    FullPath = -1073740671;
                    v171 = -1073740671;
LABEL_213:
                    v23 = v168;
                    v7 = v184;
                    goto LABEL_214;
                  }
                  OriginalName.Length = 0;
                  v110 = (int *)NtCurrentPeb()->SharedData;
                  if ( v110 )
                  {
                    v189 = *v110;
                    if ( v189 )
                    {
                      v111 = (__int64)NtCurrentPeb()->SharedData + 30;
                      goto LABEL_190;
                    }
                  }
                  else
                  {
                    v189 = 0;
                  }
                  v111 = 2147352624LL;
LABEL_190:
                  v215 = v111;
                  v208 = 0LL;
                  v209 = v111;
                  if ( v111 )
                  {
                    v112 = -1LL;
                    do
                      ++v112;
                    while ( *(_WORD *)(v111 + 2 * v112) );
                    v113 = 2 * v112;
                    v204 = v113;
                    v114 = v113;
                    if ( v113 >= 0xFFFE )
                    {
                      LOWORD(v113) = -4;
                      v204 = 65532LL;
                      v114 = -4;
                    }
                    LOWORD(v208) = v113;
                    WORD1(v208) = v114 + 2;
                  }
                  else
                  {
                    LOWORD(v113) = v208;
                  }
                  v190 = 0;
                  if ( (_WORD)v113 )
                  {
                    v115 = (unsigned __int16)v113 + 2;
                    v175 = v115;
                    v116 = 0;
                    v176 = 0;
                    if ( v115 > OriginalName.MaximumLength )
                    {
                      if ( v115 <= 0xFFFE )
                      {
                        v147 = ((unsigned __int16)v113 + 65) & 0xFFFFFFC0;
                        v175 = v147;
                        v148 = v147;
                        if ( v147 > 0xFFFE )
                        {
                          LOWORD(v147) = -2;
                          v175 = 65534;
                          v148 = 65534;
                        }
                        if ( OriginalName.Buffer == v244 )
                        {
                          v149 = NtdllpAllocateStringRoutine(v148);
                          v216 = v149;
                          if ( v149 && OriginalName.Length )
                            memmove(v149, OriginalName.Buffer, OriginalName.Length);
                        }
                        else
                        {
                          v149 = (PVOID)NtdllpReallocateStringRoutine(
                                          v148,
                                          OriginalName.Buffer,
                                          ActivationContextStackPointer,
                                          v19);
                          v216 = v149;
                        }
                        if ( v149 )
                        {
                          OriginalName.Buffer = (wchar_t *)v149;
                          OriginalName.MaximumLength = v147;
                        }
                        else
                        {
                          v116 = -1073741801;
                          v176 = -1073741801;
                        }
                      }
                      else
                      {
                        v116 = -1073741562;
                        v176 = -1073741562;
                      }
                    }
                    v190 = v116;
                    if ( v116 >= 0 )
                    {
                      memmove(
                        (char *)OriginalName.Buffer + OriginalName.Length,
                        (const void *)v111,
                        (unsigned __int16)v113);
                      OriginalName.Length += v113;
                      OriginalName.Buffer[(unsigned __int64)OriginalName.Length >> 1] = 0;
                    }
                  }
                  v191 = 0;
                  v117 = OriginalName.Length + 22;
                  v177 = v117;
                  v118 = 0;
                  v178 = 0;
                  if ( v117 > OriginalName.MaximumLength )
                  {
                    if ( v117 <= 0xFFFE )
                    {
                      v150 = (OriginalName.Length + 85) & 0xFFFFFFC0;
                      v177 = v150;
                      v151 = v150;
                      if ( v150 > 0xFFFE )
                      {
                        LOWORD(v150) = -2;
                        v177 = 65534;
                        v151 = 65534;
                      }
                      if ( OriginalName.Buffer == v244 )
                      {
                        v152 = NtdllpAllocateStringRoutine(v151);
                        v217 = v152;
                        if ( v152 && OriginalName.Length )
                          memmove(v152, OriginalName.Buffer, OriginalName.Length);
                      }
                      else
                      {
                        v152 = (PVOID)NtdllpReallocateStringRoutine(
                                        v151,
                                        OriginalName.Buffer,
                                        ActivationContextStackPointer,
                                        v19);
                        v217 = v152;
                      }
                      if ( v152 )
                      {
                        OriginalName.Buffer = (wchar_t *)v152;
                        OriginalName.MaximumLength = v150;
                      }
                      else
                      {
                        v118 = -1073741801;
                        v178 = -1073741801;
                      }
                    }
                    else
                    {
                      v118 = -1073741562;
                      v178 = -1073741562;
                    }
                  }
                  v191 = v118;
                  if ( v118 >= 0 )
                  {
                    v119 = (char *)OriginalName.Buffer + OriginalName.Length;
                    *(_OWORD *)v119 = *(_OWORD *)SlashSystem32SlashString.Buffer;
                    *((_DWORD *)v119 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
                    OriginalName.Length += 20;
                    OriginalName.Buffer[(unsigned __int64)OriginalName.Length >> 1] = 0;
                  }
                  v192 = 0;
                  v120 = v185;
                  v121 = v185;
                  v122 = (unsigned __int16)v185 + OriginalName.Length + 2;
                  v179 = v122;
                  FullPath = 0;
                  v180 = 0;
                  if ( v122 > OriginalName.MaximumLength )
                  {
                    if ( v122 <= 0xFFFE )
                    {
                      v153 = (v122 + 63) & 0xFFFFFFC0;
                      v179 = v153;
                      v154 = v153;
                      if ( v153 > 0xFFFE )
                      {
                        LOWORD(v153) = -2;
                        v179 = 65534;
                        v154 = 65534;
                      }
                      if ( OriginalName.Buffer == v244 )
                      {
                        v155 = NtdllpAllocateStringRoutine(v154);
                        v218 = v155;
                        if ( v155 && OriginalName.Length )
                          memmove(v155, OriginalName.Buffer, OriginalName.Length);
                      }
                      else
                      {
                        v155 = (PVOID)NtdllpReallocateStringRoutine(
                                        v154,
                                        OriginalName.Buffer,
                                        ActivationContextStackPointer,
                                        v19);
                        v218 = v155;
                      }
                      if ( v155 )
                      {
                        OriginalName.Buffer = (wchar_t *)v155;
                        OriginalName.MaximumLength = v153;
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
                    memmove((char *)OriginalName.Buffer + OriginalName.Length, Src, v120);
                    OriginalName.Length += v121;
                    OriginalName.Buffer[(unsigned __int64)OriginalName.Length >> 1] = 0;
                  }
                  v171 = FullPath;
                  if ( FullPath >= 0 )
                  {
                    ProcessParameters = v207->ProcessParameters;
                    v25 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
                    p_OriginalName = &OriginalName;
                    v174 = &OriginalName;
LABEL_211:
                    if ( FullPath >= 0 && v25 && !LdrpIsSecureProcess )
                    {
                      v142 = RtlDosApplyFileIsolationRedirection_Ustr(
                               1u,
                               p_OriginalName,
                               (PUNICODE_STRING)&LdrpDefaultExtension,
                               0LL,
                               &DynamicString,
                               0LL,
                               0LL,
                               0LL,
                               0LL);
                      if ( v142 >= 0 )
                      {
                        v166 = 1;
                        LdrpGetFullPath(&DynamicString, &OriginalName);
                        LdrpFreeUnicodeString(&DynamicString);
                      }
                      if ( v142 != -1072365560 )
                      {
                        FullPath = v142;
                        v171 = v142;
                      }
                    }
                    goto LABEL_213;
                  }
                  v25 = 1;
LABEL_260:
                  p_OriginalName = v174;
                  goto LABEL_211;
                }
              }
              else
              {
                v188 = 0;
              }
              v109 = 2147353476LL;
              goto LABEL_184;
            }
            v143 = 5330LL;
          }
          else
          {
            v143 = 5331LL;
          }
          LdrpLogDllState(0LL, v24, v143);
          goto LABEL_185;
        }
        v97 = 0;
        v98 = 0;
        ActivationContextStackPointer = (unsigned __int64)v246;
        for ( i = (unsigned __int64)v246; ; i = ActivationContextStackPointer )
        {
          v200 = v98;
          if ( v98 >= v96 )
            break;
          v173 = *(_WORD *)ActivationContextStackPointer;
          v99 = v173;
          if ( (unsigned __int16)(v173 - 65) <= 0x19u )
          {
            v99 = v173 + 32;
            v173 += 32;
          }
          v97 = v97 * ApiSetMap[6] + v99;
          ++v98;
          ActivationContextStackPointer += 2LL;
        }
        v100 = 0LL;
        v101 = 0;
        v205 = 0;
        v19 = (unsigned int)(ApiSetMap[3] - 1);
        v201 = ApiSetMap[3] - 1;
        while ( v101 <= (int)v19 )
        {
          ActivationContextStackPointer = (unsigned int)(((int)v19 + v101) >> 1);
          v102 = (_DWORD *)((char *)&ApiSetMap[2 * (int)ActivationContextStackPointer] + (unsigned int)ApiSetMap[5]);
          if ( v97 < *v102 )
          {
            v19 = (unsigned int)(ActivationContextStackPointer - 1);
            v201 = ActivationContextStackPointer - 1;
          }
          else
          {
            if ( v97 <= *v102 )
            {
              v100 = (_DWORD *)((char *)&ApiSetMap[6 * v102[1]] + (unsigned int)ApiSetMap[4]);
              break;
            }
            v101 = ActivationContextStackPointer + 1;
            v205 = ActivationContextStackPointer + 1;
          }
        }
        if ( v100 )
        {
          v103 = (unsigned __int16 *)((char *)ApiSetMap + v100[1]);
          v104 = v100[3] >> 1;
          v105 = v100[3] >> 1;
          v213 = (unsigned __int16 *)v246;
          v214 = v103;
          if ( v96 <= v104 )
            v104 = v96;
          while ( 1 )
          {
            if ( v32 >= (unsigned __int16 *)((char *)v246 + 2 * v104) )
            {
              ActivationContextStackPointer = v96 - v105;
              goto LABEL_172;
            }
            v106 = *v32;
            v196 = v106;
            v19 = *v103;
            LODWORD(v187) = v19;
            if ( (_DWORD)v106 != (_DWORD)v19 )
            {
              if ( (unsigned int)v106 >= 0x61 )
              {
                if ( (unsigned int)v106 > 0x7A )
                  LODWORD(v106) = (unsigned __int16)(v106
                                                   + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                              + 2
                                                              * ((v106 & 0xF)
                                                               + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                     + 2LL
                                                                                     * (((unsigned __int8)v106 >> 4)
                                                                                      + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v106 >> 8)))))));
                else
                  LODWORD(v106) = v106 - 32;
              }
              v196 = v106;
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
              if ( (_DWORD)v106 != (_DWORD)v19 )
                break;
            }
            v213 = ++v32;
            v214 = ++v103;
          }
          ActivationContextStackPointer = (unsigned int)(v106 - v19);
LABEL_172:
          if ( !(_DWORD)ActivationContextStackPointer )
          {
            if ( v26 && v100[5] > 1 )
            {
              v107 = ApiSetpSearchForApiSetHost(v100, *(_QWORD *)(v26 + 8), *(_WORD *)v26 >> 1, ApiSetMap);
              goto LABEL_177;
            }
            if ( v100[5] )
            {
              v107 = (__int64)ApiSetMap + v100[4];
LABEL_177:
              Src = (char *)ApiSetMap + *(unsigned int *)(v107 + 12);
              WORD1(v185) = *(_WORD *)(v107 + 16);
              LOWORD(v185) = WORD1(v185);
              v30 = 1;
              v25 = 1;
LABEL_178:
              v24 = (int *)v174;
              goto LABEL_179;
            }
          }
        }
        v25 = 1;
        goto LABEL_178;
      }
    }
    else
    {
      v198 = 0;
    }
    v29 = 2147353476LL;
    goto LABEL_21;
  }
LABEL_214:
  if ( FullPath < 0 )
    goto LABEL_353;
  v125 = (_UNICODE_STRING *)&v245;
  v219 = (_UNICODE_STRING *)&v245;
  if ( !OriginalName.Length )
  {
    v144 = (char *)v246 + (unsigned __int16)v245;
    v220 = v144;
    while ( 1 )
    {
      v220 = --v144;
      if ( v144 < v246 )
        break;
      if ( *v144 == 92 || *v144 == 47 )
      {
        if ( (unsigned int)RtlDetermineDosPathNameType_Ustr((unsigned __int16 *)&v245) != 5 )
        {
          FullPath = LdrpGetFullPath(&v245, &OriginalName);
          if ( FullPath >= 0 )
          {
            v23 |= 0x600u;
            LOWORD(v168) = v23;
          }
          goto LABEL_220;
        }
LABEL_268:
        FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&OriginalName, &v245);
        goto LABEL_220;
      }
    }
    v23 |= 0x20u;
    LOWORD(v168) = v23;
    goto LABEL_268;
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
      &v245,
      &OriginalName,
      v156);
  }
  v23 |= 0x200u;
  LOWORD(v168) = v23;
  if ( v166 )
  {
    v23 |= 4u;
    LOWORD(v168) = v23;
  }
  v125 = &OriginalName;
  v219 = &OriginalName;
LABEL_220:
  if ( FullPath < 0 )
    goto LABEL_353;
  v126 = v125->Buffer;
  v127 = (wchar_t *)((char *)v126 + v125->Length);
  v221 = v127;
  while ( 1 )
  {
    v221 = --v127;
    if ( v127 < v126 )
    {
LABEL_270:
      FullPath = LdrpAppendUnicodeStringToFilenameBuffer(&OriginalName, &LdrpDefaultExtension);
      goto LABEL_231;
    }
    v128 = *v127;
    if ( *v127 == 46 )
      break;
    if ( v128 == 47 || v128 == 92 )
      goto LABEL_270;
  }
  v129 = (wchar_t *)((char *)OriginalName.Buffer + OriginalName.Length);
  v222 = v129;
  while ( 1 )
  {
    v222 = --v129;
    if ( v129 < OriginalName.Buffer || *v129 != 46 )
      break;
    OriginalName.Length -= 2;
  }
  v129[1] = 0;
LABEL_231:
  if ( FullPath < 0 )
  {
LABEL_353:
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(NewFlags) = FullPath;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2738,
        (unsigned int)"LdrpPreprocessDllName",
        0,
        "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
        &v245,
        NewFlags);
    }
    if ( (LdrpDebugFlags & 0x10) != 0 )
      __debugbreak();
  }
  if ( FullPath < 0 )
  {
LABEL_387:
    v9 = a5;
    goto LABEL_388;
  }
  if ( (v23 & 0x800000) != 0 )
  {
    v9 = a5;
    FullPath = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v7 + 168),
                 &OriginalName,
                 *(_QWORD *)(v7 + 16),
                 v23,
                 v182,
                 a5,
                 *(_QWORD *)(v7 + 40));
    goto LABEL_388;
  }
  v130 = (_QWORD *)v183;
  if ( !*(_QWORD *)v183 )
  {
    v230 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
    *v130 = Heap;
    if ( !Heap )
    {
      FullPath = -1073741801;
      goto LABEL_387;
    }
  }
  v51 = *(_QWORD *)(v7 + 40);
  v204 = v51;
  v131 = v23;
  v52 = *(_QWORD *)(v184 + 16);
  v187 = v52;
  v84 = a5;
  *a5 = 0LL;
  v172 = 0;
  if ( (v23 & 0x20) != 0 )
  {
    FullPath = LdrpFindLoadedDllByName(&OriginalName, 0LL, v23, (__int64)a5, &v172);
    goto LABEL_62;
  }
  if ( (v23 & 0x200) == 0 )
    goto LABEL_126;
  v203 = (wchar_t *)((char *)OriginalName.Buffer + OriginalName.Length);
  for ( j = v203 - 1; ; --j )
  {
    v133 = (__int16)j;
    v134 = j;
    v203 = j;
    if ( j <= OriginalName.Buffer )
      break;
    if ( *j == 92 || *j == 47 )
    {
      ++j;
      v203 = v134 + 1;
      v133 = (_WORD)v134 + 2;
      break;
    }
  }
  v135 = v133 - LOWORD(OriginalName.Buffer);
  v238 = j;
  v236 = OriginalName.Length - v135;
  v237 = OriginalName.MaximumLength - v135;
  v136 = 0;
  v194 = 0;
  v223 = j;
  v137 = (unsigned __int16)(OriginalName.Length - v135) >> 1;
  v193 = v137;
  while ( 1 )
  {
    v138 = v137--;
    v193 = v137;
    if ( !v138 )
      break;
    v139 = *j++;
    v223 = j;
    if ( v139 < 0x61u )
    {
      v140 = v139;
    }
    else if ( v139 > 0x7Au )
    {
      v140 = (unsigned __int16)(v139
                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                         + 2LL
                                         * ((v139 & 0xF)
                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                              + 2LL
                                                                              * (((v139 >> 4) & 0xF)
                                                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v139 >> 8)))))));
    }
    else
    {
      v140 = v139 - 32;
    }
    v136 = v140 + 65599 * v136;
    v194 = v136;
  }
  v37 = v136;
  if ( !v136 )
    v37 = 0x80000000;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v38 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v37 & 0x1F));
  v39 = 0;
  for ( k = *v38; ; k = (_QWORD *)*k )
  {
    if ( k == v38 )
    {
      v47 = a5;
      goto LABEL_50;
    }
    v41 = (volatile signed __int32 *)(k - 14);
    if ( v37 == *((_DWORD *)k + 38) && ((v131 & 8) == 0 || (v41[26] & 1) != 0) )
      break;
LABEL_45:
    ;
  }
  if ( OriginalName.Length != *((unsigned __int16 *)v41 + 36) )
  {
LABEL_44:
    v39 = 0;
    goto LABEL_45;
  }
  v42 = OriginalName.Buffer;
  v224 = OriginalName.Buffer;
  v43 = (unsigned __int16 *)*((_QWORD *)v41 + 10);
  v225 = v43;
  while ( v42 < (wchar_t *)((char *)OriginalName.Buffer + OriginalName.Length) )
  {
    v44 = *v42;
    v231 = v44;
    v45 = *v43;
    LODWORD(v207) = v45;
    if ( (_DWORD)v44 != (_DWORD)v45 )
    {
      if ( (unsigned int)v44 >= 0x61 )
      {
        if ( (unsigned int)v44 > 0x7A )
          LODWORD(v44) = (unsigned __int16)(v44
                                          + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                     + 2
                                                     * ((v44 & 0xF)
                                                      + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                            + 2LL
                                                                            * (((unsigned __int8)v44 >> 4)
                                                                             + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v44 >> 8)))))));
        else
          LODWORD(v44) = v44 - 32;
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
      if ( (_DWORD)v44 != (_DWORD)v45 )
        goto LABEL_44;
    }
    v224 = ++v42;
    v225 = ++v43;
  }
  v39 = 1;
  v46 = *((_QWORD *)v41 + 19);
  if ( *(_DWORD *)(v46 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v46 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v41 + 69);
  v47 = a5;
  *a5 = (char *)v41;
LABEL_50:
  if ( v39 )
    FullPath = 0;
  else
    FullPath = -1073741515;
  if ( FullPath >= 0 )
    v172 = *(_DWORD *)(*((_QWORD *)*v47 + 19) + 56LL);
  v48 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v48 != 1 )
  {
    do
    {
      v89 = v48 & 6;
      v90 = 3LL;
      if ( v89 != 2 )
        v90 = -1LL;
      v91 = v48 + v90;
      v92 = v48;
      v48 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v91, v48);
    }
    while ( v92 != v48 );
    if ( v89 == 2 )
      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v91, 0LL);
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
    v157 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v157 & 0x20) != 0 )
      LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v181, (__int64)&OriginalName, 0LL);
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
        LODWORD(NewFlags) = v172;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          2936,
          (unsigned int)"LdrpFindOrPrepareLoadingModule",
          0,
          "Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
          &v241,
          NewFlags);
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
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v56 = *((_QWORD *)v54 + 19);
      v57 = *(_DWORD *)(v56 + 24);
      if ( v57 != -1 )
      {
        if ( v57 )
        {
          *(_DWORD *)(v56 + 24) = v57 + 1;
        }
        else
        {
          v240 = NtCurrentTeb();
          if ( (v240->SameTebFlags & 0x1000) != 0 )
            ++*(_DWORD *)(v56 + 28);
          else
            v202 = -1073741515;
        }
      }
      v58 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
      if ( v58 != 1 )
      {
        do
        {
          v93 = v58 & 6;
          v94 = 3LL;
          if ( v93 != 2 )
            v94 = -1LL;
          v55 = v58 + v94;
          v95 = v58;
          v58 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v55, v58);
        }
        while ( v95 != v58 );
        if ( v93 == 2 )
          RtlpWakeSRWLock(&LdrpModuleDatatableLock, v55, 0LL);
      }
      LOWORD(v23) = v168;
    }
    goto LABEL_67;
  }
  v84 = a5;
LABEL_126:
  FullPath = LdrpAllocatePlaceHolder((unsigned int)&OriginalName, v52, v131, v197, v182, (__int64)v84, v51);
  v53 = a5;
  if ( FullPath >= 0 )
    FullPath = LdrpLoadKnownDll(*((_BYTE **)*a5 + 22));
LABEL_67:
  v167 = FullPath;
  if ( !*v53 )
  {
    v7 = v184;
    goto LABEL_387;
  }
  v59 = v23 & 0x400;
  if ( v59 && FullPath == -1073741515 )
  {
    v159 = *((_QWORD *)*v53 + 22);
    v239 = v159;
    *(_DWORD *)(v159 + 32) |= 0x4000000u;
    LOBYTE(v55) = 1;
    LdrpProcessWork(v159, v55);
    FullPath = **(_DWORD **)(v159 + 40);
    v167 = FullPath;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v60 = *v53;
  v61 = v60;
  v226 = v60;
  if ( v60 )
  {
    v62 = *((_QWORD *)v60 + 22);
    if ( v62 )
    {
      if ( (*(_DWORD *)(v62 + 32) & 0x80000) == 0 && *(char **)(v62 + 56) != v60 )
      {
        v61 = *(char **)(v62 + 56);
        v226 = v61;
        *(_QWORD *)(v62 + 56) = v60;
      }
    }
  }
  v228 = v61;
  v63 = (_QWORD *)v183;
  *(_DWORD *)(*(_QWORD *)v183 + 24LL) &= ~1u;
  v64 = (_DWORD *)*v63;
  v206 = (_DWORD *)*v63;
  v7 = v184;
  v65 = *((_QWORD *)v61 + 19);
  v66 = *(_QWORD *)(*(_QWORD *)(v184 + 56) + 152LL);
  if ( v66 == v65
    || *(_DWORD *)(v65 + 56) == 9 && (*(_DWORD *)(v65 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v65 - 56LL) & 0x20) != 0) )
  {
    goto LABEL_74;
  }
  v77 = *(_QWORD **)(v66 + 40);
  if ( v77 )
  {
    v78 = *(_QWORD **)(v66 + 40);
    while ( 1 )
    {
      v78 = (_QWORD *)*v78;
      if ( v78[1] == v65 )
        break;
      if ( v78 == v77 )
        goto LABEL_110;
    }
LABEL_74:
    v67 = *(_DWORD *)(v65 + 24);
    if ( (unsigned int)(v67 - 2) <= 0xFFFFFFFC )
      *(_DWORD *)(v65 + 24) = v67 - 1;
  }
  else
  {
LABEL_110:
    if ( !v64 )
    {
      v229 = NtdllBaseTag + 2359296;
      v160 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
      v64 = v160;
      v206 = v160;
      if ( !v160 )
      {
        MEMORY[0] = -1073741801;
        v64 = 0LL;
        v63 = (_QWORD *)v183;
        goto LABEL_76;
      }
      v160[6] |= 1u;
    }
    v79 = *(_QWORD **)(v66 + 40);
    if ( v79 )
    {
      *(_QWORD *)v64 = *v79;
      *v79 = v64;
    }
    else
    {
      *(_QWORD *)v64 = v64;
    }
    *(_QWORD *)(v66 + 40) = v64;
    *((_QWORD *)v64 + 1) = v65;
    v80 = v64 + 4;
    v81 = *(_QWORD **)(v65 + 48);
    if ( v81 )
    {
      *v80 = *v81;
      *v81 = v80;
    }
    else
    {
      *v80 = v80;
    }
    *(_QWORD *)(v65 + 48) = v80;
    v82 = (v64[6] & 1) == 0;
    v83 = v64[6] & 1;
    *((_QWORD *)v64 + 3) = v66;
    if ( !v82 )
      v64[6] = v83 | v66 & 0xFFFFFFFE;
    v64 = 0LL;
    v206 = 0LL;
    v63 = (_QWORD *)v183;
  }
LABEL_76:
  v227 = v64;
  *v63 = v64;
  if ( FullPath != -1073741515 )
  {
    if ( FullPath != -1073741267 )
      goto LABEL_78;
    v167 = 0;
    goto LABEL_79;
  }
  FullPath = -1073741515;
  if ( !v59 )
  {
    LdrpQueueWork(*((_QWORD *)v61 + 22));
    v167 = 0;
    v63 = (_QWORD *)v183;
    goto LABEL_79;
  }
LABEL_78:
  if ( FullPath >= 0 )
  {
LABEL_79:
    v68 = *(_DWORD *)(v7 + 100);
    if ( v68 )
    {
      if ( *v63 || *(int *)(*((_QWORD *)v61 + 19) + 56LL) >= 2 )
        *(_DWORD *)(v7 + 100) = v68 - 1;
    }
    else if ( *(int *)(*((_QWORD *)v61 + 19) + 56LL) < 2 )
    {
      *(_QWORD *)(v7 + 80) = v61;
      *(_DWORD *)(v7 + 100) = 1;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 152LL) + 56LL) = 3;
      v167 = 259;
    }
  }
  v69 = *((_QWORD *)v61 + 19);
  if ( *(_DWORD *)(v69 + 24) != -1
    && (*(_BYTE *)(*(_QWORD *)v69 - 56LL) & 0x20) == 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)v61 + 69, 0xFFFFFFFF) == 1 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v72 = *((_QWORD *)v61 + 20);
    v73 = (char **)*((_QWORD *)v61 + 21);
    if ( *(char **)(v72 + 8) != v61 + 160 || *v73 != v61 + 160 )
      __fastfail(3u);
    *v73 = (char *)v72;
    *(_QWORD *)(v72 + 8) = v73;
    v74 = (_QWORD *)*((_QWORD *)v61 + 19);
    v75 = (_QWORD *)*v74;
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( *((_WORD *)v61 + 55) )
      LdrpReleaseTlsEntry(v61, 0LL);
    LdrpUnmapModule(v61);
    v76 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v61 + 17);
    if ( (unsigned __int64)&v76[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v76);
    if ( *((_QWORD *)v61 + 10) )
      LdrpFreeUnicodeString(v61 + 72);
    RtlFreeHeap(LdrpHeap, 0, v61);
    if ( v75 == v74 )
      LdrpDestroyNode(v74);
  }
  v70 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
  if ( v70 != 1 )
  {
    do
    {
      v85 = v70 & 6;
      v86 = 3LL;
      if ( v85 != 2 )
        v86 = -1LL;
      v87 = v70 + v86;
      v88 = v70;
      v70 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v87, v70);
    }
    while ( v88 != v70 );
    if ( v85 == 2 )
      RtlpWakeSRWLock(&LdrpModuleDatatableLock, v87, 0LL);
  }
  v9 = a5;
  v71 = v228;
  if ( v228 != *a5 )
  {
    LdrpFreeReplacedModule(*a5);
    *a5 = v71;
  }
  FullPath = v167;
LABEL_388:
  RtlDeactivateActivationContextUnsafeFast(&v232);
  v161 = v246;
  if ( FullPath < 0 )
  {
LABEL_422:
    *v9 = 0LL;
    **(_DWORD **)(v7 + 40) = FullPath;
    v161 = v246;
  }
  if ( v247 != v161 )
    NtdllpFreeStringRoutine(v161);
  v246 = v247;
  v245 = 0x1000000;
  v247[0] = 0;
  if ( v244 != OriginalName.Buffer )
    NtdllpFreeStringRoutine(OriginalName.Buffer);
  return (unsigned int)FullPath;
}
