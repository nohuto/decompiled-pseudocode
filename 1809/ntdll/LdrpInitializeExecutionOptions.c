/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x1800D30E0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180056530 (RtlQueryEnvironmentVariable_U.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079278 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlUnicodeStringToInteger @ 0x180079590 (RtlUnicodeStringToInteger.c)
 *     RtlQueryApplicationKeyOption @ 0x18007EB4C (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x18007ECD0 (RtlQueryImageFileKeyOption.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0540 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A5230 (_alloca_probe.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpConstructModernAppKeyName @ 0x1800D27AC (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2B8C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D2FD0 (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D6978 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800D6B78 (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D6C5C (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D6D84 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DB828 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800E2F18 (RtlOpenModernAppOptionsKey.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x18010C144 (RtlSetLowFragHeapGlobalFlags.c)
 */

__int64 __fastcall LdrpInitializeExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        HANDLE *a5,
        __int64 a6)
{
  HANDLE *v6; // r15
  HANDLE *v7; // r14
  unsigned __int8 v9; // r13
  HANDLE v10; // rbx
  unsigned int v11; // edi
  char v12; // r12
  int v13; // eax
  void *v14; // r14
  ULONG v15; // ecx
  char v16; // al
  _BYTE *v17; // r14
  NTSTATUS v18; // eax
  NTSTATUS v19; // edi
  void *v20; // r15
  int v21; // ecx
  ULONG v22; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v25; // eax
  unsigned int v26; // eax
  NTSTATUS v27; // eax
  int v28; // edi
  _BYTE *v29; // rdi
  NTSTATUS v30; // eax
  void *v31; // r14
  int v32; // ecx
  ULONG v33; // ebx
  void *v34; // rcx
  PVOID v35; // rax
  NTSTATUS v36; // eax
  unsigned int v37; // eax
  __int64 i; // rdi
  const WCHAR *v39; // rdx
  _BYTE *v40; // rax
  _BYTE *v41; // rdi
  NTSTATUS v42; // eax
  void *v43; // r14
  int v44; // ecx
  ULONG v45; // ebx
  void *v46; // rcx
  PVOID v47; // rax
  NTSTATUS v48; // eax
  unsigned int v49; // eax
  ULONG v50; // ecx
  void *v51; // r14
  ULONG v52; // edi
  int v53; // eax
  __int64 v54; // rdx
  unsigned __int16 *v55; // r12
  HANDLE v56; // r15
  _BYTE *v57; // r14
  NTSTATUS v58; // eax
  NTSTATUS v59; // edi
  void *v60; // r12
  ULONG v61; // ebx
  void *v62; // rcx
  PVOID v63; // rax
  NTSTATUS v64; // eax
  int v65; // ecx
  unsigned int v66; // eax
  __int64 v67; // rcx
  char v68; // al
  ULONG Length; // [rsp+20h] [rbp-E0h]
  ULONG Lengtha; // [rsp+20h] [rbp-E0h]
  ULONG Lengthb; // [rsp+20h] [rbp-E0h]
  __int64 v73; // [rsp+30h] [rbp-D0h]
  __int64 v74; // [rsp+30h] [rbp-D0h]
  __int64 v75; // [rsp+30h] [rbp-D0h]
  __int64 v76; // [rsp+30h] [rbp-D0h]
  __int64 v77; // [rsp+30h] [rbp-D0h]
  __int64 v78; // [rsp+30h] [rbp-D0h]
  __int64 v79; // [rsp+30h] [rbp-D0h]
  __int64 v80; // [rsp+30h] [rbp-D0h]
  __int64 v81; // [rsp+30h] [rbp-D0h]
  __int64 v82; // [rsp+30h] [rbp-D0h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v86; // [rsp+54h] [rbp-ACh] BYREF
  ULONG v87; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v88; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v89; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v90; // [rsp+68h] [rbp-98h]
  HANDLE *v91; // [rsp+70h] [rbp-90h]
  void *v92; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v93; // [rsp+80h] [rbp-80h] BYREF
  HANDLE *v94; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v96; // [rsp+98h] [rbp-68h] BYREF
  int v97; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING ValueName; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING String; // [rsp+B8h] [rbp-48h] BYREF
  _UNICODE_STRING v100; // [rsp+C8h] [rbp-38h] BYREF
  _UNICODE_STRING v101; // [rsp+D8h] [rbp-28h] BYREF
  _UNICODE_STRING v102; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v103; // [rsp+F8h] [rbp-8h]
  __int64 v104; // [rsp+100h] [rbp+0h]
  _UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v108[1024]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v109[1024]; // [rsp+950h] [rbp+850h] BYREF
  _BYTE v110[1024]; // [rsp+D50h] [rbp+C50h] BYREF
  char v111; // [rsp+1150h] [rbp+1050h] BYREF
  WCHAR SourceString[200]; // [rsp+1170h] [rbp+1070h] BYREF

  v6 = a4;
  v7 = a5;
  v103 = a6;
  v9 = 0;
  v91 = a4;
  *a4 = 0LL;
  v10 = 0LL;
  *a5 = 0LL;
  v11 = 0;
  v104 = a3;
  v12 = 1;
  v90 = a1;
  v94 = a5;
  KeyHandle = 0LL;
  Handle = 0LL;
  v93 = 0;
  v92 = 0LL;
  v96 = 0LL;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) != 0 )
    goto LABEL_123;
  v13 = RtlpOpenImageFileOptionsKeyEx(v90, 9LL, 0, &KeyHandle);
  v10 = KeyHandle;
  if ( v13 < 0 )
    goto LABEL_123;
  *v6 = KeyHandle;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && LdrpConstructModernAppKeyName(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)RtlOpenModernAppOptionsKey(&DestinationString, v10, &v92) >= 0 )
      *a5 = v92;
  }
  v14 = v92;
  RtlQueryApplicationKeyOption(
    v92,
    v10,
    (__int64)L"DisableHeapLookaside",
    4LL,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v73,
    0LL);
  RtlQueryApplicationKeyOption(v14, v10, (__int64)L"FrontEndHeapDebugOptions", 4LL, (__int64)&v93, 4, v74, 0LL);
  RtlQueryApplicationKeyOption(
    v14,
    v10,
    (__int64)L"ShutdownFlags",
    4LL,
    (__int64)&RtlpShutdownProcessFlags,
    4,
    v75,
    0LL);
  Value = 0;
  RtlQueryApplicationKeyOption(v14, v10, (__int64)L"UnloadEventTraceDepth", 4LL, (__int64)&Value, 4, v76, 0LL);
  v15 = RtlpUnloadEventTraceExNumber;
  if ( Value )
    v15 = Value;
  Value = 0;
  RtlpUnloadEventTraceExNumber = v15;
  RtlQueryApplicationKeyOption(v14, v10, (__int64)L"MaxLoaderThreads", 4LL, (__int64)&Value, 4, v77, 0LL);
  if ( Value )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = Value;
  Value = 0;
  RtlQueryApplicationKeyOption(v92, v10, (__int64)L"UseImpersonatedDeviceMap", 4LL, (__int64)&Value, 4, v78, 0LL);
  v16 = LdrpUseImpersonatedDeviceMap;
  if ( Value )
    v16 = 1;
  LdrpUseImpersonatedDeviceMap = v16;
  Value = 0;
  RtlQueryApplicationKeyOption(v92, v10, (__int64)L"TracingFlags", 4LL, (__int64)&Value, 4, v79, 0LL);
  if ( Value )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), Value);
    v10 = KeyHandle;
  }
  Value = 0;
  if ( (int)RtlQueryApplicationKeyOption(
              v92,
              v10,
              (__int64)L"RaiseExceptionOnPossibleDeadlock",
              4LL,
              (__int64)&Value,
              4,
              v80,
              0LL) >= 0 )
    RtlpRaiseExceptionOnPossibleDeadlock = Value != 0;
  Value = 0;
  if ( RtlInitUnicodeStringEx(&ValueName, L"CFGOptions") >= 0 )
  {
    v17 = KeyValueInformation;
    v18 = NtQueryValueKey(v10, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength);
    v19 = v18;
    if ( v18 >= 0 )
    {
      v20 = 0LL;
LABEL_20:
      v21 = *((_DWORD *)v17 + 1);
      if ( ((v21 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v21 )
        {
          case 4:
            if ( *((_DWORD *)v17 + 2) == 4 )
            {
              ResultLength = 4;
              Value = *((_DWORD *)v17 + 3);
            }
            else
            {
              v19 = -1073741820;
            }
            break;
          case 11:
            v19 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)&Value & 3) != 0 )
            {
              v19 = -2147483646;
            }
            else
            {
              ResultLength = 4;
              ValueName.Buffer = (wchar_t *)(v17 + 12);
              ValueName.Length = *((_WORD *)v17 + 4);
              ValueName.MaximumLength = *((_WORD *)v17 + 4);
              v19 = RtlUnicodeStringToInteger(&ValueName, 0, &Value);
            }
            break;
          default:
            v19 = -1073741788;
            break;
        }
      }
      else if ( v21 == 4 )
      {
        ResultLength = *((_DWORD *)v17 + 2);
        v26 = *((_DWORD *)v17 + 2);
        if ( v26 > 4 )
          v19 = -2147483643;
        else
          memmove(&Value, v17 + 12, v26);
      }
      else
      {
        v19 = -1073741788;
      }
LABEL_43:
      if ( v20 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
        v10 = KeyHandle;
      }
      v6 = v91;
      goto LABEL_46;
    }
    if ( v18 != -2147483643 )
    {
LABEL_46:
      if ( v19 >= 0 && (Value & 1) != 0 )
      {
        LdrProtectMrdata(0);
        RtlGuardAllowSuppressedCalls = 1;
        LdrProtectMrdata(1);
      }
      goto LABEL_50;
    }
    while ( 1 )
    {
      v22 = ResultLength;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
      v20 = Heap;
      if ( !Heap )
        break;
      v17 = Heap;
      Length = v22;
      v10 = KeyHandle;
      v25 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v19 = v25;
      if ( v25 >= 0 )
        goto LABEL_20;
      if ( v25 != -2147483643 )
        goto LABEL_43;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
    }
    v10 = KeyHandle;
    v6 = v91;
  }
LABEL_50:
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801193D0;
    ObjectAttributes.RootDirectory = v10;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v27 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1u, &ObjectAttributes);
    v28 = v27;
    if ( v27 == -1073741772 )
    {
      LdrpLargePageDllKeyHandle = 0LL;
    }
    else if ( v27 < 0 )
    {
      v7 = v94;
      goto LABEL_186;
    }
  }
  if ( RtlInitUnicodeStringEx(&String, L"MinimumStackCommitInBytes") >= 0 )
  {
    v29 = v108;
    v30 = NtQueryValueKey(v10, &String, KeyValuePartialInformation, v108, 0x400u, &v86);
    if ( v30 < 0 )
    {
      if ( v30 != -2147483643 )
        goto LABEL_76;
      while ( 1 )
      {
        v33 = v86;
        v34 = NtCurrentPeb()->ProcessHeap;
        if ( !v34 )
          goto LABEL_75;
        v35 = RtlAllocateHeap(v34, NtdllBaseTag + 1572864, v86);
        v31 = v35;
        if ( !v35 )
          goto LABEL_75;
        v29 = v35;
        Lengtha = v33;
        v10 = KeyHandle;
        v36 = NtQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, v35, Lengtha, &v86);
        if ( v36 >= 0 )
          goto LABEL_57;
        if ( v36 != -2147483643 )
          goto LABEL_73;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v29);
      }
    }
    v31 = 0LL;
LABEL_57:
    v32 = *((_DWORD *)v29 + 1);
    if ( ((v32 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v32 == 4 )
      {
        if ( *((_DWORD *)v29 + 2) == 4 )
        {
          v86 = 4;
          Value = *((_DWORD *)v29 + 3);
        }
      }
      else if ( v32 == 1 && ((unsigned __int8)&Value & 3) == 0 )
      {
        v86 = 4;
        String.Buffer = (wchar_t *)(v29 + 12);
        String.Length = *((_WORD *)v29 + 4);
        String.MaximumLength = *((_WORD *)v29 + 4);
        RtlUnicodeStringToInteger(&String, 0, &Value);
      }
    }
    else if ( v32 == 4 )
    {
      v86 = *((_DWORD *)v29 + 2);
      v37 = *((_DWORD *)v29 + 2);
      if ( v37 <= 4 )
        memmove(&Value, v29 + 12, v37);
    }
LABEL_73:
    if ( v31 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v31);
LABEL_75:
      v10 = KeyHandle;
    }
  }
LABEL_76:
  if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)Value )
    *(_QWORD *)(a2 + 792) = Value;
  for ( i = 0LL; i != 6; i += 2LL )
  {
    v39 = (&off_180119340)[i];
    Value = 0;
    RtlQueryImageFileKeyOption(v10, v39, 4, &Value, 4u, 0LL);
    v40 = *(&off_180119340 + i + 1);
    if ( Value )
      *v40 = 1;
    else
      *v40 = 0;
  }
  Value = 0;
  if ( RtlInitUnicodeStringEx(&v100, L"MaxDeadActivationContexts") >= 0 )
  {
    v41 = v109;
    v42 = NtQueryValueKey(v10, &v100, KeyValuePartialInformation, v109, 0x400u, &v87);
    if ( v42 < 0 )
    {
      if ( v42 == -2147483643 )
      {
        while ( 1 )
        {
          v45 = v87;
          v46 = NtCurrentPeb()->ProcessHeap;
          if ( !v46 )
            break;
          v47 = RtlAllocateHeap(v46, NtdllBaseTag + 1572864, v87);
          v43 = v47;
          if ( !v47 )
            break;
          v41 = v47;
          Lengthb = v45;
          v10 = KeyHandle;
          v48 = NtQueryValueKey(KeyHandle, &v100, KeyValuePartialInformation, v47, Lengthb, &v87);
          if ( v48 >= 0 )
            goto LABEL_86;
          if ( v48 != -2147483643 )
            goto LABEL_102;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v41);
        }
        v10 = KeyHandle;
      }
    }
    else
    {
      v43 = 0LL;
LABEL_86:
      v44 = *((_DWORD *)v41 + 1);
      if ( ((v44 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v44 == 4 )
        {
          if ( *((_DWORD *)v41 + 2) == 4 )
          {
            v87 = 4;
            Value = *((_DWORD *)v41 + 3);
          }
        }
        else if ( v44 == 1 && ((unsigned __int8)&Value & 3) == 0 )
        {
          v87 = 4;
          v100.Buffer = (wchar_t *)(v41 + 12);
          v100.Length = *((_WORD *)v41 + 4);
          v100.MaximumLength = *((_WORD *)v41 + 4);
          RtlUnicodeStringToInteger(&v100, 0, &Value);
        }
      }
      else if ( v44 == 4 )
      {
        v87 = *((_DWORD *)v41 + 2);
        v49 = *((_DWORD *)v41 + 2);
        if ( v49 <= 4 )
          memmove(&Value, v41 + 12, v49);
      }
LABEL_102:
      if ( v43 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v43);
        v10 = KeyHandle;
      }
      v50 = g_SxsMaxDeadActivationContexts;
      if ( Value )
        v50 = Value;
      g_SxsMaxDeadActivationContexts = v50;
    }
  }
  v51 = v92;
  v9 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
  if ( (int)RtlQueryApplicationKeyOption(v92, v10, (__int64)L"GlobalFlag", 4LL, (__int64)&v89, 4, v81, &v96) < 0 )
    goto LABEL_117;
  v52 = v89;
  if ( (v89 & 0x2000100) == 0 )
    goto LABEL_116;
  if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v51, v10) )
  {
    v52 &= 0xFDFFFEFF;
    v89 = v52;
  }
  if ( (v52 & 0x2000100) == 0 )
    goto LABEL_116;
  if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v90, &v97) >= 0 )
  {
    if ( !v97 )
    {
      v52 &= 0xFDFFFEFF;
      v89 = v52;
    }
LABEL_116:
    *(_DWORD *)(a2 + 188) = v52;
  }
LABEL_117:
  if ( (int)RtlQueryApplicationKeyOption(v92, v10, (__int64)L"GlobalFlag2", 4LL, (__int64)&v89, 4, v82, 0LL) >= 0 )
    *(_DWORD *)(a2 + 1988) = v89;
  v7 = v94;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    v12 = 0;
  else
    v96 = 0LL;
  v11 = v93;
LABEL_123:
  LOBYTE(v53) = LdrControlFlowGuardEnforced();
  if ( v53 )
    v11 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v11, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
  if ( !v12 )
  {
LABEL_163:
    v55 = v90;
    goto LABEL_166;
  }
  v55 = v90;
  if ( LdrpIsSecureProcess || (MEMORY[0x7FFE03A0] & 1) == 0 )
    goto LABEL_166;
  if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v90, v54, &Handle) < 0 )
  {
    Handle = 0LL;
    goto LABEL_166;
  }
  v56 = Handle;
  if ( RtlInitUnicodeStringEx(&v101, L"GlobalFlag") < 0 )
  {
    v6 = v91;
    goto LABEL_166;
  }
  v57 = v110;
  v58 = NtQueryValueKey(v56, &v101, KeyValuePartialInformation, v110, 0x400u, &v88);
  v59 = v58;
  if ( v58 >= 0 )
  {
    v60 = 0LL;
LABEL_140:
    v65 = *((_DWORD *)v57 + 1);
    if ( ((v65 - 3) & 0xFFFFFFFB) != 0 )
    {
      switch ( v65 )
      {
        case 4:
          if ( *((_DWORD *)v57 + 2) == 4 )
          {
            v88 = 4;
            v89 = *((_DWORD *)v57 + 3);
          }
          else
          {
            v59 = -1073741820;
          }
          break;
        case 11:
          v59 = -1073741788;
          break;
        case 1:
          if ( ((unsigned __int8)&v89 & 3) != 0 )
          {
            v59 = -2147483646;
          }
          else
          {
            v88 = 4;
            v101.Buffer = (wchar_t *)(v57 + 12);
            v101.Length = *((_WORD *)v57 + 4);
            v101.MaximumLength = *((_WORD *)v57 + 4);
            v59 = RtlUnicodeStringToInteger(&v101, 0, &v89);
          }
          break;
        default:
          v59 = -1073741788;
          break;
      }
    }
    else if ( v65 == 4 )
    {
      v88 = *((_DWORD *)v57 + 2);
      v66 = *((_DWORD *)v57 + 2);
      if ( v66 > 4 )
        v59 = -2147483643;
      else
        memmove(&v89, v57 + 12, v66);
    }
    else
    {
      v59 = -1073741788;
    }
LABEL_157:
    if ( v60 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v60);
      v10 = KeyHandle;
    }
    v55 = v90;
    goto LABEL_160;
  }
  if ( v58 == -2147483643 )
  {
    while ( 1 )
    {
      v61 = v88;
      v62 = NtCurrentPeb()->ProcessHeap;
      if ( !v62 )
        break;
      v63 = RtlAllocateHeap(v62, NtdllBaseTag + 1572864, v88);
      v60 = v63;
      if ( !v63 )
        break;
      v57 = v63;
      v64 = NtQueryValueKey(v56, &v101, KeyValuePartialInformation, v63, v61, &v88);
      v59 = v64;
      if ( v64 >= 0 )
      {
        v10 = KeyHandle;
        goto LABEL_140;
      }
      if ( v64 != -2147483643 )
      {
        v10 = KeyHandle;
        goto LABEL_157;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v57);
    }
    v10 = KeyHandle;
    v7 = v94;
    v6 = v91;
    goto LABEL_163;
  }
LABEL_160:
  v7 = v94;
  v6 = v91;
  if ( v59 >= 0 )
  {
    *(_DWORD *)(a2 + 188) |= v89 & 0x2000100;
    v96 = Handle;
  }
LABEL_166:
  v28 = 0;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) == 0 && !(unsigned __int8)LdrpPayloadRestrictionMitigationsEnabled() )
  {
    if ( !v92 && !v10 )
    {
      if ( *(_BYTE *)(a2 + 2) )
      {
        v67 = *(_QWORD *)(a2 + 32);
        v102.Buffer = (wchar_t *)&v111;
        *(_DWORD *)&v102.Length = 0x200000;
        if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v67 + 128), (PUNICODE_STRING)&stru_180119390, &v102) < 0
          || (v28 = RtlUnicodeStringToInteger(&v102, 0, &Value), v28 < 0)
          || !Value )
        {
          *(_DWORD *)(a2 + 188) |= 0x70u;
        }
      }
    }
    goto LABEL_181;
  }
  v28 = LdrpInitializeApplicationVerifierPackage(v55, a2, v9, v96, v104, v103);
  if ( v28 >= 0 )
  {
LABEL_181:
    if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
      *(_DWORD *)(a2 + 1984) |= 1u;
    goto LABEL_183;
  }
  v68 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      8051,
      "LdrpInitializeExecutionOptions",
      0,
      "Initializing the application verifier package failed with status 0x%08lx\n",
      v28);
    v68 = LdrpDebugFlags;
  }
  if ( (v68 & 0x10) != 0 )
    __debugbreak();
LABEL_183:
  if ( v28 >= 0 )
  {
    LdrpQueryIllegalCWDDevices(v10);
    goto LABEL_190;
  }
LABEL_186:
  if ( *v6 )
  {
    NtClose(*v6);
    *v6 = 0LL;
  }
  if ( *v7 )
  {
    NtClose(*v7);
    *v7 = 0LL;
  }
LABEL_190:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v28;
}
