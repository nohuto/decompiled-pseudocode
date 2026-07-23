/*
 * XREFs of LdrpLoadDependentModule @ 0x180023170
 * Callers:
 *     LdrpResolveForwarder @ 0x18001B990 (LdrpResolveForwarder.c)
 *     LdrpMapAndSnapDependency @ 0x180022F1C (LdrpMapAndSnapDependency.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x180022698 (LdrpFindLoadedDllByName.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x180025600 (ApiSetResolveToHost.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180025788 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18002891C (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpLoadKnownDll @ 0x180029560 (LdrpLoadKnownDll.c)
 *     LdrpGetFullPath @ 0x180029974 (LdrpGetFullPath.c)
 *     LdrpAllocatePlaceHolder @ 0x18002AB70 (LdrpAllocatePlaceHolder.c)
 *     LdrpFreeUnicodeString @ 0x18002E1A4 (LdrpFreeUnicodeString.c)
 *     LdrpProcessWork @ 0x18002E26C (LdrpProcessWork.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x180035E30 (RtlpWakeSRWLock.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlUTF8ToUnicodeN @ 0x18005F440 (RtlUTF8ToUnicodeN.c)
 *     LdrpFreeReplacedModule @ 0x180064F8C (LdrpFreeReplacedModule.c)
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     LdrpDestroyNode @ 0x18006CA24 (LdrpDestroyNode.c)
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     LdrpUnmapModule @ 0x180070468 (LdrpUnmapModule.c)
 *     LdrpQueueWork @ 0x180070BF4 (LdrpQueueWork.c)
 *     LdrpReleaseTlsEntry @ 0x18007E45C (LdrpReleaseTlsEntry.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CDF20 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800CFB08 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D4EB4 (NtdllpReallocateStringRoutine.c)
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
  __int64 v7; // r12
  char **v9; // r13
  wchar_t *v10; // rbx
  __int64 v11; // rdx
  unsigned int v12; // esi
  int FullPath; // edi
  unsigned __int16 Length; // ax
  int v15; // r8d
  char *Buffer; // r9
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  __int64 v21; // r9
  unsigned __int64 ActiveFrame; // rcx
  unsigned int v23; // r14d
  char v24; // si
  _UNICODE_STRING *p_OriginalName; // r12
  struct _PEB *v26; // r13
  bool v27; // r15
  int v28; // ebx
  void *ApiSetMap; // rdi
  char v30; // r14
  unsigned __int16 v31; // bx
  int *SharedData; // rcx
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
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _UNICODE_STRING *v46; // rbx
  wchar_t *v47; // rdx
  wchar_t *v48; // rax
  wchar_t v49; // cx
  unsigned int v50; // r14d
  _QWORD **v51; // rdi
  char v52; // cl
  _QWORD *v53; // r15
  volatile signed __int32 *v54; // rsi
  wchar_t *v55; // rax
  _WORD *v56; // r9
  wchar_t v57; // r10
  unsigned __int16 v58; // r11
  __int64 v59; // rax
  __int16 v60; // r15
  __int64 v61; // rcx
  unsigned int v62; // ebx
  __int64 v63; // rsi
  __int64 v64; // r12
  char *v65; // rbx
  signed __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  signed __int64 v69; // rax
  int v70; // r15d
  char *v71; // rax
  char *v72; // rsi
  __int64 v73; // rcx
  _QWORD *v74; // r8
  _DWORD *v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // r14
  int v78; // edx
  int v79; // ecx
  __int64 v80; // rax
  signed __int64 v81; // rax
  char *v82; // rbx
  __int64 v83; // rdx
  char **v84; // rcx
  _QWORD *v85; // rbx
  _QWORD *v86; // rdi
  _ACTIVATION_CONTEXT *v87; // rcx
  _QWORD *v88; // rdx
  _QWORD *v89; // rax
  _QWORD *v90; // rdx
  _QWORD *v91; // rdx
  _QWORD *v92; // r8
  bool v93; // zf
  int v94; // eax
  signed __int64 v95; // r8
  __int64 v96; // rdx
  signed __int64 v97; // rdx
  signed __int64 v98; // rtt
  signed __int64 v99; // rcx
  __int64 v100; // rdx
  signed __int64 v101; // rtt
  wchar_t *v102; // rcx
  _QWORD *v103; // rbx
  wchar_t *i; // r9
  wchar_t *v105; // rcx
  __int16 v106; // cx
  int v107; // r10d
  int v108; // r11d
  int v109; // eax
  wchar_t v110; // r8
  PVOID Heap; // rax
  NTSTATUS v112; // ebx
  wchar_t *v113; // rax
  unsigned int v114; // r12d
  unsigned int v115; // eax
  void *v116; // r13
  unsigned int v117; // edi
  unsigned int v118; // eax
  void *v119; // rsi
  unsigned int v120; // r14d
  unsigned int v121; // eax
  void *v122; // r12
  const char *v123; // rax
  char *v124; // rcx
  char v125; // al
  __int64 v126; // rbx
  _DWORD *v127; // rax
  __int64 v129; // rax
  wchar_t *StringRoutine; // rax
  PULONG NewFlags; // [rsp+30h] [rbp-528h]
  __int16 v132; // [rsp+58h] [rbp-500h]
  char v133; // [rsp+60h] [rbp-4F8h] BYREF
  char v134; // [rsp+61h] [rbp-4F7h]
  int v135; // [rsp+64h] [rbp-4F4h]
  int v136; // [rsp+68h] [rbp-4F0h]
  char v137; // [rsp+6Ch] [rbp-4ECh]
  char v138; // [rsp+6Dh] [rbp-4EBh]
  char v139; // [rsp+6Eh] [rbp-4EAh]
  char v140; // [rsp+6Fh] [rbp-4E9h]
  char v141; // [rsp+70h] [rbp-4E8h]
  char v142; // [rsp+71h] [rbp-4E7h]
  wchar_t v143; // [rsp+72h] [rbp-4E6h]
  wchar_t v144; // [rsp+74h] [rbp-4E4h]
  unsigned __int16 v145; // [rsp+76h] [rbp-4E2h]
  int appended; // [rsp+78h] [rbp-4E0h]
  int v147; // [rsp+7Ch] [rbp-4DCh]
  ULONG UnicodeStringActualByteCount; // [rsp+80h] [rbp-4D8h] BYREF
  unsigned int v149; // [rsp+84h] [rbp-4D4h]
  struct _PEB *v150; // [rsp+88h] [rbp-4D0h]
  int v151; // [rsp+90h] [rbp-4C8h]
  int v152; // [rsp+94h] [rbp-4C4h] BYREF
  int v153; // [rsp+98h] [rbp-4C0h]
  int v154; // [rsp+9Ch] [rbp-4BCh]
  int v155; // [rsp+A0h] [rbp-4B8h]
  int v156; // [rsp+A4h] [rbp-4B4h]
  _UNICODE_STRING *p_String1; // [rsp+A8h] [rbp-4B0h]
  __int64 v158; // [rsp+B0h] [rbp-4A8h]
  __int64 v159; // [rsp+B8h] [rbp-4A0h]
  __int64 v160; // [rsp+C0h] [rbp-498h]
  int v161; // [rsp+C8h] [rbp-490h]
  int v162; // [rsp+CCh] [rbp-48Ch]
  int v163; // [rsp+D0h] [rbp-488h]
  int v164; // [rsp+D4h] [rbp-484h]
  int v165; // [rsp+D8h] [rbp-480h]
  int v166; // [rsp+DCh] [rbp-47Ch]
  int v167; // [rsp+E0h] [rbp-478h]
  int v168; // [rsp+E4h] [rbp-474h]
  wchar_t *v169; // [rsp+E8h] [rbp-470h]
  char **v170; // [rsp+F0h] [rbp-468h]
  __int64 v171; // [rsp+F8h] [rbp-460h]
  __int64 v172; // [rsp+100h] [rbp-458h]
  _DWORD *v173; // [rsp+108h] [rbp-450h]
  __int64 v174; // [rsp+110h] [rbp-448h]
  __int64 v175; // [rsp+118h] [rbp-440h]
  _UNICODE_STRING DestinationString; // [rsp+120h] [rbp-438h] BYREF
  unsigned __int16 v177; // [rsp+130h] [rbp-428h] BYREF
  void *Src; // [rsp+138h] [rbp-420h]
  void *v179; // [rsp+140h] [rbp-418h]
  void *v180; // [rsp+148h] [rbp-410h]
  void *v181; // [rsp+150h] [rbp-408h]
  _UNICODE_STRING *v182; // [rsp+158h] [rbp-400h]
  wchar_t *v183; // [rsp+160h] [rbp-3F8h]
  wchar_t *v184; // [rsp+168h] [rbp-3F0h]
  ULONG v185; // [rsp+170h] [rbp-3E8h]
  wchar_t *v186; // [rsp+178h] [rbp-3E0h]
  wchar_t *v187; // [rsp+180h] [rbp-3D8h]
  _WORD *v188; // [rsp+188h] [rbp-3D0h]
  char *v189; // [rsp+190h] [rbp-3C8h]
  _DWORD *v190; // [rsp+198h] [rbp-3C0h]
  char *v191; // [rsp+1A0h] [rbp-3B8h]
  wchar_t *v192; // [rsp+1A8h] [rbp-3B0h]
  __int64 v193; // [rsp+1B0h] [rbp-3A8h]
  ULONG v194; // [rsp+1B8h] [rbp-3A0h]
  __int64 v195; // [rsp+1C0h] [rbp-398h] BYREF
  int v196; // [rsp+1C8h] [rbp-390h]
  _QWORD v197[7]; // [rsp+1D0h] [rbp-388h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+210h] [rbp-348h] BYREF
  __int16 v199; // [rsp+220h] [rbp-338h]
  __int16 v200; // [rsp+222h] [rbp-336h]
  wchar_t *v201; // [rsp+228h] [rbp-330h]
  __int64 v202; // [rsp+230h] [rbp-328h]
  struct _TEB *v203; // [rsp+238h] [rbp-320h]
  __int128 v204; // [rsp+240h] [rbp-318h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+250h] [rbp-308h] BYREF
  _UNICODE_STRING String1; // [rsp+2F0h] [rbp-268h] BYREF
  _WORD v207[128]; // [rsp+300h] [rbp-258h] BYREF
  _UNICODE_STRING OriginalName; // [rsp+400h] [rbp-158h] BYREF
  _WORD v209[128]; // [rsp+410h] [rbp-148h] BYREF
  _UNKNOWN *retaddr; // [rsp+558h] [rbp+0h]

  v165 = a4;
  v6 = a3;
  v158 = a3;
  v7 = a2;
  v171 = a2;
  v9 = a5;
  v170 = a5;
  v159 = a6;
  String1.Buffer = v207;
  *(_DWORD *)&String1.Length = 0x1000000;
  v207[0] = 0;
  v10 = v209;
  OriginalName.Buffer = v209;
  v11 = 0LL;
  OriginalName.Length = 0;
  LOWORD(v12) = 256;
  OriginalName.MaximumLength = 256;
  v209[0] = 0;
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
    v10 = OriginalName.Buffer;
    LOWORD(v12) = OriginalName.MaximumLength;
    v11 = OriginalName.Length;
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
        v129 = (unsigned __int8)*Buffer++;
        if ( NlsLeadByteInfoTable[v129] )
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
  v18 = v17 + (unsigned int)(unsigned __int16)v11 + 2;
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
    if ( v10 == v209 )
    {
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v12, v11);
      v10 = StringRoutine;
      if ( StringRoutine )
      {
        LOWORD(v11) = OriginalName.Length;
        if ( !OriginalName.Length )
          goto LABEL_351;
        memmove(StringRoutine, OriginalName.Buffer, OriginalName.Length);
      }
    }
    else
    {
      v10 = (wchar_t *)NtdllpReallocateStringRoutine(v12, v10, v18, Buffer);
    }
    LOWORD(v11) = OriginalName.Length;
LABEL_351:
    if ( v10 )
    {
      OriginalName.Buffer = v10;
      OriginalName.MaximumLength = v12;
    }
    else
    {
      FullPath = -1073741801;
      v10 = OriginalName.Buffer;
      LOWORD(v12) = OriginalName.MaximumLength;
    }
  }
LABEL_7:
  if ( FullPath >= 0 )
  {
    DestinationString.Buffer = (wchar_t *)((char *)v10 + (unsigned __int16)v11);
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v12 - v11;
    RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
    OriginalName.Length += DestinationString.Length;
    v10 = OriginalName.Buffer;
  }
  v6 = v158;
LABEL_10:
  if ( FullPath < 0 )
    goto LABEL_321;
  v195 = 72LL;
  v196 = 1;
  memset(v197, 0, sizeof(v197));
  v19 = *(_QWORD *)(v6 + 136);
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  v21 = 0LL;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  v197[3] = ~ActiveFrame;
  v197[4] = ~v19;
  v197[5] = retaddr;
  if ( ActiveFrame && (*(_DWORD *)(ActiveFrame + 16) & 0x70) != 0x20 )
  {
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
    ExceptionRecord.ExceptionCode = -1072365548;
    ExceptionRecord.ExceptionFlags = 1;
    RtlRaiseException(&ExceptionRecord);
    v21 = 0LL;
    goto LABEL_17;
  }
  v197[0] = ActiveFrame;
  v197[1] = v19;
  LODWORD(v197[2]) = 32;
  if ( ActiveFrame )
  {
    if ( *(_QWORD *)(ActiveFrame + 8) == v19 )
      goto LABEL_16;
  }
  else if ( !v19 )
  {
LABEL_16:
    LODWORD(v197[2]) = 48;
    goto LABEL_17;
  }
  ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)v197;
LABEL_17:
  v132 = *(_WORD *)(v7 + 32) & 0x800;
  v135 = *(_DWORD *)(v7 + 32) & 0x1800800;
  v23 = v135;
  FullPath = 0;
  appended = 0;
  v24 = 0;
  if ( (v135 & 0x800008) == 0 )
  {
    p_OriginalName = &OriginalName;
    p_String1 = &OriginalName;
    v26 = NtCurrentPeb();
    v150 = v26;
    v27 = 1;
    v137 = 1;
    v28 = v158 + 88;
    ApiSetMap = v26->ApiSetMap;
    LdrpLogDllState(0LL, &OriginalName, 5328LL);
    FullPath = ApiSetResolveToHost(
                 (_DWORD)ApiSetMap,
                 (unsigned int)&OriginalName,
                 v28,
                 (unsigned int)&v133,
                 (__int64)&v177);
    v30 = v133;
    if ( FullPath >= 0 && v133 )
    {
      v31 = v177;
      if ( v177 )
        LdrpLogDllState(0LL, &OriginalName, 5329LL);
      else
        LdrpLogDllState(0LL, &OriginalName, 5330LL);
    }
    else
    {
      LdrpLogDllState(0LL, &OriginalName, 5331LL);
      v31 = v177;
    }
    v151 = FullPath;
    if ( !v30 )
    {
LABEL_49:
      if ( FullPath >= 0 && v27 && !LdrpIsSecureProcess )
      {
        v112 = RtlDosApplyFileIsolationRedirection_Ustr(
                 1u,
                 p_OriginalName,
                 (PUNICODE_STRING)&LdrpDefaultExtension,
                 0LL,
                 &DynamicString,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
        if ( v112 >= 0 )
        {
          v24 = 1;
          LdrpGetFullPath(&DynamicString, &String1);
          LdrpFreeUnicodeString(&DynamicString);
        }
        if ( v112 != -1072365560 )
        {
          FullPath = v112;
          v151 = v112;
        }
      }
      goto LABEL_51;
    }
    if ( !v31 )
    {
      FullPath = -1073740671;
      v151 = -1073740671;
LABEL_51:
      appended = FullPath;
      v23 = v135;
      v132 = v135;
      v9 = v170;
      v7 = v171;
      v6 = v158;
      goto LABEL_52;
    }
    String1.Length = 0;
    SharedData = (int *)NtCurrentPeb()->SharedData;
    if ( SharedData )
    {
      v166 = *SharedData;
      if ( v166 )
      {
        v33 = (__int64)NtCurrentPeb()->SharedData + 30;
        goto LABEL_27;
      }
    }
    else
    {
      v166 = 0;
    }
    v33 = 2147352624LL;
LABEL_27:
    v193 = v33;
    v174 = 0LL;
    v175 = v33;
    if ( v33 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( *(_WORD *)(v33 + 2 * v34) );
      v35 = 2 * v34;
      v172 = v35;
      v36 = v35;
      if ( v35 >= 0xFFFE )
      {
        LOWORD(v35) = -4;
        v172 = 65532LL;
        v36 = -4;
      }
      LOWORD(v174) = v35;
      WORD1(v174) = v36 + 2;
    }
    else
    {
      LOWORD(v35) = v174;
    }
    v167 = 0;
    if ( (_WORD)v35 )
    {
      v37 = (unsigned __int16)v35 + 2;
      v38 = 0;
      v153 = 0;
      if ( v37 > String1.MaximumLength )
      {
        if ( v37 <= 0xFFFE )
        {
          v114 = ((unsigned __int16)v35 + 65) & 0xFFFFFFC0;
          v115 = v114;
          if ( v114 > 0xFFFE )
          {
            LOWORD(v114) = -2;
            v115 = 65534;
          }
          if ( String1.Buffer == v207 )
          {
            v116 = (void *)NtdllpAllocateStringRoutine(v115, String1.Buffer);
            v179 = v116;
            if ( v116 && String1.Length )
              memmove(v116, String1.Buffer, String1.Length);
          }
          else
          {
            v116 = (void *)NtdllpReallocateStringRoutine(v115, String1.Buffer, ActivationContextStackPointer, v21);
            v179 = v116;
          }
          if ( v116 )
          {
            String1.Buffer = (wchar_t *)v116;
            String1.MaximumLength = v114;
          }
          else
          {
            v38 = -1073741801;
            v153 = -1073741801;
          }
          v26 = v150;
          p_OriginalName = p_String1;
        }
        else
        {
          v38 = -1073741562;
          v153 = -1073741562;
        }
      }
      v167 = v38;
      if ( v38 >= 0 )
      {
        memmove((char *)String1.Buffer + String1.Length, (const void *)v33, (unsigned __int16)v35);
        String1.Length += v35;
        String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
      }
    }
    v168 = 0;
    v39 = String1.Length + 22;
    LODWORD(v160) = v39;
    v40 = 0;
    v154 = 0;
    if ( v39 > String1.MaximumLength )
    {
      if ( v39 <= 0xFFFE )
      {
        v117 = (String1.Length + 85) & 0xFFFFFFC0;
        LODWORD(v160) = v117;
        v118 = v117;
        if ( v117 > 0xFFFE )
        {
          LOWORD(v117) = -2;
          LODWORD(v160) = 65534;
          v118 = 65534;
        }
        if ( String1.Buffer == v207 )
        {
          v119 = (void *)NtdllpAllocateStringRoutine(v118, String1.Buffer);
          v180 = v119;
          if ( v119 && String1.Length )
            memmove(v119, String1.Buffer, String1.Length);
        }
        else
        {
          v119 = (void *)NtdllpReallocateStringRoutine(v118, String1.Buffer, ActivationContextStackPointer, v21);
          v180 = v119;
        }
        if ( v119 )
        {
          String1.Buffer = (wchar_t *)v119;
          String1.MaximumLength = v117;
        }
        else
        {
          v40 = -1073741801;
          v154 = -1073741801;
        }
      }
      else
      {
        v40 = -1073741562;
        v154 = -1073741562;
      }
    }
    v168 = v40;
    if ( v40 >= 0 )
    {
      v41 = (char *)String1.Buffer + String1.Length;
      *(_OWORD *)v41 = *(_OWORD *)SlashSystem32SlashString.Buffer;
      *((_DWORD *)v41 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
      String1.Length += 20;
      String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
    }
    v161 = 0;
    v42 = v177;
    v43 = v177;
    v44 = v177 + String1.Length + 2;
    LODWORD(v150) = v44;
    FullPath = 0;
    v155 = 0;
    if ( v44 > String1.MaximumLength )
    {
      if ( v44 <= 0xFFFE )
      {
        v120 = (v44 + 63) & 0xFFFFFFC0;
        LODWORD(v150) = v120;
        v121 = v120;
        if ( v120 > 0xFFFE )
        {
          LOWORD(v120) = -2;
          LODWORD(v150) = 65534;
          v121 = 65534;
        }
        if ( String1.Buffer == v207 )
        {
          v122 = (void *)NtdllpAllocateStringRoutine(v121, String1.Buffer);
          v181 = v122;
          if ( v122 && String1.Length )
            memmove(v122, String1.Buffer, String1.Length);
        }
        else
        {
          v122 = (void *)NtdllpReallocateStringRoutine(v121, String1.Buffer, ActivationContextStackPointer, v21);
          v181 = v122;
        }
        if ( v122 )
        {
          String1.Buffer = (wchar_t *)v122;
          String1.MaximumLength = v120;
        }
        else
        {
          FullPath = -1073741801;
          v155 = -1073741801;
        }
        p_OriginalName = p_String1;
      }
      else
      {
        FullPath = -1073741562;
        v155 = -1073741562;
      }
    }
    v161 = FullPath;
    if ( FullPath >= 0 )
    {
      memmove((char *)String1.Buffer + String1.Length, Src, v42);
      String1.Length += v43;
      String1.Buffer[(unsigned __int64)String1.Length >> 1] = 0;
    }
    v151 = FullPath;
    if ( FullPath >= 0 )
    {
      ProcessParameters = v26->ProcessParameters;
      v27 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
      v137 = v27;
      p_OriginalName = &String1;
      p_String1 = &String1;
    }
    v24 = 0;
    goto LABEL_49;
  }
LABEL_52:
  if ( FullPath >= 0 )
  {
    v46 = &OriginalName;
    v182 = &OriginalName;
    if ( !String1.Length )
    {
      v113 = (wchar_t *)((char *)OriginalName.Buffer + OriginalName.Length);
      v183 = v113;
      while ( 1 )
      {
        v183 = --v113;
        if ( v113 < OriginalName.Buffer )
          break;
        if ( *v113 == 92 || *v113 == 47 )
        {
          v138 = 0;
          if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(&OriginalName) != 5 )
          {
            FullPath = LdrpGetFullPath(&OriginalName, &String1);
            appended = FullPath;
            if ( FullPath >= 0 )
            {
              v23 |= 0x600u;
              v132 = v23;
              v135 = v23;
            }
            goto LABEL_58;
          }
LABEL_224:
          appended = LdrpAppendUnicodeStringToFilenameBuffer(
                       &String1,
                       &OriginalName,
                       ActivationContextStackPointer,
                       v21);
          FullPath = appended;
          goto LABEL_58;
        }
      }
      v138 = 1;
      v23 |= 0x20u;
      v132 = v23;
      v135 = v23;
      goto LABEL_224;
    }
    if ( (LdrpDebugFlags & 5) != 0 )
    {
      v123 = "SxS";
      if ( !v24 )
        v123 = "API set";
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2680,
        (unsigned int)"LdrpPreprocessDllName",
        2,
        (__int64)"DLL %wZ was redirected to %wZ by %s\n",
        &OriginalName,
        &String1,
        v123);
    }
    v23 |= 0x200u;
    v132 = v23;
    v135 = v23;
    if ( v24 )
    {
      v23 |= 4u;
      v132 = v23;
      v135 = v23;
    }
    v46 = &String1;
    v182 = &String1;
LABEL_58:
    if ( FullPath >= 0 )
    {
      v47 = v46->Buffer;
      v48 = (wchar_t *)((char *)v47 + v46->Length);
      v184 = v48;
      v139 = 0;
      while ( 1 )
      {
        v184 = --v48;
        if ( v48 < v47 )
        {
LABEL_225:
          FullPath = LdrpAppendUnicodeStringToFilenameBuffer(
                       &String1,
                       &LdrpDefaultExtension,
                       ActivationContextStackPointer,
                       v21);
          appended = FullPath;
          goto LABEL_189;
        }
        v49 = *v48;
        if ( *v48 == 46 )
          break;
        if ( v49 == 47 || v49 == 92 )
          goto LABEL_225;
      }
      v139 = 1;
      v102 = (wchar_t *)((char *)String1.Buffer + String1.Length);
      v192 = v102;
      while ( 1 )
      {
        v192 = --v102;
        if ( v102 < String1.Buffer || *v102 != 46 )
          break;
        String1.Length -= 2;
      }
      v102[1] = 0;
    }
  }
LABEL_189:
  if ( FullPath < 0 )
  {
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LODWORD(NewFlags) = FullPath;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        2738,
        (unsigned int)"LdrpPreprocessDllName",
        0,
        (__int64)"LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
        &OriginalName,
        NewFlags);
    }
    if ( (LdrpDebugFlags & 0x10) != 0 )
      __debugbreak();
  }
  v136 = FullPath;
  if ( FullPath < 0 )
    goto LABEL_320;
  if ( (v23 & 0x800000) != 0 )
  {
    FullPath = LdrpFindOrPrepareEnclaveModule(
                 *(_QWORD *)(v7 + 168),
                 &String1,
                 *(_QWORD *)(v7 + 16),
                 v23,
                 v6,
                 v9,
                 *(_QWORD *)(v7 + 40));
    v136 = FullPath;
    goto LABEL_320;
  }
  v103 = (_QWORD *)v159;
  if ( !*(_QWORD *)v159 )
  {
    v185 = NtdllBaseTag + 2621440;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
    *v103 = Heap;
    if ( !Heap )
    {
      FullPath = -1073741801;
      v136 = -1073741801;
      goto LABEL_320;
    }
  }
  v63 = *(_QWORD *)(v7 + 40);
  v172 = v63;
  v62 = v23;
  LODWORD(v150) = v23;
  v64 = *(_QWORD *)(v7 + 16);
  v160 = v64;
  *v9 = 0LL;
  v152 = 0;
  if ( (v23 & 0x20) != 0 )
  {
    FullPath = LdrpFindLoadedDllByName(&String1, 0LL, v23, (__int64)v9, &v152);
    v147 = FullPath;
    v60 = v132;
    goto LABEL_98;
  }
  if ( (v23 & 0x200) == 0 )
  {
    v147 = -1073741515;
    v60 = v132;
    goto LABEL_164;
  }
  v169 = (wchar_t *)((char *)String1.Buffer + String1.Length);
  for ( i = v169 - 1; ; --i )
  {
    v105 = i;
    v169 = i;
    if ( i <= String1.Buffer )
      break;
    if ( *i == 92 || *i == 47 )
    {
      ++i;
      v169 = v105 + 1;
      LOWORD(v105) = (_WORD)v105 + 2;
      break;
    }
  }
  v106 = (_WORD)v105 - LOWORD(String1.Buffer);
  v201 = i;
  v199 = String1.Length - v106;
  v200 = String1.MaximumLength - v106;
  v107 = 0;
  v163 = 0;
  v186 = i;
  v149 = 0;
  v108 = (unsigned __int16)(String1.Length - v106) >> 1;
  v162 = v108;
  while ( 1 )
  {
    v109 = v108--;
    v162 = v108;
    if ( !v109 )
      break;
    v110 = *i++;
    v186 = i;
    if ( v110 < 0x61u )
      goto LABEL_206;
    if ( v110 <= 0x7Au )
    {
      v110 -= 32;
LABEL_206:
      v143 = v110;
      goto LABEL_207;
    }
    if ( !Nls844UnicodeUpcaseTable || v110 < 0xC0u )
      goto LABEL_206;
    v110 += *(_WORD *)(Nls844UnicodeUpcaseTable
                     + 2LL
                     * ((v110 & 0xF)
                      + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                          + 2LL
                                                          * (((v110 >> 4) & 0xF)
                                                           + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                               + 2
                                                                                               * ((unsigned __int64)v110 >> 8))))));
    v143 = v110;
LABEL_207:
    v107 = v110 + 65599 * v107;
    v163 = v107;
  }
  v149 = v107;
  v50 = v107;
  if ( !v107 )
  {
    v50 = 0x80000000;
    v149 = 0x80000000;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v51 = (_QWORD **)((char *)&LdrpHashTable + 16 * (v50 & 0x1F));
  v52 = 0;
  v53 = *v51;
  while ( 2 )
  {
    if ( v53 == v51 )
    {
      v60 = v132;
      v9 = v170;
      goto LABEL_90;
    }
    v54 = (volatile signed __int32 *)(v53 - 14);
    if ( v50 != *((_DWORD *)v53 + 38) || ((unsigned __int8)v150 & 8) != 0 && (v54[26] & 1) == 0 )
    {
LABEL_84:
      v53 = (_QWORD *)*v53;
      continue;
    }
    break;
  }
  if ( String1.Length != *((unsigned __int16 *)v54 + 36) )
  {
LABEL_83:
    v52 = 0;
    goto LABEL_84;
  }
  v55 = String1.Buffer;
  v187 = String1.Buffer;
  v56 = (_WORD *)*((_QWORD *)v54 + 10);
  v188 = v56;
  while ( v55 < (wchar_t *)((char *)String1.Buffer + String1.Length) )
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
      v144 = v57;
      goto LABEL_80;
    }
    if ( !Nls844UnicodeUpcaseTable || v57 < 0xC0u )
      goto LABEL_79;
    v57 += *(_WORD *)(Nls844UnicodeUpcaseTable
                    + 2LL
                    * ((v57 & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                         + 2LL
                                                         * (((v57 >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                              + 2
                                                                                              * ((unsigned __int64)v57 >> 8))))));
    v144 = v57;
LABEL_80:
    if ( v58 < 0x61u )
      goto LABEL_81;
    if ( v58 <= 0x7Au )
    {
      v58 -= 32;
LABEL_81:
      v145 = v58;
      goto LABEL_82;
    }
    if ( !Nls844UnicodeUpcaseTable || v58 < 0xC0u )
      goto LABEL_81;
    v58 += *(_WORD *)(Nls844UnicodeUpcaseTable
                    + 2LL
                    * ((v58 & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                         + 2LL
                                                         * (((v58 >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                              + 2
                                                                                              * ((unsigned __int64)v58 >> 8))))));
    v145 = v58;
LABEL_82:
    if ( v57 != v58 )
      goto LABEL_83;
LABEL_75:
    v187 = ++v55;
    v188 = ++v56;
  }
  v52 = 1;
  v59 = *((_QWORD *)v54 + 19);
  if ( *(_DWORD *)(v59 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v59 - 56LL) & 0x20) != 0 )
  {
    v140 = 1;
    v60 = v132;
  }
  else
  {
    v140 = 0;
    _InterlockedIncrement(v54 + 69);
    v60 = v135;
  }
  v9 = v170;
  *v170 = (char *)v54;
LABEL_90:
  if ( v52 )
  {
    FullPath = 0;
    v152 = *(_DWORD *)(*((_QWORD *)*v9 + 19) + 56LL);
  }
  else
  {
    FullPath = -1073741515;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( FullPath < 0 )
    v156 = 3;
  else
    v156 = 0;
  if ( RtlGetCurrentServiceSessionId() )
  {
    v61 = (__int64)NtCurrentPeb()->SharedData + 554;
    v60 = v135;
  }
  else
  {
    v61 = 2147353476LL;
  }
  if ( *(_BYTE *)v61 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v124 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v124 & 0x20) != 0 )
        LdrpLogEtwEvent(5280, 0, 0, (unsigned __int8)v156, (__int64)&String1, 0LL);
    }
    v60 = v135;
  }
  v147 = FullPath;
  v62 = (unsigned int)v150;
  v63 = v172;
  LODWORD(v64) = v160;
LABEL_98:
  if ( FullPath != -1073741515 )
  {
    if ( v152 < 0 )
    {
      v125 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        v204 = *(_OWORD *)(*v9 + 72);
        LODWORD(NewFlags) = v152;
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrmap.c",
          2945,
          (unsigned int)"LdrpFindOrPrepareLoadingModule",
          0,
          (__int64)"Found circular dependent DLL: \"%wZ\" that failed to load previously, ModuleState: %d\n",
          &v204,
          NewFlags);
        v125 = LdrpDebugFlags;
      }
      if ( (v125 & 0x10) != 0 )
        __debugbreak();
      FullPath = -1073741595;
      v147 = -1073741595;
      LdrpDereferenceModule(*v9);
      *v9 = 0LL;
    }
    else
    {
      v65 = *v9;
      v164 = 0;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v67 = *((_QWORD *)v65 + 19);
      v68 = *(_DWORD *)(v67 + 24);
      if ( v68 != -1 )
      {
        if ( v68 )
        {
          *(_DWORD *)(v67 + 24) = v68 + 1;
        }
        else
        {
          v203 = NtCurrentTeb();
          v66 = 4096LL;
          if ( (v203->SameTebFlags & 0x1000) != 0 )
            ++*(_DWORD *)(v67 + 28);
          else
            v164 = -1073741515;
        }
      }
      v69 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
      if ( v69 != 1 )
      {
        do
        {
          v99 = v69 & 6;
          v100 = 3LL;
          if ( v99 != 2 )
            v100 = -1LL;
          v66 = v69 + v100;
          v101 = v69;
          v69 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v66, v69);
        }
        while ( v101 != v69 );
        if ( v99 == 2 )
          RtlpWakeSRWLock(&LdrpModuleDatatableLock, v66, 0LL);
      }
      v60 = v135;
    }
    goto LABEL_103;
  }
LABEL_164:
  FullPath = LdrpAllocatePlaceHolder((unsigned int)&String1, v64, v62, v165, v158, (__int64)v9, v63);
  v147 = FullPath;
  if ( FullPath >= 0 )
  {
    FullPath = LdrpLoadKnownDll(*((_QWORD *)*v9 + 22));
    v147 = FullPath;
  }
LABEL_103:
  v136 = FullPath;
  if ( *v9 )
  {
    v70 = v60 & 0x400;
    if ( v70 && FullPath == -1073741515 )
    {
      v126 = *((_QWORD *)*v9 + 22);
      v202 = v126;
      *(_DWORD *)(v126 + 32) |= 0x4000000u;
      LOBYTE(v66) = 1;
      LdrpProcessWork(v126, v66);
      FullPath = **(_DWORD **)(v126 + 40);
      v136 = FullPath;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v71 = *v9;
    v72 = v71;
    v189 = *v9;
    if ( v71 )
    {
      v73 = *((_QWORD *)v71 + 22);
      if ( v73 )
      {
        if ( (*(_DWORD *)(v73 + 32) & 0x80000) == 0 && *(char **)(v73 + 56) != v71 )
        {
          v72 = *(char **)(v73 + 56);
          v189 = v72;
          *(_QWORD *)(v73 + 56) = v71;
        }
      }
    }
    v191 = v72;
    v74 = (_QWORD *)v159;
    *(_DWORD *)(*(_QWORD *)v159 + 24LL) &= ~1u;
    v75 = (_DWORD *)*v74;
    v173 = (_DWORD *)*v74;
    v7 = v171;
    v76 = *((_QWORD *)v72 + 19);
    v77 = *(_QWORD *)(*(_QWORD *)(v171 + 56) + 152LL);
    if ( v77 == v76 )
      goto LABEL_111;
    if ( *(_DWORD *)(v76 + 56) != 9 )
      goto LABEL_145;
    if ( *(_DWORD *)(v76 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v76 - 56LL) & 0x20) != 0 )
    {
      v141 = 1;
      goto LABEL_111;
    }
    v141 = 0;
LABEL_145:
    v88 = *(_QWORD **)(v77 + 40);
    if ( !v88 )
    {
LABEL_149:
      v134 = 0;
      if ( !v75 )
      {
        v194 = NtdllBaseTag + 2359296;
        v127 = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 2359296, 0x20uLL);
        v75 = v127;
        v173 = v127;
        if ( !v127 )
        {
          MEMORY[0] = -1073741801;
          v75 = 0LL;
          v190 = 0LL;
          v74 = (_QWORD *)v159;
          goto LABEL_114;
        }
        v127[6] |= 1u;
      }
      v90 = *(_QWORD **)(v77 + 40);
      if ( v90 )
      {
        *(_QWORD *)v75 = *v90;
        *v90 = v75;
      }
      else
      {
        *(_QWORD *)v75 = v75;
      }
      *(_QWORD *)(v77 + 40) = v75;
      *((_QWORD *)v75 + 1) = v76;
      v91 = v75 + 4;
      v92 = *(_QWORD **)(v76 + 48);
      if ( v92 )
      {
        *v91 = *v92;
        *v92 = v91;
      }
      else
      {
        *v91 = v91;
      }
      *(_QWORD *)(v76 + 48) = v91;
      v93 = (v75[6] & 1) == 0;
      v94 = v75[6] & 1;
      *((_QWORD *)v75 + 3) = v77;
      if ( !v93 )
        v75[6] = v94 | v77 & 0xFFFFFFFE;
      v75 = 0LL;
      v173 = 0LL;
      v74 = (_QWORD *)v159;
      goto LABEL_113;
    }
    v89 = *(_QWORD **)(v77 + 40);
    while ( 1 )
    {
      v89 = (_QWORD *)*v89;
      if ( v89[1] == v76 )
        break;
      if ( v89 == v88 )
        goto LABEL_149;
    }
LABEL_111:
    v134 = 1;
    v78 = *(_DWORD *)(v76 + 24);
    if ( (unsigned int)(v78 - 2) <= 0xFFFFFFFC )
      *(_DWORD *)(v76 + 24) = v78 - 1;
LABEL_113:
    v190 = v75;
LABEL_114:
    *v74 = v75;
    if ( FullPath != -1073741515 )
    {
      if ( FullPath != -1073741267 )
        goto LABEL_116;
      v136 = 0;
      goto LABEL_117;
    }
    FullPath = -1073741515;
    if ( !v70 )
    {
      LdrpQueueWork(*((_QWORD *)v72 + 22));
      v136 = 0;
      v74 = (_QWORD *)v159;
      goto LABEL_117;
    }
LABEL_116:
    if ( FullPath >= 0 )
    {
LABEL_117:
      v79 = *(_DWORD *)(v7 + 100);
      if ( v79 )
      {
        if ( *v74 || *(int *)(*((_QWORD *)v72 + 19) + 56LL) >= 2 )
          *(_DWORD *)(v7 + 100) = v79 - 1;
      }
      else if ( *(int *)(*((_QWORD *)v72 + 19) + 56LL) < 2 )
      {
        *(_QWORD *)(v7 + 80) = v72;
        *(_DWORD *)(v7 + 100) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 152LL) + 56LL) = 3;
        v136 = 259;
      }
    }
    v80 = *((_QWORD *)v72 + 19);
    if ( *(_DWORD *)(v80 + 24) == -1 || (*(_BYTE *)(*(_QWORD *)v80 - 56LL) & 0x20) != 0 )
    {
      v142 = 1;
    }
    else
    {
      v142 = 0;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v72 + 69, 0xFFFFFFFF) == 1 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        v83 = *((_QWORD *)v72 + 20);
        v84 = (char **)*((_QWORD *)v72 + 21);
        if ( *(char **)(v83 + 8) != v72 + 160 || *v84 != v72 + 160 )
          __fastfail(3u);
        *v84 = (char *)v83;
        *(_QWORD *)(v83 + 8) = v84;
        v85 = (_QWORD *)*((_QWORD *)v72 + 19);
        v86 = (_QWORD *)*v85;
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        if ( *((_WORD *)v72 + 55) )
          LdrpReleaseTlsEntry(v72, 0LL);
        LdrpUnmapModule(v72);
        v87 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v72 + 17);
        if ( (unsigned __int64)&v87[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
          RtlReleaseActivationContext(v87);
        if ( *((_QWORD *)v72 + 10) )
          LdrpFreeUnicodeString(v72 + 72);
        RtlFreeHeap(LdrpHeap, 0, v72);
        if ( v86 == v85 )
          LdrpDestroyNode(v85);
      }
    }
    v81 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, 0LL, 1LL);
    if ( v81 != 1 )
    {
      do
      {
        v95 = v81 & 6;
        v96 = 3LL;
        if ( v95 != 2 )
          v96 = -1LL;
        v97 = v81 + v96;
        v98 = v81;
        v81 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpModuleDatatableLock, v97, v81);
      }
      while ( v98 != v81 );
      if ( v95 == 2 )
        RtlpWakeSRWLock(&LdrpModuleDatatableLock, v97, 0LL);
    }
    v82 = v191;
    if ( v191 != *v9 )
    {
      LdrpFreeReplacedModule(*v9);
      *v9 = v82;
    }
    FullPath = v136;
  }
  else
  {
    v7 = v171;
  }
LABEL_320:
  RtlDeactivateActivationContextUnsafeFast(&v195);
  v10 = OriginalName.Buffer;
LABEL_321:
  if ( FullPath < 0 )
  {
    *v9 = 0LL;
    **(_DWORD **)(v7 + 40) = FullPath;
    v10 = OriginalName.Buffer;
  }
  if ( v209 != v10 )
    NtdllpFreeStringRoutine(v10);
  OriginalName.Buffer = v209;
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  v209[0] = 0;
  if ( v207 != String1.Buffer )
    NtdllpFreeStringRoutine(String1.Buffer);
  return (unsigned int)FullPath;
}
