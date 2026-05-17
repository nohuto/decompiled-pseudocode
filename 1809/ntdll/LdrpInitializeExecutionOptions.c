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
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079268 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlUnicodeStringToInteger @ 0x180079580 (RtlUnicodeStringToInteger.c)
 *     RtlQueryApplicationKeyOption @ 0x18007EB3C (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x18007ECC0 (RtlQueryImageFileKeyOption.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A5210 (_alloca_probe.c)
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
  __int64 v10; // rbx
  unsigned int v11; // edi
  char v12; // r12
  int v13; // eax
  __int64 v14; // r14
  unsigned int v15; // ecx
  char v16; // al
  char *v17; // r14
  int ValueKey; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // r8
  __int64 v21; // r9
  int v22; // edi
  unsigned __int64 v23; // r15
  int v24; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v27; // eax
  unsigned int v28; // eax
  unsigned __int64 v29; // rdx
  unsigned __int64 *v30; // r8
  __int64 v31; // r9
  int v32; // eax
  int v33; // edi
  char *v34; // rdi
  int v35; // eax
  unsigned __int64 v36; // r14
  int v37; // ecx
  void *v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  unsigned int v41; // eax
  __int64 i; // rdi
  wchar_t *v43; // rdx
  _BYTE *v44; // rax
  char *v45; // rdi
  int v46; // eax
  unsigned __int64 v47; // r14
  int v48; // ecx
  void *v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // r14
  int v55; // edi
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int16 *v58; // r12
  unsigned int *v59; // r14
  int v60; // eax
  int v61; // edi
  unsigned __int64 v62; // r12
  __int64 v63; // rax
  int v64; // eax
  unsigned int v65; // eax
  __int64 v66; // rcx
  char v67; // al
  int v69; // [rsp+30h] [rbp-D0h]
  int v70; // [rsp+30h] [rbp-D0h]
  int v71; // [rsp+30h] [rbp-D0h]
  int v72; // [rsp+30h] [rbp-D0h]
  int v73; // [rsp+30h] [rbp-D0h]
  int v74; // [rsp+30h] [rbp-D0h]
  int v75; // [rsp+30h] [rbp-D0h]
  int v76; // [rsp+30h] [rbp-D0h]
  int v77; // [rsp+30h] [rbp-D0h]
  int v78; // [rsp+30h] [rbp-D0h]
  unsigned int v79; // [rsp+40h] [rbp-C0h] BYREF
  void *v80; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v81; // [rsp+50h] [rbp-B0h]
  unsigned int v82; // [rsp+54h] [rbp-ACh]
  unsigned int v83; // [rsp+58h] [rbp-A8h]
  unsigned int v84; // [rsp+5Ch] [rbp-A4h]
  unsigned int v85; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v86; // [rsp+68h] [rbp-98h]
  HANDLE *v87; // [rsp+70h] [rbp-90h]
  void *v88; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v89; // [rsp+80h] [rbp-80h] BYREF
  HANDLE *v90; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v92; // [rsp+98h] [rbp-68h] BYREF
  int v93; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 v94[4]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v95; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v96[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v97; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v98[4]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *v99; // [rsp+D0h] [rbp-30h]
  unsigned __int16 v100[4]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int *v101; // [rsp+E0h] [rbp-20h]
  int v102; // [rsp+E8h] [rbp-18h] BYREF
  char *v103; // [rsp+F0h] [rbp-10h]
  __int64 v104; // [rsp+F8h] [rbp-8h]
  __int64 v105; // [rsp+100h] [rbp+0h]
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  int v107; // [rsp+118h] [rbp+18h]
  __int64 v108; // [rsp+120h] [rbp+20h]
  void *v109; // [rsp+128h] [rbp+28h]
  int v110; // [rsp+130h] [rbp+30h]
  __int128 v111; // [rsp+138h] [rbp+38h]
  char v112; // [rsp+150h] [rbp+50h] BYREF
  char v113; // [rsp+550h] [rbp+450h] BYREF
  char v114; // [rsp+950h] [rbp+850h] BYREF
  char v115; // [rsp+D50h] [rbp+C50h] BYREF
  char v116; // [rsp+1150h] [rbp+1050h] BYREF
  WCHAR SourceString[200]; // [rsp+1170h] [rbp+1070h] BYREF

  v6 = a4;
  v7 = a5;
  v104 = a6;
  v9 = 0;
  v87 = a4;
  *a4 = 0LL;
  v10 = 0LL;
  *a5 = 0LL;
  v11 = 0;
  v105 = a3;
  v12 = 1;
  v86 = a1;
  v90 = a5;
  v80 = 0LL;
  Handle = 0LL;
  v89 = 0;
  v88 = 0LL;
  v92 = 0LL;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) != 0 )
    goto LABEL_123;
  v13 = RtlpOpenImageFileOptionsKeyEx(v86, 9LL, 0, &v80);
  v10 = (__int64)v80;
  if ( v13 < 0 )
    goto LABEL_123;
  *v6 = v80;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)LdrpConstructModernAppKeyName(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)RtlOpenModernAppOptionsKey(&DestinationString, v10, &v88) >= 0 )
      *a5 = v88;
  }
  v14 = (__int64)v88;
  RtlQueryApplicationKeyOption(
    (__int64)v88,
    v10,
    (__int64)L"DisableHeapLookaside",
    4u,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v69,
    0LL);
  RtlQueryApplicationKeyOption(v14, v10, (__int64)L"FrontEndHeapDebugOptions", 4u, (__int64)&v89, 4, v70, 0LL);
  RtlQueryApplicationKeyOption(v14, v10, (__int64)L"ShutdownFlags", 4u, (__int64)&RtlpShutdownProcessFlags, 4, v71, 0LL);
  v79 = 0;
  RtlQueryApplicationKeyOption(v14, v10, (__int64)L"UnloadEventTraceDepth", 4u, (__int64)&v79, 4, v72, 0LL);
  v15 = RtlpUnloadEventTraceExNumber;
  if ( v79 )
    v15 = v79;
  v79 = 0;
  RtlpUnloadEventTraceExNumber = v15;
  RtlQueryApplicationKeyOption(v14, v10, (__int64)L"MaxLoaderThreads", 4u, (__int64)&v79, 4, v73, 0LL);
  if ( v79 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v79;
  v79 = 0;
  RtlQueryApplicationKeyOption((__int64)v88, v10, (__int64)L"UseImpersonatedDeviceMap", 4u, (__int64)&v79, 4, v74, 0LL);
  v16 = LdrpUseImpersonatedDeviceMap;
  if ( v79 )
    v16 = 1;
  LdrpUseImpersonatedDeviceMap = v16;
  v79 = 0;
  RtlQueryApplicationKeyOption((__int64)v88, v10, (__int64)L"TracingFlags", 4u, (__int64)&v79, 4, v75, 0LL);
  if ( v79 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v79);
    v10 = (__int64)v80;
  }
  v79 = 0;
  if ( (int)RtlQueryApplicationKeyOption(
              (__int64)v88,
              v10,
              (__int64)L"RaiseExceptionOnPossibleDeadlock",
              4u,
              (__int64)&v79,
              4,
              v76,
              0LL) >= 0 )
    RtlpRaiseExceptionOnPossibleDeadlock = v79 != 0;
  v79 = 0;
  if ( (int)RtlInitUnicodeStringEx((__int64)v94, (__int64)L"CFGOptions") >= 0 )
  {
    v17 = &v112;
    ValueKey = NtQueryValueKey();
    v22 = ValueKey;
    if ( ValueKey >= 0 )
    {
      v23 = 0LL;
LABEL_20:
      v24 = *((_DWORD *)v17 + 1);
      if ( ((v24 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v24 )
        {
          case 4:
            if ( *((_DWORD *)v17 + 2) == 4 )
            {
              v81 = 4;
              v79 = *((_DWORD *)v17 + 3);
            }
            else
            {
              v22 = -1073741820;
            }
            break;
          case 11:
            v22 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)&v79 & 3) != 0 )
            {
              v22 = -2147483646;
            }
            else
            {
              v81 = 4;
              v95 = v17 + 12;
              v94[0] = *((_WORD *)v17 + 4);
              v94[1] = *((_WORD *)v17 + 4);
              v22 = RtlUnicodeStringToInteger(v94, 0, (int *)&v79);
            }
            break;
          default:
            v22 = -1073741788;
            break;
        }
      }
      else if ( v24 == 4 )
      {
        v81 = *((_DWORD *)v17 + 2);
        v28 = *((_DWORD *)v17 + 2);
        if ( v28 > 4 )
          v22 = -2147483643;
        else
          memmove(&v79, v17 + 12, v28);
      }
      else
      {
        v22 = -1073741788;
      }
LABEL_43:
      if ( v23 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v23);
        v10 = (__int64)v80;
      }
      v6 = v87;
      goto LABEL_46;
    }
    if ( ValueKey != -2147483643 )
    {
LABEL_46:
      if ( v22 >= 0 && (v79 & 1) != 0 )
      {
        LdrProtectMrdata(0, v19, v20, v21);
        RtlGuardAllowSuppressedCalls = 1;
        LdrProtectMrdata(1, v29, v30, v31);
      }
      goto LABEL_50;
    }
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v81);
      v23 = Heap;
      if ( !Heap )
        break;
      v17 = (char *)Heap;
      v10 = (__int64)v80;
      v27 = NtQueryValueKey();
      v22 = v27;
      if ( v27 >= 0 )
        goto LABEL_20;
      if ( v27 != -2147483643 )
        goto LABEL_43;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v17);
    }
    v10 = (__int64)v80;
    v6 = v87;
  }
LABEL_50:
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    v107 = 48;
    v109 = &unk_1801193D0;
    v108 = v10;
    v110 = 64;
    v111 = 0LL;
    v32 = NtOpenKey();
    v33 = v32;
    if ( v32 == -1073741772 )
    {
      LdrpLargePageDllKeyHandle = 0LL;
    }
    else if ( v32 < 0 )
    {
      v7 = v90;
      goto LABEL_186;
    }
  }
  if ( (int)RtlInitUnicodeStringEx((__int64)v96, (__int64)L"MinimumStackCommitInBytes") >= 0 )
  {
    v34 = &v113;
    v35 = NtQueryValueKey();
    if ( v35 < 0 )
    {
      if ( v35 != -2147483643 )
        goto LABEL_76;
      while ( 1 )
      {
        v38 = NtCurrentPeb()->ProcessHeap;
        if ( !v38 )
          goto LABEL_75;
        v39 = RtlAllocateHeap((__int64)v38, NtdllBaseTag + 1572864, v82);
        v36 = v39;
        if ( !v39 )
          goto LABEL_75;
        v34 = (char *)v39;
        v10 = (__int64)v80;
        v40 = NtQueryValueKey();
        if ( v40 >= 0 )
          goto LABEL_57;
        if ( v40 != -2147483643 )
          goto LABEL_73;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v34);
      }
    }
    v36 = 0LL;
LABEL_57:
    v37 = *((_DWORD *)v34 + 1);
    if ( ((v37 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v37 == 4 )
      {
        if ( *((_DWORD *)v34 + 2) == 4 )
        {
          v82 = 4;
          v79 = *((_DWORD *)v34 + 3);
        }
      }
      else if ( v37 == 1 && ((unsigned __int8)&v79 & 3) == 0 )
      {
        v82 = 4;
        v97 = v34 + 12;
        v96[0] = *((_WORD *)v34 + 4);
        v96[1] = *((_WORD *)v34 + 4);
        RtlUnicodeStringToInteger(v96, 0, (int *)&v79);
      }
    }
    else if ( v37 == 4 )
    {
      v82 = *((_DWORD *)v34 + 2);
      v41 = *((_DWORD *)v34 + 2);
      if ( v41 <= 4 )
        memmove(&v79, v34 + 12, v41);
    }
LABEL_73:
    if ( v36 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v36);
LABEL_75:
      v10 = (__int64)v80;
    }
  }
LABEL_76:
  if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v79 )
    *(_QWORD *)(a2 + 792) = v79;
  for ( i = 0LL; i != 6; i += 2LL )
  {
    v43 = (&off_180119340)[i];
    v79 = 0;
    RtlQueryImageFileKeyOption(v10, (__int64)v43, 4, (int *)&v79, 4u, 0LL);
    v44 = *(&off_180119340 + i + 1);
    if ( v79 )
      *v44 = 1;
    else
      *v44 = 0;
  }
  v79 = 0;
  if ( (int)RtlInitUnicodeStringEx((__int64)v98, (__int64)L"MaxDeadActivationContexts") >= 0 )
  {
    v45 = &v114;
    v46 = NtQueryValueKey();
    if ( v46 < 0 )
    {
      if ( v46 == -2147483643 )
      {
        while ( 1 )
        {
          v49 = NtCurrentPeb()->ProcessHeap;
          if ( !v49 )
            break;
          v50 = RtlAllocateHeap((__int64)v49, NtdllBaseTag + 1572864, v83);
          v47 = v50;
          if ( !v50 )
            break;
          v45 = (char *)v50;
          v10 = (__int64)v80;
          v51 = NtQueryValueKey();
          if ( v51 >= 0 )
            goto LABEL_86;
          if ( v51 != -2147483643 )
            goto LABEL_102;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v45);
        }
        v10 = (__int64)v80;
      }
    }
    else
    {
      v47 = 0LL;
LABEL_86:
      v48 = *((_DWORD *)v45 + 1);
      if ( ((v48 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v48 == 4 )
        {
          if ( *((_DWORD *)v45 + 2) == 4 )
          {
            v83 = 4;
            v79 = *((_DWORD *)v45 + 3);
          }
        }
        else if ( v48 == 1 && ((unsigned __int8)&v79 & 3) == 0 )
        {
          v83 = 4;
          v99 = v45 + 12;
          v98[0] = *((_WORD *)v45 + 4);
          v98[1] = *((_WORD *)v45 + 4);
          RtlUnicodeStringToInteger(v98, 0, (int *)&v79);
        }
      }
      else if ( v48 == 4 )
      {
        v83 = *((_DWORD *)v45 + 2);
        v52 = *((_DWORD *)v45 + 2);
        if ( v52 <= 4 )
          memmove(&v79, v45 + 12, v52);
      }
LABEL_102:
      if ( v47 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v47);
        v10 = (__int64)v80;
      }
      v53 = g_SxsMaxDeadActivationContexts;
      if ( v79 )
        v53 = v79;
      g_SxsMaxDeadActivationContexts = v53;
    }
  }
  v54 = (__int64)v88;
  v9 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
  if ( (int)RtlQueryApplicationKeyOption((__int64)v88, v10, (__int64)L"GlobalFlag", 4u, (__int64)&v85, 4, v77, &v92) < 0 )
    goto LABEL_117;
  v55 = v85;
  if ( (v85 & 0x2000100) == 0 )
    goto LABEL_116;
  if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v54, v10) )
  {
    v55 &= 0xFDFFFEFF;
    v85 = v55;
  }
  if ( (v55 & 0x2000100) == 0 )
    goto LABEL_116;
  if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v86, &v93) >= 0 )
  {
    if ( !v93 )
    {
      v55 &= 0xFDFFFEFF;
      v85 = v55;
    }
LABEL_116:
    *(_DWORD *)(a2 + 188) = v55;
  }
LABEL_117:
  if ( (int)RtlQueryApplicationKeyOption((__int64)v88, v10, (__int64)L"GlobalFlag2", 4u, (__int64)&v85, 4, v78, 0LL) >= 0 )
    *(_DWORD *)(a2 + 1988) = v85;
  v7 = v90;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    v12 = 0;
  else
    v92 = 0LL;
  v11 = v89;
LABEL_123:
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    v11 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v11, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
  if ( !v12 )
  {
LABEL_163:
    v58 = v86;
    goto LABEL_166;
  }
  v58 = v86;
  if ( LdrpIsSecureProcess || (MEMORY[0x7FFE03A0] & 1) == 0 )
    goto LABEL_166;
  if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v86, v56, &Handle) < 0 )
  {
    Handle = 0LL;
    goto LABEL_166;
  }
  if ( (int)RtlInitUnicodeStringEx((__int64)v100, (__int64)L"GlobalFlag") < 0 )
  {
    v6 = v87;
    goto LABEL_166;
  }
  v59 = (unsigned int *)&v115;
  v60 = NtQueryValueKey();
  v61 = v60;
  if ( v60 >= 0 )
  {
    v62 = 0LL;
LABEL_140:
    v57 = v59[1];
    if ( (((_DWORD)v57 - 3) & 0xFFFFFFFB) != 0 )
    {
      switch ( (_DWORD)v57 )
      {
        case 4:
          if ( v59[2] == 4 )
          {
            v84 = 4;
            v85 = v59[3];
          }
          else
          {
            v61 = -1073741820;
          }
          break;
        case 0xB:
          v61 = -1073741788;
          break;
        case 1:
          if ( ((unsigned __int8)&v85 & 3) != 0 )
          {
            v61 = -2147483646;
          }
          else
          {
            v84 = 4;
            v101 = v59 + 3;
            v100[0] = *((_WORD *)v59 + 4);
            v100[1] = *((_WORD *)v59 + 4);
            v61 = RtlUnicodeStringToInteger(v100, 0, (int *)&v85);
          }
          break;
        default:
          v61 = -1073741788;
          break;
      }
    }
    else if ( (_DWORD)v57 == 4 )
    {
      v84 = v59[2];
      v65 = v59[2];
      if ( v65 > 4 )
        v61 = -2147483643;
      else
        memmove(&v85, v59 + 3, v65);
    }
    else
    {
      v61 = -1073741788;
    }
LABEL_157:
    if ( v62 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v62);
      v10 = (__int64)v80;
    }
    v58 = v86;
    goto LABEL_160;
  }
  if ( v60 == -2147483643 )
  {
    while ( 1 )
    {
      v57 = (__int64)NtCurrentPeb()->ProcessHeap;
      if ( !v57 )
        break;
      v63 = RtlAllocateHeap(v57, NtdllBaseTag + 1572864, v84);
      v62 = v63;
      if ( !v63 )
        break;
      v59 = (unsigned int *)v63;
      v64 = NtQueryValueKey();
      v61 = v64;
      if ( v64 >= 0 )
      {
        v10 = (__int64)v80;
        goto LABEL_140;
      }
      if ( v64 != -2147483643 )
      {
        v10 = (__int64)v80;
        goto LABEL_157;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v59);
    }
    v10 = (__int64)v80;
    v7 = v90;
    v6 = v87;
    goto LABEL_163;
  }
LABEL_160:
  v7 = v90;
  v6 = v87;
  if ( v61 >= 0 )
  {
    *(_DWORD *)(a2 + 188) |= v85 & 0x2000100;
    v92 = Handle;
  }
LABEL_166:
  v33 = 0;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) == 0 && !(unsigned __int8)LdrpPayloadRestrictionMitigationsEnabled(v57, v56) )
  {
    if ( !v88 && !v10 )
    {
      if ( *(_BYTE *)(a2 + 2) )
      {
        v66 = *(_QWORD *)(a2 + 32);
        v103 = &v116;
        v102 = 0x200000;
        if ( (int)RtlQueryEnvironmentVariable_U(*(_QWORD *)(v66 + 128), word_180119390, &v102) < 0
          || (v33 = RtlUnicodeStringToInteger((unsigned __int16 *)&v102, 0, (int *)&v79), v33 < 0)
          || !v79 )
        {
          *(_DWORD *)(a2 + 188) |= 0x70u;
        }
      }
    }
    goto LABEL_181;
  }
  v33 = LdrpInitializeApplicationVerifierPackage(v58, a2, v9, (__int64)v92, v105, v104);
  if ( v33 >= 0 )
  {
LABEL_181:
    if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
      *(_DWORD *)(a2 + 1984) |= 1u;
    goto LABEL_183;
  }
  v67 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      8051,
      "LdrpInitializeExecutionOptions",
      0,
      "Initializing the application verifier package failed with status 0x%08lx\n",
      v33);
    v67 = LdrpDebugFlags;
  }
  if ( (v67 & 0x10) != 0 )
    __debugbreak();
LABEL_183:
  if ( v33 >= 0 )
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
  return (unsigned int)v33;
}
