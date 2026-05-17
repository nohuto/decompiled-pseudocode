/*
 * XREFs of AVrfInitializeVerifier @ 0x1800DACE8
 * Callers:
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2B8C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x18000A7C8 (LdrpFindLoadedDllByName.c)
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpInitializeGraphRecurse @ 0x1800287D4 (LdrpInitializeGraphRecurse.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlInitializeCriticalSectionEx @ 0x180061C40 (RtlInitializeCriticalSectionEx.c)
 *     RtlUnicodeStringToInteger @ 0x180079580 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A5210 (_alloca_probe.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800D6B78 (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800DBA38 (AVrfpChainDuplicateVerificationLayers.c)
 *     AVrfpEnableVerifierOptions @ 0x1800DBF2C (AVrfpEnableVerifierOptions.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DC17C (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DC4A4 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800DC75C (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DC9E8 (AVrfpVerifierStopInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 */

__int64 __fastcall AVrfInitializeVerifier(void *ProcessHeap, __int64 a2, __int64 a3, int a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rdi
  struct _PEB *v9; // r14
  char v10; // r15
  int Dll; // ebx
  __int64 *v12; // rbx
  int LoadedDllByName; // eax
  unsigned __int64 v14; // rbx
  int ProcedureAddressForCaller; // ebx
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 *v20; // r8
  __int64 v21; // r9
  __int64 *i; // rdi
  __int64 v23; // rax
  __int64 *v24; // rbx
  __int64 v25; // rdx
  unsigned int NtGlobalFlag; // r11d
  int v27; // r13d
  int v28; // ebx
  char *v29; // rbx
  int ValueKey; // eax
  unsigned __int64 v31; // r14
  __int64 Heap; // rax
  int v33; // eax
  unsigned int v34; // eax
  char *v35; // rbx
  int v36; // eax
  unsigned __int64 v37; // r14
  void *v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  int v41; // ecx
  unsigned int v42; // eax
  char *v43; // rbx
  int v44; // eax
  unsigned __int64 v45; // rdi
  int v46; // ecx
  void *v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  unsigned int v50; // eax
  char *v51; // rbx
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  size_t v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 *v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rdx
  unsigned __int64 *v60; // r8
  __int64 v61; // r9
  __int64 v63; // [rsp+20h] [rbp-E0h]
  char v64; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v65[3]; // [rsp+39h] [rbp-C7h] BYREF
  unsigned int v66; // [rsp+3Ch] [rbp-C4h]
  unsigned int v67; // [rsp+40h] [rbp-C0h]
  unsigned int v68; // [rsp+44h] [rbp-BCh]
  unsigned int v69; // [rsp+48h] [rbp-B8h]
  int v70[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int16 v71[4]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v72; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v73[4]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v74; // [rsp+70h] [rbp-90h]
  unsigned __int16 v75[4]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v76; // [rsp+80h] [rbp-80h]
  __int64 v77; // [rsp+88h] [rbp-78h] BYREF
  __int64 v78; // [rsp+90h] [rbp-70h] BYREF
  __int64 v79; // [rsp+98h] [rbp-68h]
  __int64 v80; // [rsp+A0h] [rbp-60h]
  _BYTE v81[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-48h] BYREF
  char v83; // [rsp+C0h] [rbp-40h] BYREF
  char v84; // [rsp+4C0h] [rbp+3C0h] BYREF
  char v85; // [rsp+8C0h] [rbp+7C0h] BYREF
  char v86; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int64 retaddr; // [rsp+1108h] [rbp+1008h]

  v6 = 0LL;
  v7 = a6;
  v9 = NtCurrentPeb();
  v10 = (char)ProcessHeap;
  v80 = a2;
  v79 = a5;
  v70[0] = 0;
  if ( !a4 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    *a6 = 0LL;
    NtGlobalFlag = v9->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      v27 = 1;
    }
    else
    {
      v27 = 0;
      if ( LdrpPayloadRestrictionMitigationsEnabled() )
        v27 = 2;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v28 = 0, v10) )
      v28 = 294916;
    AVrfpVerifierFlags = v28;
    AVrfpVerifierDllsString = 0;
    if ( a3 && (int)RtlInitUnicodeStringEx((__int64)v71, (__int64)L"VerifierFlags") >= 0 )
    {
      v29 = &v83;
      ValueKey = NtQueryValueKey();
      if ( ValueKey < 0 )
      {
        if ( ValueKey == -2147483643 )
        {
          while ( 1 )
          {
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v66);
            v31 = Heap;
            if ( !Heap )
              break;
            v29 = (char *)Heap;
            v33 = NtQueryValueKey();
            if ( v33 >= 0 )
            {
              v7 = a6;
              goto LABEL_47;
            }
            if ( v33 != -2147483643 )
            {
              v7 = a6;
              goto LABEL_57;
            }
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v29);
          }
          v7 = a6;
        }
      }
      else
      {
        v31 = 0LL;
LABEL_47:
        LODWORD(ProcessHeap) = *((_DWORD *)v29 + 1);
        if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( (_DWORD)ProcessHeap == 4 )
          {
            if ( *((_DWORD *)v29 + 2) == 4 )
            {
              v66 = 4;
              v70[0] = *((_DWORD *)v29 + 3);
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 && ((unsigned __int8)v70 & 3) == 0 )
          {
            v66 = 4;
            v72 = v29 + 12;
            v71[0] = *((_WORD *)v29 + 4);
            v71[1] = *((_WORD *)v29 + 4);
            RtlUnicodeStringToInteger(v71, 0, v70);
          }
        }
        else if ( (_DWORD)ProcessHeap == 4 )
        {
          v66 = *((_DWORD *)v29 + 2);
          v34 = *((_DWORD *)v29 + 2);
          if ( v34 <= 4 )
            memmove(v70, v29 + 12, v34);
        }
LABEL_57:
        if ( v31 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v31);
        LOBYTE(v28) = v70[0];
        if ( v70[0] )
        {
          AVrfpVerifierFlags = v70[0];
          goto LABEL_65;
        }
      }
      LOBYTE(v28) = AVrfpVerifierFlags;
    }
    if ( v10 )
      AVrfpEnabledSystemWide = 1;
LABEL_65:
    if ( !a3 )
      goto LABEL_133;
    if ( (v28 & 4) != 0 && (int)RtlInitUnicodeStringEx((__int64)v73, (__int64)L"HandleTraces") >= 0 )
    {
      v35 = &v84;
      v36 = NtQueryValueKey();
      if ( v36 < 0 )
      {
        if ( v36 == -2147483643 )
        {
          while ( 1 )
          {
            v38 = NtCurrentPeb()->ProcessHeap;
            if ( !v38 )
              break;
            v39 = RtlAllocateHeap((__int64)v38, NtdllBaseTag + 1572864, v67);
            v37 = v39;
            if ( !v39 )
              break;
            v35 = (char *)v39;
            v40 = NtQueryValueKey();
            if ( v40 >= 0 )
            {
              v7 = a6;
              goto LABEL_77;
            }
            if ( v40 != -2147483643 )
            {
              v7 = a6;
              goto LABEL_88;
            }
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v35);
          }
          v7 = a6;
        }
      }
      else
      {
        v37 = 0LL;
LABEL_77:
        v41 = *((_DWORD *)v35 + 1);
        if ( ((v41 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v41 == 4 )
          {
            if ( *((_DWORD *)v35 + 2) == 4 )
            {
              v67 = 4;
              AVrfpHandleTraces = *((_DWORD *)v35 + 3);
            }
          }
          else if ( v41 == 1 && ((unsigned __int8)&AVrfpHandleTraces & 3) == 0 )
          {
            v67 = 4;
            v74 = v35 + 12;
            v73[0] = *((_WORD *)v35 + 4);
            v73[1] = *((_WORD *)v35 + 4);
            RtlUnicodeStringToInteger(v73, 0, &AVrfpHandleTraces);
          }
        }
        else if ( v41 == 4 )
        {
          v67 = *((_DWORD *)v35 + 2);
          v42 = *((_DWORD *)v35 + 2);
          if ( v42 <= 4 )
            memmove(&AVrfpHandleTraces, v35 + 12, v42);
        }
LABEL_88:
        if ( v37 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v37);
      }
    }
    if ( (int)RtlInitUnicodeStringEx((__int64)v75, (__int64)L"VerifierDebug") >= 0 )
    {
      v43 = &v85;
      v44 = NtQueryValueKey();
      if ( v44 < 0 )
      {
        if ( v44 != -2147483643 )
          goto LABEL_113;
        while ( 1 )
        {
          v47 = NtCurrentPeb()->ProcessHeap;
          if ( !v47 )
            break;
          v48 = RtlAllocateHeap((__int64)v47, NtdllBaseTag + 1572864, v68);
          v45 = v48;
          if ( !v48 )
            break;
          v43 = (char *)v48;
          v49 = NtQueryValueKey();
          if ( v49 >= 0 )
            goto LABEL_94;
          if ( v49 != -2147483643 )
            goto LABEL_110;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v43);
        }
      }
      else
      {
        v45 = 0LL;
LABEL_94:
        v46 = *((_DWORD *)v43 + 1);
        if ( ((v46 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v46 == 4 )
          {
            if ( *((_DWORD *)v43 + 2) == 4 )
            {
              v68 = 4;
              AVrfpDebug = *((_DWORD *)v43 + 3);
            }
          }
          else if ( v46 == 1 && ((unsigned __int8)&AVrfpDebug & 3) == 0 )
          {
            v68 = 4;
            v76 = v43 + 12;
            v75[0] = *((_WORD *)v43 + 4);
            v75[1] = *((_WORD *)v43 + 4);
            RtlUnicodeStringToInteger(v75, 0, &AVrfpDebug);
          }
        }
        else if ( v46 == 4 )
        {
          v68 = *((_DWORD *)v43 + 2);
          v50 = *((_DWORD *)v43 + 2);
          if ( v50 <= 4 )
            memmove(&AVrfpDebug, v43 + 12, v50);
        }
LABEL_110:
        if ( v45 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v45);
      }
      v7 = a6;
    }
LABEL_113:
    if ( (int)RtlInitUnicodeStringEx((__int64)v81, (__int64)L"VerifierDlls") >= 0 )
    {
      v51 = &v86;
      v52 = NtQueryValueKey();
      if ( v52 < 0 )
      {
        if ( v52 == -2147483643 )
        {
          while ( 1 )
          {
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            v53 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v69);
            v6 = v53;
            if ( !v53 )
              break;
            v51 = (char *)v53;
            v54 = NtQueryValueKey();
            if ( v54 >= 0 )
            {
              v7 = a6;
              goto LABEL_122;
            }
            if ( v54 != -2147483643 )
            {
              v7 = a6;
              goto LABEL_130;
            }
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v51);
          }
          v7 = a6;
        }
        goto LABEL_133;
      }
LABEL_122:
      LODWORD(ProcessHeap) = *((_DWORD *)v51 + 1);
      if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( (_DWORD)ProcessHeap == 1 )
        {
          v55 = *((unsigned int *)v51 + 2);
          v69 = *((_DWORD *)v51 + 2);
          goto LABEL_127;
        }
      }
      else if ( (_DWORD)ProcessHeap == 1 )
      {
        v69 = *((_DWORD *)v51 + 2);
        v55 = *((unsigned int *)v51 + 2);
LABEL_127:
        if ( (unsigned int)v55 <= 0x200 )
          memmove(&AVrfpVerifierDllsString, v51 + 12, v55);
      }
LABEL_130:
      if ( v6 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    }
LABEL_133:
    Dll = AvrfMiniLoadDll((_BYTE)ProcessHeap, v80, a3, v79, (__int64)&AvrfpLoaderEntry);
    if ( Dll >= 0 )
    {
      *v7 = &AvrfpLoaderEntry;
      Dll = AVrfpEnableVerifierOptions();
      if ( Dll >= 0 )
      {
        LdrProtectMrdata(0, v56, v57, v58);
        AvrfAppVerifierMode = v27;
        LdrProtectMrdata(1, v59, v60, v61);
      }
    }
    return (unsigned int)Dll;
  }
  if ( a4 != 1 )
    return 0;
  qword_1801645F8 = (__int64)&AVrfpVerifierProvidersList;
  AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
  Dll = RtlInitializeCriticalSectionEx((__int64)&AVrfpVerifierLock, 0, 0);
  if ( Dll < 0 )
    return (unsigned int)Dll;
  if ( AvrfAppVerifierMode == 2 )
  {
    v65[0] = 0;
    Dll = LdrpInitializeGraphRecurse((__int64)&unk_180164720, 0LL, v65);
    if ( Dll < 0 )
      return (unsigned int)Dll;
    return 0;
  }
  DbgPrintEx(
    93,
    0,
    "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
    *(_QWORD *)(qword_1801653D0 + 96),
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    AVrfpVerifierFlags);
  if ( (int)AVrfpParseVerifierDllsString() < 0 )
  {
    LODWORD(v63) = NtCurrentTeb()->ClientId.UniqueProcess;
    DbgPrintEx(
      93,
      0,
      "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
      *(_QWORD *)(qword_1801653D0 + 96),
      v63);
    Dll = -1073741823;
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
    return (unsigned int)Dll;
  }
  v12 = (__int64 *)AVrfpVerifierProvidersList;
  if ( (__int64 *)AVrfpVerifierProvidersList == &AVrfpVerifierProvidersList )
  {
LABEL_10:
    AVrfpChainDuplicateVerificationLayers();
    LoadedDllByName = LdrpFindLoadedDllByName(VrfcoreDllString, 0LL, 0, (__int64)&v77, 0LL);
    Dll = LoadedDllByName;
    if ( LoadedDllByName < 0 )
    {
      if ( LoadedDllByName != -1073741515 )
        return (unsigned int)Dll;
      v14 = qword_180164630;
    }
    else
    {
      v14 = *(_QWORD *)(v77 + 48);
      LdrpDereferenceModule(v77);
    }
    ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v14, &AvrfpAPILookupCallbackName, 0, &v78, 1, retaddr);
    LdrProtectMrdata(0, v16, v17, v18);
    if ( ProcedureAddressForCaller >= 0 )
    {
      v19 = __ROR8__(v78 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
      AvrfpAPILookupCallbackRoutine = v19;
      AvrfpAPILookupCallbacksEnabled = 1;
    }
    AVrfpEnabled = 1;
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1, v19, v20, v21);
    AVrfpSnapAlreadyLoadedDlls();
    for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
    {
      v23 = i[4];
      v64 = 0;
      Dll = LdrpInitializeGraphRecurse(*(_QWORD *)(v23 + 152), 0LL, &v64);
      if ( Dll < 0 )
        return (unsigned int)Dll;
    }
    if ( (AVrfpDebug & 8) != 0 )
    {
      DbgPrint("AVRF: -*- final list of providers -*- \n");
      v24 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v24 != &AVrfpVerifierProvidersList )
      {
        v25 = v24[3];
        v24 = (__int64 *)*v24;
        DbgPrint("AVRF: provider %ws \n", v25);
      }
    }
    AVrfpVerifierStopInitialize();
    RtlImageNtHeaderEx(3, (unsigned __int64)v9->ImageBaseAddress, 0LL, &v82);
    return 0;
  }
  while ( (unsigned __int8)AVrfpLoadAndInitializeProvider(v12) )
  {
    v12 = (__int64 *)*v12;
    if ( v12 == &AVrfpVerifierProvidersList )
      goto LABEL_10;
  }
  return (unsigned int)-1073741502;
}
